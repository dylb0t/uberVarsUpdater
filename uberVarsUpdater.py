#!/usr/bin/env python3
import json, os, sys

###
### Ideas on where this script may go.
###
### Read user directories to get user list?
### Ability to make a config file containing configurations for checked users?
### Ability to compare to new default vars file to see if there are any new keys.
###

### This function borrwed from https://stackoverflow.com/questions/3041986/apt-command-line-interface-like-yes-no-input
def query_yes_no(question, default="yes"):
    """Ask a yes/no question via raw_input() and return their answer.

    "question" is a string that is presented to the user.
    "default" is the presumed answer if the user just hits <Enter>.
            It must be "yes" (the default), "no" or None (meaning
            an answer is required of the user).

    The "answer" return value is True for "yes" or False for "no".
    """
    valid = {"yes": True, "y": True, "ye": True, "no": False, "n": False}
    if default is None:
        prompt = " [y/n] "
    elif default == "yes":
        prompt = " [Y/n] "
    elif default == "no":
        prompt = " [y/N] "
    else:
        raise ValueError("invalid default answer: '%s'" % default)

    while True:
        sys.stdout.write(question + prompt)
        choice = input().lower()
        if default is not None and choice == "":
            return valid[default]
        elif choice in valid:
            return valid[choice]
        else:
            sys.stdout.write("Please respond with 'yes' or 'no' " "(or 'y' or 'n').\n")


# def getConfigDirs():
#     return os.listdir("./Configs")

def printConfigDif(config1: dict, config2:dict):
    print(set(config1.keys()).symmetric_difference(set(config2.keys())))
    return 0

def readConfig(configPath: str):
    uberCombatVars = {}
    character = "GLOBAL"
    with open(configPath,'r') as file:
        NonVariableItems = []
        
        for line in file:
            variableValues = {}
            characterVars = {}
            # We expect the globals first; Character Names, Global Trash and Metals to Sell
            if line.strip().startswith('CHARACTER'):
                character = line.strip().replace(':','')
            if line.strip().startswith('var'):
                splitLine = line.strip().split(' ', 2)

                if len(splitLine) > 2:
                    variableValues['Value'] = splitLine[2]
                    variableValues['NonVariableItems'] = NonVariableItems
                    if splitLine[1] in characterVars:
                        characterVars.update({splitLine[1]: variableValues})
                    else:
                        characterVars[splitLine[1]] = variableValues
                    if character in uberCombatVars:
                        uberCombatVars[character].update(characterVars)
                    else:
                        uberCombatVars[character] = characterVars
                    NonVariableItems = []
            else:
                NonVariableItems.append(line.strip())

    return uberCombatVars

def writeConfig(NewConfig: dict, ExistingConfig: dict):
    with open("./Configs/Merged/ubercombat-vars.inc", 'w') as newFile:
        for character in NewConfig.keys():
            for key in NewConfig[character].keys():
                for nonVariableItem in NewConfig[character][key]['NonVariableItems']:
                    newFile.write(f"{nonVariableItem}\n")
                
                if key in ExistingConfig[character].keys():
                    newFile.write(f"    var {key} {ExistingConfig[character][key]['Value']}\n")
                else:
                    #This is the opportunity to ask what value you would like in the new variable
                    newFile.write(f"    var {key} {NewConfig[character][key]['Value']}\n")

        footer = """#############################################################################################################################################################################
#############################################################################################################################################################################
     if !matchre("$charactername", ("%CHARACTER1|%CHARACTER2|%CHARACTER3|%CHARACTER4|%CHARACTER5|%CHARACTER6|%CHARACTER7|%CHARACTER8|%CHARACTER9|%CHARACTER10|%CHARACTER11|%CHARACTER12|%CHARACTER13|%CHARACTER14|%CHARACTER15")) then
{
          echo
          echo =========================================================================
          put #echo Yellow ** ERROR! ubercombat-vars.inc are not properly set!!!
          put #echo Yellow ** MAKE SURE THE CHARACTER NAME IS CORRECTLY SET (CASE SENSITIVE)
          put #echo Yellow ** Open ubercombat-vars.inc in your editor, Make sure character name is correct! Add your variables and try again.
          put #echo Yellow ** OR you screwed up the variables file. DO NOT delete or remove any { } # special characters, ONLY edit the variable definitions
          echo =========================================================================
          echo
          exit
}
     ###################
END.OF.VARS:
     if (%loading = 1) then return
     endofvars:"""
        newFile.writelines(footer)
    return 0

if __name__ == '__main__':
    ExistingConfig = readConfig('./Configs/Existing/ubercombat-vars.inc')
    NewConfig = readConfig('./Configs/UberLatest/ubercombat-vars.inc')
    
    print("Checking for changes to variables.")
    for character in NewConfig.keys():
        if NewConfig[character].keys() == ExistingConfig[character].keys():
            print(f"{character} variables match.")
        else:
            print(f"{character} variables DO NOT match.")
            print("These are the mismatched variables:")
            print(set(NewConfig[character].keys()).symmetric_difference(set(ExistingConfig[character].keys())))
    
            #query_yes_no("These variables do not match, would you like to remedy?n")
            writeConfig(NewConfig, ExistingConfig)

        