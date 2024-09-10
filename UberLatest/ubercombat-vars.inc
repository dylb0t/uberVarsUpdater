##################################################################################################################################
##################################################################################################################################
# UBER COMBAT - MASTER VARIABLES
# version 7.2
#
# This file contains the variables for controlling ALL your characters
# DO NOT RENAME THIS FILE! MOVE DIRECTLY INTO GENIE SCRIPTS FOLDER
# IT SHOULD BE NAMED  ubercombat-vars.inc   (~NOT~ .cmd)
#
# All variables must be setup FOR EACH INDIVIDUAL CHARACTER!
#
# ~VARIABLE INSTRUCTIONS SETUP~
# 1. Set all your Character's NAMES under the LOAD_VARS: label below (MAX OF 15 Characters - You could add more if you wanted)
# 2. Set the variables FOR EACH INDIVIDUAL CHARACTER in the blocks further below
# EXAMPLE: If you want to edit variables for CHARACTER4, SEARCH the script for CHARACTER4:
#
# ALL VARIABLES ARE SET BY THE FOLLOWING:
# var VARIABLENAME 'YourVariable'
# YOU ~ONLY~ CHANGE THE LAST PART 'YourVariable' - (Without quotes)
#
# As a rule all variables follow the same format for settings 
# THEY CAN EITHER BE 1. ON/OFF or 2. NAME/NULL
# 1. ON or OFF - Turn a binary variable ON or OFF 
# 2. NAME/NOUN of item - ie BACKPACK / BROADSWORD - or NULL to turn it OFF
#
# THERE IS GENERALLY A DESCRIPTION ABOVE EVERY VARIABLE EXPLAINING WHAT IT DOES OR WHAT THE OPTIONS ARE
# VARIABLES CAN ONLY BE A MAX OF 2 (TWO) WORDS!
# 3 (THREE) WORDS WILL ~NOT~ WORK IN DR (STUPID SYNTAX PARSER)
# EXCEPT - THE ONLY TIME WHERE 3 WORDS WORKS, IS IF THERE'S "-" IN THE NAME, LIKE: " Kertig-inlaid flail "
#
# You CAN use multiple words to be specific when defining variables - But max of 2!
# RECOMMENDED TO BE PRECISE DEFINING WEAPON / AMMO / CONTAINERS VARIABLES - USE TWO WORDS WHEN POSSIBLE!
# ESPECIALLY IF YOUR WEAPONS USE COMMON NOUNS (like SWORD / SABRE / BROADSWORD etc) 
# THE SCRIPT WILL CONSTANTLY SCAN THE GROUND FOR ITEMS MATCHING YOUR WEAPONS DURING COMBAT
# IF IT FINDS ANYTHING THAT MATCHES IT WILL PICK THEM UP AND STORE THEM!
#
# For example set SlingAmmo to "SMOOTH ROCK" instead of just "ROCK"
# TO AVOID FALSE POSITIVES AND PICKING UP RANDOM ROCKS IN THE ROOM
#
# Set your SEWEAPON to "ASSASSIN'S BLADE" instead of just "BLADE"
# TO AVOID PICKING UP RANDOM BLADES THAT MOBS DROP 
#
# ~WEAPON VARIABLES~ 
# MUST MEET TWO CRITERIA FOR THE SCRIPT TO PROPERLY WORK WITH THEM:
#
# 1. THE VARIABLE YOU USE MUST ~EXACTLY~ MATCH WITH THE ITEM DESCRIPTION WHEN YOU GLANCE AT IT IN YOUR HANDS
#   ex- "silversteel assassin blade" - Should be set to "assassin blade" 
#   "silversteel blade" - WILL NOT WORK - "silversteel blade" DOES NOT MATCH "silversteel assassin blade"
#   "blade" - WILL WORK - But you run the risk of picking up random "blades" laying in your room
#   "assasin blade" - WILL BE THE OPTIMAL CHOICE - Specific to your weapon and almost zero chance of false positives. 
#
# 2. THE VARIABLE NEEDS TO WORK TO ACTUALLY ~GET~ THE WEAPON FROM YOUR BAGS
#   ex - get my ASSASSIN BLADE - should work to get it from your bags 
#
# MOST WEAPONS SHOULD WORK FINE WITH TWO WORDS
# IN SOME RARE CASES SOME WEAPONS WITH ODD DESCRIPTIONS / SYNTAX WILL ONLY WORK PROPERLY WITH ONE ROOT NOUN! (ie BLADE)
# IN THESE CASES IT MAY BE BETTER TO JUST USE A DIFFERENT WEAPON ENTIRELY ~IF~ IT'S A COMMON ITEM THAT MOBS DROP
# IF YOU HAPPEN TO FIND 40 RANDOM "BLADES" IN YOUR BAG AFTER A HUNTING RUN, YOU WILL KNOW WHY 
#
##################################################################################################################################
##################################################################################################################################
## SET YOUR CHARACTERS NAMES BELOW (Every character that is using the script) 
LOAD_VARS:
     var CHARACTER1 Shroom
     var CHARACTER2 NULL
     var CHARACTER3 NULL
     var CHARACTER4 NULL
     var CHARACTER5 NULL
     var CHARACTER6 NULL
     var CHARACTER7 NULL
     var CHARACTER8 NULL
     var CHARACTER9 NULL
     var CHARACTER10 NULL
     var CHARACTER11 NULL
     var CHARACTER12 NULL
     var CHARACTER13 NULL
     var CHARACTER14 NULL
     var CHARACTER15 NULL

# YOU MUST THEN SET THE VARIABLES FOR EACH SPECIFIC CHARACTER IN THE BLOCKS BELOW HERE!
# SEARCH FOR THE CHARACTER NUMBER SPECIFIC TO THAT CHAR AND EDIT THE VARIABLES UNDERNEATH Search: CHARACTER1:, CHARACTER2:, etc

### GLOBAL TRASH ITEMS - TO KEEP YOUR BAGS CLEAN OF TRASH ITEMS - SCRIPT WILL DUMP THESE ITEMS FROM YOUR BAGS ACROSS ~ALL~ CHARACTERS!
### **BE CAREFUL WHAT YOU PUT HERE! - IT WILL DUMP ANY OF THESE ITEMS IN YOUR INVENTORY **
### BE AS SPECIFIC AS POSSIBLE WITH ITEM NAMES (USE 2 WORDS) - DO NOT USE SHORT NAMES TO PREVENT FALSE POSITIVES!
### This is ONLY used when INVCHECK is ON - This is for auto-inventory management for long term scripting and random trash you might pick up
### ALL ITEMS MUST BE IN AN ARRAY IE - var trash item1|item2|item3|item4
### var trash NULL - TO NOT DUMP ANYTHING AT ALL 
     var trash animal bladder|arrowhead|balsa cube|bangles|bathrobe|blanket|blossom|brown clay|braided grass|braided vine|butcher's knife|cufflink|choker|cylinder|crystal globe|diamondique lockpick|glass vase|gold stove|hairbrush|haircomb|handkerchief|house slippers|house mouse|Imperial dira|keepsake box|kitchen rat|lunchbox|marauder's blade|material|mesh sieve|metal circle|mouse snare|napkin|nightgown|oak cube|paperweight|pajama|pillow|piggy bank|seolarn weed|srhhtel hammer|srhhtel mace|srhhtel sword|steel striker|\bsteel scimitar|silver pendant|tankard|thin diary|tool case|tree root|witch ball|woodwind case

## METAL TYPES TO SELL (BARS/NUGGETS/INGOTS) that you want the script to sell (will keep anything that is ~NOT~ in this list)
## You do not need to touch this, unless there is a specific metal type you want to keep - then remove it from the list
     var metalstosell brass|bronze|coal|copper|covellite|iron|lead|nickel|oravir|pewter|silver|tin|zinc|gold|electrum|platinum|steel

## GLOBAL FRIENDS LIST - SET YOUR GLOBAL FRIEND LIST HERE FOR ALL FRIENDS
## PEOPLE YOU ARE OK HUNTING WITH / SHARING ROOMS WITH / PEOPLE TO GRANT PIRP POINTS TO 
     var GLOBALFRIENDS Shroom|Odium|Breckin|Bayndaid|Orcher|Morvetan|Shepherd|Rhoat|Jimdickens|Amroth|Semantic|Kithkani|Beerfest

## DO NOT TOUCH THIS LINE
     var ALLCHARACTERS %CHARACTER1|%CHARACTER2|%CHARACTER3|%CHARACTER4|%CHARACTER5|%CHARACTER6|%CHARACTER7|%CHARACTER8|%CHARACTER9|%CHARACTER10|%CHARACTER11|%CHARACTER12|%CHARACTER13|%CHARACTER14|%CHARACTER15


CHARACTER1:
## BEGIN EDITING MAIN 1ST CHARACTER HERE:
#########################################################################################################
#########################################################################################################
## CHARACTER 1 VARIABLES
## *CHARACTER1 VARIABLES BLOCK BELOW
if matchre("$charactername", "(?i)%CHARACTER1") then
#########################################################################################################
{
### GENIE LAYOUT - SET THE GENIE LAYOUT YOU WANT THIS CHARACTER TO USE - MUST EXACTLY MATCH THE LAYOUT NAME IN GENIE!
### Example: var GENIE.LAYOUT Shroom.layout - TO SAVE A LAYOUT IN GENIE SET IT UP HOW YOU LIKE AND CLICK LAYOUT > SAVE LAYOUT AS > NAME IT HOW YOU WANT
### IF YOU LEAVE THIS SET TO NULL THEN IT WILL JUST USE THE DEFAULT LAYOUT THAT IS SET (default.layout) 
     var GENIE.LAYOUT default.layout
### HEAL.CITY ( NULL or CITY NAME (CROSS/LETH/HIB/RIVER/THEREN/SHARD) - Will run to this town for HEALING no matter where you are
     var HEAL.CITY NULL
### HOME CITY (NULL or CITY NAME) - Will attempt to return to your home city after a heal run (if not already in that city) ONLY SUPPORTS MAINLAND CITIES
     var HOME.CITY NULL
### SAFE ROOM (set to NULL to ignore) ~MUST~ TIE INTO HOME.CITY ABOVE! THE ROOM ID YOU WANT TO SCRIPT IN DURING TOWN RUN - MUST BE VALID ROOMID IN YOUR HOME CITY!
### WARNING!: IF YOU DO NOT SET BOTH HOME.CITY AND SAFE.ROOM CORRECTLY YOU ~WILL~ RUN INTO ERRORS - LEAVE BOTH AT NULL TO LET SCRIPT LOGIC HANDLE IT
     var SAFE.ROOM NULL
### AUTO-PROGRESS? (ON or OFF) - ON WILL CHOOSE YOUR COMBAT CREATURE AUTOMATICALLY BASED ON YOUR RANKS - YOU DO NOT NEED TO SET IT! OVERRIDES COMBAT.CRITTER VARIABLE
     var AUTO.PROGRESS ON
### AUTO-PROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var PROGRESS.TYPE NORMAL
### COMBAT CRITTER - ONLY USED WITH AUTO.PROGRESS OFF - MUST BE A VALID CREATURE NAME! USE FULL NAME OR 1/2/3 TO SPECIFY TIERS ie SNOW GOBLIN 2
     var COMBAT.CRITTER GOBLIN
### ALTERNATE CRITTER - PICK A ALTERNATE CRITTER TO HUNT - IF YOUR MAIN HUNTING GROUND IS FULL!
     var ALTERNATE.CRITTER MUSK HOG
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var PRIORITY.ROOMS NULL
### XP TRACKER RESET ON SCRIPT STARTUP - (ON or OFF) - RESETS EXP TRACKER TRACKING TIME ON INITIAL LAUNCH OF SCRIPT ONLY
     var XP.RESET ON

### GUI OPTIONS ARE RECOMMENDED TO LEAVE OFF COMPLETELY - THESE OPTIONS ONLY HERE BY SPECIAL REQUEST - WILL BE ANNOYING IF YOU TURN IT ON
### CRITTER.GUI (ON or OFF) - OFF by default - CREATES CRITTER GUI WINDOW - MUST MANUALLY CLICK TO CHOOSE YOUR COMBAT CRITTER BASED ON PROVINCE / SKILL / PREFERENCE
     var CRITTER.GUI OFF
### WEAPON.GUI (ON or OFF) - OFF by default - CREATES WEAPON GUI WINDOW - CHOOSE YOUR WEAPONS FOR THAT RUN *IF YOU HAVE AN ARRAY OF WEAPONS SET IN A SINGLE WEAPON VARIABLE
     var WEAPON.GUI OFF

# FRIEND LIST (People you will hunt with) Put your friends names in place of these. Ex. Bob|Fred|George
# Can just put your name in here or make it blank and it will only find empty rooms.
     var FRIENDS %ALLCHARACTERS|%GLOBALFRIENDS

##############################################################
# WEAPON / CONTAINERS / AMMO SETTINGS - BE VERY SPECIFIC! 
##############################################################

# CONTAINERS - MANDATORY! - SET YOUR MAIN ~3-4~ LARGEST CONTAINERS!
# BE SPECIFIC WITH CONTAINER NAMES - USE 2 WORDS WHENEVER POSSIBLE!
     var Container backpack
     var Container.Boxes haversack
     var Container.Backup duffel bag
     var Container.Crafting carryall
# SHEATH CONTAINER IS FOR SUPER LONG ITEMS - CAN BE ANY LARGE CONTAINER - NOT NECCESARY TO SET 
     var Container.Sheath NULL
# AMMO CONTAINER FOR STORING AMMO - ARROWS/BOLTS/ROCKS - BACKUP CONTAINER IS "OVERFLOW" FOR EXTRA AMMO
     var Container.Ammo quiver
     var Container.Ammo.Backup NULL
## CONTAINER.GEMPOUCH - VERY IMPORTANT! - ~MUST BE A SEPARATE CONTAINER~ FROM OTHER BAGS! SMALL/MEDIUM-SIZE CONTAINER IS FINE
## SPECIAL CONTAINER! SCRIPT WILL KEEP THIS CLOSED AT ALL TIMES AND ~ONLY USE IT FOR STORING FULL GEM POUCHES!~
## CONTAINER.GEMPOUCH MUST BE A ~CLOSABLE~ CONTAINER TO STORE ~FULL~ GEM POUCHES IN 
## AGAIN - DO NOT SHARE THIS CONTAINER WITH ~ANY OTHER CONTAINERS~ (except Repair Pouch Container) 
     var Container.GemPouch thigh bag
# Container.EmptyPouch is for storing EMPTY GEM POUCHES (This can be ANY container EXCEPT for Container.GemPouch )
     var Container.EmptyPouch backpack
# DIRT CONTAINER - For storing dirt for various use (ONLY used by Thieves/Clerics/Necros)
     var Container.Dirt backpack
## MISC SHEATH OPTIONS (Storing specific weapons in specific containers - toolstraps/bandoliers/harnesses etc) - SET TO NULL/OFF TO NOT USE
## SET THE SHEATH NAME UNDER SHEATH.1 - SET THE WEAPONS YOU WANT TO USE ON EACH SHEATH UNDERNEATH IN AN ARRAY ex:
## var Sheath.1 toolbelt
## var Sheath.1.Weapons sabre|axe|broadsword
     var Sheath.1 NULL
     var Sheath.1.Weapons machete|crossbow|club|flail|slingshot|assassin's blade|steppe bow|katana|nightstick|thrusting blade|shortbow|mace|ngalio|sling|maul|quarterstaff|zweihander|spear|flamberge|mirror ava|throwing (mallet|hammer|club)
     var Sheath.2 NULL
     var Sheath.2.Weapons stonebow|slingshot|blowgun|boomerang
     var Sheath.3 NULL
     var Sheath.3.Weapons mirror blade
     var Sheath.4 NULL
     var Sheath.4.Weapons mirror knife
     var Sheath.5 NULL
     var Sheath.5.Weapons throwing blade|icicles|icicle
     var Sheath.6 NULL
     var Sheath.6.Weapons kertig dart
     
## WEAR WEAPONS (Set an array of weapons/shields you want the script to try and wear first before stowing)
     var Wear.Weapons NULL

## SMART.WEAPONS - ON TO TRAIN WEAPONS FROM LOWEST SKILL TO HIGHEST. "OFF" WILL GO IN A LINEAR ORDER (DEFAULT: ON)
## ON WILL DYNAMICALLY TRAIN TO ALWAYS MAKE SURE THE LOWEST SKILLED WEAPON IS TRAINED FIRST 
     var SMART.WEAPONS ON
     
## WEAPON SETTINGS - BE VERY SPECIFIC SETTING WEAPONS ! USE TWO WORDS WHENEVER POSSIBLE!
## SET ALL YOUR WEAPONS BELOW - MUST ~EXACTLY MATCH THE ITEM DESCRIPTION WHEN IN HANDS~! (GLANCE at it in your hands to get correct description) 
## BE SPECIFIC WHEN SETTING WEAPONS!! USE 2 WORDS WHEN POSSIBLE! TO TURN A WEAPON SKILL ~OFF~ SET IT TO - NULL
     var SEWEAPON assassin's blade
     var LEWEAPON damaris falchion
     var THEWEAPON zweihander
     var SBWEAPON damaris bola
     var LBWEAPON horseman's flail
     var THBWEAPON damaris akabo
     var STAVES damaris quarterstaff
     var POLEARMS damaris pike
     var RANGED.BOW lirisan shortbow
     var RANGED.CROSSBOW cloudbark crossbow
     var RANGED.SLING damaris sling
     var LTWEAPON icicles
     var HTWEAPON damaris mallet
# MAIN OFFHAND WEAPON TRAINING - MELEE ONLY (MUST BE A LIGHT/MEDIUM WEAPON - HEAVY or 2HANDED WEAPONS WONT WORK!!)
     var OHWEAPON club
# ALTERNATE OFFHAND WEAPONS (For Backtraining/Dual Training weapons while training other Weapons)
# ~MUST~ BE LIGHT/MEDIUM WEIGHT WEAPON! CANNOT USE HEAVY or 2Handed Weapons! (Unless Barb) (SET TO NULL/OFF TO NOT USE)
     var ALTWEAPON1 club
     var ALTWEAPON2 bola
     var ALTWEAPON3 NULL
## BRAWLWEAPON (DEFAULT: $charactername - Set to NULL to skip brawling)
     var BRAWLWEAPON $charactername
     #var BRAWLWEAPON $charactername
## Backstab/Ambush Weapon (Thief Only)
     var BSWEAPON mirror blade

# AMMO SETTINGS - DO NOT REMOVE THE { } BRACKETS!!!
     if (!$AMMOSWAP) then
{
     var XbowAmmo crossbow bolt
     var BowAmmo arrow
     var SlingAmmo stone shard
}

## ARMOR CHECK (ON or OFF) - Turn this OFF if you want the script to SKIP checking your armor at the beginning
## If ON - at the beginning, script will remove any armor/fluff you are wearing, and then put on all the armor you have set below. This ensures you have the correct armor on.
     var ARMOR.CHECK ON
## SET YOUR SHIELD - ABSOLUTELY 100% MANDATORY! RECOMMEND AN ARM-WORN SHIELD
     var MyShield diamondwood shield
## ARM WORN SHIELD? (ON OR OFF) - I RECOMMEND ALWAYS USING AN ARM WORN / SMALL SHIELD - MAKES LIFE MUCH EASIER
     var ArmWorn ON
## MAIN ARMOR TO CHECK - PRIMARY COMBAT (Set to NULL to IGNORE a slot)
## YOU MUST SET ALL YOUR ARMOR BELOW - IT DOESN'T MATTER WHICH ARMOR SLOT YOU USE - THE SCRIPT DOESN'T CARE
     var CHEST.ARMOR khiynit robe
     var FACE.ARMOR NULL
     var HEAD.ARMOR leather cowl
     var ABDOMEN.ARMOR NULL
     var BACK.ARMOR NULL
     var ARM.ARMOR assassin's sleeves
     var HAND.ARMOR NULL
     var LEG.ARMOR NULL
     var KNUCKLE telothian knuckle
     var PARRYSTICK parry stick

## PRIORITY WEAPONS - WEAPON SKILLS TO KEEP MOVING ~ALWAYS~ - PRIORITIZE THESE WEAPON SKILLS OVER ALL OTHERS IF THEY ~EVER~ DROP TO 0/34
## MUST BE SET IN AN ARRAY - THE EXACT SAME AS GENIE EXP VARIABLE FORMAT ie: var Priority.Weapons Medium_Edged|Twohanded_Edged
## WARNING!! DO NOT SET PRIORITY WEAPONS UNLESS YOU WANT THOSE SKILL(S) TO TAKE PRIORITY OVER ~ALL~ OTHERS! ~WILL~ CAUSE UNEVEN RANKS OVER TIME!!
## THIS IS MAINLY ONLY USEFUL FOR SHORT PERIODS - FOR POWER LEVELING A SINGLE WEAPON SKILL FOR EXAMPLE - RECOMMEND NULL UNLESS YOU KNOW WHAT YOU ARE DOING
     var Priority.Weapons NULL
     
## TRAIN LOWEST (ON or OFF) - ON WILL ALWAYS TRAIN W/ YOUR LOWEST RANK & LOWEST LEARNINGRATE WEAPON AT EVERY WEAPON SWAP 
## THIS EFFECTIVELY ENSURES THAT ALL YOUR WEAPON SKILLS WILL TRAIN AND STAY AT THE ~EXACT SAME RANKS~ - ESPECIALLY IF USED FROM THE START
## NOTE! TRAINLOWEST ON - WILL ALTER THE DEFAULT WEAPON TRAINING ORDER - BYPASSES THE SET ORDER TO DYNAMICALLY TRAIN WEAPONS 
     var TrainLowest OFF

# MAX LEARNING RATE - FOR EACH WEAPON SKILL (WILL SWITCH WEAPONS ONCE REACHING THIS RATE *MAX 33) *SET TO 35 TO IGNORE LEARNINGRATE 
     var MAX.LEARNINGRATE 12
# LEARNING RATE INCREASE - AFTER FULL WEAPON LOOP *OF ALL WEAPONS* - INCREASE THE MAX.LEARNINGRATE BY THIS MUCH
     var LEARNING.INCREASE 4
# MAX TIME PER WEAPON - SET THE MAXIMUM TIME (IN SECONDS) TO TRAIN EACH WEAPON SKILL - BEFORE SWITCHING WEAPONS
# SETTING THIS TOO HIGH MAY CAUSE SUBOPTIMAL TRAINING - RECOMMEND AROUND ~300-500 (~5-8 minutes per weapon)
     var MAX.TIME 250
# MAXIMUM TOTAL COMBAT TRAINING TIME - SET THE MAX TIME (IN SECONDS) TO STAY IN ~COMBAT~ BEFORE ESCAPING TO TOWN ( 3600 SECONDS = 1 HOUR )
# SET VAR MAX.TRAIN 0 - TO LOOP COMBAT FOREVER ( *UNTIL IT ESCAPES DUE TO BEING TOO HURT / BAGS TOO FULL / BURDEN TOO HIGH )
     var MAX.TRAIN 4500
     
# STANCE PER WEAPON (Set NULL to use default - Or SHIELD/PARRY/EVASION/CUSTOM TO USE THAT PARTICULAR STANCE FOR A PARTICULAR WEAPON)
## NOTE SCRIPT IS ALREADY ADVANCED IN CHANGING STANCES DEPENDING ON WEAPON BEING TRAINED - NULL IS FINE FOR MOST PURPOSES
     var SE.STANCE NULL
     var LE.STANCE NULL
     var THE.STANCE NULL
     var SB.STANCE NULL
     var LB.STANCE NULL
     var THB.STANCE NULL
     var POLEARMS.STANCE NULL
     var STAVES.STANCE NULL
     var BOW.STANCE NULL
     var CROSSBOW.STANCE NULL
     var SLINGS.STANCE NULL
     var LT.STANCE NULL
     var HT.STANCE NULL
     var OH.STANCE NULL
     var BRAWL.STANCE NULL

## BACKTRAIN (ON or OFF) - ON FOR SETTING A SEPARATE BACKTRAIN ROUTINE
     var BACKTRAIN OFF
## BACKTRAIN AUTO PROGRESS (ON or OFF) - Turning this ON will automatically set the creature to hunt, based on your BACKTRAIN WEAPON SKILLS
## TURN THIS ~OFF~ TO SET THE BACKTRAIN CREATURE MANUALLY (BELOW)
     var BACKTRAIN.AUTOPROGRESS ON
### BACKTRAIN AUTOPROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var BACKTRAIN.PROGRESS.TYPE NORMAL
## BACKTRAIN CREATURE - Must specify the creature to hunt if BACKTRAIN.AUTOPROGRESS is OFF
     var BACKTRAIN.CRITTER ICE ARCHON
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var BACKTRAIN.PRIORITY.ROOMS NULL
## BACKTRAIN TIME (in SECONDS - Total time to Backtrain)
     var BACKTRAIN.TIME 1200
## BACKTRAIN MAGIC (ON or OFF) IF OFF - WILL SKIP USING ANY OFFENSIVE SPELLS PERIOD WHILE BACKTRAINING - WILL ONLY DO BUFFS
     var BACKTRAIN.MAGIC OFF
## BACKTRAIN TM/DEBIL SPELLS (ON or OFF) IF OFF - WILL SKIP USING ANY TM / DEBIL SPELL DURING BACKTRANING (UNLESS ITS A TATTOO)
     var BACKTRAIN.TM OFF
## BACKTRAIN WEAPONS - Set every weapon you wish to backtrain (NULL to turn off)
     var BACKTRAIN.SE NULL
     var BACKTRAIN.LE NULL
     var BACKTRAIN.THE NULL
     var BACKTRAIN.SB NULL
     var BACKTRAIN.LB NULL
     var BACKTRAIN.THB NULL
     var BACKTRAIN.STAVES NULL
     var BACKTRAIN.POLEARMS NULL
     var BACKTRAIN.BOW NULL
     var BACKTRAIN.CROSSBOW NULL
     var BACKTRAIN.SLING NULL
     var BACKTRAIN.LT NULL
     var BACKTRAIN.HT NULL
     var BACKTRAIN.BRAWL NULL
     var BACKTRAIN.OH NULL
     var BACKTRAIN.BS NULL
## BACKTRAIN STEALTH (OFF or ON)
     var BACKTRAIN.STEALTH ON
## BACKTRAINING LOOTING OPTIONS (ON or OFF)
     var B.Loot.Gems ON
     var B.Loot.Boxes OFF
     var B.Loot.Metals ON
     var B.Loot.Scrolls ON
     var B.Loot.Collectibles OFF
     var B.Loot.SpiderParts OFF
## BACKTRAIN LOOTING MODE ( treasure / boxes / goods / equipment )
     var B.Loot.Option goods
## BACKTRAIN ARMOR (ARMOR ONLY FOR BACKTRAIN ROUTINE) (Set to NULL to not check a piece)
     var B.CHEST.ARMOR NULL
     var B.FACE.ARMOR NULL
     var B.HEAD.ARMOR NULL
     var B.ABDOMEN.ARMOR NULL
     var B.BACK.ARMOR NULL
     var B.ARM.ARMOR NULL
     var B.HAND.ARMOR NULL
     var B.LEG.ARMOR NULL

##############################################################
### COMBAT GENERAL SETTINGS
##############################################################

## GEM POUCH DESCRIPTION - DR IS TRICKY WITH GEM POUCHES!! BE SPECIFIC - use "<color> pouch" only! 
## **RECOMMEND DUMPING ALL POUCHES AND GET NEW ONES FROM GEM SHOP ON FIRST SETUP**
## WHEN ASKING FOR NEW GEM POUCHES, "ASK NPC FOR <COLOR> POUCH" - ~DO NOT 'ASK FOR GEM POUCH' OR just 'POUCH'~ - JUST 'ASK <NPC> FOR BLACK POUCH'
## Then Set the var to the 'color' pouch you have. ie var gemPouch black pouch
     var gemPouch black pouch
# TIE GEM POUCHES? (ON or OFF) 
# TIE POUCHES FOR MORE STORAGE/LESS INVENTORY SPACE USE - but have to sell the FULL TIED POUCHES AT SPECIAL SHOPS or get TRADER to sell them!
# IF HUNTING IN SHARD OR ROSSMAN - NO WORRY AS SCRIPT SELLS TIED POUCHES IN THOSE GEM SHOPS. IF hunting in XING/ISLANDS will have to get Trader to sell pouches.
     var TiePouch ON
# WORN GEM POUCH? (ON or OFF) (OFF will STOW your gem pouch / ON will wear it )
     var Gempouch.Worn OFF

## RESTOCK AMMO? (ON or OFF) *SCRIPT WILL AUTOMATICALLY CHECK IF YOU RUN OUT OF AMMO AND ATTEMPT TO RESTOCK
     var AmmoStock ON
# Skinning Knife Name (Mandatory if not a worn knife)
     var Skinning.Knife knife
# BELT/WRIST/ANKLE ~WORN~ SKINNING KNIFE? (ON or OFF)
     var BeltKnife ON
#### COMBAT OPTIONS ####
# OFFHAND THROWING - (ON or OFF) SET TO ON IF YOU WANT TO ROTATE RIGHT/LEFT HANDS WHILE THROWING LT/HT
     var OffhandThrow ON
# THROWING TYPE (LOB, THROW or HURL) *LOB will NEVER stick / less damage - HURL ALWAYS STICKS/ max damage. THROW is inbetween
## IF YOU USE A SHARP THROWING WEAPON (LIKE SPEAR) ALWAYS USE LOB! THROW WILL STICK WITH A POINTY WEAPON!
## LOB IS THE SAFEST - LOB NEVER STICKS! - THROW IS SAFE ~IF USING A BLUNT THROWN WEAPON~ - HURL ALWAYS STICKS - AVOID HURL 
     var ThrowType throw
# BONDED THROWING WEAPONS? (ON or OFF) - Will use INVOKE to retrieve thrown weapon
     var Bonded OFF
# ROAMING (ON or OFF) - Will ROAM around to different critter rooms if it doesn't find a creature during bored routine
     var Roaming ON
# USE WEAK ATTACKS (ON or OFF) - Will use WEAK attacks for melee training (good for backtraining or preserving fatigue/balance)
     var WeakAttack OFF
# AIM ACTIONS (Set an array of actions) - ACTIONS TO PERFORM WHILE WAITING FOR FULL AIM (WITH RANGED/SPELLS) Separate with |
     var AimActions bob|attack|attack left
# TRAIN STEALTH? TRAIN STEALTH DURING MELEE / THROWN / BRAWLING ROUTINES
     var TrainStealth ON
## LOOT MONSTERS? (ON or OFF) - LOOT MONSTERS?
## OFF WILL SKIP LOOTING ALL MONSTERS ~PERIOD~ AND LET THEM ROT
     var Loot.Monsters ON
## LOOT OPTION TO USE - TREASURE / BOXES / EQUIPMENT/ GOODS or ALL
     var Loot.Option GOODS
## LOOTING OPTIONS (ON or OFF) - LOOT OPTIONS FOR MAIN COMBAT
     var Loot.Gems ON
     var Loot.Boxes ON
     var Loot.Metals ON
     var Loot.Scrolls ON
     var Loot.Collectibles OFF
     var Loot.SpiderParts OFF
# MAX BOXES (Set a number) - MAX number of BOXES to pick up before turning Box looting off for that run
     var Max.Boxes 25
# DISSECT (ON or OFF) - DISSECT mobs for First Aid training in Combat (Alternates with SKINNING depending on Learning Rates)
     var Dissect ON
# SKINNING OPTIONS (ON or OFF)
# SKIN ON but BUNDLE OFF will skin but DROP all skins. SKIN collecting only supported with bundles ON!
     var Skin ON
     var Bundle ON
# TIE BUNDLES (ON or OFF) (Turns on automatically when F2P is ON) - LOWER ITEM COUNT BY TYING UP YOUR BUNDLES
     var TieBundle ON
# BUNDLE LOCATION (SET to NULL to use ANY open location or set a preferred location (shoulder / waist / back / belt / around shoulder / over shoulder)
     var BundleLocation NULL
# ArrangeTarget (SET TO SKIN, BONE or PART - or NULL to skip arrange)
## Set ArrangeTarget to SKIN/BONE/PART to Arrange one time
## Set ArrangeALL to ON to arrange max times
     var ArrangeTarget SKIN
     var ArrangeAll OFF
## ArrangeAlways (ON or OFF) - Set ON to ALWAYS arrange regardless of skinning learningrate. OFF will SKIP ARRANGING when Skinning learning is locked
     var ArrangeAlways OFF
# MAX BUNDLE SIZE - Max amount of skins to keep in bundle before creating a new bundle (DEFAULT: 30  MAX: 200)
     var MaxBundle 40
# Set SNIPE to ON to use SNIPE (THIEF/RANGER/NECRO ONLY)
     var Snipe ON
# Set POACH to ON to use POACH instead of SNIPE (SNIPE overrides this setting if SNIPE is ON - TURN SNIPE OFF TO USE THIS)
     var Poach OFF
# RANGED AIM PAUSE. Set to 0 for a Full Aim. Set number of seconds to pause that many seconds before firing
     var SNAP.FIRE 6
# RETREAT WHILE USING RANGED WEAPONS/BUFFING? (ON or OFF) - Will RETREAT to stay at ranged when using ranged weapons
     var Retreat OFF
## DANCE / COUNT Critters - Set min number of critters to "dance" with before you start killing. 
## Leave Dance.Count 0 to kill EVERYTHING. Set 1 to dance with 1 creature until a 2nd comes in, etc. If set to 1 will ALWAYS leave 1 creature in your room.
     var Dance.Count 0
## TACTICS TRAINING (ON OR OFF) - Train TACTICS in Combat
     var Tactics ON
# APPRAISE CREATURES - (ON or OFF) to APPRAISE ALL CREATURES
     var APPRAISE ON
# HUNT OPTION (HUNT every ~75 seconds unless perception locked)
     var HUNT ON
## APPRAISE ITEMS WHEN NO CRITTERS IN ROOM? (ON or OFF)
     var APP.ITEMS OFF
## ITEMS TO APPRAISE (Set to NULL to not use) SET YOUR WORN ITEMS TO QUICK APPRAISE 
     var app1 NULL
     var app2 NULL
     var app3 NULL
## SANOWRET CRYSTAL? (ON or OFF) - ON will exhale crystal every ~100 seconds *IF CONCENTRATION ALLOWS
     var Crystal OFF
## USE SANORWRET CRYSTALS IN COMBAT? (ON or OFF) - ON will use Sanowrets in combat (Turning ON WILL effect concentration and hinder spell casting - not recommended for most)
     var SanowretCombat OFF
## ZILLS? (ON or OFF) - FOR WORN INSTRUMENTS - ON will play Zills during certain times (Repairing armor, collecting, etc)
     var Zills ON
## Zill name ( zills / cowbell / etc )
     var Zill.Name zills
# F2P CHARACTER (ON or OFF) - If set to ON - Script will escape combat and go to town run when you get an inventory count warning
     var F2P OFF
# BIOMECHANICAL TARANTULA? (ON or OFF) - IF ON - Will pick a (semi-)random near locked skill to drain every 10 minutes while in combat
     var Tarantula OFF
     var Tarantula.Name tarantula
## TARANTULA SKILLS TO CHECK - SET AN ARRAY OF SKILLS TO CHECK AGAINST FOR TARANTULA DRAIN
## MUST EXACTLY MATCH THE GENIE VARIABLE NAMES! THESE ARE THE SKILLS TARANTULA WILL CHECK FOR EACH SCHOOL
     var Magic.skills Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Arcana
     var Armor.skills Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor
     var Survival.skills Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing
     var Weapons.skills Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow
     var Lore.skills Appraisal|Tactics|Performance
# WARHORN? (ON or OFF) - For Barbarians and Bards only.
     var WarHorn OFF
## WAND SUPPORT (NULL to NOT use) (MEF wand / WoW wand / WoTP wand etc.) Set up to 2 sets of wands to use! Must use actual verb of wand!
## CAN SET AN ARRAY OF WANDS FOR EACH VAR ex- var Wand1 bloodwood branch|oaken staff|crystal
     var Wand1 NULL
     var Wand2 NULL
## WAND CONTAINERS *Must use 2 different containers to store Wands if using 2 identical named wands)
     var Wand1.Container NULL
     var Wand2.Container NULL
## Wand Weapon - (NULL or WEAPON NAME) SET A MELEE WEAPON TO BUFF WHEN USING WANDS WITH A WEAPON BUFF
     var WandWeapon NULL
## EGG SUPPORT (ON or OFF)*Uses the HE Gift Egg in Combat every ~15 minutes to invoke more mobs
     var EGG OFF
## ASTROLABE (ON or OFF) - Uses an Astrolabe every 30 mins if ON (Will rotate if you use 2)
     var ASTROLABE OFF
## Set the name of the astrolabes - (2 words ONLY i.e - ornate astrolabe, twisted astrolabe)
     var ASTROLABE1 NULL
     var ASTROLABE2 NULL
     var Astro1.Container NULL
     var Astro2.Container NULL
## ORB RUB IN COMBAT (var Orb.Rub ON or OFF) - TURN ON TO RUB FAVOR ORB IN COMBAT EVERY ~40 MINUTES
## *NOTE THAT SCRIPT AUTOMATICALLY RUBS ORB ~ONE TIME~ EVERY FULL LOOP OF SCRIPT REGARDLESS OF THIS VARIABLE
     var Orb.Rub OFF
####################################################################################################
# ARMOR SWAP - (ON or OFF) - SPECIAL ARMOR SWAPPING ROUTINE FOR HELMS ONLY
# WILL SWAP OUT A SINGLE PIECE OF PLATE/BRIG/CHAIN/LIGHT HELM EVERY ~5 MINUTES IN COMBAT
     var Armor.Swap OFF
# IF Armor.Swap is ON - THEN ALL THE ARMORS BELOW MUST BE SET CORRECTLY!
# SET EVERY PIECE OF ARMOR TO SWAP BELOW, MUST SET AN ARMOR PIECE FOR ALL FOUR TYPES - TWO WORDS ONLY!
# ONE PIECE SHOULD MATCH YOUR MAIN ARMOR HELM
     var Light_Armor.Helm steelsilk balaclava
     var Chain_Armor.Helm chain balaclava
     var Brigandine.Helm brigandine balaclava
     var Plate_Armor.Helm NULL
####################################################################################################
# HEAVY ARMOR REMOVAL - (ON or OFF) - ON will take off plate/brig/chain armor before backstab/stealth routines
# Generally only needed for noobs with less then ~200 ranks in armors
     var Armor.Noob OFF
# Set Plate/Brig/Chain pieces here (USE EXACT SYNTAX) (If no armor to remove set to NULL)
     var PLATE1 gauntlet
     var PLATE2 greaves
     var PLATE3 NULL
     var PLATE4 NULL
# Set Light Armor Pieces to Swap in place of the Heavy armor pieces above - if any (set to NULL to not use)
     var LIGHTARMOR1 rugged gloves
     var LIGHTARMOR2 rugged greaves
     var LIGHTARMOR3 NULL
     var LIGHTARMOR4 NULL
####################################################################################################

##############################################################
# TOWN RUN / SPECIAL MODULES - SETTINGS FOR TOWN 
# AUTO HEALER / SELL GEMS/SKINS, BANK, OPTIONAL MODULES
##############################################################

# RETURN TO COMBAT MODULE (ON or OFF) - RESTARTS SCRIPT AND RETURNS TO COMBAT WHEN TOWN RUN IS FINISHED
# IF OFF - SCRIPT WILL ~ABORT~ ONCE TOWN RUN IS COMPLETE - LEAVE THIS ON FOR INFINITE AFK SCRIPTING
     var RETURN.TO.COMBAT ON
# AUTOHEAL (ON or OFF) - ON - LET SCRIPT HANDLE AUTO-HEALING AFTER COMBAT (DEPENDING ON YOUR GUILD/SETTINGS) 
# LEAVE THIS ON UNLESS YOU WANT TO HANDLE HEALING YOURSELF MANUALLY! (OR WITH ANOTHER SCRIPT) 
# TURNING THIS OFF WILL ~ABORT SCRIPT AFTER ESCAPING FROM COMBAT~! AND WILL PARSE: HELP ESCAPE PLZ!
     var AUTOHEAL ON
# HEAL ALL (ON or OFF ) - HEAL.ALL ON = FULLY HEAL IF YOU HAVE ~ANY~ WOUNDS AT ALL (even minor scars) 
# HEAL.ALL OFF = WILL SKIP HEALING IF INSIGNIFICANT WOUNDS (minor scratches etc)
     var HEAL.ALL ON
# SELL SKINS (ON or OFF) - VISIT FURRIER - SELL SKINS/BUNDLES 
     var SELLSKINS ON
# SELL GEMS (ON or OFF) - VISIT GEM SHOP - SELL ALL GEMS/POUCHES
     var SELLGEMS ON
# SELL METALS (ON or OFF) - VISIT GEM SHOP - SELL ALL LOOSE METALS/NUGGETS/BARS (except those in your Crafting Container) 
     var SELLMETALS ON
# BUY HERBS? (ON or OFF) - VISIT HERB SHOP - AUTO RESTOCK ON HEALING HERB SUPPLIES (IF in city with Herbalist)
     var HERBS ON
# USE HERBS IN COMBAT? (ON or OFF) - If ON - Script will eat herbs during combat every ~5 minutes if needed
     var HERBS.COMBAT ON
## Container.Herb - SET CONTAINER TO STORE YOUR HERBS IN (Can be a stackable herb container)
     var Container.Herb %Container
# BANK RUN (ON or OFF) - VISIT BANKS - DEPOSIT MONEY AFTER TOWN RUN 
     var BANKRUN ON
# INVENTORY CHECK (ON or OFF) - TURNS ON INVENTORY CHECKS FOR DUMPING ANY COMMON TRASH ITEMS IN INVENTORY (OR EXCESS GEM POUCHES / BUNDLING ROPE )
     var INVCHECK ON
# TRASH DUMP (ON or OFF) - IF ON WILL DUMP ANY ITEM IN YOUR TRASH VARIABLE (GLOBAL VARIABLE AT VERY TOP OF VARIABLE FILE)
     var TRASH.DUMP ON
# POUCH DUMP (ON of OFF) - IF ON - DUMPS ANY GEM POUCHES IN YOUR INVENTORY THAT ~DO NOT MATCH~ THE COLOR/DESCRIPTION OF YOUR PRIMARY GEMPOUCH ( var gemPouch )
# WILL ALSO DUMP YOUR NORMAL GEM POUCHES IF YOU HAVE MORE THAN 10 OF THEM until you only have 10 MAX (Prevent buildup of ~50 rogue pouches) 
     var POUCH.DUMP ON

## SHARD CITIZEN (ON or OFF) - Must be a citizen of shard
     var Shard.Citizen ON
# GET FAVORS? (ON or OFF) - (ONLY WORKS IN CROSSING / SHARD / HAVEN )
     var GET.FAVORS ON
     var FAVOR.GOD damaris
# REPAIR ARMOR? (ON or OFF) - REPAIR ALL ARMOR / WEAPONS DURING TOWN RUN (MUST HAVE MONEY IN LOCAL BANK)
     var REPAIR.ARMOR ON
## USE MAGIC REPAIR KITS? (SET NULL/OFF TO NOT USE)
## REPAIR.KIT and REPAIT.KIT.2 ARE FOR FULL REPAIR KITS THAT REPAIR ALL ARMOR ~AND~ WEAPONS
## REPAIR.KIT.WEAPON and REPAIR.KIT.ARMOR ARE ONLY FOR KITS THAT ONLY REPAIR ARMOR OR WEAPONS!
## YOU MUST SET THE CONTAINER THAT EACH SPECIFIC KIT IS FOUND IN! IT TREATS THIS CONTAINER LIKE GEMPOUCH.CONTAINER AND KEEPS CLOSED! *CAN BE SHARED WITH GEMPOUCH.CONTAINER!
     var REPAIR.KIT NULL
     var REPAIR.KIT.2 NULL
     var REPAIR.KIT.WEAPON NULL
     var REPAIR.KIT.ARMOR NULL
     var REPAIR.KIT.CONTAINER NULL
     var REPAIR.KIT.2.CONTAINER NULL
     var REPAIR.KIT.3.CONTAINER NULL
# CLIMBING/SWIMMING RUN (ON or OFF) - ATHLETICS TRAINING 
     var CLIMBING ON
## MAGIC CLIMBING ROPE (ON or OFF) - CHECK FOR MAGIC CLIMBING ROPE - USES THAT INSTEAD OF DEFAULT CLIMBING RUN
     var MAGIC.ROPE OFF
     var ROPE.NAME climbing rope
     var Rope.Container NULL
## WINDBOARD (ON or OFF) - TRAIN ATHLETICS WITH A WINDBOARD INSTEAD
     var WINDBOARD OFF
# COLLECTING - (ON or OFF) - OUTDOORSMANSHIP TRAINING - COLLECT ROCKS/COINS
     var COLLECTING ON
# BRAIDING - (ON or OFF) - TRAINS BRAIDING (ENGINEERING) - ONLY TRAINS TO ~70 RANKS!
     var BRAIDING ON
# RAVEN'S COURT SCHOLARSHIP STUDY (ON or OFF) - ONLY IN CROSSING !
     var RAVEN ON
# TEXTBOOK / COMPENDIUM? (ON or OFF) - TRAIN SCHOLARSHIP/FIRST AID W/ ANATOMY TEXTBOOK
     var TEXTBOOK OFF
# TEXTBOOK TYPE - Textbook or Compendium
     var TEXTBOOK.TYPE textbook
     var Textbook.Container cloak
# SKINNING/FA TRAINER - (ON or OFF) ONLY WORKS FOR THE MAGIC SKINNING / FA TRAINERS
## The ones with 105 uses per day or infinite ( https://elanthipedia.play.net/Item:Small_blue-belly_crocodile_with_prominently_stitched_seams )
     var SKINTRAINER OFF
     var SKINTRAIN.NOUN crocodile
     var SKINTRAIN.CONTAINER NULL
# EPISTEMIC JOURNAL - For Epistemic Journals ONLY - Writes to Journal every 24 hours
# Set JOURNAL.TYPE ( NULL to NOT USE ) - Set NOUN of item to use ( traveler's diary / explorer's log / soldier journal / etc)
     var JOURNAL.TYPE NULL
# DISARM BOXES? (USES DISARM SCRIPT - MAKE SURE YOU SET THE VARIABLES UP IN disarm-vars)
     var DISARM ON
# BURGLE RUN (ON or OFF) - BURGLE RUN USING THE BURGLE SCRIPT (BURGLE.PAWN ON will Pawn all Burgle items)
     var BURGLE ON
     var BURGLE.PAWN ON
# BURGLE DUMP (ON or OFF) - Burgle Dump ON will DUMP/TRASH any Burgle item that does not sell at pawn shop
     var BURGLE.DUMP ON
# STEALING RUN (ON or OFF) - Does STEALING Run with the Ultimate Stealing Script
     var STEAL OFF
# PERFORMANCE RUN (ON or OFF) - DEDICATED PERFORMANCE TRAINING RUN DURING TOWN RUN (Uses your Zill.Name variable to train)
     var PERFORMANCE ON
# MAGICAL RESEARCH TRAINING (ON or OFF) - DEDICATED MAGICAL RESEARCH TRAINING DURING END OF TOWN RUN - TAKES A BIT OF TIME! 
     var MAGICAL.RESEARCH OFF
# PRIMARY MAGICAL RESEARCH TYPE ( SET TO NULL TO CHOOSE AUTOMATICALLY BASED ON LEARNING )
# OPTIONS ARE: FUNDAMENTAL, STREAM, AUGMENTATION, UTILITY, WARDING, SORCERY, FIELD, SPELL
     var RESEARCH.TYPE NULL
# TEACHING? (ON or OFF) - If ON, will attempt to teach your other characters/people in the Friends variable
     var TEACH OFF
     var TEACH.SKILL hiding
     var TEACH.SKILL.2 evasion
## SUPPORT FOR MASTERCRAFT TRAINING
## IF YOU USE MASTERCRAFT - SET EACH SKILL ON THAT YOU WANT TO TRAIN
## *YOU MUST SET UP MASTERCRAFT - TOOLS ETC SEPARATELY
     var ALCHEMY OFF
     var ENGINEERING OFF
     var FORGING OFF
     var OUTFITTING OFF
     var ENCHANTING OFF
## VAULT SWAP (ON or OFF) - ON WILL TEMPORARILY SWAP YOUR 'var CONTAINER' FOR A SPECIAL BAG IN YOUR VAULT FOR MASTERCRAFT PURPOSES ONLY!
## AFTER MASTERCRAFT IS OVER, GOES BACK TO VAULT AND SWAPS BACK TO ORIGINAL BAG - PUTS YOUR CRAFTING BAG BACK IN THE VAULT!
## MAKE SURE YOU HAVE ENOUGH ROOM IN YOUR VAULT! THE SWAP CONTAINER SHOULD FIT ON THE SAME BODY SLOT AS THE BAG YOU ARE SWAPPING OUT!
     var VAULT.SWAP OFF
## VAULT CITY - SET THIS TO THE CITY NAME WHERE YOU HAVE YOUR VAULT - IF VAULT.SWAP IS ~ON~ IT WILL RUN TO THIS CITY FIRST
     var VAULT.CITY FC
## SET THE NAME OF YOUR CRAFTING BAG IN YOUR VAULT - MUST HAVE ~ALL YOUR CRAFTING TOOLS~ IN THIS BAG!!
## MAKE SURE TO BE SPECIFIC WITH YOUR CONTAINER VARIABLES SO THEY DONT GET MIXED UP! THIS CONTAINER SHOULD USE THE SAME BODY SLOT AS YOUR VAR CONTAINER!
     var CRAFTING.BAG NULL

# ALMANAC (ON or OFF) - USE ALMANACS (That trains random skill OR pick-a-skill every 10 minutes)
     var ALMANAC OFF
## ALMANAC VERB - if using the special encyclopedic almanac, MUST be set to 'encyclopedic almanac' to use the pick a skill function
     var ALMANAC.TYPE almanac
     var Almanac.Container NULL
## ALMANAC SKILLS to check/pick for encyclopedic almanac i.e. Sorcery|Forging|Engineering
## The default list has ALL skills listed - You can remove skills you don't want to boost
     var ALMANAC.LEARN Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor|Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing|Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow|Appraisal|Tactics|Performance|Enchanting|Forging|Engineering|Alchemy|Outfitting|Arcana
# LOCKPICK TRAINING ITEM? (Set to NULL to not use) - Must match EXACTLY with item name in hands (2 words only)
# For MAGIC LOCKPICK TRAINING ITEMS - * Assumes you use a WORN lockpick ring/case 
     var LOCKPICK.ITEM NULL
## SET A SECONDARY LOCKPICK ITEM HERE IF YOU HAVE A SECONDARY (OR SET TO NULL)
     var LOCKPICK.ITEM.2 NULL
## Lockpick.Container is where the MAGIC LOCKPICK ITEMS should be stored (NULL to try wear them)
     var Lockpick.Container NULL
# PILGRIM BADGES (ON or OFF) *CLERIC/PALADINS ONLY! - VISIT UNVISITED BADGE LOCATIONS - PRAY TO BADGE
     var PILGRIM ON
# POWERWALKING (ON or OFF) - FOR MAGIC USERS - DO A POWERWALK DURING TOWN RUN 
     var POWERWALK ON
## SCRIPT CHECK LOGIC - TURN SCRIPT CHECK LOGIC (ON OR OFF) - WARNING - THERE ~WILL~ BE FALSE POSITIVES!! UNAVOIDABLE!!
## IF IT DETECTS ANY GM SCRIPT CHECKS - WILL ~ATTEMPT~ TO AUTOMATICALLY HANDLE IT AND/OR RUN AWAY (Not Log Out)
     var SCRIPTCHECK OFF
## Setting NO.CONTACT to "ON" will log out for 5 minutes if someone tries to drag you or hold your hand (DEFAULT: OFF)
## WARNING! IT WILL ALSO ESCAPE COMBAT IF ANYONE TALKS IN YOUR COMBAT ROOM! INCLUDING CRITTERS! SO IT CAN FALSE POSITIVE ON TALKING CRITTERS
     var NO.CONTACT OFF
## LOG.ON.STUN (ON or OFF) Set to "ON" to log out if you are too hurt/stunned and are unsuccessful running away (DEFAULT: ON)
     var LOG.ON.STUN OFF
## LOG.ON.DEATH (ON or OFF) Set OFF to stay logged in even if you die (DEFAULT: ON)
     var LOG.ON.DEATH ON
## TOTAL TIME ONLINE - MAX TIME TO STAY ONLINE (IN SECONDS) After this time has passed will idle and logout to avoid AFK checks (Set to 0 to always stay online)
     var ONLINE.TIME 0
## FANG COVE? (ON or OFF) - Do you want to go to FANG COVE for healing/town stuff (Only works in Prime if Premium)
     var FANGCOVE ON
## USE PREMIUM JUMP JEWELRY? (ON or OFF) - Will use Premie JJ to teleport to Fang Cove for healing/bundles/gems/etc
     var JumpJewelry OFF
     var JewerlyVerb ironwood ring
## PERSONAL EMPATH HEAL (Put EMPATH'S NAME HERE to use. NULL to turn off) - If you use a personal empath to heal
## Setting this to anything OTHER than NULL/OFF will turn OFF the triggers to nod to someone when they ask if you want healing
     var PocketEmpath NULL
## EmpathRoom is ROOM NUMBER where you can find your PERSONAL EMPATH. (MUST be in the CITY you go to for TOWN RUN)
     var EmpathRoom NULL
## BankBot - Used for F2P characters to tip a bankbot any remaining coin at end of town run
## Set Tipping to 1, Bankbot name and Tiproom = room number bankbot is at, in your home town
     var Tipping 0
     var BankBot morph
     var TipRoom 753
## CLAN ITEM (TF USE ONLY)
     var CLAN OFF
     var CLAN.ITEM sphere
## LIGHTER ITEM (For using a Lighter to start fires instead of flint and blade)
## USAGE - var LIGHTER (ON or OFF) - Lighter.Name = verb of the item
     var Lighter OFF
     var Lighter.Name world dragon
## CUSTOM TOWN SCRIPT - (Must be the exact name of the script (IGNORE .CMD - JUST USE NAME)
## Set your own script to run during the town run
## YOU MUST HAVE A PARSE AT THE END OF YOUR SCRIPT: put #parse SCRIPT FINISHED!
## IF YOU DO NOT HAVE THIS PARSE THEN UBER WILL NOT RECOVER PROPERLY!
     var Custom.Script NULL
## RPA BESTOW? (ON or OFF) - MUST BE IN THE PIRP SYSTEM TO BESTOW RPAS! https://elanthipedia.play.net/RPA_command
     var RPA ON
## LIST THE PEOPLE YOU WANT TO BESTOW RP POINTS TO BELOW IN AN ARRAY!!
## ie. var PirpList Name1|Name2|Name3|Name4|Name5
     var PirpList Raidboss|Healbitch|Illuminati|Breckin|Ryhs|Rhoat|Shepherd|Kohen|Worril|Odium|Morvetan|Orcher|Amroth|Mephos|Yew|Lorak|Wryll|Rellie|Beerfest|Bayndayd|Xana|Crivic|Blaakwulf|Wong|Findal|Regnar|Lakshmi|Vivica|Phucker|Jimdickens|Kiroq|Bleed|Rutinger|Nekhet|Leecya|Arazenya|Kithkani


######################################################################################################################
######################################################################################################################
# GENERAL MAGIC VARS - ALL MAGIC USERS MUST SET THESE VARIABLES
# GENERIC MAGIC VARIABLES FOR ALL MAGIC USERS
######################################################################################################################
######################################################################################################################
# SMART MANA FOR SPELLS? AUTO-DETERMINES OPTIMAL MANA FOR SPELLS AFTER A NEW SETUP (OR EVERY ~2 WEEKS IN GAME)
# SMART MANA WILL AUTOMATICALLY ADJUST YOUR MANA LEVELS UP AND DOWN AS YOU GAIN IN RANKS FOR OPTIMAL LEARNING
# (ON or OFF) - RECOMMEND LEAVING ON - SETTING THIS ON WILL OVERRIDE ALL MANUAL MANA SETTINGS 
# TURNING SMART.SPELLS OFF MEANS YOU WILL ~HAVE~ TO SET MANA MANALLY AND DO MUCH MORE FINE TUNING 
     var SMART.SPELLS ON
# CAMB HEAVY (ON or OFF) (OFF by default) - ON WILL MAKE SMART MANA PUT MORE MANA INTO CAMBRINTH THEN MAIN PREP
     var Camb.Heavy OFF
# MAGIC RATE - (NULL is RECOMMENDED) Set the MIN Magic Rate to reach before switching to a different spell school. 
# SETTING TO A NUMBER WILL SPAM THE SAME SPELL UNTIL YOU REACH DESIRED LEARNINGRATE. Set to NULL to cycle through spells normally 
     var Magic.Rate NULL
# MAGIC SNAP CAST. Set to 0 for Full Aim. Set to desired number of seconds to pause for that many seconds before casting
     var MAGIC.SNAP 0
# CAMBRINTH CHARGES - Number of Times to Charge your cambrinth (or harness if Cambrinth is NULL) each time!
# RECOMMEND LEAVING THIS AT 1 - 2 AT MAX - THIS VARIABLE TIES INTO HOW SMART MANA CALCULATES MANA
     var CambrinthCharge 1
# OFFENSIVE SPELL MANA AMOUNTS - Set BASE MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Mana 15
     var Debilitation.Mana 15
     var Utility.Mana 15
     var Augmentation.Mana 15
     var Warding.Mana 15
     var Sorcery.Mana 15
# OFFENSIVE SPELL CAMBRINTH AMOUNTS - Set CAMBRINTH MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Camb 20
     var Debilitation.Camb 20
     var Utility.Camb 20
     var Augmentation.Camb 20
     var Warding.Camb 20
     var Sorcery.Camb 20
# USE HARNESS / CAMBRINTH FOR OFFENSE SPELLS (ON or OFF)
# TURN OFF TO SKIP HARNESS/CAMBRINTH COMPLETELY
     var Use.Cambrinth ON
# USE HARNESS / CAMBRINTH FOR BUFFS (ON or OFF)
     var Use.Cambrinth.Buffs ON
# CAMBRINTH ITEM for charging BUFFS/SPELLS (Set to NULL to not use)
     var Cambrinth cambrinth ring
     var Cyclic.Cambrinth NULL
# CAMBRINTH MANA AMOUNT FOR SPELLS - Amount of Mana to put in CAMBRINTH for Magic Tattoos / Harness for Cyclics when No Raw Chanelling feat
     var CambrinthMana 5
# CAMBRINTH MANA FOR Cylics - Amount of Mana to put in cambrinth for Cylics ONLY
     var CyclicCharge 10
# SLOW.CAST (ON or OFF) - OFF IS DEFAULT - Slow Cast ON will cast offensive spells about half as often as normal
# SLOW.CAST OFF (Default) will spam spells in between attacks as much as possible (mana permitting)
     var Slow.Cast OFF
# NO CAMBRINTH USE DURING TM / DEBIL SPELLS (ON or OFF)
# IF YOU SET THIS ON, SCRIPT WILL SKIP USING A CAMBRINTH FOR TM OR DEBIL SPELLS
     var NoCambTM OFF
# POWER PERCEIVE (Perceives every ~5 minutes)
     var POWERP ON

# RITUAL FOCUS ITEM (REQUIRED for RITUAL SPELLS - set Ritual to NULL to not use)
# Ritual.Container can be set to any Container - or set to NULL to wear it first
     var Ritual staff
     var Ritual.Container %Container
# SORCERY RITUAL FOCUS (Separate ritual focus for Sorcery IF NEEDED)
     var Sorcery.Focus NULL
# TM DAMAGE FOCUS ITEM - IF SET WILL USE TM FOCI MODE EVERY ~HOUR (set to NULL to not use)
     var TMFoci NULL
     var TMFoci.Container %Container
# USE SYMBIOSIS ON ATTACK SPELLS? (ON or OFF)
# ONLY USEFUL AT ~HIGHER RANKS~ OF MAGIC - ~NOT~ FOR NOOBS!!
     var Target.Symbiosis OFF
     var Utility.Symbiosis OFF
     var Augmentation.Symbiosis OFF
     var Warding.Symbiosis OFF
     var Sorcery.Symbiosis OFF
     var Debilitation.Symbiosis OFF
# USE SYMBIOSIS ON BUFFS? (ON or OFF) - FOR HIGHER RANKS ONLY
     var Symbiosis.Buffs OFF

# MAGIC TATTOO (Set to NULL or the FULL SPELLTIMER NAME i.e - IronConstitution / MajorPhysicalProtection) - Will use a Magic Tattoo every ~5-10 minutes
# FULL SPELLTIMER NAME MUST ALSO BE SET IN YOUR BUFFS OR SPELLS - USE SORCERY.CAMB (ABOVE) TO SET CAMB MANA FOR MAGIC TATTOO
     var Magic.Tattoo NULL
# MAGIC TATTOO CAMBRINTH/HARNESS MANA - Set the amount of Camb Mana you want to boost your tattoo with
     var Tattoo.Camb 30
# HEROIC TATTOO (ON or OFF) - ONLY FOR HEROIC TATTOOS! (Normal tattoos use Magic.Tattoo)
# VERY BASIC - WILL JUST INVOKE TATTOO / CAST ON A 1 HOUR COOLDOWN
     var Runic.Tattoo OFF

#########################################################################################
# GUILD SPECIFIC OPTIONS BELOW
# SET THE GUILD OPTIONS FOR THE CURRENT CHARACTER YOU ARE EDITING 
########################################################################################
########################################################################################
# NECROMANCER SETTINGS
# SET NECRO.HEAL ON TO USE NECRO HEALING - (Consume Flesh / Devour depending on skills)
     var Necro.Heal ON
## NECROHEAL CREATURE (SET A ~LOW LEVEL~ CREATURE TO KILL ~ONLY FOR DEDICATED HEALING PURPOSES~)
## IDEALLY SET THIS TO A CREATURE NEAR YOUR "HOME CITY" SO YOU DON'T HAVE FAR TO RUN FOR HEALING
     var NecroHeal.Critter GOBLIN SHARD
# SET NECRORITUAL ON TO PERFORM RITUALS IN COMBAT (Preserve/Harvest/Dissect/Butchery/etc)
     var NecroRitual ON
## FORSAKEN? (ON or OFF) - IS NECRO FORSAKEN?? IF ON - WILL AVOID TOWNS/SERVICES AS MUCH AS POSSIBLE!! 
## *Not fully tested/implemented-may not be perfect- but should avoid towns. May have issues REPAIRING ARMOR Unless USING FC* 
     var Forsaken OFF
## RISEN? (ON or OFF) - CREATES RISEN MINIONS IN COMBAT (CAREFUL - GENERATES DIVINE OUTRAGE!) 
     var Risen OFF
## QUICKEN EARTH - ON TO CHECK FOR AND SUMMON DIRT CONSTRUCTS EVERY ~5 MINUTES
     var QuickenEarth OFF
     var QE.Mana 10
     var CFB.Mana 10
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Necro.Cyclics |USOL|ROC
     var Necro.Cyclics.mana |5|4
## Necromancer ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Necro.Target.Spell ACS|VS
     var Necro.Debilitation.Spell HP
     var Necro.Utility.Spell GAF
     var Necro.Augmentation.Spell Obfuscation
     var Necro.Warding.Spell MAF
     var Necro.Sorcery.Spell MPP
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Necro.Buffs IVM|REI|ROC|CH
########################################################################################
########################################################################################
### BARD SETTINGS
# Cyclic Spell Setup
# YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST be set for each individual cyclics!
# YOU MUST SET cyclic.mana in an array to match!! 6 cyclic - 6 mana numbers
  # SET TO NULL/OFF IF NOT TRAINING CYCLICS - THERE ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Bard.Cyclics |AEWO|HODI|FAE|CARE|PYRE|GJ
     var Bard.Cyclics.mana |5|4|5|5|5|6
## Bard ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Bard.Target.Spell BOS
     var Bard.Debilitation.Spell DMRS
     var Bard.Utility.Spell AOT
     var Bard.Augmentation.Spell WILL
     var Bard.Warding.Spell REPR
     var Bard.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Bard.Buffs |MIS|HARM|RAGE|REPR
## BARD SCREAMS? ( Screams in combat every ~60 seconds) (ON or OFF)
     var Bard.Scream ON
## BARD WHISTLE (ON or OFF)
     var Bard.Whistle ON
########################################################################################
########################################################################################
# WARRIOR MAGE SETTINGS
## USE SUMMONING? (Will train Summoning every ~3 minutes)
     var Summoning ON
## ELEMENTAL ALIGNMENT - Element can be FIRE, WATER, ELECTRIC, AETHER, AIR or EARTH
     var element FIRE
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var WM.Cyclics |EE|AC|FR
     var WM.Cyclics.mana |5|4|5
## Warrior Mage ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var WM.Target.Spell FS|FB
     var WM.Debilitation.Spell EE|ALA
     var WM.Utility.Spell ETF
     var WM.Augmentation.Spell YS
     var WM.Warding.Spell ES
     var WM.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var WM.Buffs Ease|TW|SW|Zephyr|SUF|Ignite
## ~WEAPON SUMMONING LOGIC~
# SUMMON WEAPONS (ON or OFF)
     var SummonWeapons OFF
# SUMMON ELEMENT - Must set your WEAPON SUMMON ELEMENT ( Stone/Earth (Default) - Fiery/Fire (Fiery Infusions) - Icy/Ice (Icy Infusions) - or Electric (Shocking Infusions)
     var SummonElement FIRE
# ELEMENTAL CHARGE SPELL Must be *a spammable spell* of your chosen element. Will prep at minimum mana - if you want to prep at something else put a number after
     var ChargeSpell MOA
# SUMMON WEAPON TEMPLATE (0 or 1) - 0 = Default weapon, 1 = Turn weapon to other template
     var SummonTemplate 1
# SUMMON WEIGHT/DENSITY (0 - 2 to set weapon density - Must know QUICK INFUSIONS spell)
# 0 = Lightest Weight, 1 = DEFAULT, 2 = Heavier Weight
     var SummonWeight 1
# Set weapons you want to summon (ON or OFF) - Setting to ON will override your default weapon variables at top of script
     var SummonHT OFF
     var SummonLT OFF
     var SummonSE OFF
     var SummonLE OFF
     var SummonTHE ON
     var SummonSB OFF
     var SummonLB OFF
     var SummonTHB ON
     var SummonPolearms ON
     var SummonStaves ON
## INGOT (ON or OFF) Bump up tier of weapons - Must know REINFORCED INFUSIONS spell and have a rare metal ingot
     var WMIngot OFF
## SET INGOT STORAGE CONTAINER (Set to either a sigil ring or a specific container)
     var Ingot.Container sigil ring
########################################################################################
########################################################################################
# MOON MAGE SETTINGS
## MOON MAGE ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var MM.Target.Spell DO|Burn
     var MM.Debilitation.Spell Dazzle|MB
     var MM.Utility.Spell PG
     var MM.Augmentation.Spell AUS|ART
     var MM.Warding.Spell PSY
     var MM.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var MM.Cyclics |SHW
     var MM.Cyclics.mana |5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var MM.Buffs CV|Shadows|TS|COL|Shadowling|PSY
## OBSERVATION TRAINING - PREDICT TOOL IS ONLY USED FOR PREDICTION OUTSIDE OF COMBAT! TOOL MUST ALREADY BE BONDED!!
## Predict.tool can be - BONES, CHART, MIRROR, PRISM, BOWL, DECK or NULL to turn off.
     var Predict.Tool DECK
## Read The Ripples (RTR ON or OFF) - Will Perform a RTR routine (observe spam) during town run **MUST HAVE TELESCOPE!
     var RTR OFF
## Where you store your telescope * If any - defaults to your main Container if not set
     var Telescope.Container NULL
## OBSERVE IN COMBAT (ON or OFF) - If ON will do Astrology observations in Combat every couple minutes
     var Combat.Observe ON
########################################################################################
########################################################################################
# CLERIC SETTINGS
## CLERIC ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Cleric.Target.Spell FOU|FF
     var Cleric.Debilitation.Spell PS|Malediction
     var Cleric.Utility.Spell DR|BLESS
     var Cleric.Augmentation.Spell Benediction
     var Cleric.Warding.Spell MPP|SL
     var Cleric.Sorcery.Spell dazzle
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Cleric.Cyclics |HYH|GHS|REV|SA
     var Cleric.Cyclics.mana |15|15|15|15
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Cleric.Buffs OM|Auspice|SOS|POM|MAPP|PFE|YS
## ARE YOU USING OM ORB? (MUST BE SET IN BUFFS ABOVE!) SET MANA AMOUNT TO CAST OM / CHARGE ORB WITH EACH TIME
     var OM.Mana 25
## TYPE OF ORB YOU USE FOR OM - OPTIONS:( FIRULF, MERAUD or KEREN)
     var FavorOrb meraud
## BUFF SPELLS YOU WANT TO ALWAYS KEEP ACTIVE IN YOUR OM ORB (You can just set this to var OM.Buffs %Cleric.Buffs ) 
     var OM.Buffs PFE|POM|MPP|MAPP|SAP|SOL
## CLERIC RITUALS? (Perform CLERIC RITUALS during Town Runs/in Combat)
     var ClericRituals ON
### Prayer Mat - Set to NULL to not use or the noun of the mat/rug
     var PrayerMat mat
## HOLY WATER VESSEL - Set your container you use to store/collect holy water
     var HolyWater chalice
### COMBAT COMMUNES - (ON or OFF) - Set the COMMUNES you wish to perform while IN COMBAT 
     var Commune.Meraud ON
     var Commune.Truffenyi ON
     var Commune.Tamsine OFF
### FLINT KNIFE - Set a DEDICATED WEAPON/KNIFE to STRIKE FLINT for MAKING FIRE for RITUALS
### MUST be a METAL weapon you can use to STRIKE FLINT for fire
     var FlintKnife knife
## CLERIC ALIGNMENT GOD - Set a God to align to ( https://elanthipedia.play.net/Cleric_3.0#Alignment )
## CHOOSE A LIGHT/DARK/NEUTRAL GOD ONLY - Each Type will buff 2 magic skills and penalize 3 others
## BY DEFAULT SCRIPT WILL USE ~CHADATRU~ (Which buffs AUG/WARDING - Generally the most lacking magics for Clerics)
## Set a different god if you wish to buff other magics but BE CAREFUL!!! 
     var Alignment.God CHADATRU
########################################################################################
########################################################################################
# RANGER SETTINGS
## RANGER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Ranger.Target.Spell DEVI|STAMPEDE
     var Ranger.Debilitation.Spell DEADFALL|SWARM
     var Ranger.Utility.Spell EM|BLEND
     var Ranger.Augmentation.Spell SOTT
     var Ranger.Warding.Spell EY
     var Ranger.Sorcery.Spell ECRY
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Ranger.Cyclics |CS|BES
     var Ranger.Cyclics.mana |5|5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Ranger.Buffs Athleticism|STW|EY|WOTP|OATH|ETC|Bloodthorns
########################################################################################
########################################################################################
## PALADIN SETTINGS
## PALADIN ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Paladin.Target.Spell FST
     var Paladin.Debilitation.Spell Shatter
     var Paladin.Utility.Spell AS
     var Paladin.Augmentation.Spell RW
     var Paladin.Warding.Spell SP
     var Paladin.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Paladin.Cyclics |HOW|TR
     var Paladin.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Paladin.Buffs AA|Courage|HES|RW|SR|Clarity
## SET your HOLY WEAPON here (NULL to ignore) - Holy Weapon Name
     var HolyWeapon NULL
## Holy Icon (NULL TO NOT USE/IGNORE) - Set to the noun of your icon
     var HolyIcon NULL
########################################################################################
########################################################################################
## TRADER SETTINGS
## TRADER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Trader.Target.Spell CRD|STARCRASH
     var Trader.Debilitation.Spell FLUORESCE|AVA
     var Trader.Utility.Spell NOUMENA
     var Trader.Augmentation.Spell BLUR
     var Trader.Warding.Spell IR
     var Trader.Sorcery.Spell MPP
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Trader.Cyclics |ARS|SOV
     var Trader.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Trader.Buffs |TRC|Blur|LGV|NONCHALANCE
########################################################################################
########################################################################################
# EMPATH SETTINGS
## EMPATH ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Empath.Target.Spell PARALYSIS
     var Empath.Debilitation.Spell LETHARGY|NB
     var Empath.Utility.Spell GS|HEAL
     var Empath.Augmentation.Spell REFRESH
     var Empath.Warding.Spell IC|POP
     var Empath.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Empath.Cyclics |AD|REGEN
     var Empath.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Empath.Buffs  |AGS|BS|IC|GOL|MEF|TRANQUILITY
## GAURDIAN SPIRIT? (ON or OFF) - ON will keep up Guardian Spirit while in Combat
     var Guardian.Spirit ON
## CUSTOM GUARDIAN SPIRIT (ON or OFF) - If ON - will "cast custom" instead of casting normal
     var Guardian.Custom OFF
## ATTACK CONSTRUCTS ONLY? (ON or OFF) - ON will ONLY attack constructs (unless using Absolution vs unded). OFF will attack everything
## WARNING - SETTING TO OFF WILL CAUSE EMPATHIC SHOCK!!!!
     var Construct.Only ON
## USE MANIPULATE FRIENDSHIP (ON or OFF) - ON will attempt to manipulate non-construct creatures
     var Manipulate ON
## ESCAPE COMBAT WHEN EMPATHY REACHES 0? (ON or OFF) - If Empathy LearningRate reaches 0 during combat, will go on town run
     var Empathy.Escape OFF
## EMPATH PERCEIVE HEALTH WALKS (ON or OFF) - If ON - Will go on perceive health walks around town during town run
     var Empath.Walk ON
## EMPATH UNITY LINK (ON or OFF) - FOR EMPATH HEALBOT MODE - DO YOU KNOW UNITY LINK? MUST BE 70+ CIRCLE AND 380+ EMPATHY
     var Unity ON
## TEACH CLASS (FOR HEALBOT MODE) - SET THE SKILL OF THE CLASS YOU WANT TO TEACH
     var TeachClass TM
## BLACKLIST! (FOR HEALBOT MODE) - SET THE NAMES OF THE PEOPLE TO BLACKLIST FROM HEALING SERVICES!
## MUST BE IN AN ARRAY - var Blacklist Bob|Frank|Dave
     var Blacklist NULL
########################################################################################
########################################################################################
# THIEF SETTINGS
# AMBUSH TRAINING (Use AMBUSH MOVES in COMBAT - STUN/CLOUT/SLASH)
     var Ambush ON
# SELECT KHRI TO USE (Set as many ON / OFF as you want )
# IT WILL ONLY USE AS MANY KHRI AS YOU CAN HANDLE AT ONCE, PRIORITIZING THE MOST IMPORTANT DEPENDING ON SCENARIO)
     var khriSAGACITY ON
     var khriSTEADY ON
     var khriSTRIKE ON
     var khriFOCUS ON
     var khriELUSION ON
     var khriENDURE ON
     var khriAVOIDANCE ON
     var khriADAPTATION ON
     var khriPROWESS ON
     var khriHASTEN ON
     var khriHARRIER OFF
     var khriSERENITY OFF
     var khriSIGHT ON
     var khriFLIGHT ON
     var khriCALM OFF
     var khriGUILE OFF
     var khriDARKEN ON
     var khriDAMPEN ON
     var khriSHADOWSTEP ON
     var khriELIMINATE OFF
     var khriTERRIFY OFF
     var khriFRIGHT OFF
     var khriINTIMIDATE OFF
     var khriPLUNDER ON
     var khriSAFE OFF
     var khriEVANESCENCE OFF
     var khriCREDENCE OFF
     var khriCUNNING OFF
# USE KHRI DURING TOWN RUN? (ON or OFF) - Turn OFF to Skip using Khri during town run - for Sanowret use
     var Khri.Town ON
########################################################################################
########################################################################################
# BARBARIAN SETTINGS
# USE WHIRLWIND?
     var Whirlwind ON
# USE DUAL WIELD? (ON or OFF) - Dual wield requires 450+ in the weapon
     var DualWield ON
# EXPERTISE COMBOS? (ON or OFF) - Does Barb Expertise Combos (and helps generate IR)
     var Expertise ON
# Set which Forms you want to use (ON or OFF)
# Auto-turns some forms on/off depending on what skills you are training
     var barbEagle ON
     var barbBadger ON
     var barbPanther ON
     var barbPiranha ON
     var barbDragon ON
     var barbMonkey ON
     var barbTurtle OFF
     var barbOwl OFF
     var barbBear ON
     var barbBuffalo OFF
     var barbPython ON
     var barbSwan ON
     var barbToad OFF
     var barbWolverine OFF
# ROARS to use (will only use one)
     var roarEmbrace OFF
     var roarEverild ON
     var roarWail OFF
     var roarScreech OFF
     var roarShriek OFF
     var roarAnger ON
     var roarKuniyo ON
# BERSERKS to use
     var zerkHurricane OFF
     var zerkBlizzard ON
     var zerkFamine ON
     var zerkAvalanche ON
     var zerkTsunami OFF
     var zerkWildfire OFF
     var zerkEarthquake OFF
     var zerkTornado OFF
     var zerkFlashflood ON
     var zerkLandslide ON
     var zerkCyclone OFF
     var zerkDrought OFF
# MEDITATIONS to use (ON or OFF) - WILL ONLY WORK FOR HIGHER LEVEL BARBS
     var medContemplation ON
     var medTenacity ON
     var medSerenity ON
### END OF CHARACTER 1 VARIABLES
### STOP EDITING HERE ~~~ END OF CHARACTER 1 VARIABLES ##########
####################################################################################
####################################################################################
echo **** LOADED %CHARACTER1 VARIABLES
goto END.OF.VARS
}

CHARACTER2:
#########################################################################################################
#########################################################################################################
## CHARACTER 2 VARIABLES
## *CHARACTER2 VARIABLES BLOCK BELOW
if matchre("$charactername", "(?i)%CHARACTER2") then
#########################################################################################################
{
### GENIE LAYOUT - SET THE GENIE LAYOUT YOU WANT THIS CHARACTER TO USE - MUST EXACTLY MATCH THE LAYOUT NAME IN GENIE!
### Example: var GENIE.LAYOUT Shroom.layout - TO SAVE A LAYOUT IN GENIE SET IT UP HOW YOU LIKE AND CLICK LAYOUT > SAVE LAYOUT AS > NAME IT HOW YOU WANT
### IF YOU LEAVE THIS SET TO NULL THEN IT WILL JUST USE THE DEFAULT LAYOUT THAT IS SET (default.layout) 
     var GENIE.LAYOUT RaidbossTF.layout
### HEAL.CITY ( NULL or CITY NAME (CROSS/LETH/HIB/RIVER/THEREN/SHARD) - Will run to this town for HEALING no matter where you are
     var HEAL.CITY NULL
### HOME CITY (NULL or CITY NAME) - Will attempt to return to your home city after a heal run (if not already in that city) ONLY SUPPORTS MAINLAND CITIES
     var HOME.CITY NULL
### SAFE ROOM (set to NULL to ignore) ~MUST~ TIE INTO HOME.CITY ABOVE! THE ROOM ID YOU WANT TO SCRIPT IN DURING TOWN RUN - MUST BE VALID ROOMID IN YOUR HOME CITY!
### WARNING!: IF YOU DO NOT SET BOTH HOME.CITY AND SAFE.ROOM CORRECTLY YOU ~WILL~ RUN INTO ERRORS - LEAVE BOTH AT NULL TO LET SCRIPT LOGIC HANDLE IT
     var SAFE.ROOM NULL
### AUTO-PROGRESS? (ON or OFF) - ON WILL CHOOSE YOUR COMBAT CREATURE AUTOMATICALLY BASED ON YOUR RANKS - YOU DO NOT NEED TO SET IT! OVERRIDES COMBAT.CRITTER VARIABLE
     var AUTO.PROGRESS ON
### AUTO-PROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var PROGRESS.TYPE CLERIC
### COMBAT CRITTER - ONLY USED WITH AUTO.PROGRESS OFF - MUST BE A VALID CREATURE NAME! USE FULL NAME OR 1/2/3 TO SPECIFY TIERS ie SNOW GOBLIN 2
     var COMBAT.CRITTER HEIROPHANT
### ALTERNATE CRITTER - PICK A ALTERNATE CRITTER TO HUNT - IF YOUR MAIN HUNTING GROUND IS FULL!
     var ALTERNATE.CRITTER MUSK HOG
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var PRIORITY.ROOMS NULL
### XP TRACKER RESET ON SCRIPT STARTUP - (ON or OFF) - RESETS EXP TRACKER TRACKING TIME ON INITIAL LAUNCH OF SCRIPT ONLY
     var XP.RESET ON

### GUI OPTIONS ARE RECOMMENDED TO LEAVE OFF COMPLETELY - THESE OPTIONS ONLY HERE BY SPECIAL REQUEST - WILL BE ANNOYING IF YOU TURN IT ON
### CRITTER.GUI (ON or OFF) - OFF by default - CREATES CRITTER GUI WINDOW - MUST MANUALLY CLICK TO CHOOSE YOUR COMBAT CRITTER BASED ON PROVINCE / SKILL / PREFERENCE
     var CRITTER.GUI OFF
### WEAPON.GUI (ON or OFF) - OFF by default - CREATES WEAPON GUI WINDOW - CHOOSE YOUR WEAPONS FOR THAT RUN *IF YOU HAVE AN ARRAY OF WEAPONS SET IN A SINGLE WEAPON VARIABLE
     var WEAPON.GUI OFF

# FRIEND LIST (People you will hunt with) Put your friends names in place of these. Ex. Bob|Fred|George
# Can just put your name in here or make it blank and it will only find empty rooms.
     var FRIENDS %ALLCHARACTERS|%GLOBALFRIENDS

##############################################################
# WEAPON / CONTAINERS / AMMO SETTINGS - BE VERY SPECIFIC! 
##############################################################

# CONTAINERS - MANDATORY! - SET YOUR MAIN ~3-4~ LARGEST CONTAINERS!
# BE SPECIFIC WITH CONTAINER NAMES - USE 2 WORDS WHENEVER POSSIBLE!
     var Container bottomless bag
     var Container.Boxes carryall
     var Container.Backup lootsack
     var Container.Crafting satchel
# SHEATH CONTAINER IS FOR SUPER LONG ITEMS - CAN BE ANY LARGE CONTAINER - NOT NECCESARY TO SET 
     var Container.Sheath weapon harness
# AMMO CONTAINER FOR STORING AMMO - ARROWS/BOLTS/ROCKS - BACKUP CONTAINER IS "OVERFLOW" FOR EXTRA AMMO
     var Container.Ammo quiver
     var Container.Ammo.Backup NULL
## CONTAINER.GEMPOUCH - VERY IMPORTANT! - ~MUST BE A SEPARATE CONTAINER~ FROM OTHER BAGS! SMALL/MEDIUM-SIZE CONTAINER IS FINE
## SPECIAL CONTAINER! SCRIPT WILL KEEP THIS CLOSED AT ALL TIMES AND ~ONLY USE IT FOR STORING FULL GEM POUCHES!~
## CONTAINER.GEMPOUCH MUST BE A ~CLOSABLE~ CONTAINER TO STORE ~FULL~ GEM POUCHES IN 
## AGAIN - DO NOT SHARE THIS CONTAINER WITH ~ANY OTHER CONTAINERS~ (except Repair Pouch Container) 
     var Container.GemPouch thigh bag
# Container.EmptyPouch is for storing EMPTY GEM POUCHES (This can be ANY container EXCEPT for Container.GemPouch )
     var Container.EmptyPouch skull
# DIRT CONTAINER - For storing dirt for various use (ONLY used by Thieves/Clerics/Necros)
     var Container.Dirt lootsack
## MISC SHEATH OPTIONS (Storing specific weapons in specific containers - toolstraps/bandoliers/harnesses etc) - SET TO NULL/OFF TO NOT USE
## SET THE SHEATH NAME UNDER SHEATH.1 - SET THE WEAPONS YOU WANT TO USE ON EACH SHEATH UNDERNEATH IN AN ARRAY ex:
## var Sheath.1 toolbelt
## var Sheath.1.Weapons sabre|axe|broadsword
     var Sheath.1 weapon harness
     var Sheath.1.Weapons spear|halberd|quarterstaff|bastard sword|maul|greatsword|katana
     var Sheath.2 hip pouch
     var Sheath.2.Weapons frying pan|sledgehammer|throwing hammer|sickle
     var Sheath.3 war belt
     var Sheath.3.Weapons greathammer|khuj|mace
     var Sheath.4 satchel
     var Sheath.4.Weapons arbalest|battle bow|sling
     var Sheath.5 NULL
     var Sheath.5.Weapons NULL
     var Sheath.6 NULL
     var Sheath.6.Weapons NULL
     
## WEAR WEAPONS (Set an array of weapons/shields you want the script to try and wear first before stowing)
     var Wear.Weapons NULL

## SMART.WEAPONS - ON TO TRAIN WEAPONS FROM LOWEST SKILL TO HIGHEST. "OFF" WILL GO IN A LINEAR ORDER (DEFAULT: ON)
## ON WILL DYNAMICALLY TRAIN TO ALWAYS MAKE SURE THE LOWEST SKILLED WEAPON IS TRAINED FIRST 
     var SMART.WEAPONS ON
     
## WEAPON SETTINGS - BE VERY SPECIFIC SETTING WEAPONS ! USE TWO WORDS WHENEVER POSSIBLE!
## SET ALL YOUR WEAPONS BELOW - MUST ~EXACTLY MATCH THE ITEM DESCRIPTION WHEN IN HANDS~! (GLANCE at it in your hands to get correct description) 
## BE SPECIFIC WHEN SETTING WEAPONS!! USE 2 WORDS WHEN POSSIBLE! TO TURN A WEAPON SKILL ~OFF~ SET IT TO - NULL
     var SEWEAPON sickle
     var LEWEAPON katana
     var THEWEAPON greatsword
     var SBWEAPON mace
     var LBWEAPON sledgehammer
     var THBWEAPON kertig maul
     var STAVES quarterstaff
     var POLEARMS glaes halberd
     var RANGED.BOW battle bow
     var RANGED.CROSSBOW arbalest
     var RANGED.SLING sling
     var LTWEAPON frying pan
     var HTWEAPON throwing hammer
# MAIN OFFHAND WEAPON TRAINING - MELEE ONLY (MUST BE A LIGHT/MEDIUM WEAPON - HEAVY or 2HANDED WEAPONS WONT WORK!!)
     var OHWEAPON frying pan
# ALTERNATE OFFHAND WEAPONS (For Backtraining/Dual Training weapons while training other Weapons)
# ~MUST~ BE LIGHT/MEDIUM WEIGHT WEAPON! CANNOT USE HEAVY or 2Handed Weapons! (Unless Barb) (SET TO NULL/OFF TO NOT USE)
     var ALTWEAPON1 frying pan
     var ALTWEAPON2 NULL
     var ALTWEAPON3 NULL
## BRAWLWEAPON (DEFAULT: $charactername - Set to NULL to skip brawling)
     var BRAWLWEAPON $charactername
     #var BRAWLWEAPON $charactername
## Backstab/Ambush Weapon (Thief Only)
     var BSWEAPON mirror blade

# AMMO SETTINGS - DO NOT REMOVE THE { } BRACKETS!!!
     if (!$AMMOSWAP) then
{
     var XbowAmmo blunt bolt
     var BowAmmo blunt arrow
     var SlingAmmo smooth rock
}

## ARMOR CHECK (ON or OFF) - Turn this OFF if you want the script to SKIP checking your armor at the beginning
## If ON - at the beginning, script will remove any armor/fluff you are wearing, and then put on all the armor you have set below. This ensures you have the correct armor on.
     var ARMOR.CHECK ON
## SET YOUR SHIELD - ABSOLUTELY 100% MANDATORY! RECOMMEND AN ARM-WORN SHIELD
     var MyShield shield
## ARM WORN SHIELD? (ON OR OFF) - I RECOMMEND ALWAYS USING AN ARM WORN / SMALL SHIELD - MAKES LIFE MUCH EASIER
     var ArmWorn ON
## MAIN ARMOR TO CHECK - PRIMARY COMBAT (Set to NULL to IGNORE a slot)
## YOU MUST SET ALL YOUR ARMOR BELOW - IT DOESN'T MATTER WHICH ARMOR SLOT YOU USE - THE SCRIPT DOESN'T CARE
     var CHEST.ARMOR ironwood shirt
     var FACE.ARMOR NULL
     var HEAD.ARMOR brigandine balaclava
     var ABDOMEN.ARMOR NULL
     var BACK.ARMOR NULL
     var ARM.ARMOR NULL
     var HAND.ARMOR mail gloves
     var LEG.ARMOR light greaves
     var KNUCKLE knuckle
     var PARRYSTICK parry stick

## PRIORITY WEAPONS - WEAPON SKILLS TO KEEP MOVING ~ALWAYS~ - PRIORITIZE THESE WEAPON SKILLS OVER ALL OTHERS IF THEY ~EVER~ DROP TO 0/34
## MUST BE SET IN AN ARRAY - THE EXACT SAME AS GENIE EXP VARIABLE FORMAT ie: var Priority.Weapons Medium_Edged|Twohanded_Edged
## WARNING!! DO NOT SET PRIORITY WEAPONS UNLESS YOU WANT THOSE SKILL(S) TO TAKE PRIORITY OVER ~ALL~ OTHERS! ~WILL~ CAUSE UNEVEN RANKS OVER TIME!!
## THIS IS MAINLY ONLY USEFUL FOR SHORT PERIODS - FOR POWER LEVELING A SINGLE WEAPON SKILL FOR EXAMPLE - RECOMMEND NULL UNLESS YOU KNOW WHAT YOU ARE DOING
     var Priority.Weapons NULL
     
## TRAIN LOWEST (ON or OFF) - ON WILL ALWAYS TRAIN W/ YOUR LOWEST RANK & LOWEST LEARNINGRATE WEAPON AT EVERY WEAPON SWAP 
## THIS EFFECTIVELY ENSURES THAT ALL YOUR WEAPON SKILLS WILL TRAIN AND STAY AT THE ~EXACT SAME RANKS~ - ESPECIALLY IF USED FROM THE START
## NOTE! TRAINLOWEST ON - WILL ALTER THE DEFAULT WEAPON TRAINING ORDER - BYPASSES THE SET ORDER TO DYNAMICALLY TRAIN WEAPONS 
     var TrainLowest OFF

# MAX LEARNING RATE - FOR EACH WEAPON SKILL (WILL SWITCH WEAPONS ONCE REACHING THIS RATE *MAX 33) *SET TO 35 TO IGNORE LEARNINGRATE 
     var MAX.LEARNINGRATE 12
# LEARNING RATE INCREASE - AFTER FULL WEAPON LOOP *OF ALL WEAPONS* - INCREASE THE MAX.LEARNINGRATE BY THIS MUCH
     var LEARNING.INCREASE 4
# MAX TIME PER WEAPON - SET THE MAXIMUM TIME (IN SECONDS) TO TRAIN EACH WEAPON SKILL - BEFORE SWITCHING WEAPONS
# SETTING THIS TOO HIGH MAY CAUSE SUBOPTIMAL TRAINING - RECOMMEND AROUND ~300-500 (~5-8 minutes per weapon)
     var MAX.TIME 250
# MAXIMUM TOTAL COMBAT TRAINING TIME - SET THE MAX TIME (IN SECONDS) TO STAY IN ~COMBAT~ BEFORE ESCAPING TO TOWN ( 3600 SECONDS = 1 HOUR )
# SET VAR MAX.TRAIN 0 - TO LOOP COMBAT FOREVER ( *UNTIL IT ESCAPES DUE TO BEING TOO HURT / BAGS TOO FULL / BURDEN TOO HIGH )
     var MAX.TRAIN 4500
     
# STANCE PER WEAPON (Set NULL to use default - Or SHIELD/PARRY/EVASION/CUSTOM TO USE THAT PARTICULAR STANCE FOR A PARTICULAR WEAPON)
## NOTE SCRIPT IS ALREADY ADVANCED IN CHANGING STANCES DEPENDING ON WEAPON BEING TRAINED - NULL IS FINE FOR MOST PURPOSES
     var SE.STANCE NULL
     var LE.STANCE NULL
     var THE.STANCE NULL
     var SB.STANCE NULL
     var LB.STANCE NULL
     var THB.STANCE NULL
     var POLEARMS.STANCE NULL
     var STAVES.STANCE NULL
     var BOW.STANCE NULL
     var CROSSBOW.STANCE NULL
     var SLINGS.STANCE NULL
     var LT.STANCE NULL
     var HT.STANCE NULL
     var OH.STANCE NULL
     var BRAWL.STANCE NULL

## BACKTRAIN (ON or OFF) - ON FOR SETTING A SEPARATE BACKTRAIN ROUTINE
     var BACKTRAIN OFF
## BACKTRAIN AUTO PROGRESS (ON or OFF) - Turning this ON will automatically set the creature to hunt, based on your BACKTRAIN WEAPON SKILLS
## TURN THIS ~OFF~ TO SET THE BACKTRAIN CREATURE MANUALLY (BELOW)
     var BACKTRAIN.AUTOPROGRESS ON
### BACKTRAIN AUTOPROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var BACKTRAIN.PROGRESS.TYPE NORMAL
## BACKTRAIN CREATURE - Must specify the creature to hunt if BACKTRAIN.AUTOPROGRESS is OFF
     var BACKTRAIN.CRITTER ICE ARCHON
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var BACKTRAIN.PRIORITY.ROOMS NULL
## BACKTRAIN TIME (in SECONDS - Total time to Backtrain)
     var BACKTRAIN.TIME 1200
## BACKTRAIN MAGIC (ON or OFF) IF OFF - WILL SKIP USING ANY OFFENSIVE SPELLS PERIOD WHILE BACKTRAINING - WILL ONLY DO BUFFS
     var BACKTRAIN.MAGIC OFF
## BACKTRAIN TM/DEBIL SPELLS (ON or OFF) IF OFF - WILL SKIP USING ANY TM / DEBIL SPELL DURING BACKTRANING (UNLESS ITS A TATTOO)
     var BACKTRAIN.TM OFF
## BACKTRAIN WEAPONS - Set every weapon you wish to backtrain (NULL to turn off)
     var BACKTRAIN.SE NULL
     var BACKTRAIN.LE NULL
     var BACKTRAIN.THE NULL
     var BACKTRAIN.SB NULL
     var BACKTRAIN.LB NULL
     var BACKTRAIN.THB NULL
     var BACKTRAIN.STAVES NULL
     var BACKTRAIN.POLEARMS NULL
     var BACKTRAIN.BOW NULL
     var BACKTRAIN.CROSSBOW NULL
     var BACKTRAIN.SLING NULL
     var BACKTRAIN.LT NULL
     var BACKTRAIN.HT NULL
     var BACKTRAIN.BRAWL NULL
     var BACKTRAIN.OH NULL
     var BACKTRAIN.BS NULL
## BACKTRAIN STEALTH (OFF or ON)
     var BACKTRAIN.STEALTH ON
## BACKTRAINING LOOTING OPTIONS (ON or OFF)
     var B.Loot.Gems ON
     var B.Loot.Boxes OFF
     var B.Loot.Metals ON
     var B.Loot.Scrolls ON
     var B.Loot.Collectibles OFF
     var B.Loot.SpiderParts OFF
## BACKTRAIN LOOTING MODE ( treasure / boxes / goods / equipment )
     var B.Loot.Option goods
## BACKTRAIN ARMOR (ARMOR ONLY FOR BACKTRAIN ROUTINE) (Set to NULL to not check a piece)
     var B.CHEST.ARMOR NULL
     var B.FACE.ARMOR NULL
     var B.HEAD.ARMOR NULL
     var B.ABDOMEN.ARMOR NULL
     var B.BACK.ARMOR NULL
     var B.ARM.ARMOR NULL
     var B.HAND.ARMOR NULL
     var B.LEG.ARMOR NULL

##############################################################
### COMBAT GENERAL SETTINGS
##############################################################

## GEM POUCH DESCRIPTION - DR IS TRICKY WITH GEM POUCHES!! BE SPECIFIC - use "<color> pouch" only! 
## **RECOMMEND DUMPING ALL POUCHES AND GET NEW ONES FROM GEM SHOP ON FIRST SETUP**
## WHEN ASKING FOR NEW GEM POUCHES, "ASK NPC FOR <COLOR> POUCH" - ~DO NOT 'ASK FOR GEM POUCH' OR just 'POUCH'~ - JUST 'ASK <NPC> FOR BLACK POUCH'
## Then Set the var to the 'color' pouch you have. ie var gemPouch black pouch
     var gemPouch black pouch
# TIE GEM POUCHES? (ON or OFF) 
# TIE POUCHES FOR MORE STORAGE/LESS INVENTORY SPACE USE - but have to sell the FULL TIED POUCHES AT SPECIAL SHOPS or get TRADER to sell them!
# IF HUNTING IN SHARD OR ROSSMAN - NO WORRY AS SCRIPT SELLS TIED POUCHES IN THOSE GEM SHOPS. IF hunting in XING/ISLANDS will have to get Trader to sell pouches.
     var TiePouch OFF
# WORN GEM POUCH? (ON or OFF) (OFF will STOW your gem pouch / ON will wear it )
     var Gempouch.Worn OFF

## RESTOCK AMMO? (ON or OFF) *SCRIPT WILL AUTOMATICALLY CHECK IF YOU RUN OUT OF AMMO AND ATTEMPT TO RESTOCK
     var AmmoStock ON
# Skinning Knife Name (Mandatory if not a worn knife)
     var Skinning.Knife knife
# BELT/WRIST/ANKLE ~WORN~ SKINNING KNIFE? (ON or OFF)
     var BeltKnife ON
#### COMBAT OPTIONS ####
# OFFHAND THROWING - (ON or OFF) SET TO ON IF YOU WANT TO ROTATE RIGHT/LEFT HANDS WHILE THROWING LT/HT
     var OffhandThrow ON
# THROWING TYPE (LOB, THROW or HURL) *LOB will NEVER stick / less damage - HURL ALWAYS STICKS/ max damage. THROW is inbetween
## IF YOU USE A SHARP THROWING WEAPON (LIKE SPEAR) ALWAYS USE LOB! THROW WILL STICK WITH A POINTY WEAPON!
## LOB IS THE SAFEST - LOB NEVER STICKS! - THROW IS SAFE ~IF USING A BLUNT THROWN WEAPON~ - HURL ALWAYS STICKS - AVOID HURL 
     var ThrowType lob
# BONDED THROWING WEAPONS? (ON or OFF) - Will use INVOKE to retrieve thrown weapon
     var Bonded OFF
# ROAMING (ON or OFF) - Will ROAM around to different critter rooms if it doesn't find a creature during bored routine
     var Roaming ON
# USE WEAK ATTACKS (ON or OFF) - Will use WEAK attacks for melee training (good for backtraining or preserving fatigue/balance)
     var WeakAttack OFF
# AIM ACTIONS (Set an array of actions) - ACTIONS TO PERFORM WHILE WAITING FOR FULL AIM (WITH RANGED/SPELLS) Separate with |
     var AimActions bob|attack|attack left
# TRAIN STEALTH? TRAIN STEALTH DURING MELEE / THROWN / BRAWLING ROUTINES
     var TrainStealth ON
## LOOT MONSTERS? (ON or OFF) - LOOT MONSTERS?
## OFF WILL SKIP LOOTING ALL MONSTERS ~PERIOD~ AND LET THEM ROT
     var Loot.Monsters ON
## LOOT OPTION TO USE - TREASURE / BOXES / EQUIPMENT/ GOODS or ALL
     var Loot.Option GOODS
## LOOTING OPTIONS (ON or OFF) - LOOT OPTIONS FOR MAIN COMBAT
     var Loot.Gems ON
     var Loot.Boxes ON
     var Loot.Metals ON
     var Loot.Scrolls ON
     var Loot.Collectibles OFF
     var Loot.SpiderParts OFF
# MAX BOXES (Set a number) - MAX number of BOXES to pick up before turning Box looting off for that run
     var Max.Boxes 25
# DISSECT (ON or OFF) - DISSECT mobs for First Aid training in Combat (Alternates with SKINNING depending on Learning Rates)
     var Dissect ON
# SKINNING OPTIONS (ON or OFF)
# SKIN ON but BUNDLE OFF will skin but DROP all skins. SKIN collecting only supported with bundles ON!
     var Skin ON
     var Bundle ON
# TIE BUNDLES (ON or OFF) (Turns on automatically when F2P is ON) - LOWER ITEM COUNT BY TYING UP YOUR BUNDLES
     var TieBundle ON
# BUNDLE LOCATION (SET to NULL to use ANY open location or set a preferred location (shoulder / waist / back / belt / around shoulder / over shoulder)
     var BundleLocation NULL
# ArrangeTarget (SET TO SKIN, BONE or PART - or NULL to skip arrange)
## Set ArrangeTarget to SKIN/BONE/PART to Arrange one time
## Set ArrangeALL to ON to arrange max times
     var ArrangeTarget SKIN
     var ArrangeAll OFF
## ArrangeAlways (ON or OFF) - Set ON to ALWAYS arrange regardless of skinning learningrate. OFF will SKIP ARRANGING when Skinning learning is locked
     var ArrangeAlways OFF
# MAX BUNDLE SIZE - Max amount of skins to keep in bundle before creating a new bundle (DEFAULT: 30  MAX: 200)
     var MaxBundle 40
# Set SNIPE to ON to use SNIPE (THIEF/RANGER/NECRO ONLY)
     var Snipe ON
# Set POACH to ON to use POACH instead of SNIPE (SNIPE overrides this setting if SNIPE is ON - TURN SNIPE OFF TO USE THIS)
     var Poach OFF
# RANGED AIM PAUSE. Set to 0 for a Full Aim. Set number of seconds to pause that many seconds before firing
     var SNAP.FIRE 6
# RETREAT WHILE USING RANGED WEAPONS/BUFFING? (ON or OFF) - Will RETREAT to stay at ranged when using ranged weapons
     var Retreat OFF
## DANCE / COUNT Critters - Set min number of critters to "dance" with before you start killing. 
## Leave Dance.Count 0 to kill EVERYTHING. Set 1 to dance with 1 creature until a 2nd comes in, etc. If set to 1 will ALWAYS leave 1 creature in your room.
     var Dance.Count 0
## TACTICS TRAINING (ON OR OFF) - Train TACTICS in Combat
     var Tactics ON
# APPRAISE CREATURES - (ON or OFF) to APPRAISE ALL CREATURES
     var APPRAISE ON
# HUNT OPTION (HUNT every ~75 seconds unless perception locked)
     var HUNT ON
## APPRAISE ITEMS WHEN NO CRITTERS IN ROOM? (ON or OFF)
     var APP.ITEMS ON
## ITEMS TO APPRAISE (Set to NULL to not use) SET YOUR WORN ITEMS TO QUICK APPRAISE 
     var app1 knife
     var app2 balaclava
     var app3 shirt
## SANOWRET CRYSTAL? (ON or OFF) - ON will exhale crystal every ~100 seconds *IF CONCENTRATION ALLOWS
     var Crystal OFF
## USE SANORWRET CRYSTALS IN COMBAT? (ON or OFF) - ON will use Sanowrets in combat (Turning ON WILL effect concentration and hinder spell casting - not recommended for most)
     var SanowretCombat OFF
## ZILLS? (ON or OFF) - FOR WORN INSTRUMENTS - ON will play Zills during certain times (Repairing armor, collecting, etc)
     var Zills ON
## Zill name ( zills / cowbell / etc )
     var Zill.Name zills
# F2P CHARACTER (ON or OFF) - If set to ON - Script will escape combat and go to town run when you get an inventory count warning
     var F2P OFF
# BIOMECHANICAL TARANTULA? (ON or OFF) - IF ON - Will pick a (semi-)random near locked skill to drain every 10 minutes while in combat
     var Tarantula OFF
     var Tarantula.Name tarantula
## TARANTULA SKILLS TO CHECK - SET AN ARRAY OF SKILLS TO CHECK AGAINST FOR TARANTULA DRAIN
## MUST EXACTLY MATCH THE GENIE VARIABLE NAMES! THESE ARE THE SKILLS TARANTULA WILL CHECK FOR EACH SCHOOL
     var Magic.skills Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Arcana
     var Armor.skills Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor
     var Survival.skills Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing
     var Weapons.skills Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow
     var Lore.skills Appraisal|Tactics|Performance
# WARHORN? (ON or OFF) - For Barbarians and Bards only.
     var WarHorn OFF
## WAND SUPPORT (NULL to NOT use) (MEF wand / WoW wand / WoTP wand etc.) Set up to 2 sets of wands to use! Must use actual verb of wand!
## CAN SET AN ARRAY OF WANDS FOR EACH VAR ex- var Wand1 bloodwood branch|oaken staff|crystal
     var Wand1 NULL
     var Wand2 NULL
## WAND CONTAINERS *Must use 2 different containers to store Wands if using 2 identical named wands)
     var Wand1.Container belt
     var Wand2.Container cloak
## Wand Weapon - (NULL or WEAPON NAME) SET A MELEE WEAPON TO BUFF WHEN USING WANDS WITH A WEAPON BUFF
     var WandWeapon NULL
## EGG SUPPORT (ON or OFF)*Uses the HE Gift Egg in Combat every ~15 minutes to invoke more mobs
     var EGG OFF
## ASTROLABE (ON or OFF) - Uses an Astrolabe every 30 mins if ON (Will rotate if you use 2)
     var ASTROLABE OFF
## Set the name of the astrolabes - (2 words ONLY i.e - ornate astrolabe, twisted astrolabe)
     var ASTROLABE1 NULL
     var ASTROLABE2 NULL
     var Astro1.Container NULL
     var Astro2.Container NULL
## ORB RUB IN COMBAT (var Orb.Rub ON or OFF) - TURN ON TO RUB FAVOR ORB IN COMBAT EVERY ~40 MINUTES
## *NOTE THAT SCRIPT AUTOMATICALLY RUBS ORB ~ONE TIME~ EVERY FULL LOOP OF SCRIPT REGARDLESS OF THIS VARIABLE
     var Orb.Rub OFF
####################################################################################################
# ARMOR SWAP - (ON or OFF) - SPECIAL ARMOR SWAPPING ROUTINE FOR HELMS ONLY
# WILL SWAP OUT A SINGLE PIECE OF PLATE/BRIG/CHAIN/LIGHT HELM EVERY ~5 MINUTES IN COMBAT
     var Armor.Swap OFF
# IF Armor.Swap is ON - THEN ALL THE ARMORS BELOW MUST BE SET CORRECTLY!
# SET EVERY PIECE OF ARMOR TO SWAP BELOW, MUST SET AN ARMOR PIECE FOR ALL FOUR TYPES - TWO WORDS ONLY!
# ONE PIECE SHOULD MATCH YOUR MAIN ARMOR HELM
     var Light_Armor.Helm steelsilk balaclava
     var Chain_Armor.Helm chain balaclava
     var Brigandine.Helm brigandine balaclava
     var Plate_Armor.Helm NULL
####################################################################################################
# HEAVY ARMOR REMOVAL - (ON or OFF) - ON will take off plate/brig/chain armor before backstab/stealth routines
# Generally only needed for noobs with less then ~200 ranks in armors
     var Armor.Noob OFF
# Set Plate/Brig/Chain pieces here (USE EXACT SYNTAX) (If no armor to remove set to NULL)
     var PLATE1 gauntlet
     var PLATE2 greaves
     var PLATE3 NULL
     var PLATE4 NULL
# Set Light Armor Pieces to Swap in place of the Heavy armor pieces above - if any (set to NULL to not use)
     var LIGHTARMOR1 rugged gloves
     var LIGHTARMOR2 rugged greaves
     var LIGHTARMOR3 NULL
     var LIGHTARMOR4 NULL
####################################################################################################

##############################################################
# TOWN RUN / SPECIAL MODULES - SETTINGS FOR TOWN 
# AUTO HEALER / SELL GEMS/SKINS, BANK, OPTIONAL MODULES
##############################################################

# RETURN TO COMBAT MODULE (ON or OFF) - RESTARTS SCRIPT AND RETURNS TO COMBAT WHEN TOWN RUN IS FINISHED
# IF OFF - SCRIPT WILL ~ABORT~ ONCE TOWN RUN IS COMPLETE - LEAVE THIS ON FOR INFINITE AFK SCRIPTING
     var RETURN.TO.COMBAT ON
# AUTOHEAL (ON or OFF) - ON - LET SCRIPT HANDLE AUTO-HEALING AFTER COMBAT (DEPENDING ON YOUR GUILD/SETTINGS) 
# LEAVE THIS ON UNLESS YOU WANT TO HANDLE HEALING YOURSELF MANUALLY! (OR WITH ANOTHER SCRIPT) 
# TURNING THIS OFF WILL ~ABORT SCRIPT AFTER ESCAPING FROM COMBAT~! AND WILL PARSE: HELP ESCAPE PLZ!
     var AUTOHEAL ON
# HEAL ALL (ON or OFF ) - HEAL.ALL ON = FULLY HEAL IF YOU HAVE ~ANY~ WOUNDS AT ALL (even minor scars) 
# HEAL.ALL OFF = WILL SKIP HEALING IF INSIGNIFICANT WOUNDS (minor scratches etc)
     var HEAL.ALL ON
# SELL SKINS (ON or OFF) - VISIT FURRIER - SELL SKINS/BUNDLES 
     var SELLSKINS ON
# SELL GEMS (ON or OFF) - VISIT GEM SHOP - SELL ALL GEMS/POUCHES
     var SELLGEMS ON
# SELL METALS (ON or OFF) - VISIT GEM SHOP - SELL ALL LOOSE METALS/NUGGETS/BARS (except those in your Crafting Container) 
     var SELLMETALS ON
# BUY HERBS? (ON or OFF) - VISIT HERB SHOP - AUTO RESTOCK ON HEALING HERB SUPPLIES (IF in city with Herbalist)
     var HERBS ON
# USE HERBS IN COMBAT? (ON or OFF) - If ON - Script will eat herbs during combat every ~5 minutes if needed
     var HERBS.COMBAT ON
## Container.Herb - SET CONTAINER TO STORE YOUR HERBS IN (Can be a stackable herb container)
     var Container.Herb carryall
# BANK RUN (ON or OFF) - VISIT BANKS - DEPOSIT MONEY AFTER TOWN RUN 
     var BANKRUN ON
# INVENTORY CHECK (ON or OFF) - TURNS ON INVENTORY CHECKS FOR DUMPING ANY COMMON TRASH ITEMS IN INVENTORY (OR EXCESS GEM POUCHES / BUNDLING ROPE )
     var INVCHECK ON
# TRASH DUMP (ON or OFF) - IF ON WILL DUMP ANY ITEM IN YOUR TRASH VARIABLE (GLOBAL VARIABLE AT VERY TOP OF VARIABLE FILE)
     var TRASH.DUMP ON
# POUCH DUMP (ON of OFF) - IF ON - DUMPS ANY GEM POUCHES IN YOUR INVENTORY THAT ~DO NOT MATCH~ THE COLOR/DESCRIPTION OF YOUR PRIMARY GEMPOUCH ( var gemPouch )
# WILL ALSO DUMP YOUR NORMAL GEM POUCHES IF YOU HAVE MORE THAN 10 OF THEM until you only have 10 MAX (Prevent buildup of ~50 rogue pouches) 
     var POUCH.DUMP ON

## SHARD CITIZEN (ON or OFF) - Must be a citizen of shard
     var Shard.Citizen ON
# GET FAVORS? (ON or OFF) - (ONLY WORKS IN CROSSING / SHARD / HAVEN )
     var GET.FAVORS ON
     var FAVOR.GOD meraud
# REPAIR ARMOR? (ON or OFF) - REPAIR ALL ARMOR / WEAPONS DURING TOWN RUN (MUST HAVE MONEY IN LOCAL BANK)
     var REPAIR.ARMOR ON
## USE MAGIC REPAIR KITS? (SET NULL/OFF TO NOT USE)
## REPAIR.KIT and REPAIT.KIT.2 ARE FOR FULL REPAIR KITS THAT REPAIR ALL ARMOR ~AND~ WEAPONS
## REPAIR.KIT.WEAPON and REPAIR.KIT.ARMOR ARE ONLY FOR KITS THAT ONLY REPAIR ARMOR OR WEAPONS!
## YOU MUST SET THE CONTAINER THAT EACH SPECIFIC KIT IS FOUND IN! IT TREATS THIS CONTAINER LIKE GEMPOUCH.CONTAINER AND KEEPS CLOSED! *CAN BE SHARED WITH GEMPOUCH.CONTAINER!
     var REPAIR.KIT NULL
     var REPAIR.KIT.2 NULL
     var REPAIR.KIT.WEAPON NULL
     var REPAIR.KIT.ARMOR NULL
     var REPAIR.KIT.CONTAINER NULL
     var REPAIR.KIT.2.CONTAINER NULL
     var REPAIR.KIT.3.CONTAINER NULL
# CLIMBING/SWIMMING RUN (ON or OFF) - ATHLETICS TRAINING 
     var CLIMBING ON
## MAGIC CLIMBING ROPE (ON or OFF) - CHECK FOR MAGIC CLIMBING ROPE - USES THAT INSTEAD OF DEFAULT CLIMBING RUN
     var MAGIC.ROPE OFF
     var ROPE.NAME climbing rope
     var Rope.Container NULL
## WINDBOARD (ON or OFF) - TRAIN ATHLETICS WITH A WINDBOARD INSTEAD
     var WINDBOARD OFF
# COLLECTING - (ON or OFF) - OUTDOORSMANSHIP TRAINING - COLLECT ROCKS/COINS
     var COLLECTING ON
# BRAIDING - (ON or OFF) - TRAINS BRAIDING (ENGINEERING) - ONLY TRAINS TO ~70 RANKS!
     var BRAIDING ON
# RAVEN'S COURT SCHOLARSHIP STUDY (ON or OFF) - ONLY IN CROSSING !
     var RAVEN ON
# TEXTBOOK / COMPENDIUM? (ON or OFF) - TRAIN SCHOLARSHIP/FIRST AID W/ ANATOMY TEXTBOOK
     var TEXTBOOK ON
# TEXTBOOK TYPE - Textbook or Compendium
     var TEXTBOOK.TYPE textbook
     var Textbook.Container shroud
# SKINNING/FA TRAINER - (ON or OFF) ONLY WORKS FOR THE MAGIC SKINNING / FA TRAINERS
## The ones with 105 uses per day or infinite ( https://elanthipedia.play.net/Item:Small_blue-belly_crocodile_with_prominently_stitched_seams )
     var SKINTRAINER OFF
     var SKINTRAIN.NOUN crocodile
     var SKINTRAIN.CONTAINER goldenweave belt
# EPISTEMIC JOURNAL - For Epistemic Journals ONLY - Writes to Journal every 24 hours
# Set JOURNAL.TYPE ( NULL to NOT USE ) - Set NOUN of item to use ( traveler's diary / explorer's log / soldier journal / etc)
     var JOURNAL.TYPE NULL
# DISARM BOXES? (USES DISARM SCRIPT - MAKE SURE YOU SET THE VARIABLES UP IN disarm-vars)
     var DISARM ON
# BURGLE RUN (ON or OFF) - BURGLE RUN USING THE BURGLE SCRIPT (BURGLE.PAWN ON will Pawn all Burgle items)
     var BURGLE ON
     var BURGLE.PAWN ON
# BURGLE DUMP (ON or OFF) - Burgle Dump ON will DUMP/TRASH any Burgle item that does not sell at pawn shop
     var BURGLE.DUMP ON
# STEALING RUN (ON or OFF) - Does STEALING Run with the Ultimate Stealing Script
     var STEAL OFF
# PERFORMANCE RUN (ON or OFF) - DEDICATED PERFORMANCE TRAINING RUN DURING TOWN RUN (Uses your Zill.Name variable to train)
     var PERFORMANCE ON
# MAGICAL RESEARCH TRAINING (ON or OFF) - DEDICATED MAGICAL RESEARCH TRAINING DURING END OF TOWN RUN - TAKES A BIT OF TIME! 
     var MAGICAL.RESEARCH OFF
# PRIMARY MAGICAL RESEARCH TYPE ( SET TO NULL TO CHOOSE AUTOMATICALLY BASED ON LEARNING )
# OPTIONS ARE: FUNDAMENTAL, STREAM, AUGMENTATION, UTILITY, WARDING, SORCERY, FIELD, SPELL
     var RESEARCH.TYPE NULL
# TEACHING? (ON or OFF) - If ON, will attempt to teach your other characters/people in the Friends variable
     var TEACH OFF
     var TEACH.SKILL hiding
     var TEACH.SKILL.2 evasion
## SUPPORT FOR MASTERCRAFT TRAINING
## IF YOU USE MASTERCRAFT - SET EACH SKILL ON THAT YOU WANT TO TRAIN
## *YOU MUST SET UP MASTERCRAFT - TOOLS ETC SEPARATELY
     var ALCHEMY OFF
     var ENGINEERING OFF
     var FORGING OFF
     var OUTFITTING OFF
     var ENCHANTING OFF
## VAULT SWAP (ON or OFF) - ON WILL TEMPORARILY SWAP YOUR 'var CONTAINER' FOR A SPECIAL BAG IN YOUR VAULT FOR MASTERCRAFT PURPOSES ONLY!
## AFTER MASTERCRAFT IS OVER, GOES BACK TO VAULT AND SWAPS BACK TO ORIGINAL BAG - PUTS YOUR CRAFTING BAG BACK IN THE VAULT!
## MAKE SURE YOU HAVE ENOUGH ROOM IN YOUR VAULT! THE SWAP CONTAINER SHOULD FIT ON THE SAME BODY SLOT AS THE BAG YOU ARE SWAPPING OUT!
     var VAULT.SWAP OFF
## VAULT CITY - SET THIS TO THE CITY NAME WHERE YOU HAVE YOUR VAULT - IF VAULT.SWAP IS ~ON~ IT WILL RUN TO THIS CITY FIRST
     var VAULT.CITY FC
## SET THE NAME OF YOUR CRAFTING BAG IN YOUR VAULT - MUST HAVE ~ALL YOUR CRAFTING TOOLS~ IN THIS BAG!!
## MAKE SURE TO BE SPECIFIC WITH YOUR CONTAINER VARIABLES SO THEY DONT GET MIXED UP! THIS CONTAINER SHOULD USE THE SAME BODY SLOT AS YOUR VAR CONTAINER!
     var CRAFTING.BAG dreamweave lootsack

# ALMANAC (ON or OFF) - USE ALMANACS (That trains random skill OR pick-a-skill every 10 minutes)
     var ALMANAC OFF
## ALMANAC VERB - if using the special encyclopedic almanac, MUST be set to 'encyclopedic almanac' to use the pick a skill function
     var ALMANAC.TYPE almanac
     var Almanac.Container goldenweave belt
## ALMANAC SKILLS to check/pick for encyclopedic almanac i.e. Sorcery|Forging|Engineering
## The default list has ALL skills listed - You can remove skills you don't want to boost
     var ALMANAC.LEARN Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor|Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing|Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow|Appraisal|Tactics|Performance|Enchanting|Forging|Engineering|Alchemy|Outfitting|Arcana
# LOCKPICK TRAINING ITEM? (Set to NULL to not use) - Must match EXACTLY with item name in hands (2 words only)
# For MAGIC LOCKPICK TRAINING ITEMS - * Assumes you use a WORN lockpick ring/case 
     var LOCKPICK.ITEM NULL
## SET A SECONDARY LOCKPICK ITEM HERE IF YOU HAVE A SECONDARY (OR SET TO NULL)
     var LOCKPICK.ITEM.2 NULL
## Lockpick.Container is where the MAGIC LOCKPICK ITEMS should be stored (NULL to try wear them)
     var Lockpick.Container NULL
# PILGRIM BADGES (ON or OFF) *CLERIC/PALADINS ONLY! - VISIT UNVISITED BADGE LOCATIONS - PRAY TO BADGE
     var PILGRIM ON
# POWERWALKING (ON or OFF) - FOR MAGIC USERS - DO A POWERWALK DURING TOWN RUN 
     var POWERWALK ON
## SCRIPT CHECK LOGIC - TURN SCRIPT CHECK LOGIC (ON OR OFF) - WARNING - THERE ~WILL~ BE FALSE POSITIVES!! UNAVOIDABLE!!
## IF IT DETECTS ANY GM SCRIPT CHECKS - WILL ~ATTEMPT~ TO AUTOMATICALLY HANDLE IT AND/OR RUN AWAY (Not Log Out)
     var SCRIPTCHECK OFF
## Setting NO.CONTACT to "ON" will log out for 5 minutes if someone tries to drag you or hold your hand (DEFAULT: OFF)
## WARNING! IT WILL ALSO ESCAPE COMBAT IF ANYONE TALKS IN YOUR COMBAT ROOM! INCLUDING CRITTERS! SO IT CAN FALSE POSITIVE ON TALKING CRITTERS
     var NO.CONTACT OFF
## LOG.ON.STUN (ON or OFF) Set to "ON" to log out if you are too hurt/stunned and are unsuccessful running away (DEFAULT: ON)
     var LOG.ON.STUN OFF
## LOG.ON.DEATH (ON or OFF) Set OFF to stay logged in even if you die (DEFAULT: ON)
     var LOG.ON.DEATH ON
## TOTAL TIME ONLINE - MAX TIME TO STAY ONLINE (IN SECONDS) After this time has passed will idle and logout to avoid AFK checks (Set to 0 to always stay online)
     var ONLINE.TIME 0
## FANG COVE? (ON or OFF) - Do you want to go to FANG COVE for healing/town stuff (Only works in Prime if Premium)
     var FANGCOVE ON
## USE PREMIUM JUMP JEWELRY? (ON or OFF) - Will use Premie JJ to teleport to Fang Cove for healing/bundles/gems/etc
     var JumpJewelry OFF
     var JewerlyVerb ironwood ring
## PERSONAL EMPATH HEAL (Put EMPATH'S NAME HERE to use. NULL to turn off) - If you use a personal empath to heal
## Setting this to anything OTHER than NULL/OFF will turn OFF the triggers to nod to someone when they ask if you want healing
     var PocketEmpath NULL
## EmpathRoom is ROOM NUMBER where you can find your PERSONAL EMPATH. (MUST be in the CITY you go to for TOWN RUN)
     var EmpathRoom NULL
## BankBot - Used for F2P characters to tip a bankbot any remaining coin at end of town run
## Set Tipping to 1, Bankbot name and Tiproom = room number bankbot is at, in your home town
     var Tipping 0
     var BankBot morph
     var TipRoom 753
## CLAN ITEM (TF USE ONLY)
     var CLAN OFF
     var CLAN.ITEM sphere
## LIGHTER ITEM (For using a Lighter to start fires instead of flint and blade)
## USAGE - var LIGHTER (ON or OFF) - Lighter.Name = verb of the item
     var Lighter OFF
     var Lighter.Name world dragon
## CUSTOM TOWN SCRIPT - (Must be the exact name of the script (IGNORE .CMD - JUST USE NAME)
## Set your own script to run during the town run
## YOU MUST HAVE A PARSE AT THE END OF YOUR SCRIPT: put #parse SCRIPT FINISHED!
## IF YOU DO NOT HAVE THIS PARSE THEN UBER WILL NOT RECOVER PROPERLY!
     var Custom.Script NULL
## RPA BESTOW? (ON or OFF) - MUST BE IN THE PIRP SYSTEM TO BESTOW RPAS! https://elanthipedia.play.net/RPA_command
     var RPA ON
## LIST THE PEOPLE YOU WANT TO BESTOW RP POINTS TO BELOW IN AN ARRAY!!
## ie. var PirpList Name1|Name2|Name3|Name4|Name5
     var PirpList Raidboss|Healbitch|Illuminati|Breckin|Ryhs|Rhoat|Shepherd|Kohen|Worril|Odium|Morvetan|Orcher|Amroth|Mephos|Yew|Lorak|Wryll|Rellie|Beerfest|Bayndayd|Xana|Crivic|Blaakwulf|Wong|Findal|Regnar|Lakshmi|Vivica|Phucker|Jimdickens|Kiroq|Bleed|Rutinger|Nekhet|Leecya|Arazenya|Kithkani


######################################################################################################################
######################################################################################################################
# GENERAL MAGIC VARS - ALL MAGIC USERS MUST SET THESE VARIABLES
# GENERIC MAGIC VARIABLES FOR ALL MAGIC USERS
######################################################################################################################
######################################################################################################################
# SMART MANA FOR SPELLS? AUTO-DETERMINES OPTIMAL MANA FOR SPELLS AFTER A NEW SETUP (OR EVERY ~2 WEEKS IN GAME)
# SMART MANA WILL AUTOMATICALLY ADJUST YOUR MANA LEVELS UP AND DOWN AS YOU GAIN IN RANKS FOR OPTIMAL LEARNING
# (ON or OFF) - RECOMMEND LEAVING ON - SETTING THIS ON WILL OVERRIDE ALL MANUAL MANA SETTINGS 
# TURNING SMART.SPELLS OFF MEANS YOU WILL ~HAVE~ TO SET MANA MANALLY AND DO MUCH MORE FINE TUNING 
     var SMART.SPELLS ON
# CAMB HEAVY (ON or OFF) (OFF by default) - ON WILL MAKE SMART MANA PUT MORE MANA INTO CAMBRINTH THEN MAIN PREP
     var Camb.Heavy ON
# MAGIC RATE - (NULL is RECOMMENDED) Set the MIN Magic Rate to reach before switching to a different spell school. 
# SETTING TO A NUMBER WILL SPAM THE SAME SPELL UNTIL YOU REACH DESIRED LEARNINGRATE. Set to NULL to cycle through spells normally 
     var Magic.Rate NULL
# MAGIC SNAP CAST. Set to 0 for Full Aim. Set to desired number of seconds to pause for that many seconds before casting
     var MAGIC.SNAP 0
# CAMBRINTH CHARGES - Number of Times to Charge your cambrinth (or harness if Cambrinth is NULL) each time!
# RECOMMEND LEAVING THIS AT 1 - 2 AT MAX - THIS VARIABLE TIES INTO HOW SMART MANA CALCULATES MANA
     var CambrinthCharge 1
# OFFENSIVE SPELL MANA AMOUNTS - Set BASE MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Mana 15
     var Debilitation.Mana 15
     var Utility.Mana 15
     var Augmentation.Mana 15
     var Warding.Mana 15
     var Sorcery.Mana 15
# OFFENSIVE SPELL CAMBRINTH AMOUNTS - Set CAMBRINTH MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Camb 20
     var Debilitation.Camb 20
     var Utility.Camb 20
     var Augmentation.Camb 20
     var Warding.Camb 20
     var Sorcery.Camb 20
# USE HARNESS / CAMBRINTH FOR OFFENSE SPELLS (ON or OFF)
# TURN OFF TO SKIP HARNESS/CAMBRINTH COMPLETELY
     var Use.Cambrinth ON
# USE HARNESS / CAMBRINTH FOR BUFFS (ON or OFF)
     var Use.Cambrinth.Buffs OFF
# CAMBRINTH ITEM for charging BUFFS/SPELLS (Set to NULL to not use)
     var Cambrinth shroud
     var Cyclic.Cambrinth NULL
# CAMBRINTH MANA AMOUNT FOR SPELLS - Amount of Mana to put in CAMBRINTH for Magic Tattoos / Harness for Cyclics when No Raw Chanelling feat
     var CambrinthMana 15
# CAMBRINTH MANA FOR Cylics - Amount of Mana to put in cambrinth for Cylics ONLY
     var CyclicCharge 15
# SLOW.CAST (ON or OFF) - OFF IS DEFAULT - Slow Cast ON will cast offensive spells about half as often as normal
# SLOW.CAST OFF (Default) will spam spells in between attacks as much as possible (mana permitting)
     var Slow.Cast OFF
# NO CAMBRINTH USE DURING TM / DEBIL SPELLS (ON or OFF)
# IF YOU SET THIS ON, SCRIPT WILL SKIP USING A CAMBRINTH FOR TM OR DEBIL SPELLS
     var NoCambTM OFF
# POWER PERCEIVE (Perceives every ~5 minutes)
     var POWERP ON

# RITUAL FOCUS ITEM (REQUIRED for RITUAL SPELLS - set Ritual to NULL to not use)
# Ritual.Container can be set to any Container - or set to NULL to wear it first
     var Ritual spider
     var Ritual.Container %Container
# SORCERY RITUAL FOCUS (Separate ritual focus for Sorcery IF NEEDED)
     var Sorcery.Focus NULL
# TM DAMAGE FOCUS ITEM - IF SET WILL USE TM FOCI MODE EVERY ~HOUR (set to NULL to not use)
     var TMFoci NULL
     var TMFoci.Container %Container
# USE SYMBIOSIS ON ATTACK SPELLS? (ON or OFF)
# ONLY USEFUL AT ~HIGHER RANKS~ OF MAGIC - ~NOT~ FOR NOOBS!!
     var Target.Symbiosis ON
     var Utility.Symbiosis ON
     var Augmentation.Symbiosis ON
     var Warding.Symbiosis ON
     var Sorcery.Symbiosis ON
     var Debilitation.Symbiosis ON
# USE SYMBIOSIS ON BUFFS? (ON or OFF) - FOR HIGHER RANKS ONLY
     var Symbiosis.Buffs OFF

# MAGIC TATTOO (Set to NULL or the FULL SPELLTIMER NAME i.e - IronConstitution / MajorPhysicalProtection) - Will use a Magic Tattoo every ~5-10 minutes
# FULL SPELLTIMER NAME MUST ALSO BE SET IN YOUR BUFFS OR SPELLS - USE SORCERY.CAMB (ABOVE) TO SET CAMB MANA FOR MAGIC TATTOO
     var Magic.Tattoo DemrrisResolve
# MAGIC TATTOO CAMBRINTH/HARNESS MANA - Set the amount of Camb Mana you want to boost your tattoo with
     var Tattoo.Camb 35
# HEROIC TATTOO (ON or OFF) - ONLY FOR HEROIC TATTOOS! (Normal tattoos use Magic.Tattoo)
# VERY BASIC - WILL JUST INVOKE TATTOO / CAST ON A 1 HOUR COOLDOWN
     var Runic.Tattoo OFF

#########################################################################################
# GUILD SPECIFIC OPTIONS BELOW
# SET THE GUILD OPTIONS FOR THE CURRENT CHARACTER YOU ARE EDITING 
########################################################################################
########################################################################################
# NECROMANCER SETTINGS
# SET NECRO.HEAL ON TO USE NECRO HEALING - (Consume Flesh / Devour depending on skills)
     var Necro.Heal ON
## NECROHEAL CREATURE (SET A ~LOW LEVEL~ CREATURE TO KILL ~ONLY FOR DEDICATED HEALING PURPOSES~)
## IDEALLY SET THIS TO A CREATURE NEAR YOUR "HOME CITY" SO YOU DON'T HAVE FAR TO RUN FOR HEALING
     var NecroHeal.Critter GOBLIN SHARD
# SET NECRORITUAL ON TO PERFORM RITUALS IN COMBAT (Preserve/Harvest/Dissect/Butchery/etc)
     var NecroRitual ON
## FORSAKEN? (ON or OFF) - IS NECRO FORSAKEN?? IF ON - WILL AVOID TOWNS/SERVICES AS MUCH AS POSSIBLE!! 
## *Not fully tested/implemented-may not be perfect- but should avoid towns. May have issues REPAIRING ARMOR Unless USING FC* 
     var Forsaken OFF
## RISEN? (ON or OFF) - CREATES RISEN MINIONS IN COMBAT (CAREFUL - GENERATES DIVINE OUTRAGE!) 
     var Risen OFF
## QUICKEN EARTH - ON TO CHECK FOR AND SUMMON DIRT CONSTRUCTS EVERY ~5 MINUTES
     var QuickenEarth OFF
     var QE.Mana 10
     var CFB.Mana 10
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Necro.Cyclics |USOL|ROC
     var Necro.Cyclics.mana |5|4
## Necromancer ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Necro.Target.Spell ACS|VS
     var Necro.Debilitation.Spell HP
     var Necro.Utility.Spell GAF
     var Necro.Augmentation.Spell Obfuscation
     var Necro.Warding.Spell MAF
     var Necro.Sorcery.Spell MPP
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Necro.Buffs IVM|REI|ROC|CH
########################################################################################
########################################################################################
### BARD SETTINGS
# Cyclic Spell Setup
# YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST be set for each individual cyclics!
# YOU MUST SET cyclic.mana in an array to match!! 6 cyclic - 6 mana numbers
  # SET TO NULL/OFF IF NOT TRAINING CYCLICS - THERE ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Bard.Cyclics |AEWO|HODI|FAE|CARE|PYRE|GJ
     var Bard.Cyclics.mana |5|4|5|5|5|6
## Bard ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Bard.Target.Spell BOS
     var Bard.Debilitation.Spell DMRS
     var Bard.Utility.Spell AOT
     var Bard.Augmentation.Spell WILL
     var Bard.Warding.Spell REPR
     var Bard.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Bard.Buffs |MIS|HARM|RAGE|REPR
## BARD SCREAMS? ( Screams in combat every ~60 seconds) (ON or OFF)
     var Bard.Scream ON
## BARD WHISTLE (ON or OFF)
     var Bard.Whistle ON
########################################################################################
########################################################################################
# WARRIOR MAGE SETTINGS
## USE SUMMONING? (Will train Summoning every ~3 minutes)
     var Summoning ON
## ELEMENTAL ALIGNMENT - Element can be FIRE, WATER, ELECTRIC, AETHER, AIR or EARTH
     var element FIRE
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var WM.Cyclics |EE|AC|FR
     var WM.Cyclics.mana |5|4|5
## Warrior Mage ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var WM.Target.Spell FS|FB
     var WM.Debilitation.Spell EE|ALA
     var WM.Utility.Spell ETF
     var WM.Augmentation.Spell YS
     var WM.Warding.Spell ES
     var WM.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var WM.Buffs Ease|TW|SW|Zephyr|SUF|Ignite
## ~WEAPON SUMMONING LOGIC~
# SUMMON WEAPONS (ON or OFF)
     var SummonWeapons OFF
# SUMMON ELEMENT - Must set your WEAPON SUMMON ELEMENT ( Stone/Earth (Default) - Fiery/Fire (Fiery Infusions) - Icy/Ice (Icy Infusions) - or Electric (Shocking Infusions)
     var SummonElement FIRE
# ELEMENTAL CHARGE SPELL Must be *a spammable spell* of your chosen element. Will prep at minimum mana - if you want to prep at something else put a number after
     var ChargeSpell MOA
# SUMMON WEAPON TEMPLATE (0 or 1) - 0 = Default weapon, 1 = Turn weapon to other template
     var SummonTemplate 1
# SUMMON WEIGHT/DENSITY (0 - 2 to set weapon density - Must know QUICK INFUSIONS spell)
# 0 = Lightest Weight, 1 = DEFAULT, 2 = Heavier Weight
     var SummonWeight 1
# Set weapons you want to summon (ON or OFF) - Setting to ON will override your default weapon variables at top of script
     var SummonHT OFF
     var SummonLT OFF
     var SummonSE OFF
     var SummonLE OFF
     var SummonTHE ON
     var SummonSB OFF
     var SummonLB OFF
     var SummonTHB ON
     var SummonPolearms ON
     var SummonStaves ON
## INGOT (ON or OFF) Bump up tier of weapons - Must know REINFORCED INFUSIONS spell and have a rare metal ingot
     var WMIngot OFF
## SET INGOT STORAGE CONTAINER (Set to either a sigil ring or a specific container)
     var Ingot.Container sigil ring
########################################################################################
########################################################################################
# MOON MAGE SETTINGS
## MOON MAGE ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var MM.Target.Spell DO|Burn
     var MM.Debilitation.Spell Dazzle|MB
     var MM.Utility.Spell PG
     var MM.Augmentation.Spell AUS|ART
     var MM.Warding.Spell PSY
     var MM.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var MM.Cyclics |SHW
     var MM.Cyclics.mana |5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var MM.Buffs CV|Shadows|TS|COL|Shadowling|PSY
## OBSERVATION TRAINING - PREDICT TOOL IS ONLY USED FOR PREDICTION OUTSIDE OF COMBAT! TOOL MUST ALREADY BE BONDED!!
## Predict.tool can be - BONES, CHART, MIRROR, PRISM, BOWL, DECK or NULL to turn off.
     var Predict.Tool DECK
## Read The Ripples (RTR ON or OFF) - Will Perform a RTR routine (observe spam) during town run **MUST HAVE TELESCOPE!
     var RTR OFF
## Where you store your telescope * If any - defaults to your main Container if not set
     var Telescope.Container NULL
## OBSERVE IN COMBAT (ON or OFF) - If ON will do Astrology observations in Combat every couple minutes
     var Combat.Observe ON
########################################################################################
########################################################################################
# CLERIC SETTINGS
## CLERIC ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Cleric.Target.Spell FOU|FF
     var Cleric.Debilitation.Spell PS|Malediction
     var Cleric.Utility.Spell DR|BLESS
     var Cleric.Augmentation.Spell Benediction
     var Cleric.Warding.Spell MPP|SL
     var Cleric.Sorcery.Spell dazzle
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Cleric.Cyclics |HYH|GHS|REV|SA
     var Cleric.Cyclics.mana |15|15|15|15
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Cleric.Buffs OM|Auspice|SOS|POM|MAPP|PFE|YS
## ARE YOU USING OM ORB? (MUST BE SET IN BUFFS ABOVE!) SET MANA AMOUNT TO CAST OM / CHARGE ORB WITH EACH TIME
     var OM.Mana 25
## TYPE OF ORB YOU USE FOR OM - OPTIONS:( FIRULF, MERAUD or KEREN)
     var FavorOrb meraud
## BUFF SPELLS YOU WANT TO ALWAYS KEEP ACTIVE IN YOUR OM ORB (You can just set this to var OM.Buffs %Cleric.Buffs ) 
     var OM.Buffs PFE|POM|MPP|MAPP|SAP|SOL
## CLERIC RITUALS? (Perform CLERIC RITUALS during Town Runs/in Combat)
     var ClericRituals ON
### Prayer Mat - Set to NULL to not use or the noun of the mat/rug
     var PrayerMat prayer mat
## HOLY WATER VESSEL - Set your container you use to store/collect holy water
     var HolyWater chalice
### COMBAT COMMUNES - (ON or OFF) - Set the COMMUNES you wish to perform while IN COMBAT 
     var Commune.Meraud ON
     var Commune.Truffenyi ON
     var Commune.Tamsine OFF
### FLINT KNIFE - Set a DEDICATED WEAPON/KNIFE to STRIKE FLINT for MAKING FIRE for RITUALS
### MUST be a METAL weapon you can use to STRIKE FLINT for fire
     var FlintKnife throwing blade
## CLERIC ALIGNMENT GOD - Set a God to align to ( https://elanthipedia.play.net/Cleric_3.0#Alignment )
## CHOOSE A LIGHT/DARK/NEUTRAL GOD ONLY - Each Type will buff 2 magic skills and penalize 3 others
## BY DEFAULT SCRIPT WILL USE ~CHADATRU~ (Which buffs AUG/WARDING - Generally the most lacking magics for Clerics)
## Set a different god if you wish to buff other magics but BE CAREFUL!!! 
     var Alignment.God CHADATRU
########################################################################################
########################################################################################
# RANGER SETTINGS
## RANGER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Ranger.Target.Spell DEVI|STAMPEDE
     var Ranger.Debilitation.Spell DEADFALL|SWARM
     var Ranger.Utility.Spell EM|BLEND
     var Ranger.Augmentation.Spell SOTT
     var Ranger.Warding.Spell EY
     var Ranger.Sorcery.Spell ECRY
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Ranger.Cyclics |CS|BES
     var Ranger.Cyclics.mana |5|5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Ranger.Buffs Athleticism|STW|EY|WOTP|OATH|ETC|Bloodthorns
########################################################################################
########################################################################################
## PALADIN SETTINGS
## PALADIN ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Paladin.Target.Spell FST
     var Paladin.Debilitation.Spell Shatter
     var Paladin.Utility.Spell AS
     var Paladin.Augmentation.Spell RW
     var Paladin.Warding.Spell SP
     var Paladin.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Paladin.Cyclics |HOW|TR
     var Paladin.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Paladin.Buffs AA|Courage|HES|RW|SR|Clarity
## SET your HOLY WEAPON here (NULL to ignore) - Holy Weapon Name
     var HolyWeapon NULL
## Holy Icon (NULL TO NOT USE/IGNORE) - Set to the noun of your icon
     var HolyIcon NULL
########################################################################################
########################################################################################
## TRADER SETTINGS
## TRADER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Trader.Target.Spell CRD|STARCRASH
     var Trader.Debilitation.Spell FLUORESCE|AVA
     var Trader.Utility.Spell NOUMENA
     var Trader.Augmentation.Spell BLUR
     var Trader.Warding.Spell IR
     var Trader.Sorcery.Spell MPP
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Trader.Cyclics |ARS|SOV
     var Trader.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Trader.Buffs |TRC|Blur|LGV|NONCHALANCE
########################################################################################
########################################################################################
# EMPATH SETTINGS
## EMPATH ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Empath.Target.Spell PARALYSIS
     var Empath.Debilitation.Spell LETHARGY|NB
     var Empath.Utility.Spell GS|HEAL
     var Empath.Augmentation.Spell REFRESH
     var Empath.Warding.Spell IC|POP
     var Empath.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Empath.Cyclics |AD|REGEN
     var Empath.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Empath.Buffs  |AGS|BS|IC|GOL|MEF|TRANQUILITY
## GAURDIAN SPIRIT? (ON or OFF) - ON will keep up Guardian Spirit while in Combat
     var Guardian.Spirit ON
## CUSTOM GUARDIAN SPIRIT (ON or OFF) - If ON - will "cast custom" instead of casting normal
     var Guardian.Custom OFF
## ATTACK CONSTRUCTS ONLY? (ON or OFF) - ON will ONLY attack constructs (unless using Absolution vs unded). OFF will attack everything
## WARNING - SETTING TO OFF WILL CAUSE EMPATHIC SHOCK!!!!
     var Construct.Only ON
## USE MANIPULATE FRIENDSHIP (ON or OFF) - ON will attempt to manipulate non-construct creatures
     var Manipulate ON
## ESCAPE COMBAT WHEN EMPATHY REACHES 0? (ON or OFF) - If Empathy LearningRate reaches 0 during combat, will go on town run
     var Empathy.Escape OFF
## EMPATH PERCEIVE HEALTH WALKS (ON or OFF) - If ON - Will go on perceive health walks around town during town run
     var Empath.Walk ON
## EMPATH UNITY LINK (ON or OFF) - FOR EMPATH HEALBOT MODE - DO YOU KNOW UNITY LINK? MUST BE 70+ CIRCLE AND 380+ EMPATHY
     var Unity ON
## TEACH CLASS (FOR HEALBOT MODE) - SET THE SKILL OF THE CLASS YOU WANT TO TEACH
     var TeachClass TM
## BLACKLIST! (FOR HEALBOT MODE) - SET THE NAMES OF THE PEOPLE TO BLACKLIST FROM HEALING SERVICES!
## MUST BE IN AN ARRAY - var Blacklist Bob|Frank|Dave
     var Blacklist NULL
########################################################################################
########################################################################################
# THIEF SETTINGS
# AMBUSH TRAINING (Use AMBUSH MOVES in COMBAT - STUN/CLOUT/SLASH)
     var Ambush ON
# SELECT KHRI TO USE (Set as many ON / OFF as you want )
# IT WILL ONLY USE AS MANY KHRI AS YOU CAN HANDLE AT ONCE, PRIORITIZING THE MOST IMPORTANT DEPENDING ON SCENARIO)
     var khriSAGACITY ON
     var khriSTEADY ON
     var khriSTRIKE ON
     var khriFOCUS ON
     var khriELUSION ON
     var khriENDURE ON
     var khriAVOIDANCE ON
     var khriADAPTATION ON
     var khriPROWESS ON
     var khriHASTEN ON
     var khriHARRIER OFF
     var khriSERENITY OFF
     var khriSIGHT ON
     var khriFLIGHT ON
     var khriCALM OFF
     var khriGUILE OFF
     var khriDARKEN ON
     var khriDAMPEN ON
     var khriSHADOWSTEP ON
     var khriELIMINATE OFF
     var khriTERRIFY OFF
     var khriFRIGHT OFF
     var khriINTIMIDATE OFF
     var khriPLUNDER ON
     var khriSAFE OFF
     var khriEVANESCENCE OFF
     var khriCREDENCE OFF
     var khriCUNNING OFF
# USE KHRI DURING TOWN RUN? (ON or OFF) - Turn OFF to Skip using Khri during town run - for Sanowret use
     var Khri.Town ON
########################################################################################
########################################################################################
# BARBARIAN SETTINGS
# USE WHIRLWIND?
     var Whirlwind ON
# USE DUAL WIELD? (ON or OFF) - Dual wield requires 450+ in the weapon
     var DualWield ON
# EXPERTISE COMBOS? (ON or OFF) - Does Barb Expertise Combos (and helps generate IR)
     var Expertise ON
# Set which Forms you want to use (ON or OFF)
# Auto-turns some forms on/off depending on what skills you are training
     var barbEagle ON
     var barbBadger ON
     var barbPanther ON
     var barbPiranha ON
     var barbDragon ON
     var barbMonkey ON
     var barbTurtle OFF
     var barbOwl OFF
     var barbBear ON
     var barbBuffalo OFF
     var barbPython ON
     var barbSwan ON
     var barbToad OFF
     var barbWolverine OFF
# ROARS to use (will only use one)
     var roarEmbrace OFF
     var roarEverild ON
     var roarWail OFF
     var roarScreech OFF
     var roarShriek OFF
     var roarAnger ON
     var roarKuniyo ON
# BERSERKS to use
     var zerkHurricane OFF
     var zerkBlizzard ON
     var zerkFamine ON
     var zerkAvalanche ON
     var zerkTsunami OFF
     var zerkWildfire OFF
     var zerkEarthquake OFF
     var zerkTornado OFF
     var zerkFlashflood ON
     var zerkLandslide ON
     var zerkCyclone OFF
     var zerkDrought OFF
# MEDITATIONS to use (ON or OFF) - WILL ONLY WORK FOR HIGHER LEVEL BARBS
     var medContemplation ON
     var medTenacity ON
     var medSerenity ON
### END OF CHARACTER 2 VARIABLES
### STOP EDITING HERE ~~~ END OF CHARACTER 2 VARIABLES ##########
####################################################################################
####################################################################################
echo **** LOADED %CHARACTER2 VARIABLES
goto END.OF.VARS
}

CHARACTER3:
#########################################################################################################
#########################################################################################################
## CHARACTER 3 VARIABLES
## *CHARACTER3 VARIABLES BLOCK BELOW
if matchre("$charactername", "(?i)%CHARACTER3") then
#########################################################################################################
{
### GENIE LAYOUT - SET THE GENIE LAYOUT YOU WANT THIS CHARACTER TO USE - MUST EXACTLY MATCH THE LAYOUT NAME IN GENIE!
### Example: var GENIE.LAYOUT Shroom.layout - TO SAVE A LAYOUT IN GENIE SET IT UP HOW YOU LIKE AND CLICK LAYOUT > SAVE LAYOUT AS > NAME IT HOW YOU WANT
### IF YOU LEAVE THIS SET TO NULL THEN IT WILL JUST USE THE DEFAULT LAYOUT THAT IS SET (default.layout) 
     var GENIE.LAYOUT Healbitch.layout
### HEAL.CITY ( NULL or CITY NAME (CROSS/LETH/HIB/RIVER/THEREN/SHARD) - Will run to this town for HEALING no matter where you are
     var HEAL.CITY NULL
### HOME CITY (NULL or CITY NAME) - Will attempt to return to your home city after a heal run (if not already in that city) ONLY SUPPORTS MAINLAND CITIES
     var HOME.CITY NULL
### SAFE ROOM (set to NULL to ignore) ~MUST~ TIE INTO HOME.CITY ABOVE! THE ROOM ID YOU WANT TO SCRIPT IN DURING TOWN RUN - MUST BE VALID ROOMID IN YOUR HOME CITY!
### WARNING!: IF YOU DO NOT SET BOTH HOME.CITY AND SAFE.ROOM CORRECTLY YOU ~WILL~ RUN INTO ERRORS - LEAVE BOTH AT NULL TO LET SCRIPT LOGIC HANDLE IT
     var SAFE.ROOM NULL
### AUTO-PROGRESS? (ON or OFF) - ON WILL CHOOSE YOUR COMBAT CREATURE AUTOMATICALLY BASED ON YOUR RANKS - YOU DO NOT NEED TO SET IT! OVERRIDES COMBAT.CRITTER VARIABLE
     var AUTO.PROGRESS ON
### AUTO-PROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var PROGRESS.TYPE EMPATH
### COMBAT CRITTER - ONLY USED WITH AUTO.PROGRESS OFF - MUST BE A VALID CREATURE NAME! USE FULL NAME OR 1/2/3 TO SPECIFY TIERS ie SNOW GOBLIN 2
     var COMBAT.CRITTER AVTALIA SCUTTLERS
### ALTERNATE CRITTER - PICK A ALTERNATE CRITTER TO HUNT - IF YOUR MAIN HUNTING GROUND IS FULL!
     var ALTERNATE.CRITTER ANIMATED OBJECT
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var PRIORITY.ROOMS NULL
### XP TRACKER RESET ON SCRIPT STARTUP - (ON or OFF) - RESETS EXP TRACKER TRACKING TIME ON INITIAL LAUNCH OF SCRIPT ONLY
     var XP.RESET ON

### GUI OPTIONS ARE RECOMMENDED TO LEAVE OFF COMPLETELY - THESE OPTIONS ONLY HERE BY SPECIAL REQUEST - WILL BE ANNOYING IF YOU TURN IT ON
### CRITTER.GUI (ON or OFF) - OFF by default - CREATES CRITTER GUI WINDOW - MUST MANUALLY CLICK TO CHOOSE YOUR COMBAT CRITTER BASED ON PROVINCE / SKILL / PREFERENCE
     var CRITTER.GUI OFF
### WEAPON.GUI (ON or OFF) - OFF by default - CREATES WEAPON GUI WINDOW - CHOOSE YOUR WEAPONS FOR THAT RUN *IF YOU HAVE AN ARRAY OF WEAPONS SET IN A SINGLE WEAPON VARIABLE
     var WEAPON.GUI OFF

# FRIEND LIST (People you will hunt with) Put your friends names in place of these. Ex. Bob|Fred|George
# Can just put your name in here or make it blank and it will only find empty rooms.
     var FRIENDS %ALLCHARACTERS|%GLOBALFRIENDS

##############################################################
# WEAPON / CONTAINERS / AMMO SETTINGS - BE VERY SPECIFIC! 
##############################################################

# CONTAINERS - MANDATORY! - SET YOUR MAIN ~3-4~ LARGEST CONTAINERS!
# BE SPECIFIC WITH CONTAINER NAMES - USE 2 WORDS WHENEVER POSSIBLE!
     var Container backpack
     var Container.Boxes portal
     var Container.Backup handbag
     var Container.Crafting haversack
# SHEATH CONTAINER IS FOR SUPER LONG ITEMS - CAN BE ANY LARGE CONTAINER - NOT NECCESARY TO SET 
     var Container.Sheath hip pouch
# AMMO CONTAINER FOR STORING AMMO - ARROWS/BOLTS/ROCKS - BACKUP CONTAINER IS "OVERFLOW" FOR EXTRA AMMO
     var Container.Ammo drake-hide quiver
     var Container.Ammo.Backup portal
## CONTAINER.GEMPOUCH - VERY IMPORTANT! - ~MUST BE A SEPARATE CONTAINER~ FROM OTHER BAGS! SMALL/MEDIUM-SIZE CONTAINER IS FINE
## SPECIAL CONTAINER! SCRIPT WILL KEEP THIS CLOSED AT ALL TIMES AND ~ONLY USE IT FOR STORING FULL GEM POUCHES!~
## CONTAINER.GEMPOUCH MUST BE A ~CLOSABLE~ CONTAINER TO STORE ~FULL~ GEM POUCHES IN 
## AGAIN - DO NOT SHARE THIS CONTAINER WITH ~ANY OTHER CONTAINERS~ (except Repair Pouch Container) 
     var Container.GemPouch carryall
# Container.EmptyPouch is for storing EMPTY GEM POUCHES (This can be ANY container EXCEPT for Container.GemPouch )
     var Container.EmptyPouch canvas bag
# DIRT CONTAINER - For storing dirt for various use (ONLY used by Thieves/Clerics/Necros)
     var Container.Dirt NULL
## MISC SHEATH OPTIONS (Storing specific weapons in specific containers - toolstraps/bandoliers/harnesses etc) - SET TO NULL/OFF TO NOT USE
## SET THE SHEATH NAME UNDER SHEATH.1 - SET THE WEAPONS YOU WANT TO USE ON EACH SHEATH UNDERNEATH IN AN ARRAY ex:
## var Sheath.1 toolbelt
## var Sheath.1.Weapons sabre|axe|broadsword
     var Sheath.1 hip pouch
     var Sheath.1.Weapons war hammer|bastard sword|nightstick|spear|flail
     var Sheath.2 traveling bag
     var Sheath.2.Weapons throwing club|crossbow|cutlass|short bow
     var Sheath.3 NULL
     var Sheath.3.Weapons NULL
     var Sheath.4 NULL
     var Sheath.4.Weapons NULL
     var Sheath.5 NULL
     var Sheath.5.Weapons NULL
     var Sheath.6 NULL
     var Sheath.6.Weapons NULL
     
## WEAR WEAPONS (Set an array of weapons/shields you want the script to try and wear first before stowing)
     var Wear.Weapons NULL

## SMART.WEAPONS - ON TO TRAIN WEAPONS FROM LOWEST SKILL TO HIGHEST. "OFF" WILL GO IN A LINEAR ORDER (DEFAULT: ON)
## ON WILL DYNAMICALLY TRAIN TO ALWAYS MAKE SURE THE LOWEST SKILLED WEAPON IS TRAINED FIRST 
     var SMART.WEAPONS ON
     
## WEAPON SETTINGS - BE VERY SPECIFIC SETTING WEAPONS ! USE TWO WORDS WHENEVER POSSIBLE!
## SET ALL YOUR WEAPONS BELOW - MUST ~EXACTLY MATCH THE ITEM DESCRIPTION WHEN IN HANDS~! (GLANCE at it in your hands to get correct description) 
## BE SPECIFIC WHEN SETTING WEAPONS!! USE 2 WORDS WHEN POSSIBLE! TO TURN A WEAPON SKILL ~OFF~ SET IT TO - NULL
     var SEWEAPON cutlass
     var LEWEAPON bastard sword
     var THEWEAPON bastard sword
     var SBWEAPON war hammer
     var LBWEAPON NULL
     var THBWEAPON flail
     var STAVES nightstick
     var POLEARMS spear
     var RANGED.BOW short bow
     var RANGED.CROSSBOW crossbow
     var RANGED.SLING NULL
     var LTWEAPON throwing club
     var HTWEAPON spear
# MAIN OFFHAND WEAPON TRAINING - MELEE ONLY (MUST BE A LIGHT/MEDIUM WEAPON - HEAVY or 2HANDED WEAPONS WONT WORK!!)
     var OHWEAPON club
# ALTERNATE OFFHAND WEAPONS (For Backtraining/Dual Training weapons while training other Weapons)
# ~MUST~ BE LIGHT/MEDIUM WEIGHT WEAPON! CANNOT USE HEAVY or 2Handed Weapons! (Unless Barb) (SET TO NULL/OFF TO NOT USE)
     var ALTWEAPON1 club
     var ALTWEAPON2 NULL
     var ALTWEAPON3 NULL
## BRAWLWEAPON (DEFAULT: $charactername - Set to NULL to skip brawling)
     var BRAWLWEAPON $charactername
     #var BRAWLWEAPON $charactername
## Backstab/Ambush Weapon (Thief Only)
     var BSWEAPON mirror blade

# AMMO SETTINGS - DO NOT REMOVE THE { } BRACKETS!!!
     if (!$AMMOSWAP) then
{
     var XbowAmmo drake-fang bolt
     var BowAmmo arrow
     var SlingAmmo small rock
}

## ARMOR CHECK (ON or OFF) - Turn this OFF if you want the script to SKIP checking your armor at the beginning
## If ON - at the beginning, script will remove any armor/fluff you are wearing, and then put on all the armor you have set below. This ensures you have the correct armor on.
     var ARMOR.CHECK ON
## SET YOUR SHIELD - ABSOLUTELY 100% MANDATORY! RECOMMEND AN ARM-WORN SHIELD
     var MyShield gais lotus
## ARM WORN SHIELD? (ON OR OFF) - I RECOMMEND ALWAYS USING AN ARM WORN / SMALL SHIELD - MAKES LIFE MUCH EASIER
     var ArmWorn ON
## MAIN ARMOR TO CHECK - PRIMARY COMBAT (Set to NULL to IGNORE a slot)
## YOU MUST SET ALL YOUR ARMOR BELOW - IT DOESN'T MATTER WHICH ARMOR SLOT YOU USE - THE SCRIPT DOESN'T CARE
     var CHEST.ARMOR assassin's coat
     var FACE.ARMOR NULL
     var HEAD.ARMOR balaclava
     var ABDOMEN.ARMOR NULL
     var BACK.ARMOR NULL
     var ARM.ARMOR NULL
     var HAND.ARMOR icesteel gauntlets
     var LEG.ARMOR greaves
     var KNUCKLE hand claw
     var PARRYSTICK parry stick

## PRIORITY WEAPONS - WEAPON SKILLS TO KEEP MOVING ~ALWAYS~ - PRIORITIZE THESE WEAPON SKILLS OVER ALL OTHERS IF THEY ~EVER~ DROP TO 0/34
## MUST BE SET IN AN ARRAY - THE EXACT SAME AS GENIE EXP VARIABLE FORMAT ie: var Priority.Weapons Medium_Edged|Twohanded_Edged
## WARNING!! DO NOT SET PRIORITY WEAPONS UNLESS YOU WANT THOSE SKILL(S) TO TAKE PRIORITY OVER ~ALL~ OTHERS! ~WILL~ CAUSE UNEVEN RANKS OVER TIME!!
## THIS IS MAINLY ONLY USEFUL FOR SHORT PERIODS - FOR POWER LEVELING A SINGLE WEAPON SKILL FOR EXAMPLE - RECOMMEND NULL UNLESS YOU KNOW WHAT YOU ARE DOING
     var Priority.Weapons NULL
     
## TRAIN LOWEST (ON or OFF) - ON WILL ALWAYS TRAIN W/ YOUR LOWEST RANK & LOWEST LEARNINGRATE WEAPON AT EVERY WEAPON SWAP 
## THIS EFFECTIVELY ENSURES THAT ALL YOUR WEAPON SKILLS WILL TRAIN AND STAY AT THE ~EXACT SAME RANKS~ - ESPECIALLY IF USED FROM THE START
## NOTE! TRAINLOWEST ON - WILL ALTER THE DEFAULT WEAPON TRAINING ORDER - BYPASSES THE SET ORDER TO DYNAMICALLY TRAIN WEAPONS 
     var TrainLowest OFF

# MAX LEARNING RATE - FOR EACH WEAPON SKILL (WILL SWITCH WEAPONS ONCE REACHING THIS RATE *MAX 33) *SET TO 35 TO IGNORE LEARNINGRATE 
     var MAX.LEARNINGRATE 12
# LEARNING RATE INCREASE - AFTER FULL WEAPON LOOP *OF ALL WEAPONS* - INCREASE THE MAX.LEARNINGRATE BY THIS MUCH
     var LEARNING.INCREASE 4
# MAX TIME PER WEAPON - SET THE MAXIMUM TIME (IN SECONDS) TO TRAIN EACH WEAPON SKILL - BEFORE SWITCHING WEAPONS
# SETTING THIS TOO HIGH MAY CAUSE SUBOPTIMAL TRAINING - RECOMMEND AROUND ~300-500 (~5-8 minutes per weapon)
     var MAX.TIME 250
# MAXIMUM TOTAL COMBAT TRAINING TIME - SET THE MAX TIME (IN SECONDS) TO STAY IN ~COMBAT~ BEFORE ESCAPING TO TOWN ( 3600 SECONDS = 1 HOUR )
# SET VAR MAX.TRAIN 0 - TO LOOP COMBAT FOREVER ( *UNTIL IT ESCAPES DUE TO BEING TOO HURT / BAGS TOO FULL / BURDEN TOO HIGH )
     var MAX.TRAIN 4500
     
# STANCE PER WEAPON (Set NULL to use default - Or SHIELD/PARRY/EVASION/CUSTOM TO USE THAT PARTICULAR STANCE FOR A PARTICULAR WEAPON)
## NOTE SCRIPT IS ALREADY ADVANCED IN CHANGING STANCES DEPENDING ON WEAPON BEING TRAINED - NULL IS FINE FOR MOST PURPOSES
     var SE.STANCE NULL
     var LE.STANCE NULL
     var THE.STANCE NULL
     var SB.STANCE NULL
     var LB.STANCE NULL
     var THB.STANCE NULL
     var POLEARMS.STANCE NULL
     var STAVES.STANCE NULL
     var BOW.STANCE NULL
     var CROSSBOW.STANCE NULL
     var SLINGS.STANCE NULL
     var LT.STANCE NULL
     var HT.STANCE NULL
     var OH.STANCE NULL
     var BRAWL.STANCE NULL

## BACKTRAIN (ON or OFF) - ON FOR SETTING A SEPARATE BACKTRAIN ROUTINE
     var BACKTRAIN OFF
## BACKTRAIN AUTO PROGRESS (ON or OFF) - Turning this ON will automatically set the creature to hunt, based on your BACKTRAIN WEAPON SKILLS
## TURN THIS ~OFF~ TO SET THE BACKTRAIN CREATURE MANUALLY (BELOW)
     var BACKTRAIN.AUTOPROGRESS ON
### BACKTRAIN AUTOPROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var BACKTRAIN.PROGRESS.TYPE NORMAL
## BACKTRAIN CREATURE - Must specify the creature to hunt if BACKTRAIN.AUTOPROGRESS is OFF
     var BACKTRAIN.CRITTER ICE ARCHON
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var BACKTRAIN.PRIORITY.ROOMS NULL
## BACKTRAIN TIME (in SECONDS - Total time to Backtrain)
     var BACKTRAIN.TIME 1200
## BACKTRAIN MAGIC (ON or OFF) IF OFF - WILL SKIP USING ANY OFFENSIVE SPELLS PERIOD WHILE BACKTRAINING - WILL ONLY DO BUFFS
     var BACKTRAIN.MAGIC OFF
## BACKTRAIN TM/DEBIL SPELLS (ON or OFF) IF OFF - WILL SKIP USING ANY TM / DEBIL SPELL DURING BACKTRANING (UNLESS ITS A TATTOO)
     var BACKTRAIN.TM OFF
## BACKTRAIN WEAPONS - Set every weapon you wish to backtrain (NULL to turn off)
     var BACKTRAIN.SE NULL
     var BACKTRAIN.LE NULL
     var BACKTRAIN.THE NULL
     var BACKTRAIN.SB NULL
     var BACKTRAIN.LB NULL
     var BACKTRAIN.THB NULL
     var BACKTRAIN.STAVES NULL
     var BACKTRAIN.POLEARMS NULL
     var BACKTRAIN.BOW NULL
     var BACKTRAIN.CROSSBOW NULL
     var BACKTRAIN.SLING NULL
     var BACKTRAIN.LT NULL
     var BACKTRAIN.HT NULL
     var BACKTRAIN.BRAWL NULL
     var BACKTRAIN.OH NULL
     var BACKTRAIN.BS NULL
## BACKTRAIN STEALTH (OFF or ON)
     var BACKTRAIN.STEALTH ON
## BACKTRAINING LOOTING OPTIONS (ON or OFF)
     var B.Loot.Gems ON
     var B.Loot.Boxes OFF
     var B.Loot.Metals ON
     var B.Loot.Scrolls ON
     var B.Loot.Collectibles OFF
     var B.Loot.SpiderParts OFF
## BACKTRAIN LOOTING MODE ( treasure / boxes / goods / equipment )
     var B.Loot.Option goods
## BACKTRAIN ARMOR (ARMOR ONLY FOR BACKTRAIN ROUTINE) (Set to NULL to not check a piece)
     var B.CHEST.ARMOR NULL
     var B.FACE.ARMOR NULL
     var B.HEAD.ARMOR NULL
     var B.ABDOMEN.ARMOR NULL
     var B.BACK.ARMOR NULL
     var B.ARM.ARMOR NULL
     var B.HAND.ARMOR NULL
     var B.LEG.ARMOR NULL

##############################################################
### COMBAT GENERAL SETTINGS
##############################################################

## GEM POUCH DESCRIPTION - DR IS TRICKY WITH GEM POUCHES!! BE SPECIFIC - use "<color> pouch" only! 
## **RECOMMEND DUMPING ALL POUCHES AND GET NEW ONES FROM GEM SHOP ON FIRST SETUP**
## WHEN ASKING FOR NEW GEM POUCHES, "ASK NPC FOR <COLOR> POUCH" - ~DO NOT 'ASK FOR GEM POUCH' OR just 'POUCH'~ - JUST 'ASK <NPC> FOR BLACK POUCH'
## Then Set the var to the 'color' pouch you have. ie var gemPouch black pouch
     var gemPouch black pouch
# TIE GEM POUCHES? (ON or OFF) 
# TIE POUCHES FOR MORE STORAGE/LESS INVENTORY SPACE USE - but have to sell the FULL TIED POUCHES AT SPECIAL SHOPS or get TRADER to sell them!
# IF HUNTING IN SHARD OR ROSSMAN - NO WORRY AS SCRIPT SELLS TIED POUCHES IN THOSE GEM SHOPS. IF hunting in XING/ISLANDS will have to get Trader to sell pouches.
     var TiePouch ON
# WORN GEM POUCH? (ON or OFF) (OFF will STOW your gem pouch / ON will wear it )
     var Gempouch.Worn OFF

## RESTOCK AMMO? (ON or OFF) *SCRIPT WILL AUTOMATICALLY CHECK IF YOU RUN OUT OF AMMO AND ATTEMPT TO RESTOCK
     var AmmoStock ON
# Skinning Knife Name (Mandatory if not a worn knife)
     var Skinning.Knife knife
# BELT/WRIST/ANKLE ~WORN~ SKINNING KNIFE? (ON or OFF)
     var BeltKnife ON
#### COMBAT OPTIONS ####
# OFFHAND THROWING - (ON or OFF) SET TO ON IF YOU WANT TO ROTATE RIGHT/LEFT HANDS WHILE THROWING LT/HT
     var OffhandThrow ON
# THROWING TYPE (LOB, THROW or HURL) *LOB will NEVER stick / less damage - HURL ALWAYS STICKS/ max damage. THROW is inbetween
## IF YOU USE A SHARP THROWING WEAPON (LIKE SPEAR) ALWAYS USE LOB! THROW WILL STICK WITH A POINTY WEAPON!
## LOB IS THE SAFEST - LOB NEVER STICKS! - THROW IS SAFE ~IF USING A BLUNT THROWN WEAPON~ - HURL ALWAYS STICKS - AVOID HURL 
     var ThrowType lob
# BONDED THROWING WEAPONS? (ON or OFF) - Will use INVOKE to retrieve thrown weapon
     var Bonded OFF
# ROAMING (ON or OFF) - Will ROAM around to different critter rooms if it doesn't find a creature during bored routine
     var Roaming ON
# USE WEAK ATTACKS (ON or OFF) - Will use WEAK attacks for melee training (good for backtraining or preserving fatigue/balance)
     var WeakAttack OFF
# AIM ACTIONS (Set an array of actions) - ACTIONS TO PERFORM WHILE WAITING FOR FULL AIM (WITH RANGED/SPELLS) Separate with |
     var AimActions bob|attack|attack left
# TRAIN STEALTH? TRAIN STEALTH DURING MELEE / THROWN / BRAWLING ROUTINES
     var TrainStealth ON
## LOOT MONSTERS? (ON or OFF) - LOOT MONSTERS?
## OFF WILL SKIP LOOTING ALL MONSTERS ~PERIOD~ AND LET THEM ROT
     var Loot.Monsters ON
## LOOT OPTION TO USE - TREASURE / BOXES / EQUIPMENT/ GOODS or ALL
     var Loot.Option GOODS
## LOOTING OPTIONS (ON or OFF) - LOOT OPTIONS FOR MAIN COMBAT
     var Loot.Gems ON
     var Loot.Boxes ON
     var Loot.Metals ON
     var Loot.Scrolls ON
     var Loot.Collectibles OFF
     var Loot.SpiderParts OFF
# MAX BOXES (Set a number) - MAX number of BOXES to pick up before turning Box looting off for that run
     var Max.Boxes 25
# DISSECT (ON or OFF) - DISSECT mobs for First Aid training in Combat (Alternates with SKINNING depending on Learning Rates)
     var Dissect ON
# SKINNING OPTIONS (ON or OFF)
# SKIN ON but BUNDLE OFF will skin but DROP all skins. SKIN collecting only supported with bundles ON!
     var Skin ON
     var Bundle ON
# TIE BUNDLES (ON or OFF) (Turns on automatically when F2P is ON) - LOWER ITEM COUNT BY TYING UP YOUR BUNDLES
     var TieBundle ON
# BUNDLE LOCATION (SET to NULL to use ANY open location or set a preferred location (shoulder / waist / back / belt / around shoulder / over shoulder)
     var BundleLocation NULL
# ArrangeTarget (SET TO SKIN, BONE or PART - or NULL to skip arrange)
## Set ArrangeTarget to SKIN/BONE/PART to Arrange one time
## Set ArrangeALL to ON to arrange max times
     var ArrangeTarget SKIN
     var ArrangeAll OFF
## ArrangeAlways (ON or OFF) - Set ON to ALWAYS arrange regardless of skinning learningrate. OFF will SKIP ARRANGING when Skinning learning is locked
     var ArrangeAlways OFF
# MAX BUNDLE SIZE - Max amount of skins to keep in bundle before creating a new bundle (DEFAULT: 30  MAX: 200)
     var MaxBundle 40
# Set SNIPE to ON to use SNIPE (THIEF/RANGER/NECRO ONLY)
     var Snipe ON
# Set POACH to ON to use POACH instead of SNIPE (SNIPE overrides this setting if SNIPE is ON - TURN SNIPE OFF TO USE THIS)
     var Poach OFF
# RANGED AIM PAUSE. Set to 0 for a Full Aim. Set number of seconds to pause that many seconds before firing
     var SNAP.FIRE 6
# RETREAT WHILE USING RANGED WEAPONS/BUFFING? (ON or OFF) - Will RETREAT to stay at ranged when using ranged weapons
     var Retreat OFF
## DANCE / COUNT Critters - Set min number of critters to "dance" with before you start killing. 
## Leave Dance.Count 0 to kill EVERYTHING. Set 1 to dance with 1 creature until a 2nd comes in, etc. If set to 1 will ALWAYS leave 1 creature in your room.
     var Dance.Count 0
## TACTICS TRAINING (ON OR OFF) - Train TACTICS in Combat
     var Tactics ON
# APPRAISE CREATURES - (ON or OFF) to APPRAISE ALL CREATURES
     var APPRAISE ON
# HUNT OPTION (HUNT every ~75 seconds unless perception locked)
     var HUNT ON
## APPRAISE ITEMS WHEN NO CRITTERS IN ROOM? (ON or OFF)
     var APP.ITEMS ON
## ITEMS TO APPRAISE (Set to NULL to not use) SET YOUR WORN ITEMS TO QUICK APPRAISE 
     var app1 sunburst
     var app2 balaclava
     var app3 necklace
## SANOWRET CRYSTAL? (ON or OFF) - ON will exhale crystal every ~100 seconds *IF CONCENTRATION ALLOWS
     var Crystal ON
## USE SANORWRET CRYSTALS IN COMBAT? (ON or OFF) - ON will use Sanowrets in combat (Turning ON WILL effect concentration and hinder spell casting - not recommended for most)
     var SanowretCombat OFF
## ZILLS? (ON or OFF) - FOR WORN INSTRUMENTS - ON will play Zills during certain times (Repairing armor, collecting, etc)
     var Zills ON
## Zill name ( zills / cowbell / etc )
     var Zill.Name zills
# F2P CHARACTER (ON or OFF) - If set to ON - Script will escape combat and go to town run when you get an inventory count warning
     var F2P OFF
# BIOMECHANICAL TARANTULA? (ON or OFF) - IF ON - Will pick a (semi-)random near locked skill to drain every 10 minutes while in combat
     var Tarantula ON
     var Tarantula.Name spider
## TARANTULA SKILLS TO CHECK - SET AN ARRAY OF SKILLS TO CHECK AGAINST FOR TARANTULA DRAIN
## MUST EXACTLY MATCH THE GENIE VARIABLE NAMES! THESE ARE THE SKILLS TARANTULA WILL CHECK FOR EACH SCHOOL
     var Magic.skills Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Arcana
     var Armor.skills Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor
     var Survival.skills Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing
     var Weapons.skills Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow
     var Lore.skills Appraisal|Tactics|Performance
# WARHORN? (ON or OFF) - For Barbarians and Bards only.
     var WarHorn OFF
## WAND SUPPORT (NULL to NOT use) (MEF wand / WoW wand / WoTP wand etc.) Set up to 2 sets of wands to use! Must use actual verb of wand!
## CAN SET AN ARRAY OF WANDS FOR EACH VAR ex- var Wand1 bloodwood branch|oaken staff|crystal
     var Wand1 indurium phoenix|crystal
     var Wand2 NULL
## WAND CONTAINERS *Must use 2 different containers to store Wands if using 2 identical named wands)
     var Wand1.Container round gourd
     var Wand2.Container NULL
## Wand Weapon - (NULL or WEAPON NAME) SET A MELEE WEAPON TO BUFF WHEN USING WANDS WITH A WEAPON BUFF
     var WandWeapon NULL
## EGG SUPPORT (ON or OFF)*Uses the HE Gift Egg in Combat every ~15 minutes to invoke more mobs
     var EGG OFF
## ASTROLABE (ON or OFF) - Uses an Astrolabe every 30 mins if ON (Will rotate if you use 2)
     var ASTROLABE OFF
## Set the name of the astrolabes - (2 words ONLY i.e - ornate astrolabe, twisted astrolabe)
     var ASTROLABE1 NULL
     var ASTROLABE2 NULL
     var Astro1.Container NULL
     var Astro2.Container NULL
## ORB RUB IN COMBAT (var Orb.Rub ON or OFF) - TURN ON TO RUB FAVOR ORB IN COMBAT EVERY ~40 MINUTES
## *NOTE THAT SCRIPT AUTOMATICALLY RUBS ORB ~ONE TIME~ EVERY FULL LOOP OF SCRIPT REGARDLESS OF THIS VARIABLE
     var Orb.Rub OFF
####################################################################################################
# ARMOR SWAP - (ON or OFF) - SPECIAL ARMOR SWAPPING ROUTINE FOR HELMS ONLY
# WILL SWAP OUT A SINGLE PIECE OF PLATE/BRIG/CHAIN/LIGHT HELM EVERY ~5 MINUTES IN COMBAT
     var Armor.Swap OFF
# IF Armor.Swap is ON - THEN ALL THE ARMORS BELOW MUST BE SET CORRECTLY!
# SET EVERY PIECE OF ARMOR TO SWAP BELOW, MUST SET AN ARMOR PIECE FOR ALL FOUR TYPES - TWO WORDS ONLY!
# ONE PIECE SHOULD MATCH YOUR MAIN ARMOR HELM
     var Light_Armor.Helm steelsilk balaclava
     var Chain_Armor.Helm chain balaclava
     var Brigandine.Helm brigandine balaclava
     var Plate_Armor.Helm NULL
####################################################################################################
# HEAVY ARMOR REMOVAL - (ON or OFF) - ON will take off plate/brig/chain armor before backstab/stealth routines
# Generally only needed for noobs with less then ~200 ranks in armors
     var Armor.Noob OFF
# Set Plate/Brig/Chain pieces here (USE EXACT SYNTAX) (If no armor to remove set to NULL)
     var PLATE1 gauntlet
     var PLATE2 greaves
     var PLATE3 NULL
     var PLATE4 NULL
# Set Light Armor Pieces to Swap in place of the Heavy armor pieces above - if any (set to NULL to not use)
     var LIGHTARMOR1 rugged gloves
     var LIGHTARMOR2 rugged greaves
     var LIGHTARMOR3 NULL
     var LIGHTARMOR4 NULL
####################################################################################################

##############################################################
# TOWN RUN / SPECIAL MODULES - SETTINGS FOR TOWN 
# AUTO HEALER / SELL GEMS/SKINS, BANK, OPTIONAL MODULES
##############################################################

# RETURN TO COMBAT MODULE (ON or OFF) - RESTARTS SCRIPT AND RETURNS TO COMBAT WHEN TOWN RUN IS FINISHED
# IF OFF - SCRIPT WILL ~ABORT~ ONCE TOWN RUN IS COMPLETE - LEAVE THIS ON FOR INFINITE AFK SCRIPTING
     var RETURN.TO.COMBAT ON
# AUTOHEAL (ON or OFF) - ON - LET SCRIPT HANDLE AUTO-HEALING AFTER COMBAT (DEPENDING ON YOUR GUILD/SETTINGS) 
# LEAVE THIS ON UNLESS YOU WANT TO HANDLE HEALING YOURSELF MANUALLY! (OR WITH ANOTHER SCRIPT) 
# TURNING THIS OFF WILL ~ABORT SCRIPT AFTER ESCAPING FROM COMBAT~! AND WILL PARSE: HELP ESCAPE PLZ!
     var AUTOHEAL ON
# HEAL ALL (ON or OFF ) - HEAL.ALL ON = FULLY HEAL IF YOU HAVE ~ANY~ WOUNDS AT ALL (even minor scars) 
# HEAL.ALL OFF = WILL SKIP HEALING IF INSIGNIFICANT WOUNDS (minor scratches etc)
     var HEAL.ALL ON
# SELL SKINS (ON or OFF) - VISIT FURRIER - SELL SKINS/BUNDLES 
     var SELLSKINS ON
# SELL GEMS (ON or OFF) - VISIT GEM SHOP - SELL ALL GEMS/POUCHES
     var SELLGEMS ON
# SELL METALS (ON or OFF) - VISIT GEM SHOP - SELL ALL LOOSE METALS/NUGGETS/BARS (except those in your Crafting Container) 
     var SELLMETALS ON
# BUY HERBS? (ON or OFF) - VISIT HERB SHOP - AUTO RESTOCK ON HEALING HERB SUPPLIES (IF in city with Herbalist)
     var HERBS ON
# USE HERBS IN COMBAT? (ON or OFF) - If ON - Script will eat herbs during combat every ~5 minutes if needed
     var HERBS.COMBAT ON
## Container.Herb - SET CONTAINER TO STORE YOUR HERBS IN (Can be a stackable herb container)
     var Container.Herb %Container
# BANK RUN (ON or OFF) - VISIT BANKS - DEPOSIT MONEY AFTER TOWN RUN 
     var BANKRUN ON
# INVENTORY CHECK (ON or OFF) - TURNS ON INVENTORY CHECKS FOR DUMPING ANY COMMON TRASH ITEMS IN INVENTORY (OR EXCESS GEM POUCHES / BUNDLING ROPE )
     var INVCHECK ON
# TRASH DUMP (ON or OFF) - IF ON WILL DUMP ANY ITEM IN YOUR TRASH VARIABLE (GLOBAL VARIABLE AT VERY TOP OF VARIABLE FILE)
     var TRASH.DUMP ON
# POUCH DUMP (ON of OFF) - IF ON - DUMPS ANY GEM POUCHES IN YOUR INVENTORY THAT ~DO NOT MATCH~ THE COLOR/DESCRIPTION OF YOUR PRIMARY GEMPOUCH ( var gemPouch )
# WILL ALSO DUMP YOUR NORMAL GEM POUCHES IF YOU HAVE MORE THAN 10 OF THEM until you only have 10 MAX (Prevent buildup of ~50 rogue pouches) 
     var POUCH.DUMP ON

## SHARD CITIZEN (ON or OFF) - Must be a citizen of shard
     var Shard.Citizen ON
# GET FAVORS? (ON or OFF) - (ONLY WORKS IN CROSSING / SHARD / HAVEN )
     var GET.FAVORS ON
     var FAVOR.GOD meraud
# REPAIR ARMOR? (ON or OFF) - REPAIR ALL ARMOR / WEAPONS DURING TOWN RUN (MUST HAVE MONEY IN LOCAL BANK)
     var REPAIR.ARMOR ON
## USE MAGIC REPAIR KITS? (SET NULL/OFF TO NOT USE)
## REPAIR.KIT and REPAIT.KIT.2 ARE FOR FULL REPAIR KITS THAT REPAIR ALL ARMOR ~AND~ WEAPONS
## REPAIR.KIT.WEAPON and REPAIR.KIT.ARMOR ARE ONLY FOR KITS THAT ONLY REPAIR ARMOR OR WEAPONS!
## YOU MUST SET THE CONTAINER THAT EACH SPECIFIC KIT IS FOUND IN! IT TREATS THIS CONTAINER LIKE GEMPOUCH.CONTAINER AND KEEPS CLOSED! *CAN BE SHARED WITH GEMPOUCH.CONTAINER!
     var REPAIR.KIT NULL
     var REPAIR.KIT.2 NULL
     var REPAIR.KIT.WEAPON NULL
     var REPAIR.KIT.ARMOR NULL
     var REPAIR.KIT.CONTAINER NULL
     var REPAIR.KIT.2.CONTAINER NULL
     var REPAIR.KIT.3.CONTAINER NULL
# CLIMBING/SWIMMING RUN (ON or OFF) - ATHLETICS TRAINING 
     var CLIMBING ON
## MAGIC CLIMBING ROPE (ON or OFF) - CHECK FOR MAGIC CLIMBING ROPE - USES THAT INSTEAD OF DEFAULT CLIMBING RUN
     var MAGIC.ROPE OFF
     var ROPE.NAME climbing rope
     var Rope.Container NULL
## WINDBOARD (ON or OFF) - TRAIN ATHLETICS WITH A WINDBOARD INSTEAD
     var WINDBOARD OFF
# COLLECTING - (ON or OFF) - OUTDOORSMANSHIP TRAINING - COLLECT ROCKS/COINS
     var COLLECTING ON
# BRAIDING - (ON or OFF) - TRAINS BRAIDING (ENGINEERING) - ONLY TRAINS TO ~70 RANKS!
     var BRAIDING ON
# RAVEN'S COURT SCHOLARSHIP STUDY (ON or OFF) - ONLY IN CROSSING !
     var RAVEN ON
# TEXTBOOK / COMPENDIUM? (ON or OFF) - TRAIN SCHOLARSHIP/FIRST AID W/ ANATOMY TEXTBOOK
     var TEXTBOOK ON
# TEXTBOOK TYPE - Textbook or Compendium
     var TEXTBOOK.TYPE textbook
     var Textbook.Container backpack
# SKINNING/FA TRAINER - (ON or OFF) ONLY WORKS FOR THE MAGIC SKINNING / FA TRAINERS
## The ones with 105 uses per day or infinite ( https://elanthipedia.play.net/Item:Small_blue-belly_crocodile_with_prominently_stitched_seams )
     var SKINTRAINER OFF
     var SKINTRAIN.NOUN crocodile
     var SKINTRAIN.CONTAINER goldenweave belt
# EPISTEMIC JOURNAL - For Epistemic Journals ONLY - Writes to Journal every 24 hours
# Set JOURNAL.TYPE ( NULL to NOT USE ) - Set NOUN of item to use ( traveler's diary / explorer's log / soldier journal / etc)
     var JOURNAL.TYPE NULL
# DISARM BOXES? (USES DISARM SCRIPT - MAKE SURE YOU SET THE VARIABLES UP IN disarm-vars)
     var DISARM ON
# BURGLE RUN (ON or OFF) - BURGLE RUN USING THE BURGLE SCRIPT (BURGLE.PAWN ON will Pawn all Burgle items)
     var BURGLE ON
     var BURGLE.PAWN ON
# BURGLE DUMP (ON or OFF) - Burgle Dump ON will DUMP/TRASH any Burgle item that does not sell at pawn shop
     var BURGLE.DUMP ON
# STEALING RUN (ON or OFF) - Does STEALING Run with the Ultimate Stealing Script
     var STEAL OFF
# PERFORMANCE RUN (ON or OFF) - DEDICATED PERFORMANCE TRAINING RUN DURING TOWN RUN (Uses your Zill.Name variable to train)
     var PERFORMANCE ON
# MAGICAL RESEARCH TRAINING (ON or OFF) - DEDICATED MAGICAL RESEARCH TRAINING DURING END OF TOWN RUN - TAKES A BIT OF TIME! 
     var MAGICAL.RESEARCH ON
# PRIMARY MAGICAL RESEARCH TYPE ( SET TO NULL TO CHOOSE AUTOMATICALLY BASED ON LEARNING )
# OPTIONS ARE: FUNDAMENTAL, STREAM, AUGMENTATION, UTILITY, WARDING, SORCERY, FIELD, SPELL
     var RESEARCH.TYPE NULL
# TEACHING? (ON or OFF) - If ON, will attempt to teach your other characters/people in the Friends variable
     var TEACH OFF
     var TEACH.SKILL hiding
     var TEACH.SKILL.2 evasion
## SUPPORT FOR MASTERCRAFT TRAINING
## IF YOU USE MASTERCRAFT - SET EACH SKILL ON THAT YOU WANT TO TRAIN
## *YOU MUST SET UP MASTERCRAFT - TOOLS ETC SEPARATELY
     var ALCHEMY OFF
     var ENGINEERING OFF
     var FORGING OFF
     var OUTFITTING OFF
     var ENCHANTING OFF
## VAULT SWAP (ON or OFF) - ON WILL TEMPORARILY SWAP YOUR 'var CONTAINER' FOR A SPECIAL BAG IN YOUR VAULT FOR MASTERCRAFT PURPOSES ONLY!
## AFTER MASTERCRAFT IS OVER, GOES BACK TO VAULT AND SWAPS BACK TO ORIGINAL BAG - PUTS YOUR CRAFTING BAG BACK IN THE VAULT!
## MAKE SURE YOU HAVE ENOUGH ROOM IN YOUR VAULT! THE SWAP CONTAINER SHOULD FIT ON THE SAME BODY SLOT AS THE BAG YOU ARE SWAPPING OUT!
     var VAULT.SWAP OFF
## VAULT CITY - SET THIS TO THE CITY NAME WHERE YOU HAVE YOUR VAULT - IF VAULT.SWAP IS ~ON~ IT WILL RUN TO THIS CITY FIRST
     var VAULT.CITY FC
## SET THE NAME OF YOUR CRAFTING BAG IN YOUR VAULT - MUST HAVE ~ALL YOUR CRAFTING TOOLS~ IN THIS BAG!!
## MAKE SURE TO BE SPECIFIC WITH YOUR CONTAINER VARIABLES SO THEY DONT GET MIXED UP! THIS CONTAINER SHOULD USE THE SAME BODY SLOT AS YOUR VAR CONTAINER!
     var CRAFTING.BAG dreamweave lootsack

# ALMANAC (ON or OFF) - USE ALMANACS (That trains random skill OR pick-a-skill every 10 minutes)
     var ALMANAC OFF
## ALMANAC VERB - if using the special encyclopedic almanac, MUST be set to 'encyclopedic almanac' to use the pick a skill function
     var ALMANAC.TYPE almanac
     var Almanac.Container goldenweave belt
## ALMANAC SKILLS to check/pick for encyclopedic almanac i.e. Sorcery|Forging|Engineering
## The default list has ALL skills listed - You can remove skills you don't want to boost
     var ALMANAC.LEARN Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor|Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing|Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow|Appraisal|Tactics|Performance|Enchanting|Forging|Engineering|Alchemy|Outfitting|Arcana
# LOCKPICK TRAINING ITEM? (Set to NULL to not use) - Must match EXACTLY with item name in hands (2 words only)
# For MAGIC LOCKPICK TRAINING ITEMS - * Assumes you use a WORN lockpick ring/case 
     var LOCKPICK.ITEM kiralan necklace
## SET A SECONDARY LOCKPICK ITEM HERE IF YOU HAVE A SECONDARY (OR SET TO NULL)
     var LOCKPICK.ITEM.2 NULL
## Lockpick.Container is where the MAGIC LOCKPICK ITEMS should be stored (NULL to try wear them)
     var Lockpick.Container NULL
# PILGRIM BADGES (ON or OFF) *CLERIC/PALADINS ONLY! - VISIT UNVISITED BADGE LOCATIONS - PRAY TO BADGE
     var PILGRIM OFF
# POWERWALKING (ON or OFF) - FOR MAGIC USERS - DO A POWERWALK DURING TOWN RUN 
     var POWERWALK ON
## SCRIPT CHECK LOGIC - TURN SCRIPT CHECK LOGIC (ON OR OFF) - WARNING - THERE ~WILL~ BE FALSE POSITIVES!! UNAVOIDABLE!!
## IF IT DETECTS ANY GM SCRIPT CHECKS - WILL ~ATTEMPT~ TO AUTOMATICALLY HANDLE IT AND/OR RUN AWAY (Not Log Out)
     var SCRIPTCHECK OFF
## Setting NO.CONTACT to "ON" will log out for 5 minutes if someone tries to drag you or hold your hand (DEFAULT: OFF)
## WARNING! IT WILL ALSO ESCAPE COMBAT IF ANYONE TALKS IN YOUR COMBAT ROOM! INCLUDING CRITTERS! SO IT CAN FALSE POSITIVE ON TALKING CRITTERS
     var NO.CONTACT OFF
## LOG.ON.STUN (ON or OFF) Set to "ON" to log out if you are too hurt/stunned and are unsuccessful running away (DEFAULT: ON)
     var LOG.ON.STUN ON
## LOG.ON.DEATH (ON or OFF) Set OFF to stay logged in even if you die (DEFAULT: ON)
     var LOG.ON.DEATH ON
## TOTAL TIME ONLINE - MAX TIME TO STAY ONLINE (IN SECONDS) After this time has passed will idle and logout to avoid AFK checks (Set to 0 to always stay online)
     var ONLINE.TIME 0
## FANG COVE? (ON or OFF) - Do you want to go to FANG COVE for healing/town stuff (Only works in Prime if Premium)
     var FANGCOVE ON
## USE PREMIUM JUMP JEWELRY? (ON or OFF) - Will use Premie JJ to teleport to Fang Cove for healing/bundles/gems/etc
     var JumpJewelry OFF
     var JewerlyVerb ironwood ring
## PERSONAL EMPATH HEAL (Put EMPATH'S NAME HERE to use. NULL to turn off) - If you use a personal empath to heal
## Setting this to anything OTHER than NULL/OFF will turn OFF the triggers to nod to someone when they ask if you want healing
     var PocketEmpath NULL
## EmpathRoom is ROOM NUMBER where you can find your PERSONAL EMPATH. (MUST be in the CITY you go to for TOWN RUN)
     var EmpathRoom NULL
## BankBot - Used for F2P characters to tip a bankbot any remaining coin at end of town run
## Set Tipping to 1, Bankbot name and Tiproom = room number bankbot is at, in your home town
     var Tipping 0
     var BankBot morph
     var TipRoom 753
## CLAN ITEM (TF USE ONLY)
     var CLAN OFF
     var CLAN.ITEM sphere
## LIGHTER ITEM (For using a Lighter to start fires instead of flint and blade)
## USAGE - var LIGHTER (ON or OFF) - Lighter.Name = verb of the item
     var Lighter ON
     var Lighter.Name stone
## CUSTOM TOWN SCRIPT - (Must be the exact name of the script (IGNORE .CMD - JUST USE NAME)
## Set your own script to run during the town run
## YOU MUST HAVE A PARSE AT THE END OF YOUR SCRIPT: put #parse SCRIPT FINISHED!
## IF YOU DO NOT HAVE THIS PARSE THEN UBER WILL NOT RECOVER PROPERLY!
     var Custom.Script ubercharswap2
## RPA BESTOW? (ON or OFF) - MUST BE IN THE PIRP SYSTEM TO BESTOW RPAS! https://elanthipedia.play.net/RPA_command
     var RPA ON
## LIST THE PEOPLE YOU WANT TO BESTOW RP POINTS TO BELOW IN AN ARRAY!!
## ie. var PirpList Name1|Name2|Name3|Name4|Name5
     var PirpList Raidboss|Healbitch|Illuminati|Breckin|Ryhs|Rhoat|Shepherd|Kohen|Worril|Odium|Morvetan|Orcher|Amroth|Mephos|Yew|Lorak|Wryll|Rellie|Beerfest|Bayndayd|Xana|Crivic|Blaakwulf|Wong|Findal|Regnar|Lakshmi|Vivica|Phucker|Jimdickens|Kiroq|Bleed|Rutinger|Nekhet|Leecya|Arazenya|Kithkani


######################################################################################################################
######################################################################################################################
# GENERAL MAGIC VARS - ALL MAGIC USERS MUST SET THESE VARIABLES
# GENERIC MAGIC VARIABLES FOR ALL MAGIC USERS
######################################################################################################################
######################################################################################################################
# SMART MANA FOR SPELLS? AUTO-DETERMINES OPTIMAL MANA FOR SPELLS AFTER A NEW SETUP (OR EVERY ~2 WEEKS IN GAME)
# SMART MANA WILL AUTOMATICALLY ADJUST YOUR MANA LEVELS UP AND DOWN AS YOU GAIN IN RANKS FOR OPTIMAL LEARNING
# (ON or OFF) - RECOMMEND LEAVING ON - SETTING THIS ON WILL OVERRIDE ALL MANUAL MANA SETTINGS 
# TURNING SMART.SPELLS OFF MEANS YOU WILL ~HAVE~ TO SET MANA MANALLY AND DO MUCH MORE FINE TUNING 
     var SMART.SPELLS ON
# CAMB HEAVY (ON or OFF) (OFF by default) - ON WILL MAKE SMART MANA PUT MORE MANA INTO CAMBRINTH THEN MAIN PREP
     var Camb.Heavy OFF
# MAGIC RATE - (NULL is RECOMMENDED) Set the MIN Magic Rate to reach before switching to a different spell school. 
# SETTING TO A NUMBER WILL SPAM THE SAME SPELL UNTIL YOU REACH DESIRED LEARNINGRATE. Set to NULL to cycle through spells normally 
     var Magic.Rate NULL
# MAGIC SNAP CAST. Set to 0 for Full Aim. Set to desired number of seconds to pause for that many seconds before casting
     var MAGIC.SNAP 0
# CAMBRINTH CHARGES - Number of Times to Charge your cambrinth (or harness if Cambrinth is NULL) each time!
# RECOMMEND LEAVING THIS AT 1 - 2 AT MAX - THIS VARIABLE TIES INTO HOW SMART MANA CALCULATES MANA
     var CambrinthCharge 1
# OFFENSIVE SPELL MANA AMOUNTS - Set BASE MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Mana 15
     var Debilitation.Mana 15
     var Utility.Mana 15
     var Augmentation.Mana 15
     var Warding.Mana 15
     var Sorcery.Mana 15
# OFFENSIVE SPELL CAMBRINTH AMOUNTS - Set CAMBRINTH MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Camb 20
     var Debilitation.Camb 20
     var Utility.Camb 20
     var Augmentation.Camb 20
     var Warding.Camb 20
     var Sorcery.Camb 20
# USE HARNESS / CAMBRINTH FOR OFFENSE SPELLS (ON or OFF)
# TURN OFF TO SKIP HARNESS/CAMBRINTH COMPLETELY
     var Use.Cambrinth ON
# USE HARNESS / CAMBRINTH FOR BUFFS (ON or OFF)
     var Use.Cambrinth.Buffs ON
# CAMBRINTH ITEM for charging BUFFS/SPELLS (Set to NULL to not use)
     var Cambrinth cambrinth prism
     var Cyclic.Cambrinth NULL
# CAMBRINTH MANA AMOUNT FOR SPELLS - Amount of Mana to put in CAMBRINTH for Magic Tattoos / Harness for Cyclics when No Raw Chanelling feat
     var CambrinthMana 12
# CAMBRINTH MANA FOR Cylics - Amount of Mana to put in cambrinth for Cylics ONLY
     var CyclicCharge 15
# SLOW.CAST (ON or OFF) - OFF IS DEFAULT - Slow Cast ON will cast offensive spells about half as often as normal
# SLOW.CAST OFF (Default) will spam spells in between attacks as much as possible (mana permitting)
     var Slow.Cast OFF
# NO CAMBRINTH USE DURING TM / DEBIL SPELLS (ON or OFF)
# IF YOU SET THIS ON, SCRIPT WILL SKIP USING A CAMBRINTH FOR TM OR DEBIL SPELLS
     var NoCambTM OFF
# POWER PERCEIVE (Perceives every ~5 minutes)
     var POWERP ON

# RITUAL FOCUS ITEM (REQUIRED for RITUAL SPELLS - set Ritual to NULL to not use)
# Ritual.Container can be set to any Container - or set to NULL to wear it first
     var Ritual sunburst
     var Ritual.Container NULL
# SORCERY RITUAL FOCUS (Separate ritual focus for Sorcery IF NEEDED)
     var Sorcery.Focus NULL
# TM DAMAGE FOCUS ITEM - IF SET WILL USE TM FOCI MODE EVERY ~HOUR (set to NULL to not use)
     var TMFoci NULL
     var TMFoci.Container NULL
# USE SYMBIOSIS ON ATTACK SPELLS? (ON or OFF)
# ONLY USEFUL AT ~HIGHER RANKS~ OF MAGIC - ~NOT~ FOR NOOBS!!
     var Target.Symbiosis ON
     var Utility.Symbiosis ON
     var Augmentation.Symbiosis ON
     var Warding.Symbiosis ON
     var Sorcery.Symbiosis ON
     var Debilitation.Symbiosis ON
# USE SYMBIOSIS ON BUFFS? (ON or OFF) - FOR HIGHER RANKS ONLY
     var Symbiosis.Buffs OFF

# MAGIC TATTOO (Set to NULL or the FULL SPELLTIMER NAME i.e - IronConstitution / MajorPhysicalProtection) - Will use a Magic Tattoo every ~5-10 minutes
# FULL SPELLTIMER NAME MUST ALSO BE SET IN YOUR BUFFS OR SPELLS - USE SORCERY.CAMB (ABOVE) TO SET CAMB MANA FOR MAGIC TATTOO
     var Magic.Tattoo Tailwind
# MAGIC TATTOO CAMBRINTH/HARNESS MANA - Set the amount of Camb Mana you want to boost your tattoo with
     var Tattoo.Camb 65
# HEROIC TATTOO (ON or OFF) - ONLY FOR HEROIC TATTOOS! (Normal tattoos use Magic.Tattoo)
# VERY BASIC - WILL JUST INVOKE TATTOO / CAST ON A 1 HOUR COOLDOWN
     var Runic.Tattoo OFF

#########################################################################################
# GUILD SPECIFIC OPTIONS BELOW
# SET THE GUILD OPTIONS FOR THE CURRENT CHARACTER YOU ARE EDITING 
########################################################################################
########################################################################################
# NECROMANCER SETTINGS
# SET NECRO.HEAL ON TO USE NECRO HEALING - (Consume Flesh / Devour depending on skills)
     var Necro.Heal ON
## NECROHEAL CREATURE (SET A ~LOW LEVEL~ CREATURE TO KILL ~ONLY FOR DEDICATED HEALING PURPOSES~)
## IDEALLY SET THIS TO A CREATURE NEAR YOUR "HOME CITY" SO YOU DON'T HAVE FAR TO RUN FOR HEALING
     var NecroHeal.Critter GOBLIN SHARD
# SET NECRORITUAL ON TO PERFORM RITUALS IN COMBAT (Preserve/Harvest/Dissect/Butchery/etc)
     var NecroRitual ON
## FORSAKEN? (ON or OFF) - IS NECRO FORSAKEN?? IF ON - WILL AVOID TOWNS/SERVICES AS MUCH AS POSSIBLE!! 
## *Not fully tested/implemented-may not be perfect- but should avoid towns. May have issues REPAIRING ARMOR Unless USING FC* 
     var Forsaken OFF
## RISEN? (ON or OFF) - CREATES RISEN MINIONS IN COMBAT (CAREFUL - GENERATES DIVINE OUTRAGE!) 
     var Risen OFF
## QUICKEN EARTH - ON TO CHECK FOR AND SUMMON DIRT CONSTRUCTS EVERY ~5 MINUTES
     var QuickenEarth OFF
     var QE.Mana 10
     var CFB.Mana 10
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Necro.Cyclics |USOL|ROC
     var Necro.Cyclics.mana |5|4
## Necromancer ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Necro.Target.Spell ACS|VS
     var Necro.Debilitation.Spell HP
     var Necro.Utility.Spell GAF
     var Necro.Augmentation.Spell Obfuscation
     var Necro.Warding.Spell MAF
     var Necro.Sorcery.Spell MPP
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Necro.Buffs IVM|REI|ROC|CH
########################################################################################
########################################################################################
### BARD SETTINGS
# Cyclic Spell Setup
# YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST be set for each individual cyclics!
# YOU MUST SET cyclic.mana in an array to match!! 6 cyclic - 6 mana numbers
  # SET TO NULL/OFF IF NOT TRAINING CYCLICS - THERE ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Bard.Cyclics |AEWO|HODI|FAE|CARE|PYRE|GJ
     var Bard.Cyclics.mana |5|4|5|5|5|6
## Bard ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Bard.Target.Spell BOS
     var Bard.Debilitation.Spell DMRS
     var Bard.Utility.Spell AOT
     var Bard.Augmentation.Spell WILL
     var Bard.Warding.Spell REPR
     var Bard.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Bard.Buffs |MIS|HARM|RAGE|REPR
## BARD SCREAMS? ( Screams in combat every ~60 seconds) (ON or OFF)
     var Bard.Scream ON
## BARD WHISTLE (ON or OFF)
     var Bard.Whistle ON
########################################################################################
########################################################################################
# WARRIOR MAGE SETTINGS
## USE SUMMONING? (Will train Summoning every ~3 minutes)
     var Summoning ON
## ELEMENTAL ALIGNMENT - Element can be FIRE, WATER, ELECTRIC, AETHER, AIR or EARTH
     var element FIRE
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var WM.Cyclics |EE|AC|FR
     var WM.Cyclics.mana |5|4|5
## Warrior Mage ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var WM.Target.Spell FS|FB
     var WM.Debilitation.Spell EE|ALA
     var WM.Utility.Spell ETF
     var WM.Augmentation.Spell YS
     var WM.Warding.Spell ES
     var WM.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var WM.Buffs Ease|TW|SW|Zephyr|SUF|Ignite
## ~WEAPON SUMMONING LOGIC~
# SUMMON WEAPONS (ON or OFF)
     var SummonWeapons OFF
# SUMMON ELEMENT - Must set your WEAPON SUMMON ELEMENT ( Stone/Earth (Default) - Fiery/Fire (Fiery Infusions) - Icy/Ice (Icy Infusions) - or Electric (Shocking Infusions)
     var SummonElement FIRE
# ELEMENTAL CHARGE SPELL Must be *a spammable spell* of your chosen element. Will prep at minimum mana - if you want to prep at something else put a number after
     var ChargeSpell MOA
# SUMMON WEAPON TEMPLATE (0 or 1) - 0 = Default weapon, 1 = Turn weapon to other template
     var SummonTemplate 1
# SUMMON WEIGHT/DENSITY (0 - 2 to set weapon density - Must know QUICK INFUSIONS spell)
# 0 = Lightest Weight, 1 = DEFAULT, 2 = Heavier Weight
     var SummonWeight 1
# Set weapons you want to summon (ON or OFF) - Setting to ON will override your default weapon variables at top of script
     var SummonHT OFF
     var SummonLT OFF
     var SummonSE OFF
     var SummonLE OFF
     var SummonTHE ON
     var SummonSB OFF
     var SummonLB OFF
     var SummonTHB ON
     var SummonPolearms ON
     var SummonStaves ON
## INGOT (ON or OFF) Bump up tier of weapons - Must know REINFORCED INFUSIONS spell and have a rare metal ingot
     var WMIngot OFF
## SET INGOT STORAGE CONTAINER (Set to either a sigil ring or a specific container)
     var Ingot.Container sigil ring
########################################################################################
########################################################################################
# MOON MAGE SETTINGS
## MOON MAGE ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var MM.Target.Spell DO|Burn
     var MM.Debilitation.Spell Dazzle|MB
     var MM.Utility.Spell PG
     var MM.Augmentation.Spell AUS|ART
     var MM.Warding.Spell PSY
     var MM.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var MM.Cyclics |SHW
     var MM.Cyclics.mana |5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var MM.Buffs CV|Shadows|TS|COL|Shadowling|PSY
## OBSERVATION TRAINING - PREDICT TOOL IS ONLY USED FOR PREDICTION OUTSIDE OF COMBAT! TOOL MUST ALREADY BE BONDED!!
## Predict.tool can be - BONES, CHART, MIRROR, PRISM, BOWL, DECK or NULL to turn off.
     var Predict.Tool DECK
## Read The Ripples (RTR ON or OFF) - Will Perform a RTR routine (observe spam) during town run **MUST HAVE TELESCOPE!
     var RTR OFF
## Where you store your telescope * If any - defaults to your main Container if not set
     var Telescope.Container NULL
## OBSERVE IN COMBAT (ON or OFF) - If ON will do Astrology observations in Combat every couple minutes
     var Combat.Observe ON
########################################################################################
########################################################################################
# CLERIC SETTINGS
## CLERIC ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Cleric.Target.Spell FOU|FF
     var Cleric.Debilitation.Spell PS|Malediction
     var Cleric.Utility.Spell DR|BLESS
     var Cleric.Augmentation.Spell Benediction
     var Cleric.Warding.Spell MPP|SL
     var Cleric.Sorcery.Spell dazzle
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Cleric.Cyclics |HYH|GHS|REV|SA
     var Cleric.Cyclics.mana |15|15|15|15
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Cleric.Buffs OM|Auspice|SOS|POM|MAPP|PFE|YS
## ARE YOU USING OM ORB? (MUST BE SET IN BUFFS ABOVE!) SET MANA AMOUNT TO CAST OM / CHARGE ORB WITH EACH TIME
     var OM.Mana 25
## TYPE OF ORB YOU USE FOR OM - OPTIONS:( FIRULF, MERAUD or KEREN)
     var FavorOrb meraud
## BUFF SPELLS YOU WANT TO ALWAYS KEEP ACTIVE IN YOUR OM ORB (You can just set this to var OM.Buffs %Cleric.Buffs ) 
     var OM.Buffs PFE|POM|MPP|MAPP|SAP|SOL
## CLERIC RITUALS? (Perform CLERIC RITUALS during Town Runs/in Combat)
     var ClericRituals ON
### Prayer Mat - Set to NULL to not use or the noun of the mat/rug
     var PrayerMat mat
## HOLY WATER VESSEL - Set your container you use to store/collect holy water
     var HolyWater chalice
### COMBAT COMMUNES - (ON or OFF) - Set the COMMUNES you wish to perform while IN COMBAT 
     var Commune.Meraud ON
     var Commune.Truffenyi ON
     var Commune.Tamsine OFF
### FLINT KNIFE - Set a DEDICATED WEAPON/KNIFE to STRIKE FLINT for MAKING FIRE for RITUALS
### MUST be a METAL weapon you can use to STRIKE FLINT for fire
     var FlintKnife knife
## CLERIC ALIGNMENT GOD - Set a God to align to ( https://elanthipedia.play.net/Cleric_3.0#Alignment )
## CHOOSE A LIGHT/DARK/NEUTRAL GOD ONLY - Each Type will buff 2 magic skills and penalize 3 others
## BY DEFAULT SCRIPT WILL USE ~CHADATRU~ (Which buffs AUG/WARDING - Generally the most lacking magics for Clerics)
## Set a different god if you wish to buff other magics but BE CAREFUL!!! 
     var Alignment.God CHADATRU
########################################################################################
########################################################################################
# RANGER SETTINGS
## RANGER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Ranger.Target.Spell DEVI|STAMPEDE
     var Ranger.Debilitation.Spell DEADFALL|SWARM
     var Ranger.Utility.Spell EM|BLEND
     var Ranger.Augmentation.Spell SOTT
     var Ranger.Warding.Spell EY
     var Ranger.Sorcery.Spell ECRY
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Ranger.Cyclics |CS|BES
     var Ranger.Cyclics.mana |5|5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Ranger.Buffs Athleticism|STW|EY|WOTP|OATH|ETC|Bloodthorns
########################################################################################
########################################################################################
## PALADIN SETTINGS
## PALADIN ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Paladin.Target.Spell FST
     var Paladin.Debilitation.Spell Shatter
     var Paladin.Utility.Spell AS
     var Paladin.Augmentation.Spell RW
     var Paladin.Warding.Spell SP
     var Paladin.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Paladin.Cyclics |HOW|TR
     var Paladin.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Paladin.Buffs AA|Courage|HES|RW|SR|Clarity
## SET your HOLY WEAPON here (NULL to ignore) - Holy Weapon Name
     var HolyWeapon NULL
## Holy Icon (NULL TO NOT USE/IGNORE) - Set to the noun of your icon
     var HolyIcon NULL
########################################################################################
########################################################################################
## TRADER SETTINGS
## TRADER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Trader.Target.Spell CRD|STARCRASH
     var Trader.Debilitation.Spell FLUORESCE|AVA
     var Trader.Utility.Spell NOUMENA
     var Trader.Augmentation.Spell BLUR
     var Trader.Warding.Spell IR
     var Trader.Sorcery.Spell MPP
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Trader.Cyclics |ARS|SOV
     var Trader.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Trader.Buffs |TRC|Blur|LGV|NONCHALANCE
########################################################################################
########################################################################################
# EMPATH SETTINGS
## EMPATH ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Empath.Target.Spell PARALYSIS
     var Empath.Debilitation.Spell LETHARGY|NB
     var Empath.Utility.Spell GS|HEAL
     var Empath.Augmentation.Spell TRANQUILITY
     var Empath.Warding.Spell IC|POP
     var Empath.Sorcery.Spell ES|Tailwind
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Empath.Cyclics |AD|Regen|GS
     var Empath.Cyclics.mana |7|7|7
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Empath.Buffs  |AGS|BS|IC|GOL|MEF|Heal
## GAURDIAN SPIRIT? (ON or OFF) - ON will keep up Guardian Spirit while in Combat
     var Guardian.Spirit ON
## CUSTOM GUARDIAN SPIRIT (ON or OFF) - If ON - will "cast custom" instead of casting normal
     var Guardian.Custom OFF
## ATTACK CONSTRUCTS ONLY? (ON or OFF) - ON will ONLY attack constructs (unless using Absolution vs unded). OFF will attack everything
## WARNING - SETTING TO OFF WILL CAUSE EMPATHIC SHOCK!!!!
     var Construct.Only ON
## USE MANIPULATE FRIENDSHIP (ON or OFF) - ON will attempt to manipulate non-construct creatures
     var Manipulate ON
## ESCAPE COMBAT WHEN EMPATHY REACHES 0? (ON or OFF) - If Empathy LearningRate reaches 0 during combat, will go on town run
     var Empathy.Escape OFF
## EMPATH PERCEIVE HEALTH WALKS (ON or OFF) - If ON - Will go on perceive health walks around town during town run
     var Empath.Walk ON
## EMPATH UNITY LINK (ON or OFF) - FOR EMPATH HEALBOT MODE - DO YOU KNOW UNITY LINK? MUST BE 70+ CIRCLE AND 380+ EMPATHY
     var Unity ON
## TEACH CLASS (FOR HEALBOT MODE) - SET THE SKILL OF THE CLASS YOU WANT TO TEACH
     var TeachClass TM
## BLACKLIST! (FOR HEALBOT MODE) - SET THE NAMES OF THE PEOPLE TO BLACKLIST FROM HEALING SERVICES!
## MUST BE IN AN ARRAY - var Blacklist Bob|Frank|Dave
     var Blacklist NULL
########################################################################################
########################################################################################
# THIEF SETTINGS
# AMBUSH TRAINING (Use AMBUSH MOVES in COMBAT - STUN/CLOUT/SLASH)
     var Ambush ON
# SELECT KHRI TO USE (Set as many ON / OFF as you want )
# IT WILL ONLY USE AS MANY KHRI AS YOU CAN HANDLE AT ONCE, PRIORITIZING THE MOST IMPORTANT DEPENDING ON SCENARIO)
     var khriSAGACITY ON
     var khriSTEADY ON
     var khriSTRIKE ON
     var khriFOCUS ON
     var khriELUSION ON
     var khriENDURE ON
     var khriAVOIDANCE ON
     var khriADAPTATION ON
     var khriPROWESS ON
     var khriHASTEN ON
     var khriHARRIER OFF
     var khriSERENITY OFF
     var khriSIGHT ON
     var khriFLIGHT ON
     var khriCALM OFF
     var khriGUILE OFF
     var khriDARKEN ON
     var khriDAMPEN ON
     var khriSHADOWSTEP ON
     var khriELIMINATE OFF
     var khriTERRIFY OFF
     var khriFRIGHT OFF
     var khriINTIMIDATE OFF
     var khriPLUNDER ON
     var khriSAFE OFF
     var khriEVANESCENCE OFF
     var khriCREDENCE OFF
     var khriCUNNING OFF
# USE KHRI DURING TOWN RUN? (ON or OFF) - Turn OFF to Skip using Khri during town run - for Sanowret use
     var Khri.Town ON
########################################################################################
########################################################################################
# BARBARIAN SETTINGS
# USE WHIRLWIND?
     var Whirlwind ON
# USE DUAL WIELD? (ON or OFF) - Dual wield requires 450+ in the weapon
     var DualWield ON
# EXPERTISE COMBOS? (ON or OFF) - Does Barb Expertise Combos (and helps generate IR)
     var Expertise ON
# Set which Forms you want to use (ON or OFF)
# Auto-turns some forms on/off depending on what skills you are training
     var barbEagle ON
     var barbBadger ON
     var barbPanther ON
     var barbPiranha ON
     var barbDragon ON
     var barbMonkey ON
     var barbTurtle OFF
     var barbOwl OFF
     var barbBear ON
     var barbBuffalo OFF
     var barbPython ON
     var barbSwan ON
     var barbToad OFF
     var barbWolverine OFF
# ROARS to use (will only use one)
     var roarEmbrace OFF
     var roarEverild ON
     var roarWail OFF
     var roarScreech OFF
     var roarShriek OFF
     var roarAnger ON
     var roarKuniyo ON
# BERSERKS to use
     var zerkHurricane OFF
     var zerkBlizzard ON
     var zerkFamine ON
     var zerkAvalanche ON
     var zerkTsunami OFF
     var zerkWildfire OFF
     var zerkEarthquake OFF
     var zerkTornado OFF
     var zerkFlashflood ON
     var zerkLandslide ON
     var zerkCyclone OFF
     var zerkDrought OFF
# MEDITATIONS to use (ON or OFF) - WILL ONLY WORK FOR HIGHER LEVEL BARBS
     var medContemplation ON
     var medTenacity ON
     var medSerenity ON
### END OF CHARACTER 3 VARIABLES
### STOP EDITING HERE ~~~ END OF CHARACTER 3 VARIABLES ##########
####################################################################################
####################################################################################
echo **** LOADED %CHARACTER3 VARIABLES
goto END.OF.VARS
}

CHARACTER4:
#########################################################################################################
#########################################################################################################
## CHARACTER 4 VARIABLES
## *CHARACTER4 VARIABLES BLOCK BELOW
if matchre("$charactername", "(?i)%CHARACTER4") then
#########################################################################################################
{
### GENIE LAYOUT - SET THE GENIE LAYOUT YOU WANT THIS CHARACTER TO USE - MUST EXACTLY MATCH THE LAYOUT NAME IN GENIE!
### Example: var GENIE.LAYOUT Shroom.layout - TO SAVE A LAYOUT IN GENIE SET IT UP HOW YOU LIKE AND CLICK LAYOUT > SAVE LAYOUT AS > NAME IT HOW YOU WANT
### IF YOU LEAVE THIS SET TO NULL THEN IT WILL JUST USE THE DEFAULT LAYOUT THAT IS SET (default.layout) 
     var GENIE.LAYOUT Illuminati.layout
### HEAL.CITY ( NULL or CITY NAME (CROSS/LETH/HIB/RIVER/THEREN/SHARD) - Will run to this town for HEALING no matter where you are
     var HEAL.CITY NULL
### HOME CITY (NULL or CITY NAME) - Will attempt to return to your home city after a heal run (if not already in that city) ONLY SUPPORTS MAINLAND CITIES
     var HOME.CITY NULL
### SAFE ROOM (set to NULL to ignore) ~MUST~ TIE INTO HOME.CITY ABOVE! THE ROOM ID YOU WANT TO SCRIPT IN DURING TOWN RUN - MUST BE VALID ROOMID IN YOUR HOME CITY!
### WARNING!: IF YOU DO NOT SET BOTH HOME.CITY AND SAFE.ROOM CORRECTLY YOU ~WILL~ RUN INTO ERRORS - LEAVE BOTH AT NULL TO LET SCRIPT LOGIC HANDLE IT
     var SAFE.ROOM NULL
### AUTO-PROGRESS? (ON or OFF) - ON WILL CHOOSE YOUR COMBAT CREATURE AUTOMATICALLY BASED ON YOUR RANKS - YOU DO NOT NEED TO SET IT! OVERRIDES COMBAT.CRITTER VARIABLE
     var AUTO.PROGRESS ON
### AUTO-PROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var PROGRESS.TYPE MM
### COMBAT CRITTER - ONLY USED WITH AUTO.PROGRESS OFF - MUST BE A VALID CREATURE NAME! USE FULL NAME OR 1/2/3 TO SPECIFY TIERS ie SNOW GOBLIN 2
     var COMBAT.CRITTER GOBLIN
### ALTERNATE CRITTER - PICK A ALTERNATE CRITTER TO HUNT - IF YOUR MAIN HUNTING GROUND IS FULL!
     var ALTERNATE.CRITTER MUSK HOG
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var PRIORITY.ROOMS NULL
### XP TRACKER RESET ON SCRIPT STARTUP - (ON or OFF) - RESETS EXP TRACKER TRACKING TIME ON INITIAL LAUNCH OF SCRIPT ONLY
     var XP.RESET ON

### GUI OPTIONS ARE RECOMMENDED TO LEAVE OFF COMPLETELY - THESE OPTIONS ONLY HERE BY SPECIAL REQUEST - WILL BE ANNOYING IF YOU TURN IT ON
### CRITTER.GUI (ON or OFF) - OFF by default - CREATES CRITTER GUI WINDOW - MUST MANUALLY CLICK TO CHOOSE YOUR COMBAT CRITTER BASED ON PROVINCE / SKILL / PREFERENCE
     var CRITTER.GUI OFF
### WEAPON.GUI (ON or OFF) - OFF by default - CREATES WEAPON GUI WINDOW - CHOOSE YOUR WEAPONS FOR THAT RUN *IF YOU HAVE AN ARRAY OF WEAPONS SET IN A SINGLE WEAPON VARIABLE
     var WEAPON.GUI OFF

# FRIEND LIST (People you will hunt with) Put your friends names in place of these. Ex. Bob|Fred|George
# Can just put your name in here or make it blank and it will only find empty rooms.
     var FRIENDS %ALLCHARACTERS|%GLOBALFRIENDS

##############################################################
# WEAPON / CONTAINERS / AMMO SETTINGS - BE VERY SPECIFIC! 
##############################################################

# CONTAINERS - MANDATORY! - SET YOUR MAIN ~3-4~ LARGEST CONTAINERS!
# BE SPECIFIC WITH CONTAINER NAMES - USE 2 WORDS WHENEVER POSSIBLE!
     var Container traveling bag
     var Container.Boxes pannier
     var Container.Backup clouds
     var Container.Crafting shadows
# SHEATH CONTAINER IS FOR SUPER LONG ITEMS - CAN BE ANY LARGE CONTAINER - NOT NECCESARY TO SET 
     var Container.Sheath shadows
# AMMO CONTAINER FOR STORING AMMO - ARROWS/BOLTS/ROCKS - BACKUP CONTAINER IS "OVERFLOW" FOR EXTRA AMMO
     var Container.Ammo quiver
     var Container.Ammo.Backup clouds
## CONTAINER.GEMPOUCH - VERY IMPORTANT! - ~MUST BE A SEPARATE CONTAINER~ FROM OTHER BAGS! SMALL/MEDIUM-SIZE CONTAINER IS FINE
## SPECIAL CONTAINER! SCRIPT WILL KEEP THIS CLOSED AT ALL TIMES AND ~ONLY USE IT FOR STORING FULL GEM POUCHES!~
## CONTAINER.GEMPOUCH MUST BE A ~CLOSABLE~ CONTAINER TO STORE ~FULL~ GEM POUCHES IN 
## AGAIN - DO NOT SHARE THIS CONTAINER WITH ~ANY OTHER CONTAINERS~ (except Repair Pouch Container) 
     var Container.GemPouch arm pouch
# Container.EmptyPouch is for storing EMPTY GEM POUCHES (This can be ANY container EXCEPT for Container.GemPouch )
     var Container.EmptyPouch pannier
# DIRT CONTAINER - For storing dirt for various use (ONLY used by Thieves/Clerics/Necros)
     var Container.Dirt pannier
## MISC SHEATH OPTIONS (Storing specific weapons in specific containers - toolstraps/bandoliers/harnesses etc) - SET TO NULL/OFF TO NOT USE
## SET THE SHEATH NAME UNDER SHEATH.1 - SET THE WEAPONS YOU WANT TO USE ON EACH SHEATH UNDERNEATH IN AN ARRAY ex:
## var Sheath.1 toolbelt
## var Sheath.1.Weapons sabre|axe|broadsword
     var Sheath.1 hip pouch
     var Sheath.1.Weapons spear|halberd|blade|greathammer|tachi|maul|sabre
     var Sheath.2 clouds
     var Sheath.2.Weapons crossbow|frying pan|sling|shortbow|sabre
     var Sheath.3 tag sack
     var Sheath.3.Weapons lantern|ebonwood telescope|paper starchart|inkpot|Tokka deck
     var Sheath.4 NULL
     var Sheath.4.Weapons NULL
     var Sheath.5 NULL
     var Sheath.5.Weapons NULL
     var Sheath.6 NULL
     var Sheath.6.Weapons NULL
     
## WEAR WEAPONS (Set an array of weapons/shields you want the script to try and wear first before stowing)
     var Wear.Weapons NULL

## SMART.WEAPONS - ON TO TRAIN WEAPONS FROM LOWEST SKILL TO HIGHEST. "OFF" WILL GO IN A LINEAR ORDER (DEFAULT: ON)
## ON WILL DYNAMICALLY TRAIN TO ALWAYS MAKE SURE THE LOWEST SKILLED WEAPON IS TRAINED FIRST 
     var SMART.WEAPONS ON
     
## WEAPON SETTINGS - BE VERY SPECIFIC SETTING WEAPONS ! USE TWO WORDS WHENEVER POSSIBLE!
## SET ALL YOUR WEAPONS BELOW - MUST ~EXACTLY MATCH THE ITEM DESCRIPTION WHEN IN HANDS~! (GLANCE at it in your hands to get correct description) 
## BE SPECIFIC WHEN SETTING WEAPONS!! USE 2 WORDS WHEN POSSIBLE! TO TURN A WEAPON SKILL ~OFF~ SET IT TO - NULL
     var SEWEAPON sabre
     var LEWEAPON tachi
     var THEWEAPON marauder blade
     var SBWEAPON frying pan
     var LBWEAPON greathammer
     var THBWEAPON steel maul
     var STAVES nightstick
     var POLEARMS halberd
     var RANGED.BOW competition shortbow
     var RANGED.CROSSBOW crossbow
     var RANGED.SLING sling
     var LTWEAPON frying pan
     var HTWEAPON spear
# MAIN OFFHAND WEAPON TRAINING - MELEE ONLY (MUST BE A LIGHT/MEDIUM WEAPON - HEAVY or 2HANDED WEAPONS WONT WORK!!)
     var OHWEAPON frying pan
# ALTERNATE OFFHAND WEAPONS (For Backtraining/Dual Training weapons while training other Weapons)
# ~MUST~ BE LIGHT/MEDIUM WEIGHT WEAPON! CANNOT USE HEAVY or 2Handed Weapons! (Unless Barb) (SET TO NULL/OFF TO NOT USE)
     var ALTWEAPON1 frying pan
     var ALTWEAPON2 NULL
     var ALTWEAPON3 NULL
## BRAWLWEAPON (DEFAULT: $charactername - Set to NULL to skip brawling)
     var BRAWLWEAPON $charactername
     #var BRAWLWEAPON $charactername
## Backstab/Ambush Weapon (Thief Only)
     var BSWEAPON mirror blade

# AMMO SETTINGS - DO NOT REMOVE THE { } BRACKETS!!!
     if (!$AMMOSWAP) then
{
     var XbowAmmo crossbow bolt
     var BowAmmo arrow
     var SlingAmmo smooth rock
}

## ARMOR CHECK (ON or OFF) - Turn this OFF if you want the script to SKIP checking your armor at the beginning
## If ON - at the beginning, script will remove any armor/fluff you are wearing, and then put on all the armor you have set below. This ensures you have the correct armor on.
     var ARMOR.CHECK ON
## SET YOUR SHIELD - ABSOLUTELY 100% MANDATORY! RECOMMEND AN ARM-WORN SHIELD
     var MyShield sipar
## ARM WORN SHIELD? (ON OR OFF) - I RECOMMEND ALWAYS USING AN ARM WORN / SMALL SHIELD - MAKES LIFE MUCH EASIER
     var ArmWorn ON
## MAIN ARMOR TO CHECK - PRIMARY COMBAT (Set to NULL to IGNORE a slot)
## YOU MUST SET ALL YOUR ARMOR BELOW - IT DOESN'T MATTER WHICH ARMOR SLOT YOU USE - THE SCRIPT DOESN'T CARE
     var CHEST.ARMOR sleek shirt
     var FACE.ARMOR NULL
     var HEAD.ARMOR tyrium balaclava
     var ABDOMEN.ARMOR NULL
     var BACK.ARMOR NULL
     var ARM.ARMOR NULL
     var HAND.ARMOR plate gauntlets
     var LEG.ARMOR scale greaves
     var KNUCKLE knuckle
     var PARRYSTICK parry stick

## PRIORITY WEAPONS - WEAPON SKILLS TO KEEP MOVING ~ALWAYS~ - PRIORITIZE THESE WEAPON SKILLS OVER ALL OTHERS IF THEY ~EVER~ DROP TO 0/34
## MUST BE SET IN AN ARRAY - THE EXACT SAME AS GENIE EXP VARIABLE FORMAT ie: var Priority.Weapons Medium_Edged|Twohanded_Edged
## WARNING!! DO NOT SET PRIORITY WEAPONS UNLESS YOU WANT THOSE SKILL(S) TO TAKE PRIORITY OVER ~ALL~ OTHERS! ~WILL~ CAUSE UNEVEN RANKS OVER TIME!!
## THIS IS MAINLY ONLY USEFUL FOR SHORT PERIODS - FOR POWER LEVELING A SINGLE WEAPON SKILL FOR EXAMPLE - RECOMMEND NULL UNLESS YOU KNOW WHAT YOU ARE DOING
     var Priority.Weapons NULL
     
## TRAIN LOWEST (ON or OFF) - ON WILL ALWAYS TRAIN W/ YOUR LOWEST RANK & LOWEST LEARNINGRATE WEAPON AT EVERY WEAPON SWAP 
## THIS EFFECTIVELY ENSURES THAT ALL YOUR WEAPON SKILLS WILL TRAIN AND STAY AT THE ~EXACT SAME RANKS~ - ESPECIALLY IF USED FROM THE START
## NOTE! TRAINLOWEST ON - WILL ALTER THE DEFAULT WEAPON TRAINING ORDER - BYPASSES THE SET ORDER TO DYNAMICALLY TRAIN WEAPONS 
     var TrainLowest OFF

# MAX LEARNING RATE - FOR EACH WEAPON SKILL (WILL SWITCH WEAPONS ONCE REACHING THIS RATE *MAX 33) *SET TO 35 TO IGNORE LEARNINGRATE 
     var MAX.LEARNINGRATE 12
# LEARNING RATE INCREASE - AFTER FULL WEAPON LOOP *OF ALL WEAPONS* - INCREASE THE MAX.LEARNINGRATE BY THIS MUCH
     var LEARNING.INCREASE 4
# MAX TIME PER WEAPON - SET THE MAXIMUM TIME (IN SECONDS) TO TRAIN EACH WEAPON SKILL - BEFORE SWITCHING WEAPONS
# SETTING THIS TOO HIGH MAY CAUSE SUBOPTIMAL TRAINING - RECOMMEND AROUND ~300-500 (~5-8 minutes per weapon)
     var MAX.TIME 250
# MAXIMUM TOTAL COMBAT TRAINING TIME - SET THE MAX TIME (IN SECONDS) TO STAY IN ~COMBAT~ BEFORE ESCAPING TO TOWN ( 3600 SECONDS = 1 HOUR )
# SET VAR MAX.TRAIN 0 - TO LOOP COMBAT FOREVER ( *UNTIL IT ESCAPES DUE TO BEING TOO HURT / BAGS TOO FULL / BURDEN TOO HIGH )
     var MAX.TRAIN 4500
     
# STANCE PER WEAPON (Set NULL to use default - Or SHIELD/PARRY/EVASION/CUSTOM TO USE THAT PARTICULAR STANCE FOR A PARTICULAR WEAPON)
## NOTE SCRIPT IS ALREADY ADVANCED IN CHANGING STANCES DEPENDING ON WEAPON BEING TRAINED - NULL IS FINE FOR MOST PURPOSES
     var SE.STANCE NULL
     var LE.STANCE NULL
     var THE.STANCE NULL
     var SB.STANCE NULL
     var LB.STANCE NULL
     var THB.STANCE NULL
     var POLEARMS.STANCE NULL
     var STAVES.STANCE NULL
     var BOW.STANCE NULL
     var CROSSBOW.STANCE NULL
     var SLINGS.STANCE NULL
     var LT.STANCE NULL
     var HT.STANCE NULL
     var OH.STANCE NULL
     var BRAWL.STANCE NULL

## BACKTRAIN (ON or OFF) - ON FOR SETTING A SEPARATE BACKTRAIN ROUTINE
     var BACKTRAIN OFF
## BACKTRAIN AUTO PROGRESS (ON or OFF) - Turning this ON will automatically set the creature to hunt, based on your BACKTRAIN WEAPON SKILLS
## TURN THIS ~OFF~ TO SET THE BACKTRAIN CREATURE MANUALLY (BELOW)
     var BACKTRAIN.AUTOPROGRESS ON
### BACKTRAIN AUTOPROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var BACKTRAIN.PROGRESS.TYPE NORMAL
## BACKTRAIN CREATURE - Must specify the creature to hunt if BACKTRAIN.AUTOPROGRESS is OFF
     var BACKTRAIN.CRITTER ICE ARCHON
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var BACKTRAIN.PRIORITY.ROOMS NULL
## BACKTRAIN TIME (in SECONDS - Total time to Backtrain)
     var BACKTRAIN.TIME 1200
## BACKTRAIN MAGIC (ON or OFF) IF OFF - WILL SKIP USING ANY OFFENSIVE SPELLS PERIOD WHILE BACKTRAINING - WILL ONLY DO BUFFS
     var BACKTRAIN.MAGIC OFF
## BACKTRAIN TM/DEBIL SPELLS (ON or OFF) IF OFF - WILL SKIP USING ANY TM / DEBIL SPELL DURING BACKTRANING (UNLESS ITS A TATTOO)
     var BACKTRAIN.TM OFF
## BACKTRAIN WEAPONS - Set every weapon you wish to backtrain (NULL to turn off)
     var BACKTRAIN.SE NULL
     var BACKTRAIN.LE NULL
     var BACKTRAIN.THE NULL
     var BACKTRAIN.SB NULL
     var BACKTRAIN.LB NULL
     var BACKTRAIN.THB NULL
     var BACKTRAIN.STAVES NULL
     var BACKTRAIN.POLEARMS NULL
     var BACKTRAIN.BOW NULL
     var BACKTRAIN.CROSSBOW NULL
     var BACKTRAIN.SLING NULL
     var BACKTRAIN.LT NULL
     var BACKTRAIN.HT NULL
     var BACKTRAIN.BRAWL NULL
     var BACKTRAIN.OH NULL
     var BACKTRAIN.BS NULL
## BACKTRAIN STEALTH (OFF or ON)
     var BACKTRAIN.STEALTH ON
## BACKTRAINING LOOTING OPTIONS (ON or OFF)
     var B.Loot.Gems ON
     var B.Loot.Boxes OFF
     var B.Loot.Metals ON
     var B.Loot.Scrolls ON
     var B.Loot.Collectibles OFF
     var B.Loot.SpiderParts OFF
## BACKTRAIN LOOTING MODE ( treasure / boxes / goods / equipment )
     var B.Loot.Option goods
## BACKTRAIN ARMOR (ARMOR ONLY FOR BACKTRAIN ROUTINE) (Set to NULL to not check a piece)
     var B.CHEST.ARMOR NULL
     var B.FACE.ARMOR NULL
     var B.HEAD.ARMOR NULL
     var B.ABDOMEN.ARMOR NULL
     var B.BACK.ARMOR NULL
     var B.ARM.ARMOR NULL
     var B.HAND.ARMOR NULL
     var B.LEG.ARMOR NULL

##############################################################
### COMBAT GENERAL SETTINGS
##############################################################

## GEM POUCH DESCRIPTION - DR IS TRICKY WITH GEM POUCHES!! BE SPECIFIC - use "<color> pouch" only! 
## **RECOMMEND DUMPING ALL POUCHES AND GET NEW ONES FROM GEM SHOP ON FIRST SETUP**
## WHEN ASKING FOR NEW GEM POUCHES, "ASK NPC FOR <COLOR> POUCH" - ~DO NOT 'ASK FOR GEM POUCH' OR just 'POUCH'~ - JUST 'ASK <NPC> FOR BLACK POUCH'
## Then Set the var to the 'color' pouch you have. ie var gemPouch black pouch
     var gemPouch black pouch
# TIE GEM POUCHES? (ON or OFF) 
# TIE POUCHES FOR MORE STORAGE/LESS INVENTORY SPACE USE - but have to sell the FULL TIED POUCHES AT SPECIAL SHOPS or get TRADER to sell them!
# IF HUNTING IN SHARD OR ROSSMAN - NO WORRY AS SCRIPT SELLS TIED POUCHES IN THOSE GEM SHOPS. IF hunting in XING/ISLANDS will have to get Trader to sell pouches.
     var TiePouch OFF
# WORN GEM POUCH? (ON or OFF) (OFF will STOW your gem pouch / ON will wear it )
     var Gempouch.Worn OFF

## RESTOCK AMMO? (ON or OFF) *SCRIPT WILL AUTOMATICALLY CHECK IF YOU RUN OUT OF AMMO AND ATTEMPT TO RESTOCK
     var AmmoStock ON
# Skinning Knife Name (Mandatory if not a worn knife)
     var Skinning.Knife knife
# BELT/WRIST/ANKLE ~WORN~ SKINNING KNIFE? (ON or OFF)
     var BeltKnife ON
#### COMBAT OPTIONS ####
# OFFHAND THROWING - (ON or OFF) SET TO ON IF YOU WANT TO ROTATE RIGHT/LEFT HANDS WHILE THROWING LT/HT
     var OffhandThrow ON
# THROWING TYPE (LOB, THROW or HURL) *LOB will NEVER stick / less damage - HURL ALWAYS STICKS/ max damage. THROW is inbetween
## IF YOU USE A SHARP THROWING WEAPON (LIKE SPEAR) ALWAYS USE LOB! THROW WILL STICK WITH A POINTY WEAPON!
## LOB IS THE SAFEST - LOB NEVER STICKS! - THROW IS SAFE ~IF USING A BLUNT THROWN WEAPON~ - HURL ALWAYS STICKS - AVOID HURL 
     var ThrowType throw
# BONDED THROWING WEAPONS? (ON or OFF) - Will use INVOKE to retrieve thrown weapon
     var Bonded OFF
# ROAMING (ON or OFF) - Will ROAM around to different critter rooms if it doesn't find a creature during bored routine
     var Roaming ON
# USE WEAK ATTACKS (ON or OFF) - Will use WEAK attacks for melee training (good for backtraining or preserving fatigue/balance)
     var WeakAttack OFF
# AIM ACTIONS (Set an array of actions) - ACTIONS TO PERFORM WHILE WAITING FOR FULL AIM (WITH RANGED/SPELLS) Separate with |
     var AimActions bob|attack|attack left
# TRAIN STEALTH? TRAIN STEALTH DURING MELEE / THROWN / BRAWLING ROUTINES
     var TrainStealth ON
## LOOT MONSTERS? (ON or OFF) - LOOT MONSTERS?
## OFF WILL SKIP LOOTING ALL MONSTERS ~PERIOD~ AND LET THEM ROT
     var Loot.Monsters ON
## LOOT OPTION TO USE - TREASURE / BOXES / EQUIPMENT/ GOODS or ALL
     var Loot.Option GOODS
## LOOTING OPTIONS (ON or OFF) - LOOT OPTIONS FOR MAIN COMBAT
     var Loot.Gems ON
     var Loot.Boxes ON
     var Loot.Metals ON
     var Loot.Scrolls ON
     var Loot.Collectibles OFF
     var Loot.SpiderParts OFF
# MAX BOXES (Set a number) - MAX number of BOXES to pick up before turning Box looting off for that run
     var Max.Boxes 25
# DISSECT (ON or OFF) - DISSECT mobs for First Aid training in Combat (Alternates with SKINNING depending on Learning Rates)
     var Dissect ON
# SKINNING OPTIONS (ON or OFF)
# SKIN ON but BUNDLE OFF will skin but DROP all skins. SKIN collecting only supported with bundles ON!
     var Skin ON
     var Bundle ON
# TIE BUNDLES (ON or OFF) (Turns on automatically when F2P is ON) - LOWER ITEM COUNT BY TYING UP YOUR BUNDLES
     var TieBundle ON
# BUNDLE LOCATION (SET to NULL to use ANY open location or set a preferred location (shoulder / waist / back / belt / around shoulder / over shoulder)
     var BundleLocation NULL
# ArrangeTarget (SET TO SKIN, BONE or PART - or NULL to skip arrange)
## Set ArrangeTarget to SKIN/BONE/PART to Arrange one time
## Set ArrangeALL to ON to arrange max times
     var ArrangeTarget SKIN
     var ArrangeAll OFF
## ArrangeAlways (ON or OFF) - Set ON to ALWAYS arrange regardless of skinning learningrate. OFF will SKIP ARRANGING when Skinning learning is locked
     var ArrangeAlways OFF
# MAX BUNDLE SIZE - Max amount of skins to keep in bundle before creating a new bundle (DEFAULT: 30  MAX: 200)
     var MaxBundle 40
# Set SNIPE to ON to use SNIPE (THIEF/RANGER/NECRO ONLY)
     var Snipe ON
# Set POACH to ON to use POACH instead of SNIPE (SNIPE overrides this setting if SNIPE is ON - TURN SNIPE OFF TO USE THIS)
     var Poach OFF
# RANGED AIM PAUSE. Set to 0 for a Full Aim. Set number of seconds to pause that many seconds before firing
     var SNAP.FIRE 6
# RETREAT WHILE USING RANGED WEAPONS/BUFFING? (ON or OFF) - Will RETREAT to stay at ranged when using ranged weapons
     var Retreat OFF
## DANCE / COUNT Critters - Set min number of critters to "dance" with before you start killing. 
## Leave Dance.Count 0 to kill EVERYTHING. Set 1 to dance with 1 creature until a 2nd comes in, etc. If set to 1 will ALWAYS leave 1 creature in your room.
     var Dance.Count 0
## TACTICS TRAINING (ON OR OFF) - Train TACTICS in Combat
     var Tactics ON
# APPRAISE CREATURES - (ON or OFF) to APPRAISE ALL CREATURES
     var APPRAISE ON
# HUNT OPTION (HUNT every ~75 seconds unless perception locked)
     var HUNT ON
## APPRAISE ITEMS WHEN NO CRITTERS IN ROOM? (ON or OFF)
     var APP.ITEMS ON
## ITEMS TO APPRAISE (Set to NULL to not use) SET YOUR WORN ITEMS TO QUICK APPRAISE 
     var app1 knife
     var app2 balaclava
     var app3 shirt
## SANOWRET CRYSTAL? (ON or OFF) - ON will exhale crystal every ~100 seconds *IF CONCENTRATION ALLOWS
     var Crystal ON
## USE SANORWRET CRYSTALS IN COMBAT? (ON or OFF) - ON will use Sanowrets in combat (Turning ON WILL effect concentration and hinder spell casting - not recommended for most)
     var SanowretCombat OFF
## ZILLS? (ON or OFF) - FOR WORN INSTRUMENTS - ON will play Zills during certain times (Repairing armor, collecting, etc)
     var Zills ON
## Zill name ( zills / cowbell / etc )
     var Zill.Name zills
# F2P CHARACTER (ON or OFF) - If set to ON - Script will escape combat and go to town run when you get an inventory count warning
     var F2P OFF
# BIOMECHANICAL TARANTULA? (ON or OFF) - IF ON - Will pick a (semi-)random near locked skill to drain every 10 minutes while in combat
     var Tarantula OFF
     var Tarantula.Name tarantula
## TARANTULA SKILLS TO CHECK - SET AN ARRAY OF SKILLS TO CHECK AGAINST FOR TARANTULA DRAIN
## MUST EXACTLY MATCH THE GENIE VARIABLE NAMES! THESE ARE THE SKILLS TARANTULA WILL CHECK FOR EACH SCHOOL
     var Magic.skills Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Arcana
     var Armor.skills Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor
     var Survival.skills Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing
     var Weapons.skills Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow
     var Lore.skills Appraisal|Tactics|Performance
# WARHORN? (ON or OFF) - For Barbarians and Bards only.
     var WarHorn OFF
## WAND SUPPORT (NULL to NOT use) (MEF wand / WoW wand / WoTP wand etc.) Set up to 2 sets of wands to use! Must use actual verb of wand!
## CAN SET AN ARRAY OF WANDS FOR EACH VAR ex- var Wand1 bloodwood branch|oaken staff|crystal
     var Wand1 NULL
     var Wand2 NULL
## WAND CONTAINERS *Must use 2 different containers to store Wands if using 2 identical named wands)
     var Wand1.Container belt
     var Wand2.Container cloak
## Wand Weapon - (NULL or WEAPON NAME) SET A MELEE WEAPON TO BUFF WHEN USING WANDS WITH A WEAPON BUFF
     var WandWeapon NULL
## EGG SUPPORT (ON or OFF)*Uses the HE Gift Egg in Combat every ~15 minutes to invoke more mobs
     var EGG OFF
## ASTROLABE (ON or OFF) - Uses an Astrolabe every 30 mins if ON (Will rotate if you use 2)
     var ASTROLABE OFF
## Set the name of the astrolabes - (2 words ONLY i.e - ornate astrolabe, twisted astrolabe)
     var ASTROLABE1 NULL
     var ASTROLABE2 NULL
     var Astro1.Container NULL
     var Astro2.Container NULL
## ORB RUB IN COMBAT (var Orb.Rub ON or OFF) - TURN ON TO RUB FAVOR ORB IN COMBAT EVERY ~40 MINUTES
## *NOTE THAT SCRIPT AUTOMATICALLY RUBS ORB ~ONE TIME~ EVERY FULL LOOP OF SCRIPT REGARDLESS OF THIS VARIABLE
     var Orb.Rub OFF
####################################################################################################
# ARMOR SWAP - (ON or OFF) - SPECIAL ARMOR SWAPPING ROUTINE FOR HELMS ONLY
# WILL SWAP OUT A SINGLE PIECE OF PLATE/BRIG/CHAIN/LIGHT HELM EVERY ~5 MINUTES IN COMBAT
     var Armor.Swap OFF
# IF Armor.Swap is ON - THEN ALL THE ARMORS BELOW MUST BE SET CORRECTLY!
# SET EVERY PIECE OF ARMOR TO SWAP BELOW, MUST SET AN ARMOR PIECE FOR ALL FOUR TYPES - TWO WORDS ONLY!
# ONE PIECE SHOULD MATCH YOUR MAIN ARMOR HELM
     var Light_Armor.Helm steelsilk balaclava
     var Chain_Armor.Helm chain balaclava
     var Brigandine.Helm brigandine balaclava
     var Plate_Armor.Helm NULL
####################################################################################################
# HEAVY ARMOR REMOVAL - (ON or OFF) - ON will take off plate/brig/chain armor before backstab/stealth routines
# Generally only needed for noobs with less then ~200 ranks in armors
     var Armor.Noob OFF
# Set Plate/Brig/Chain pieces here (USE EXACT SYNTAX) (If no armor to remove set to NULL)
     var PLATE1 gauntlet
     var PLATE2 greaves
     var PLATE3 NULL
     var PLATE4 NULL
# Set Light Armor Pieces to Swap in place of the Heavy armor pieces above - if any (set to NULL to not use)
     var LIGHTARMOR1 rugged gloves
     var LIGHTARMOR2 rugged greaves
     var LIGHTARMOR3 NULL
     var LIGHTARMOR4 NULL
####################################################################################################

##############################################################
# TOWN RUN / SPECIAL MODULES - SETTINGS FOR TOWN 
# AUTO HEALER / SELL GEMS/SKINS, BANK, OPTIONAL MODULES
##############################################################

# RETURN TO COMBAT MODULE (ON or OFF) - RESTARTS SCRIPT AND RETURNS TO COMBAT WHEN TOWN RUN IS FINISHED
# IF OFF - SCRIPT WILL ~ABORT~ ONCE TOWN RUN IS COMPLETE - LEAVE THIS ON FOR INFINITE AFK SCRIPTING
     var RETURN.TO.COMBAT ON
# AUTOHEAL (ON or OFF) - ON - LET SCRIPT HANDLE AUTO-HEALING AFTER COMBAT (DEPENDING ON YOUR GUILD/SETTINGS) 
# LEAVE THIS ON UNLESS YOU WANT TO HANDLE HEALING YOURSELF MANUALLY! (OR WITH ANOTHER SCRIPT) 
# TURNING THIS OFF WILL ~ABORT SCRIPT AFTER ESCAPING FROM COMBAT~! AND WILL PARSE: HELP ESCAPE PLZ!
     var AUTOHEAL ON
# HEAL ALL (ON or OFF ) - HEAL.ALL ON = FULLY HEAL IF YOU HAVE ~ANY~ WOUNDS AT ALL (even minor scars) 
# HEAL.ALL OFF = WILL SKIP HEALING IF INSIGNIFICANT WOUNDS (minor scratches etc)
     var HEAL.ALL ON
# SELL SKINS (ON or OFF) - VISIT FURRIER - SELL SKINS/BUNDLES 
     var SELLSKINS ON
# SELL GEMS (ON or OFF) - VISIT GEM SHOP - SELL ALL GEMS/POUCHES
     var SELLGEMS ON
# SELL METALS (ON or OFF) - VISIT GEM SHOP - SELL ALL LOOSE METALS/NUGGETS/BARS (except those in your Crafting Container) 
     var SELLMETALS ON
# BUY HERBS? (ON or OFF) - VISIT HERB SHOP - AUTO RESTOCK ON HEALING HERB SUPPLIES (IF in city with Herbalist)
     var HERBS ON
# USE HERBS IN COMBAT? (ON or OFF) - If ON - Script will eat herbs during combat every ~5 minutes if needed
     var HERBS.COMBAT ON
## Container.Herb - SET CONTAINER TO STORE YOUR HERBS IN (Can be a stackable herb container)
     var Container.Herb pannier
# BANK RUN (ON or OFF) - VISIT BANKS - DEPOSIT MONEY AFTER TOWN RUN 
     var BANKRUN ON
# INVENTORY CHECK (ON or OFF) - TURNS ON INVENTORY CHECKS FOR DUMPING ANY COMMON TRASH ITEMS IN INVENTORY (OR EXCESS GEM POUCHES / BUNDLING ROPE )
     var INVCHECK ON
# TRASH DUMP (ON or OFF) - IF ON WILL DUMP ANY ITEM IN YOUR TRASH VARIABLE (GLOBAL VARIABLE AT VERY TOP OF VARIABLE FILE)
     var TRASH.DUMP ON
# POUCH DUMP (ON of OFF) - IF ON - DUMPS ANY GEM POUCHES IN YOUR INVENTORY THAT ~DO NOT MATCH~ THE COLOR/DESCRIPTION OF YOUR PRIMARY GEMPOUCH ( var gemPouch )
# WILL ALSO DUMP YOUR NORMAL GEM POUCHES IF YOU HAVE MORE THAN 10 OF THEM until you only have 10 MAX (Prevent buildup of ~50 rogue pouches) 
     var POUCH.DUMP ON

## SHARD CITIZEN (ON or OFF) - Must be a citizen of shard
     var Shard.Citizen ON
# GET FAVORS? (ON or OFF) - (ONLY WORKS IN CROSSING / SHARD / HAVEN )
     var GET.FAVORS ON
     var FAVOR.GOD damaris
# REPAIR ARMOR? (ON or OFF) - REPAIR ALL ARMOR / WEAPONS DURING TOWN RUN (MUST HAVE MONEY IN LOCAL BANK)
     var REPAIR.ARMOR ON
## USE MAGIC REPAIR KITS? (SET NULL/OFF TO NOT USE)
## REPAIR.KIT and REPAIT.KIT.2 ARE FOR FULL REPAIR KITS THAT REPAIR ALL ARMOR ~AND~ WEAPONS
## REPAIR.KIT.WEAPON and REPAIR.KIT.ARMOR ARE ONLY FOR KITS THAT ONLY REPAIR ARMOR OR WEAPONS!
## YOU MUST SET THE CONTAINER THAT EACH SPECIFIC KIT IS FOUND IN! IT TREATS THIS CONTAINER LIKE GEMPOUCH.CONTAINER AND KEEPS CLOSED! *CAN BE SHARED WITH GEMPOUCH.CONTAINER!
     var REPAIR.KIT raven
     var REPAIR.KIT.CONTAINER arm pouch
     var REPAIR.KIT.2 NULL
     var REPAIR.KIT.2.CONTAINER NULL
     var REPAIR.KIT.WEAPON NULL
     var REPAIR.KIT.ARMOR NULL
     var REPAIR.KIT.3.CONTAINER NULL
# CLIMBING/SWIMMING RUN (ON or OFF) - ATHLETICS TRAINING 
     var CLIMBING ON
## MAGIC CLIMBING ROPE (ON or OFF) - CHECK FOR MAGIC CLIMBING ROPE - USES THAT INSTEAD OF DEFAULT CLIMBING RUN
     var MAGIC.ROPE OFF
     var ROPE.NAME climbing rope
     var Rope.Container NULL
## WINDBOARD (ON or OFF) - TRAIN ATHLETICS WITH A WINDBOARD INSTEAD
     var WINDBOARD OFF
# COLLECTING - (ON or OFF) - OUTDOORSMANSHIP TRAINING - COLLECT ROCKS/COINS
     var COLLECTING ON
# BRAIDING - (ON or OFF) - TRAINS BRAIDING (ENGINEERING) - ONLY TRAINS TO ~70 RANKS!
     var BRAIDING ON
# RAVEN'S COURT SCHOLARSHIP STUDY (ON or OFF) - ONLY IN CROSSING !
     var RAVEN ON
# TEXTBOOK / COMPENDIUM? (ON or OFF) - TRAIN SCHOLARSHIP/FIRST AID W/ ANATOMY TEXTBOOK
     var TEXTBOOK OFF
# TEXTBOOK TYPE - Textbook or Compendium
     var TEXTBOOK.TYPE textbook
     var Textbook.Container cloak
# SKINNING/FA TRAINER - (ON or OFF) ONLY WORKS FOR THE MAGIC SKINNING / FA TRAINERS
## The ones with 105 uses per day or infinite ( https://elanthipedia.play.net/Item:Small_blue-belly_crocodile_with_prominently_stitched_seams )
     var SKINTRAINER OFF
     var SKINTRAIN.NOUN crocodile
     var SKINTRAIN.CONTAINER goldenweave belt
# EPISTEMIC JOURNAL - For Epistemic Journals ONLY - Writes to Journal every 24 hours
# Set JOURNAL.TYPE ( NULL to NOT USE ) - Set NOUN of item to use ( traveler's diary / explorer's log / soldier journal / etc)
     var JOURNAL.TYPE NULL
# DISARM BOXES? (USES DISARM SCRIPT - MAKE SURE YOU SET THE VARIABLES UP IN disarm-vars)
     var DISARM ON
# BURGLE RUN (ON or OFF) - BURGLE RUN USING THE BURGLE SCRIPT (BURGLE.PAWN ON will Pawn all Burgle items)
     var BURGLE ON
     var BURGLE.PAWN ON
# BURGLE DUMP (ON or OFF) - Burgle Dump ON will DUMP/TRASH any Burgle item that does not sell at pawn shop
     var BURGLE.DUMP ON
# STEALING RUN (ON or OFF) - Does STEALING Run with the Ultimate Stealing Script
     var STEAL OFF
# PERFORMANCE RUN (ON or OFF) - DEDICATED PERFORMANCE TRAINING RUN DURING TOWN RUN (Uses your Zill.Name variable to train)
     var PERFORMANCE ON
# MAGICAL RESEARCH TRAINING (ON or OFF) - DEDICATED MAGICAL RESEARCH TRAINING DURING END OF TOWN RUN - TAKES A BIT OF TIME! 
     var MAGICAL.RESEARCH OFF
# PRIMARY MAGICAL RESEARCH TYPE ( SET TO NULL TO CHOOSE AUTOMATICALLY BASED ON LEARNING )
# OPTIONS ARE: FUNDAMENTAL, STREAM, AUGMENTATION, UTILITY, WARDING, SORCERY, FIELD, SPELL
     var RESEARCH.TYPE NULL
# TEACHING? (ON or OFF) - If ON, will attempt to teach your other characters/people in the Friends variable
     var TEACH OFF
     var TEACH.SKILL hiding
     var TEACH.SKILL.2 evasion
## SUPPORT FOR MASTERCRAFT TRAINING
## IF YOU USE MASTERCRAFT - SET EACH SKILL ON THAT YOU WANT TO TRAIN
## *YOU MUST SET UP MASTERCRAFT - TOOLS ETC SEPARATELY
     var ALCHEMY OFF
     var ENGINEERING OFF
     var FORGING OFF
     var OUTFITTING OFF
     var ENCHANTING OFF
## VAULT SWAP (ON or OFF) - ON WILL TEMPORARILY SWAP YOUR 'var CONTAINER' FOR A SPECIAL BAG IN YOUR VAULT FOR MASTERCRAFT PURPOSES ONLY!
## AFTER MASTERCRAFT IS OVER, GOES BACK TO VAULT AND SWAPS BACK TO ORIGINAL BAG - PUTS YOUR CRAFTING BAG BACK IN THE VAULT!
## MAKE SURE YOU HAVE ENOUGH ROOM IN YOUR VAULT! THE SWAP CONTAINER SHOULD FIT ON THE SAME BODY SLOT AS THE BAG YOU ARE SWAPPING OUT!
     var VAULT.SWAP OFF
## VAULT CITY - SET THIS TO THE CITY NAME WHERE YOU HAVE YOUR VAULT - IF VAULT.SWAP IS ~ON~ IT WILL RUN TO THIS CITY FIRST
     var VAULT.CITY FC
## SET THE NAME OF YOUR CRAFTING BAG IN YOUR VAULT - MUST HAVE ~ALL YOUR CRAFTING TOOLS~ IN THIS BAG!!
## MAKE SURE TO BE SPECIFIC WITH YOUR CONTAINER VARIABLES SO THEY DONT GET MIXED UP! THIS CONTAINER SHOULD USE THE SAME BODY SLOT AS YOUR VAR CONTAINER!
     var CRAFTING.BAG dreamweave lootsack

# ALMANAC (ON or OFF) - USE ALMANACS (That trains random skill OR pick-a-skill every 10 minutes)
     var ALMANAC OFF
## ALMANAC VERB - if using the special encyclopedic almanac, MUST be set to 'encyclopedic almanac' to use the pick a skill function
     var ALMANAC.TYPE almanac
     var Almanac.Container goldenweave belt
## ALMANAC SKILLS to check/pick for encyclopedic almanac i.e. Sorcery|Forging|Engineering
## The default list has ALL skills listed - You can remove skills you don't want to boost
     var ALMANAC.LEARN Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor|Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing|Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow|Appraisal|Tactics|Performance|Enchanting|Forging|Engineering|Alchemy|Outfitting|Arcana
# LOCKPICK TRAINING ITEM? (Set to NULL to not use) - Must match EXACTLY with item name in hands (2 words only)
# For MAGIC LOCKPICK TRAINING ITEMS - * Assumes you use a WORN lockpick ring/case 
     var LOCKPICK.ITEM arm pouch
## SET A SECONDARY LOCKPICK ITEM HERE IF YOU HAVE A SECONDARY (OR SET TO NULL)
     var LOCKPICK.ITEM.2 NULL
## Lockpick.Container is where the MAGIC LOCKPICK ITEMS should be stored (NULL to try wear them)
     var Lockpick.Container NULL
# PILGRIM BADGES (ON or OFF) *CLERIC/PALADINS ONLY! - VISIT UNVISITED BADGE LOCATIONS - PRAY TO BADGE
     var PILGRIM ON
# POWERWALKING (ON or OFF) - FOR MAGIC USERS - DO A POWERWALK DURING TOWN RUN 
     var POWERWALK ON
## SCRIPT CHECK LOGIC - TURN SCRIPT CHECK LOGIC (ON OR OFF) - WARNING - THERE ~WILL~ BE FALSE POSITIVES!! UNAVOIDABLE!!
## IF IT DETECTS ANY GM SCRIPT CHECKS - WILL ~ATTEMPT~ TO AUTOMATICALLY HANDLE IT AND/OR RUN AWAY (Not Log Out)
     var SCRIPTCHECK OFF
## Setting NO.CONTACT to "ON" will log out for 5 minutes if someone tries to drag you or hold your hand (DEFAULT: OFF)
## WARNING! IT WILL ALSO ESCAPE COMBAT IF ANYONE TALKS IN YOUR COMBAT ROOM! INCLUDING CRITTERS! SO IT CAN FALSE POSITIVE ON TALKING CRITTERS
     var NO.CONTACT OFF
## LOG.ON.STUN (ON or OFF) Set to "ON" to log out if you are too hurt/stunned and are unsuccessful running away (DEFAULT: ON)
     var LOG.ON.STUN ON
## LOG.ON.DEATH (ON or OFF) Set OFF to stay logged in even if you die (DEFAULT: ON)
     var LOG.ON.DEATH ON
## TOTAL TIME ONLINE - MAX TIME TO STAY ONLINE (IN SECONDS) After this time has passed will idle and logout to avoid AFK checks (Set to 0 to always stay online)
     var ONLINE.TIME 0
## FANG COVE? (ON or OFF) - Do you want to go to FANG COVE for healing/town stuff (Only works in Prime if Premium)
     var FANGCOVE ON
## USE PREMIUM JUMP JEWELRY? (ON or OFF) - Will use Premie JJ to teleport to Fang Cove for healing/bundles/gems/etc
     var JumpJewelry OFF
     var JewerlyVerb ironwood ring
## PERSONAL EMPATH HEAL (Put EMPATH'S NAME HERE to use. NULL to turn off) - If you use a personal empath to heal
## Setting this to anything OTHER than NULL/OFF will turn OFF the triggers to nod to someone when they ask if you want healing
     var PocketEmpath NULL
## EmpathRoom is ROOM NUMBER where you can find your PERSONAL EMPATH. (MUST be in the CITY you go to for TOWN RUN)
     var EmpathRoom NULL
## BankBot - Used for F2P characters to tip a bankbot any remaining coin at end of town run
## Set Tipping to 1, Bankbot name and Tiproom = room number bankbot is at, in your home town
     var Tipping 0
     var BankBot morph
     var TipRoom 753
## CLAN ITEM (TF USE ONLY)
     var CLAN OFF
     var CLAN.ITEM sphere
## LIGHTER ITEM (For using a Lighter to start fires instead of flint and blade)
## USAGE - var LIGHTER (ON or OFF) - Lighter.Name = verb of the item
     var Lighter OFF
     var Lighter.Name world dragon
## CUSTOM TOWN SCRIPT - (Must be the exact name of the script (IGNORE .CMD - JUST USE NAME)
## Set your own script to run during the town run
## YOU MUST HAVE A PARSE AT THE END OF YOUR SCRIPT: put #parse SCRIPT FINISHED!
## IF YOU DO NOT HAVE THIS PARSE THEN UBER WILL NOT RECOVER PROPERLY!
     var Custom.Script ubercharswap2
## RPA BESTOW? (ON or OFF) - MUST BE IN THE PIRP SYSTEM TO BESTOW RPAS! https://elanthipedia.play.net/RPA_command
     var RPA ON
## LIST THE PEOPLE YOU WANT TO BESTOW RP POINTS TO BELOW IN AN ARRAY!!
## ie. var PirpList Name1|Name2|Name3|Name4|Name5
     var PirpList Raidboss|Healbitch|Illuminati|Breckin|Ryhs|Rhoat|Shepherd|Kohen|Worril|Odium|Morvetan|Orcher|Amroth|Mephos|Yew|Lorak|Wryll|Rellie|Beerfest|Bayndayd|Xana|Crivic|Blaakwulf|Wong|Findal|Regnar|Lakshmi|Vivica|Phucker|Jimdickens|Kiroq|Bleed|Rutinger|Nekhet|Leecya|Arazenya|Kithkani


######################################################################################################################
######################################################################################################################
# GENERAL MAGIC VARS - ALL MAGIC USERS MUST SET THESE VARIABLES
# GENERIC MAGIC VARIABLES FOR ALL MAGIC USERS
######################################################################################################################
######################################################################################################################
# SMART MANA FOR SPELLS? AUTO-DETERMINES OPTIMAL MANA FOR SPELLS AFTER A NEW SETUP (OR EVERY ~2 WEEKS IN GAME)
# SMART MANA WILL AUTOMATICALLY ADJUST YOUR MANA LEVELS UP AND DOWN AS YOU GAIN IN RANKS FOR OPTIMAL LEARNING
# (ON or OFF) - RECOMMEND LEAVING ON - SETTING THIS ON WILL OVERRIDE ALL MANUAL MANA SETTINGS 
# TURNING SMART.SPELLS OFF MEANS YOU WILL ~HAVE~ TO SET MANA MANALLY AND DO MUCH MORE FINE TUNING 
     var SMART.SPELLS ON
# CAMB HEAVY (ON or OFF) (OFF by default) - ON WILL MAKE SMART MANA PUT MORE MANA INTO CAMBRINTH THEN MAIN PREP
     var Camb.Heavy OFF
# MAGIC RATE - (NULL is RECOMMENDED) Set the MIN Magic Rate to reach before switching to a different spell school. 
# SETTING TO A NUMBER WILL SPAM THE SAME SPELL UNTIL YOU REACH DESIRED LEARNINGRATE. Set to NULL to cycle through spells normally 
     var Magic.Rate NULL
# MAGIC SNAP CAST. Set to 0 for Full Aim. Set to desired number of seconds to pause for that many seconds before casting
     var MAGIC.SNAP 0
# CAMBRINTH CHARGES - Number of Times to Charge your cambrinth (or harness if Cambrinth is NULL) each time!
# RECOMMEND LEAVING THIS AT 1 - 2 AT MAX - THIS VARIABLE TIES INTO HOW SMART MANA CALCULATES MANA
     var CambrinthCharge 1
# OFFENSIVE SPELL MANA AMOUNTS - Set BASE MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Mana 15
     var Debilitation.Mana 15
     var Utility.Mana 15
     var Augmentation.Mana 15
     var Warding.Mana 15
     var Sorcery.Mana 15
# OFFENSIVE SPELL CAMBRINTH AMOUNTS - Set CAMBRINTH MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Camb 20
     var Debilitation.Camb 20
     var Utility.Camb 20
     var Augmentation.Camb 20
     var Warding.Camb 20
     var Sorcery.Camb 20
# USE HARNESS / CAMBRINTH FOR OFFENSE SPELLS (ON or OFF)
# TURN OFF TO SKIP HARNESS/CAMBRINTH COMPLETELY
     var Use.Cambrinth ON
# USE HARNESS / CAMBRINTH FOR BUFFS (ON or OFF)
     var Use.Cambrinth.Buffs ON
# CAMBRINTH ITEM for charging BUFFS/SPELLS (Set to NULL to not use)
     var Cambrinth armband
     var Cyclic.Cambrinth NULL
# CAMBRINTH MANA AMOUNT FOR SPELLS - Amount of Mana to put in CAMBRINTH for Magic Tattoos / Harness for Cyclics when No Raw Chanelling feat
     var CambrinthMana 5
# CAMBRINTH MANA FOR Cylics - Amount of Mana to put in cambrinth for Cylics ONLY
     var CyclicCharge 10
# SLOW.CAST (ON or OFF) - OFF IS DEFAULT - Slow Cast ON will cast offensive spells about half as often as normal
# SLOW.CAST OFF (Default) will spam spells in between attacks as much as possible (mana permitting)
     var Slow.Cast OFF
# NO CAMBRINTH USE DURING TM / DEBIL SPELLS (ON or OFF)
# IF YOU SET THIS ON, SCRIPT WILL SKIP USING A CAMBRINTH FOR TM OR DEBIL SPELLS
     var NoCambTM OFF
# POWER PERCEIVE (Perceives every ~5 minutes)
     var POWERP ON

# RITUAL FOCUS ITEM (REQUIRED for RITUAL SPELLS - set Ritual to NULL to not use)
# Ritual.Container can be set to any Container - or set to NULL to wear it first
     var Ritual moonsilver clasp
     var Ritual.Container NULL
# SORCERY RITUAL FOCUS (Separate ritual focus for Sorcery IF NEEDED)
     var Sorcery.Focus NULL
# TM DAMAGE FOCUS ITEM - IF SET WILL USE TM FOCI MODE EVERY ~HOUR (set to NULL to not use)
     var TMFoci oasis
     var TMFoci.Container %Container
# USE SYMBIOSIS ON ATTACK SPELLS? (ON or OFF)
# ONLY USEFUL AT ~HIGHER RANKS~ OF MAGIC - ~NOT~ FOR NOOBS!!
     var Target.Symbiosis ON
     var Utility.Symbiosis ON
     var Augmentation.Symbiosis ON
     var Warding.Symbiosis ON
     var Sorcery.Symbiosis OFF
     var Debilitation.Symbiosis ON
# USE SYMBIOSIS ON BUFFS? (ON or OFF) - FOR HIGHER RANKS ONLY
     var Symbiosis.Buffs OFF

# MAGIC TATTOO (Set to NULL or the FULL SPELLTIMER NAME i.e - IronConstitution / MajorPhysicalProtection) - Will use a Magic Tattoo every ~5-10 minutes
# FULL SPELLTIMER NAME MUST ALSO BE SET IN YOUR BUFFS OR SPELLS - USE SORCERY.CAMB (ABOVE) TO SET CAMB MANA FOR MAGIC TATTOO
     var Magic.Tattoo RighteousWrath
# MAGIC TATTOO CAMBRINTH/HARNESS MANA - Set the amount of Camb Mana you want to boost your tattoo with
     var Tattoo.Camb 30
# HEROIC TATTOO (ON or OFF) - ONLY FOR HEROIC TATTOOS! (Normal tattoos use Magic.Tattoo)
# VERY BASIC - WILL JUST INVOKE TATTOO / CAST ON A 1 HOUR COOLDOWN
     var Runic.Tattoo OFF

#########################################################################################
# GUILD SPECIFIC OPTIONS BELOW
# SET THE GUILD OPTIONS FOR THE CURRENT CHARACTER YOU ARE EDITING 
########################################################################################
########################################################################################
# NECROMANCER SETTINGS
# SET NECRO.HEAL ON TO USE NECRO HEALING - (Consume Flesh / Devour depending on skills)
     var Necro.Heal ON
## NECROHEAL CREATURE (SET A ~LOW LEVEL~ CREATURE TO KILL ~ONLY FOR DEDICATED HEALING PURPOSES~)
## IDEALLY SET THIS TO A CREATURE NEAR YOUR "HOME CITY" SO YOU DON'T HAVE FAR TO RUN FOR HEALING
     var NecroHeal.Critter GOBLIN SHARD
# SET NECRORITUAL ON TO PERFORM RITUALS IN COMBAT (Preserve/Harvest/Dissect/Butchery/etc)
     var NecroRitual ON
## FORSAKEN? (ON or OFF) - IS NECRO FORSAKEN?? IF ON - WILL AVOID TOWNS/SERVICES AS MUCH AS POSSIBLE!! 
## *Not fully tested/implemented-may not be perfect- but should avoid towns. May have issues REPAIRING ARMOR Unless USING FC* 
     var Forsaken OFF
## RISEN? (ON or OFF) - CREATES RISEN MINIONS IN COMBAT (CAREFUL - GENERATES DIVINE OUTRAGE!) 
     var Risen OFF
## QUICKEN EARTH - ON TO CHECK FOR AND SUMMON DIRT CONSTRUCTS EVERY ~5 MINUTES
     var QuickenEarth OFF
     var QE.Mana 10
     var CFB.Mana 10
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Necro.Cyclics |USOL|ROC
     var Necro.Cyclics.mana |5|4
## Necromancer ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Necro.Target.Spell ACS|VS
     var Necro.Debilitation.Spell HP
     var Necro.Utility.Spell GAF
     var Necro.Augmentation.Spell Obfuscation
     var Necro.Warding.Spell MAF
     var Necro.Sorcery.Spell MPP
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Necro.Buffs IVM|REI|ROC|CH
########################################################################################
########################################################################################
### BARD SETTINGS
# Cyclic Spell Setup
# YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST be set for each individual cyclics!
# YOU MUST SET cyclic.mana in an array to match!! 6 cyclic - 6 mana numbers
  # SET TO NULL/OFF IF NOT TRAINING CYCLICS - THERE ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Bard.Cyclics |AEWO|HODI|FAE|CARE|PYRE|GJ
     var Bard.Cyclics.mana |5|4|5|5|5|6
## Bard ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Bard.Target.Spell BOS
     var Bard.Debilitation.Spell DMRS
     var Bard.Utility.Spell AOT
     var Bard.Augmentation.Spell WILL
     var Bard.Warding.Spell REPR
     var Bard.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Bard.Buffs |MIS|HARM|RAGE|REPR
## BARD SCREAMS? ( Screams in combat every ~60 seconds) (ON or OFF)
     var Bard.Scream ON
## BARD WHISTLE (ON or OFF)
     var Bard.Whistle ON
########################################################################################
########################################################################################
# WARRIOR MAGE SETTINGS
## USE SUMMONING? (Will train Summoning every ~3 minutes)
     var Summoning ON
## ELEMENTAL ALIGNMENT - Element can be FIRE, WATER, ELECTRIC, AETHER, AIR or EARTH
     var element FIRE
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var WM.Cyclics |EE|AC|FR
     var WM.Cyclics.mana |5|4|5
## Warrior Mage ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var WM.Target.Spell FS|FB
     var WM.Debilitation.Spell EE|ALA
     var WM.Utility.Spell ETF
     var WM.Augmentation.Spell YS
     var WM.Warding.Spell ES
     var WM.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var WM.Buffs Ease|TW|SW|Zephyr|SUF|Ignite
## ~WEAPON SUMMONING LOGIC~
# SUMMON WEAPONS (ON or OFF)
     var SummonWeapons OFF
# SUMMON ELEMENT - Must set your WEAPON SUMMON ELEMENT ( Stone/Earth (Default) - Fiery/Fire (Fiery Infusions) - Icy/Ice (Icy Infusions) - or Electric (Shocking Infusions)
     var SummonElement FIRE
# ELEMENTAL CHARGE SPELL Must be *a spammable spell* of your chosen element. Will prep at minimum mana - if you want to prep at something else put a number after
     var ChargeSpell MOA
# SUMMON WEAPON TEMPLATE (0 or 1) - 0 = Default weapon, 1 = Turn weapon to other template
     var SummonTemplate 1
# SUMMON WEIGHT/DENSITY (0 - 2 to set weapon density - Must know QUICK INFUSIONS spell)
# 0 = Lightest Weight, 1 = DEFAULT, 2 = Heavier Weight
     var SummonWeight 1
# Set weapons you want to summon (ON or OFF) - Setting to ON will override your default weapon variables at top of script
     var SummonHT OFF
     var SummonLT OFF
     var SummonSE OFF
     var SummonLE OFF
     var SummonTHE ON
     var SummonSB OFF
     var SummonLB OFF
     var SummonTHB ON
     var SummonPolearms ON
     var SummonStaves ON
## INGOT (ON or OFF) Bump up tier of weapons - Must know REINFORCED INFUSIONS spell and have a rare metal ingot
     var WMIngot OFF
## SET INGOT STORAGE CONTAINER (Set to either a sigil ring or a specific container)
     var Ingot.Container sigil ring
########################################################################################
########################################################################################
# MOON MAGE SETTINGS
## MOON MAGE ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var MM.Target.Spell DO|Burn
     var MM.Debilitation.Spell Dazzle|MB
     var MM.Utility.Spell PG
     var MM.Augmentation.Spell AUS|ART
     var MM.Warding.Spell TKSH|PSY
     var MM.Sorcery.Spell RighteousWrath|AS
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var MM.Cyclics |SHW
     var MM.Cyclics.mana |5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var MM.Buffs CV|Shadows|TS|COL|Shadowling|PSY
## OBSERVATION TRAINING - PREDICT TOOL IS ONLY USED FOR PREDICTION OUTSIDE OF COMBAT! TOOL MUST ALREADY BE BONDED!!
## Predict.tool can be - BONES, CHART, MIRROR, PRISM, BOWL, DECK or NULL to turn off.
     var Predict.Tool DECK
## Read The Ripples (RTR ON or OFF) - Will Perform a RTR routine (observe spam) during town run **MUST HAVE TELESCOPE!
     var RTR ON
## Where you store your telescope * If any - defaults to your main Container if not set
     var Telescope.Container tag sack
## OBSERVE IN COMBAT (ON or OFF) - If ON will do Astrology observations in Combat every couple minutes
     var Combat.Observe ON
########################################################################################
########################################################################################
# CLERIC SETTINGS
## CLERIC ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Cleric.Target.Spell FOU|FF
     var Cleric.Debilitation.Spell PS|Malediction
     var Cleric.Utility.Spell DR|BLESS
     var Cleric.Augmentation.Spell Benediction
     var Cleric.Warding.Spell MPP|SL
     var Cleric.Sorcery.Spell dazzle
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Cleric.Cyclics |HYH|GHS|REV|SA
     var Cleric.Cyclics.mana |15|15|15|15
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Cleric.Buffs OM|Auspice|SOS|POM|MAPP|PFE|YS
## ARE YOU USING OM ORB? (MUST BE SET IN BUFFS ABOVE!) SET MANA AMOUNT TO CAST OM / CHARGE ORB WITH EACH TIME
     var OM.Mana 25
## TYPE OF ORB YOU USE FOR OM - OPTIONS:( FIRULF, MERAUD or KEREN)
     var FavorOrb meraud
## BUFF SPELLS YOU WANT TO ALWAYS KEEP ACTIVE IN YOUR OM ORB (You can just set this to var OM.Buffs %Cleric.Buffs ) 
     var OM.Buffs PFE|POM|MPP|MAPP|SAP|SOL
## CLERIC RITUALS? (Perform CLERIC RITUALS during Town Runs/in Combat)
     var ClericRituals ON
### Prayer Mat - Set to NULL to not use or the noun of the mat/rug
     var PrayerMat mat
## HOLY WATER VESSEL - Set your container you use to store/collect holy water
     var HolyWater chalice
### COMBAT COMMUNES - (ON or OFF) - Set the COMMUNES you wish to perform while IN COMBAT 
     var Commune.Meraud ON
     var Commune.Truffenyi ON
     var Commune.Tamsine OFF
### FLINT KNIFE - Set a DEDICATED WEAPON/KNIFE to STRIKE FLINT for MAKING FIRE for RITUALS
### MUST be a METAL weapon you can use to STRIKE FLINT for fire
     var FlintKnife knife
## CLERIC ALIGNMENT GOD - Set a God to align to ( https://elanthipedia.play.net/Cleric_3.0#Alignment )
## CHOOSE A LIGHT/DARK/NEUTRAL GOD ONLY - Each Type will buff 2 magic skills and penalize 3 others
## BY DEFAULT SCRIPT WILL USE ~CHADATRU~ (Which buffs AUG/WARDING - Generally the most lacking magics for Clerics)
## Set a different god if you wish to buff other magics but BE CAREFUL!!! 
     var Alignment.God CHADATRU
########################################################################################
########################################################################################
# RANGER SETTINGS
## RANGER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Ranger.Target.Spell DEVI|STAMPEDE
     var Ranger.Debilitation.Spell DEADFALL|SWARM
     var Ranger.Utility.Spell EM|BLEND
     var Ranger.Augmentation.Spell SOTT
     var Ranger.Warding.Spell EY
     var Ranger.Sorcery.Spell ECRY
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Ranger.Cyclics |CS|BES
     var Ranger.Cyclics.mana |5|5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Ranger.Buffs Athleticism|STW|EY|WOTP|OATH|ETC|Bloodthorns
########################################################################################
########################################################################################
## PALADIN SETTINGS
## PALADIN ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Paladin.Target.Spell FST
     var Paladin.Debilitation.Spell Shatter
     var Paladin.Utility.Spell AS
     var Paladin.Augmentation.Spell RW
     var Paladin.Warding.Spell SP
     var Paladin.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Paladin.Cyclics |HOW|TR
     var Paladin.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Paladin.Buffs AA|Courage|HES|RW|SR|Clarity
## SET your HOLY WEAPON here (NULL to ignore) - Holy Weapon Name
     var HolyWeapon NULL
## Holy Icon (NULL TO NOT USE/IGNORE) - Set to the noun of your icon
     var HolyIcon NULL
########################################################################################
########################################################################################
## TRADER SETTINGS
## TRADER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Trader.Target.Spell CRD|STARCRASH
     var Trader.Debilitation.Spell FLUORESCE|AVA
     var Trader.Utility.Spell NOUMENA
     var Trader.Augmentation.Spell BLUR
     var Trader.Warding.Spell IR
     var Trader.Sorcery.Spell MPP
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Trader.Cyclics |ARS|SOV
     var Trader.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Trader.Buffs |TRC|Blur|LGV|NONCHALANCE
########################################################################################
########################################################################################
# EMPATH SETTINGS
## EMPATH ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Empath.Target.Spell PARALYSIS
     var Empath.Debilitation.Spell LETHARGY|NB
     var Empath.Utility.Spell GS|HEAL
     var Empath.Augmentation.Spell REFRESH
     var Empath.Warding.Spell IC|POP
     var Empath.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Empath.Cyclics |AD|REGEN
     var Empath.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Empath.Buffs  |AGS|BS|IC|GOL|MEF|TRANQUILITY
## GAURDIAN SPIRIT? (ON or OFF) - ON will keep up Guardian Spirit while in Combat
     var Guardian.Spirit ON
## CUSTOM GUARDIAN SPIRIT (ON or OFF) - If ON - will "cast custom" instead of casting normal
     var Guardian.Custom OFF
## ATTACK CONSTRUCTS ONLY? (ON or OFF) - ON will ONLY attack constructs (unless using Absolution vs unded). OFF will attack everything
## WARNING - SETTING TO OFF WILL CAUSE EMPATHIC SHOCK!!!!
     var Construct.Only ON
## USE MANIPULATE FRIENDSHIP (ON or OFF) - ON will attempt to manipulate non-construct creatures
     var Manipulate ON
## ESCAPE COMBAT WHEN EMPATHY REACHES 0? (ON or OFF) - If Empathy LearningRate reaches 0 during combat, will go on town run
     var Empathy.Escape OFF
## EMPATH PERCEIVE HEALTH WALKS (ON or OFF) - If ON - Will go on perceive health walks around town during town run
     var Empath.Walk ON
## EMPATH UNITY LINK (ON or OFF) - FOR EMPATH HEALBOT MODE - DO YOU KNOW UNITY LINK? MUST BE 70+ CIRCLE AND 380+ EMPATHY
     var Unity ON
## TEACH CLASS (FOR HEALBOT MODE) - SET THE SKILL OF THE CLASS YOU WANT TO TEACH
     var TeachClass TM
## BLACKLIST! (FOR HEALBOT MODE) - SET THE NAMES OF THE PEOPLE TO BLACKLIST FROM HEALING SERVICES!
## MUST BE IN AN ARRAY - var Blacklist Bob|Frank|Dave
     var Blacklist NULL
########################################################################################
########################################################################################
# THIEF SETTINGS
# AMBUSH TRAINING (Use AMBUSH MOVES in COMBAT - STUN/CLOUT/SLASH)
     var Ambush ON
# SELECT KHRI TO USE (Set as many ON / OFF as you want )
# IT WILL ONLY USE AS MANY KHRI AS YOU CAN HANDLE AT ONCE, PRIORITIZING THE MOST IMPORTANT DEPENDING ON SCENARIO)
     var khriSAGACITY ON
     var khriSTEADY ON
     var khriSTRIKE ON
     var khriFOCUS ON
     var khriELUSION ON
     var khriENDURE ON
     var khriAVOIDANCE ON
     var khriADAPTATION ON
     var khriPROWESS ON
     var khriHASTEN ON
     var khriHARRIER OFF
     var khriSERENITY OFF
     var khriSIGHT ON
     var khriFLIGHT ON
     var khriCALM OFF
     var khriGUILE OFF
     var khriDARKEN ON
     var khriDAMPEN ON
     var khriSHADOWSTEP ON
     var khriELIMINATE OFF
     var khriTERRIFY OFF
     var khriFRIGHT OFF
     var khriINTIMIDATE OFF
     var khriPLUNDER ON
     var khriSAFE OFF
     var khriEVANESCENCE OFF
     var khriCREDENCE OFF
     var khriCUNNING OFF
# USE KHRI DURING TOWN RUN? (ON or OFF) - Turn OFF to Skip using Khri during town run - for Sanowret use
     var Khri.Town ON
########################################################################################
########################################################################################
# BARBARIAN SETTINGS
# USE WHIRLWIND?
     var Whirlwind ON
# USE DUAL WIELD? (ON or OFF) - Dual wield requires 450+ in the weapon
     var DualWield ON
# EXPERTISE COMBOS? (ON or OFF) - Does Barb Expertise Combos (and helps generate IR)
     var Expertise ON
# Set which Forms you want to use (ON or OFF)
# Auto-turns some forms on/off depending on what skills you are training
     var barbEagle ON
     var barbBadger ON
     var barbPanther ON
     var barbPiranha ON
     var barbDragon ON
     var barbMonkey ON
     var barbTurtle OFF
     var barbOwl OFF
     var barbBear ON
     var barbBuffalo OFF
     var barbPython ON
     var barbSwan ON
     var barbToad OFF
     var barbWolverine OFF
# ROARS to use (will only use one)
     var roarEmbrace OFF
     var roarEverild ON
     var roarWail OFF
     var roarScreech OFF
     var roarShriek OFF
     var roarAnger ON
     var roarKuniyo ON
# BERSERKS to use
     var zerkHurricane OFF
     var zerkBlizzard ON
     var zerkFamine ON
     var zerkAvalanche ON
     var zerkTsunami OFF
     var zerkWildfire OFF
     var zerkEarthquake OFF
     var zerkTornado OFF
     var zerkFlashflood ON
     var zerkLandslide ON
     var zerkCyclone OFF
     var zerkDrought OFF
# MEDITATIONS to use (ON or OFF) - WILL ONLY WORK FOR HIGHER LEVEL BARBS
     var medContemplation ON
     var medTenacity ON
     var medSerenity ON
### END OF CHARACTER 4 VARIABLES
### STOP EDITING HERE ~~~ END OF CHARACTER 4 VARIABLES ##########
####################################################################################
####################################################################################
echo **** LOADED %CHARACTER4 VARIABLES
goto END.OF.VARS
}

CHARACTER5:
#########################################################################################################
#########################################################################################################
## CHARACTER 5 VARIABLES
## *CHARACTER5 VARIABLES BLOCK BELOW
if matchre("$charactername", "(?i)%CHARACTER5") then
#########################################################################################################
{
### GENIE LAYOUT - SET THE GENIE LAYOUT YOU WANT THIS CHARACTER TO USE - MUST EXACTLY MATCH THE LAYOUT NAME IN GENIE!
### Example: var GENIE.LAYOUT Shroom.layout - TO SAVE A LAYOUT IN GENIE SET IT UP HOW YOU LIKE AND CLICK LAYOUT > SAVE LAYOUT AS > NAME IT HOW YOU WANT
### IF YOU LEAVE THIS SET TO NULL THEN IT WILL JUST USE THE DEFAULT LAYOUT THAT IS SET (default.layout) 
     var GENIE.LAYOUT Valgrind.layout
### HEAL.CITY ( NULL or CITY NAME (CROSS/LETH/HIB/RIVER/THEREN/SHARD) - Will run to this town for HEALING no matter where you are
     var HEAL.CITY NULL
### HOME CITY (NULL or CITY NAME) - Will attempt to return to your home city after a heal run (if not already in that city) ONLY SUPPORTS MAINLAND CITIES
     var HOME.CITY CROSS
### SAFE ROOM (set to NULL to ignore) ~MUST~ TIE INTO HOME.CITY ABOVE! THE ROOM ID YOU WANT TO SCRIPT IN DURING TOWN RUN - MUST BE VALID ROOMID IN YOUR HOME CITY!
### WARNING!: IF YOU DO NOT SET BOTH HOME.CITY AND SAFE.ROOM CORRECTLY YOU ~WILL~ RUN INTO ERRORS - LEAVE BOTH AT NULL TO LET SCRIPT LOGIC HANDLE IT
     var SAFE.ROOM NULL
### AUTO-PROGRESS? (ON or OFF) - ON WILL CHOOSE YOUR COMBAT CREATURE AUTOMATICALLY BASED ON YOUR RANKS - YOU DO NOT NEED TO SET IT! OVERRIDES COMBAT.CRITTER VARIABLE
     var AUTO.PROGRESS ON
### AUTO-PROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var PROGRESS.TYPE F2PLOCK
### COMBAT CRITTER - ONLY USED WITH AUTO.PROGRESS OFF - MUST BE A VALID CREATURE NAME! USE FULL NAME OR 1/2/3 TO SPECIFY TIERS ie SNOW GOBLIN 2
     var COMBAT.CRITTER GOBLIN
### ALTERNATE CRITTER - PICK A ALTERNATE CRITTER TO HUNT - IF YOUR MAIN HUNTING GROUND IS FULL!
     var ALTERNATE.CRITTER MUSK HOG
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var PRIORITY.ROOMS NULL
### XP TRACKER RESET ON SCRIPT STARTUP - (ON or OFF) - RESETS EXP TRACKER TRACKING TIME ON INITIAL LAUNCH OF SCRIPT ONLY
     var XP.RESET ON

### GUI OPTIONS ARE RECOMMENDED TO LEAVE OFF COMPLETELY - THESE OPTIONS ONLY HERE BY SPECIAL REQUEST - WILL BE ANNOYING IF YOU TURN IT ON
### CRITTER.GUI (ON or OFF) - OFF by default - CREATES CRITTER GUI WINDOW - MUST MANUALLY CLICK TO CHOOSE YOUR COMBAT CRITTER BASED ON PROVINCE / SKILL / PREFERENCE
     var CRITTER.GUI OFF
### WEAPON.GUI (ON or OFF) - OFF by default - CREATES WEAPON GUI WINDOW - CHOOSE YOUR WEAPONS FOR THAT RUN *IF YOU HAVE AN ARRAY OF WEAPONS SET IN A SINGLE WEAPON VARIABLE
     var WEAPON.GUI OFF

# FRIEND LIST (People you will hunt with) Put your friends names in place of these. Ex. Bob|Fred|George
# Can just put your name in here or make it blank and it will only find empty rooms.
     var FRIENDS %ALLCHARACTERS|%GLOBALFRIENDS

##############################################################
# WEAPON / CONTAINERS / AMMO SETTINGS - BE VERY SPECIFIC! 
##############################################################

# CONTAINERS - MANDATORY! - SET YOUR MAIN ~3-4~ LARGEST CONTAINERS!
# BE SPECIFIC WITH CONTAINER NAMES - USE 2 WORDS WHENEVER POSSIBLE!
     var Container carryall
     var Container.Boxes haversack
     var Container.Backup duffel bag
     var Container.Crafting bag
# SHEATH CONTAINER IS FOR SUPER LONG ITEMS - CAN BE ANY LARGE CONTAINER - NOT NECCESARY TO SET 
     var Container.Sheath duffel bag
# AMMO CONTAINER FOR STORING AMMO - ARROWS/BOLTS/ROCKS - BACKUP CONTAINER IS "OVERFLOW" FOR EXTRA AMMO
     var Container.Ammo duffel bag
     var Container.Ammo.Backup NULL
## CONTAINER.GEMPOUCH - VERY IMPORTANT! - ~MUST BE A SEPARATE CONTAINER~ FROM OTHER BAGS! SMALL/MEDIUM-SIZE CONTAINER IS FINE
## SPECIAL CONTAINER! SCRIPT WILL KEEP THIS CLOSED AT ALL TIMES AND ~ONLY USE IT FOR STORING FULL GEM POUCHES!~
## CONTAINER.GEMPOUCH MUST BE A ~CLOSABLE~ CONTAINER TO STORE ~FULL~ GEM POUCHES IN 
## AGAIN - DO NOT SHARE THIS CONTAINER WITH ~ANY OTHER CONTAINERS~ (except Repair Pouch Container) 
     var Container.GemPouch trapper's pouch
# Container.EmptyPouch is for storing EMPTY GEM POUCHES (This can be ANY container EXCEPT for Container.GemPouch )
     var Container.EmptyPouch haversack
# DIRT CONTAINER - For storing dirt for various use (ONLY used by Thieves/Clerics/Necros)
     var Container.Dirt haversack
## MISC SHEATH OPTIONS (Storing specific weapons in specific containers - toolstraps/bandoliers/harnesses etc) - SET TO NULL/OFF TO NOT USE
## SET THE SHEATH NAME UNDER SHEATH.1 - SET THE WEAPONS YOU WANT TO USE ON EACH SHEATH UNDERNEATH IN AN ARRAY ex:
## var Sheath.1 toolbelt
## var Sheath.1.Weapons sabre|axe|broadsword
     var Sheath.1 duffel bag
     var Sheath.1.Weapons pilum|bow|sling
     var Sheath.2 NULL
     var Sheath.2.Weapons frying pan|sledgehammer
     var Sheath.3 NULL
     var Sheath.3.Weapons NULL
     var Sheath.4 NULL
     var Sheath.4.Weapons NULL
     var Sheath.5 NULL
     var Sheath.5.Weapons NULL
     var Sheath.6 NULL
     var Sheath.6.Weapons NULL
     
## WEAR WEAPONS (Set an array of weapons/shields you want the script to try and wear first before stowing)
     var Wear.Weapons NULL

## SMART.WEAPONS - ON TO TRAIN WEAPONS FROM LOWEST SKILL TO HIGHEST. "OFF" WILL GO IN A LINEAR ORDER (DEFAULT: ON)
## ON WILL DYNAMICALLY TRAIN TO ALWAYS MAKE SURE THE LOWEST SKILLED WEAPON IS TRAINED FIRST 
     var SMART.WEAPONS ON
     
## WEAPON SETTINGS - BE VERY SPECIFIC SETTING WEAPONS ! USE TWO WORDS WHENEVER POSSIBLE!
## SET ALL YOUR WEAPONS BELOW - MUST ~EXACTLY MATCH THE ITEM DESCRIPTION WHEN IN HANDS~! (GLANCE at it in your hands to get correct description) 
## BE SPECIFIC WHEN SETTING WEAPONS!! USE 2 WORDS WHEN POSSIBLE! TO TURN A WEAPON SKILL ~OFF~ SET IT TO - NULL
     var SEWEAPON foil
     var LEWEAPON broadsword
     var THEWEAPON greataxe
     var SBWEAPON throwing hammer
     var LBWEAPON throwing mallet
     var THBWEAPON mace
     var STAVES nightstick
     var POLEARMS skefne
     var RANGED.BOW shortbow
     var RANGED.CROSSBOW crossbow
     var RANGED.SLING sling
     var LTWEAPON throwing hammer
     var HTWEAPON throwing mallet
# MAIN OFFHAND WEAPON TRAINING - MELEE ONLY (MUST BE A LIGHT/MEDIUM WEAPON - HEAVY or 2HANDED WEAPONS WONT WORK!!)
     var OHWEAPON mace
# ALTERNATE OFFHAND WEAPONS (For Backtraining/Dual Training weapons while training other Weapons)
# ~MUST~ BE LIGHT/MEDIUM WEIGHT WEAPON! CANNOT USE HEAVY or 2Handed Weapons! (Unless Barb) (SET TO NULL/OFF TO NOT USE)
     var ALTWEAPON1 mace
     var ALTWEAPON2 NULL
     var ALTWEAPON3 NULL
## BRAWLWEAPON (DEFAULT: $charactername - Set to NULL to skip brawling)
     var BRAWLWEAPON $charactername
     #var BRAWLWEAPON $charactername
## Backstab/Ambush Weapon (Thief Only)
     var BSWEAPON sabre

# AMMO SETTINGS - DO NOT REMOVE THE { } BRACKETS!!!
     if (!$AMMOSWAP) then
{
     var XbowAmmo crossbow bolt
     var BowAmmo boar-tusk arrow
     var SlingAmmo small rock
}

## ARMOR CHECK (ON or OFF) - Turn this OFF if you want the script to SKIP checking your armor at the beginning
## If ON - at the beginning, script will remove any armor/fluff you are wearing, and then put on all the armor you have set below. This ensures you have the correct armor on.
     var ARMOR.CHECK ON
## SET YOUR SHIELD - ABSOLUTELY 100% MANDATORY! RECOMMEND AN ARM-WORN SHIELD
     var MyShield sipar
## ARM WORN SHIELD? (ON OR OFF) - I RECOMMEND ALWAYS USING AN ARM WORN / SMALL SHIELD - MAKES LIFE MUCH EASIER
     var ArmWorn ON
## MAIN ARMOR TO CHECK - PRIMARY COMBAT (Set to NULL to IGNORE a slot)
## YOU MUST SET ALL YOUR ARMOR BELOW - IT DOESN'T MATTER WHICH ARMOR SLOT YOU USE - THE SCRIPT DOESN'T CARE
     var CHEST.ARMOR jerkin
     var FACE.ARMOR NULL
     var HEAD.ARMOR balaclava
     var ABDOMEN.ARMOR NULL
     var BACK.ARMOR NULL
     var ARM.ARMOR vambraces
     var HAND.ARMOR gauntlet
     var LEG.ARMOR greaves
     var KNUCKLE knuckle
     var PARRYSTICK parry stick

## PRIORITY WEAPONS - WEAPON SKILLS TO KEEP MOVING ~ALWAYS~ - PRIORITIZE THESE WEAPON SKILLS OVER ALL OTHERS IF THEY ~EVER~ DROP TO 0/34
## MUST BE SET IN AN ARRAY - THE EXACT SAME AS GENIE EXP VARIABLE FORMAT ie: var Priority.Weapons Medium_Edged|Twohanded_Edged
## WARNING!! DO NOT SET PRIORITY WEAPONS UNLESS YOU WANT THOSE SKILL(S) TO TAKE PRIORITY OVER ~ALL~ OTHERS! ~WILL~ CAUSE UNEVEN RANKS OVER TIME!!
## THIS IS MAINLY ONLY USEFUL FOR SHORT PERIODS - FOR POWER LEVELING A SINGLE WEAPON SKILL FOR EXAMPLE - RECOMMEND NULL UNLESS YOU KNOW WHAT YOU ARE DOING
     var Priority.Weapons NULL
     
## TRAIN LOWEST (ON or OFF) - ON WILL ALWAYS TRAIN W/ YOUR LOWEST RANK & LOWEST LEARNINGRATE WEAPON AT EVERY WEAPON SWAP 
## THIS EFFECTIVELY ENSURES THAT ALL YOUR WEAPON SKILLS WILL TRAIN AND STAY AT THE ~EXACT SAME RANKS~ - ESPECIALLY IF USED FROM THE START
## NOTE! TRAINLOWEST ON - WILL ALTER THE DEFAULT WEAPON TRAINING ORDER - BYPASSES THE SET ORDER TO DYNAMICALLY TRAIN WEAPONS 
     var TrainLowest OFF

# MAX LEARNING RATE - FOR EACH WEAPON SKILL (WILL SWITCH WEAPONS ONCE REACHING THIS RATE *MAX 33) *SET TO 35 TO IGNORE LEARNINGRATE 
     var MAX.LEARNINGRATE 12
# LEARNING RATE INCREASE - AFTER FULL WEAPON LOOP *OF ALL WEAPONS* - INCREASE THE MAX.LEARNINGRATE BY THIS MUCH
     var LEARNING.INCREASE 4
# MAX TIME PER WEAPON - SET THE MAXIMUM TIME (IN SECONDS) TO TRAIN EACH WEAPON SKILL - BEFORE SWITCHING WEAPONS
# SETTING THIS TOO HIGH MAY CAUSE SUBOPTIMAL TRAINING - RECOMMEND AROUND ~300-500 (~5-8 minutes per weapon)
     var MAX.TIME 250
# MAXIMUM TOTAL COMBAT TRAINING TIME - SET THE MAX TIME (IN SECONDS) TO STAY IN ~COMBAT~ BEFORE ESCAPING TO TOWN ( 3600 SECONDS = 1 HOUR )
# SET VAR MAX.TRAIN 0 - TO LOOP COMBAT FOREVER ( *UNTIL IT ESCAPES DUE TO BEING TOO HURT / BAGS TOO FULL / BURDEN TOO HIGH )
     var MAX.TRAIN 4500
     
# STANCE PER WEAPON (Set NULL to use default - Or SHIELD/PARRY/EVASION/CUSTOM TO USE THAT PARTICULAR STANCE FOR A PARTICULAR WEAPON)
## NOTE SCRIPT IS ALREADY ADVANCED IN CHANGING STANCES DEPENDING ON WEAPON BEING TRAINED - NULL IS FINE FOR MOST PURPOSES
     var SE.STANCE NULL
     var LE.STANCE NULL
     var THE.STANCE NULL
     var SB.STANCE NULL
     var LB.STANCE NULL
     var THB.STANCE NULL
     var POLEARMS.STANCE NULL
     var STAVES.STANCE NULL
     var BOW.STANCE NULL
     var CROSSBOW.STANCE NULL
     var SLINGS.STANCE NULL
     var LT.STANCE NULL
     var HT.STANCE NULL
     var OH.STANCE NULL
     var BRAWL.STANCE NULL

## BACKTRAIN (ON or OFF) - ON FOR SETTING A SEPARATE BACKTRAIN ROUTINE
     var BACKTRAIN OFF
## BACKTRAIN AUTO PROGRESS (ON or OFF) - Turning this ON will automatically set the creature to hunt, based on your BACKTRAIN WEAPON SKILLS
## TURN THIS ~OFF~ TO SET THE BACKTRAIN CREATURE MANUALLY (BELOW)
     var BACKTRAIN.AUTOPROGRESS ON
### BACKTRAIN AUTOPROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var BACKTRAIN.PROGRESS.TYPE NORMAL
## BACKTRAIN CREATURE - Must specify the creature to hunt if BACKTRAIN.AUTOPROGRESS is OFF
     var BACKTRAIN.CRITTER ICE ARCHON
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var BACKTRAIN.PRIORITY.ROOMS NULL
## BACKTRAIN TIME (in SECONDS - Total time to Backtrain)
     var BACKTRAIN.TIME 1200
## BACKTRAIN MAGIC (ON or OFF) IF OFF - WILL SKIP USING ANY OFFENSIVE SPELLS PERIOD WHILE BACKTRAINING - WILL ONLY DO BUFFS
     var BACKTRAIN.MAGIC OFF
## BACKTRAIN TM/DEBIL SPELLS (ON or OFF) IF OFF - WILL SKIP USING ANY TM / DEBIL SPELL DURING BACKTRANING (UNLESS ITS A TATTOO)
     var BACKTRAIN.TM OFF
## BACKTRAIN WEAPONS - Set every weapon you wish to backtrain (NULL to turn off)
     var BACKTRAIN.SE NULL
     var BACKTRAIN.LE NULL
     var BACKTRAIN.THE NULL
     var BACKTRAIN.SB NULL
     var BACKTRAIN.LB NULL
     var BACKTRAIN.THB NULL
     var BACKTRAIN.STAVES NULL
     var BACKTRAIN.POLEARMS NULL
     var BACKTRAIN.BOW NULL
     var BACKTRAIN.CROSSBOW NULL
     var BACKTRAIN.SLING NULL
     var BACKTRAIN.LT NULL
     var BACKTRAIN.HT NULL
     var BACKTRAIN.BRAWL NULL
     var BACKTRAIN.OH NULL
     var BACKTRAIN.BS NULL
## BACKTRAIN STEALTH (OFF or ON)
     var BACKTRAIN.STEALTH ON
## BACKTRAINING LOOTING OPTIONS (ON or OFF)
     var B.Loot.Gems ON
     var B.Loot.Boxes OFF
     var B.Loot.Metals ON
     var B.Loot.Scrolls ON
     var B.Loot.Collectibles OFF
     var B.Loot.SpiderParts OFF
## BACKTRAIN LOOTING MODE ( treasure / boxes / goods / equipment )
     var B.Loot.Option goods
## BACKTRAIN ARMOR (ARMOR ONLY FOR BACKTRAIN ROUTINE) (Set to NULL to not check a piece)
     var B.CHEST.ARMOR NULL
     var B.FACE.ARMOR NULL
     var B.HEAD.ARMOR NULL
     var B.ABDOMEN.ARMOR NULL
     var B.BACK.ARMOR NULL
     var B.ARM.ARMOR NULL
     var B.HAND.ARMOR NULL
     var B.LEG.ARMOR NULL

##############################################################
### COMBAT GENERAL SETTINGS
##############################################################

## GEM POUCH DESCRIPTION - DR IS TRICKY WITH GEM POUCHES!! BE SPECIFIC - use "<color> pouch" only! 
## **RECOMMEND DUMPING ALL POUCHES AND GET NEW ONES FROM GEM SHOP ON FIRST SETUP**
## WHEN ASKING FOR NEW GEM POUCHES, "ASK NPC FOR <COLOR> POUCH" - ~DO NOT 'ASK FOR GEM POUCH' OR just 'POUCH'~ - JUST 'ASK <NPC> FOR BLACK POUCH'
## Then Set the var to the 'color' pouch you have. ie var gemPouch black pouch
     var gemPouch black pouch
# TIE GEM POUCHES? (ON or OFF) 
# TIE POUCHES FOR MORE STORAGE/LESS INVENTORY SPACE USE - but have to sell the FULL TIED POUCHES AT SPECIAL SHOPS or get TRADER to sell them!
# IF HUNTING IN SHARD OR ROSSMAN - NO WORRY AS SCRIPT SELLS TIED POUCHES IN THOSE GEM SHOPS. IF hunting in XING/ISLANDS will have to get Trader to sell pouches.
     var TiePouch OFF
# WORN GEM POUCH? (ON or OFF) (OFF will STOW your gem pouch / ON will wear it )
     var Gempouch.Worn OFF

## RESTOCK AMMO? (ON or OFF) *SCRIPT WILL AUTOMATICALLY CHECK IF YOU RUN OUT OF AMMO AND ATTEMPT TO RESTOCK
     var AmmoStock ON
# Skinning Knife Name (Mandatory if not a worn knife)
     var Skinning.Knife knife
# BELT/WRIST/ANKLE ~WORN~ SKINNING KNIFE? (ON or OFF)
     var BeltKnife ON
#### COMBAT OPTIONS ####
# OFFHAND THROWING - (ON or OFF) SET TO ON IF YOU WANT TO ROTATE RIGHT/LEFT HANDS WHILE THROWING LT/HT
     var OffhandThrow ON
# THROWING TYPE (LOB, THROW or HURL) *LOB will NEVER stick / less damage - HURL ALWAYS STICKS/ max damage. THROW is inbetween
## IF YOU USE A SHARP THROWING WEAPON (LIKE SPEAR) ALWAYS USE LOB! THROW WILL STICK WITH A POINTY WEAPON!
## LOB IS THE SAFEST - LOB NEVER STICKS! - THROW IS SAFE ~IF USING A BLUNT THROWN WEAPON~ - HURL ALWAYS STICKS - AVOID HURL 
     var ThrowType throw
# BONDED THROWING WEAPONS? (ON or OFF) - Will use INVOKE to retrieve thrown weapon
     var Bonded OFF
# ROAMING (ON or OFF) - Will ROAM around to different critter rooms if it doesn't find a creature during bored routine
     var Roaming ON
# USE WEAK ATTACKS (ON or OFF) - Will use WEAK attacks for melee training (good for backtraining or preserving fatigue/balance)
     var WeakAttack OFF
# AIM ACTIONS (Set an array of actions) - ACTIONS TO PERFORM WHILE WAITING FOR FULL AIM (WITH RANGED/SPELLS) Separate with |
     var AimActions bob|attack|attack left
# TRAIN STEALTH? TRAIN STEALTH DURING MELEE / THROWN / BRAWLING ROUTINES
     var TrainStealth ON
## LOOT MONSTERS? (ON or OFF) - LOOT MONSTERS?
## OFF WILL SKIP LOOTING ALL MONSTERS ~PERIOD~ AND LET THEM ROT
     var Loot.Monsters ON
## LOOT OPTION TO USE - TREASURE / BOXES / EQUIPMENT/ GOODS or ALL
     var Loot.Option GOODS
## LOOTING OPTIONS (ON or OFF) - LOOT OPTIONS FOR MAIN COMBAT
     var Loot.Gems ON
     var Loot.Boxes ON
     var Loot.Metals ON
     var Loot.Scrolls ON
     var Loot.Collectibles OFF
     var Loot.SpiderParts OFF
# MAX BOXES (Set a number) - MAX number of BOXES to pick up before turning Box looting off for that run
     var Max.Boxes 25
# DISSECT (ON or OFF) - DISSECT mobs for First Aid training in Combat (Alternates with SKINNING depending on Learning Rates)
     var Dissect ON
# SKINNING OPTIONS (ON or OFF)
# SKIN ON but BUNDLE OFF will skin but DROP all skins. SKIN collecting only supported with bundles ON!
     var Skin ON
     var Bundle ON
# TIE BUNDLES (ON or OFF) (Turns on automatically when F2P is ON) - LOWER ITEM COUNT BY TYING UP YOUR BUNDLES
     var TieBundle ON
# BUNDLE LOCATION (SET to NULL to use ANY open location or set a preferred location (shoulder / waist / back / belt / around shoulder / over shoulder)
     var BundleLocation NULL
# ArrangeTarget (SET TO SKIN, BONE or PART - or NULL to skip arrange)
## Set ArrangeTarget to SKIN/BONE/PART to Arrange one time
## Set ArrangeALL to ON to arrange max times
     var ArrangeTarget SKIN
     var ArrangeAll OFF
## ArrangeAlways (ON or OFF) - Set ON to ALWAYS arrange regardless of skinning learningrate. OFF will SKIP ARRANGING when Skinning learning is locked
     var ArrangeAlways OFF
# MAX BUNDLE SIZE - Max amount of skins to keep in bundle before creating a new bundle (DEFAULT: 30  MAX: 200)
     var MaxBundle 40
# Set SNIPE to ON to use SNIPE (THIEF/RANGER/NECRO ONLY)
     var Snipe ON
# Set POACH to ON to use POACH instead of SNIPE (SNIPE overrides this setting if SNIPE is ON - TURN SNIPE OFF TO USE THIS)
     var Poach OFF
# RANGED AIM PAUSE. Set to 0 for a Full Aim. Set number of seconds to pause that many seconds before firing
     var SNAP.FIRE 6
# RETREAT WHILE USING RANGED WEAPONS/BUFFING? (ON or OFF) - Will RETREAT to stay at ranged when using ranged weapons
     var Retreat OFF
## DANCE / COUNT Critters - Set min number of critters to "dance" with before you start killing. 
## Leave Dance.Count 0 to kill EVERYTHING. Set 1 to dance with 1 creature until a 2nd comes in, etc. If set to 1 will ALWAYS leave 1 creature in your room.
     var Dance.Count 0
## TACTICS TRAINING (ON OR OFF) - Train TACTICS in Combat
     var Tactics ON
# APPRAISE CREATURES - (ON or OFF) to APPRAISE ALL CREATURES
     var APPRAISE ON
# HUNT OPTION (HUNT every ~75 seconds unless perception locked)
     var HUNT ON
## APPRAISE ITEMS WHEN NO CRITTERS IN ROOM? (ON or OFF)
     var APP.ITEMS OFF
## ITEMS TO APPRAISE (Set to NULL to not use) SET YOUR WORN ITEMS TO QUICK APPRAISE 
     var app1 NULL
     var app2 NULL
     var app3 NULL
## SANOWRET CRYSTAL? (ON or OFF) - ON will exhale crystal every ~100 seconds *IF CONCENTRATION ALLOWS
     var Crystal OFF
## USE SANORWRET CRYSTALS IN COMBAT? (ON or OFF) - ON will use Sanowrets in combat (Turning ON WILL effect concentration and hinder spell casting - not recommended for most)
     var SanowretCombat OFF
## ZILLS? (ON or OFF) - FOR WORN INSTRUMENTS - ON will play Zills during certain times (Repairing armor, collecting, etc)
     var Zills ON
## Zill name ( zills / cowbell / etc )
     var Zill.Name zills
# F2P CHARACTER (ON or OFF) - If set to ON - Script will escape combat and go to town run when you get an inventory count warning
     var F2P ON
# BIOMECHANICAL TARANTULA? (ON or OFF) - IF ON - Will pick a (semi-)random near locked skill to drain every 10 minutes while in combat
     var Tarantula OFF
     var Tarantula.Name tarantula
## TARANTULA SKILLS TO CHECK - SET AN ARRAY OF SKILLS TO CHECK AGAINST FOR TARANTULA DRAIN
## MUST EXACTLY MATCH THE GENIE VARIABLE NAMES! THESE ARE THE SKILLS TARANTULA WILL CHECK FOR EACH SCHOOL
     var Magic.skills Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Arcana
     var Armor.skills Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor
     var Survival.skills Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing
     var Weapons.skills Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow
     var Lore.skills Appraisal|Tactics|Performance
# WARHORN? (ON or OFF) - For Barbarians and Bards only.
     var WarHorn OFF
## WAND SUPPORT (NULL to NOT use) (MEF wand / WoW wand / WoTP wand etc.) Set up to 2 sets of wands to use! Must use actual verb of wand!
## CAN SET AN ARRAY OF WANDS FOR EACH VAR ex- var Wand1 bloodwood branch|oaken staff|crystal
     var Wand1 NULL
     var Wand2 NULL
## WAND CONTAINERS *Must use 2 different containers to store Wands if using 2 identical named wands)
     var Wand1.Container belt
     var Wand2.Container cloak
## Wand Weapon - (NULL or WEAPON NAME) SET A MELEE WEAPON TO BUFF WHEN USING WANDS WITH A WEAPON BUFF
     var WandWeapon NULL
## EGG SUPPORT (ON or OFF)*Uses the HE Gift Egg in Combat every ~15 minutes to invoke more mobs
     var EGG OFF
## ASTROLABE (ON or OFF) - Uses an Astrolabe every 30 mins if ON (Will rotate if you use 2)
     var ASTROLABE OFF
## Set the name of the astrolabes - (2 words ONLY i.e - ornate astrolabe, twisted astrolabe)
     var ASTROLABE1 NULL
     var ASTROLABE2 NULL
     var Astro1.Container NULL
     var Astro2.Container NULL
## ORB RUB IN COMBAT (var Orb.Rub ON or OFF) - TURN ON TO RUB FAVOR ORB IN COMBAT EVERY ~40 MINUTES
## *NOTE THAT SCRIPT AUTOMATICALLY RUBS ORB ~ONE TIME~ EVERY FULL LOOP OF SCRIPT REGARDLESS OF THIS VARIABLE
     var Orb.Rub OFF
####################################################################################################
# ARMOR SWAP - (ON or OFF) - SPECIAL ARMOR SWAPPING ROUTINE FOR HELMS ONLY
# WILL SWAP OUT A SINGLE PIECE OF PLATE/BRIG/CHAIN/LIGHT HELM EVERY ~5 MINUTES IN COMBAT
     var Armor.Swap OFF
# IF Armor.Swap is ON - THEN ALL THE ARMORS BELOW MUST BE SET CORRECTLY!
# SET EVERY PIECE OF ARMOR TO SWAP BELOW, MUST SET AN ARMOR PIECE FOR ALL FOUR TYPES - TWO WORDS ONLY!
# ONE PIECE SHOULD MATCH YOUR MAIN ARMOR HELM
     var Light_Armor.Helm steelsilk balaclava
     var Chain_Armor.Helm chain balaclava
     var Brigandine.Helm brigandine balaclava
     var Plate_Armor.Helm NULL
####################################################################################################
# HEAVY ARMOR REMOVAL - (ON or OFF) - ON will take off plate/brig/chain armor before backstab/stealth routines
# Generally only needed for noobs with less then ~200 ranks in armors
     var Armor.Noob OFF
# Set Plate/Brig/Chain pieces here (USE EXACT SYNTAX) (If no armor to remove set to NULL)
     var PLATE1 gauntlet
     var PLATE2 greaves
     var PLATE3 NULL
     var PLATE4 NULL
# Set Light Armor Pieces to Swap in place of the Heavy armor pieces above - if any (set to NULL to not use)
     var LIGHTARMOR1 rugged gloves
     var LIGHTARMOR2 rugged greaves
     var LIGHTARMOR3 NULL
     var LIGHTARMOR4 NULL
####################################################################################################

##############################################################
# TOWN RUN / SPECIAL MODULES - SETTINGS FOR TOWN 
# AUTO HEALER / SELL GEMS/SKINS, BANK, OPTIONAL MODULES
##############################################################

# RETURN TO COMBAT MODULE (ON or OFF) - RESTARTS SCRIPT AND RETURNS TO COMBAT WHEN TOWN RUN IS FINISHED
# IF OFF - SCRIPT WILL ~ABORT~ ONCE TOWN RUN IS COMPLETE - LEAVE THIS ON FOR INFINITE AFK SCRIPTING
     var RETURN.TO.COMBAT ON
# AUTOHEAL (ON or OFF) - ON - LET SCRIPT HANDLE AUTO-HEALING AFTER COMBAT (DEPENDING ON YOUR GUILD/SETTINGS) 
# LEAVE THIS ON UNLESS YOU WANT TO HANDLE HEALING YOURSELF MANUALLY! (OR WITH ANOTHER SCRIPT) 
# TURNING THIS OFF WILL ~ABORT SCRIPT AFTER ESCAPING FROM COMBAT~! AND WILL PARSE: HELP ESCAPE PLZ!
     var AUTOHEAL ON
# HEAL ALL (ON or OFF ) - HEAL.ALL ON = FULLY HEAL IF YOU HAVE ~ANY~ WOUNDS AT ALL (even minor scars) 
# HEAL.ALL OFF = WILL SKIP HEALING IF INSIGNIFICANT WOUNDS (minor scratches etc)
     var HEAL.ALL ON
# SELL SKINS (ON or OFF) - VISIT FURRIER - SELL SKINS/BUNDLES 
     var SELLSKINS ON
# SELL GEMS (ON or OFF) - VISIT GEM SHOP - SELL ALL GEMS/POUCHES
     var SELLGEMS ON
# SELL METALS (ON or OFF) - VISIT GEM SHOP - SELL ALL LOOSE METALS/NUGGETS/BARS (except those in your Crafting Container) 
     var SELLMETALS ON
# BUY HERBS? (ON or OFF) - VISIT HERB SHOP - AUTO RESTOCK ON HEALING HERB SUPPLIES (IF in city with Herbalist)
     var HERBS ON
# USE HERBS IN COMBAT? (ON or OFF) - If ON - Script will eat herbs during combat every ~5 minutes if needed
     var HERBS.COMBAT ON
## Container.Herb - SET CONTAINER TO STORE YOUR HERBS IN (Can be a stackable herb container)
     var Container.Herb %Container
# BANK RUN (ON or OFF) - VISIT BANKS - DEPOSIT MONEY AFTER TOWN RUN 
     var BANKRUN ON
# INVENTORY CHECK (ON or OFF) - TURNS ON INVENTORY CHECKS FOR DUMPING ANY COMMON TRASH ITEMS IN INVENTORY (OR EXCESS GEM POUCHES / BUNDLING ROPE )
     var INVCHECK ON
# TRASH DUMP (ON or OFF) - IF ON WILL DUMP ANY ITEM IN YOUR TRASH VARIABLE (GLOBAL VARIABLE AT VERY TOP OF VARIABLE FILE)
     var TRASH.DUMP ON
# POUCH DUMP (ON of OFF) - IF ON - DUMPS ANY GEM POUCHES IN YOUR INVENTORY THAT ~DO NOT MATCH~ THE COLOR/DESCRIPTION OF YOUR PRIMARY GEMPOUCH ( var gemPouch )
# WILL ALSO DUMP YOUR NORMAL GEM POUCHES IF YOU HAVE MORE THAN 10 OF THEM until you only have 10 MAX (Prevent buildup of ~50 rogue pouches) 
     var POUCH.DUMP ON

## SHARD CITIZEN (ON or OFF) - Must be a citizen of shard
     var Shard.Citizen OFF
# GET FAVORS? (ON or OFF) - (ONLY WORKS IN CROSSING / SHARD / HAVEN )
     var GET.FAVORS ON
     var FAVOR.GOD damaris
# REPAIR ARMOR? (ON or OFF) - REPAIR ALL ARMOR / WEAPONS DURING TOWN RUN (MUST HAVE MONEY IN LOCAL BANK)
     var REPAIR.ARMOR ON
## USE MAGIC REPAIR KITS? (SET NULL/OFF TO NOT USE)
## REPAIR.KIT and REPAIT.KIT.2 ARE FOR FULL REPAIR KITS THAT REPAIR ALL ARMOR ~AND~ WEAPONS
## REPAIR.KIT.WEAPON and REPAIR.KIT.ARMOR ARE ONLY FOR KITS THAT ONLY REPAIR ARMOR OR WEAPONS!
## YOU MUST SET THE CONTAINER THAT EACH SPECIFIC KIT IS FOUND IN! IT TREATS THIS CONTAINER LIKE GEMPOUCH.CONTAINER AND KEEPS CLOSED! *CAN BE SHARED WITH GEMPOUCH.CONTAINER!
     var REPAIR.KIT NULL
     var REPAIR.KIT.2 NULL
     var REPAIR.KIT.WEAPON NULL
     var REPAIR.KIT.ARMOR NULL
     var REPAIR.KIT.CONTAINER NULL
     var REPAIR.KIT.2.CONTAINER NULL
     var REPAIR.KIT.3.CONTAINER NULL
# CLIMBING/SWIMMING RUN (ON or OFF) - ATHLETICS TRAINING 
     var CLIMBING ON
## MAGIC CLIMBING ROPE (ON or OFF) - CHECK FOR MAGIC CLIMBING ROPE - USES THAT INSTEAD OF DEFAULT CLIMBING RUN
     var MAGIC.ROPE OFF
     var ROPE.NAME climbing rope
     var Rope.Container NULL
## WINDBOARD (ON or OFF) - TRAIN ATHLETICS WITH A WINDBOARD INSTEAD
     var WINDBOARD OFF
# COLLECTING - (ON or OFF) - OUTDOORSMANSHIP TRAINING - COLLECT ROCKS/COINS
     var COLLECTING ON
# BRAIDING - (ON or OFF) - TRAINS BRAIDING (ENGINEERING) - ONLY TRAINS TO ~70 RANKS!
     var BRAIDING ON
# RAVEN'S COURT SCHOLARSHIP STUDY (ON or OFF) - ONLY IN CROSSING !
     var RAVEN ON
# TEXTBOOK / COMPENDIUM? (ON or OFF) - TRAIN SCHOLARSHIP/FIRST AID W/ ANATOMY TEXTBOOK
     var TEXTBOOK OFF
# TEXTBOOK TYPE - Textbook or Compendium
     var TEXTBOOK.TYPE textbook
     var Textbook.Container cloak
# SKINNING/FA TRAINER - (ON or OFF) ONLY WORKS FOR THE MAGIC SKINNING / FA TRAINERS
## The ones with 105 uses per day or infinite ( https://elanthipedia.play.net/Item:Small_blue-belly_crocodile_with_prominently_stitched_seams )
     var SKINTRAINER OFF
     var SKINTRAIN.NOUN crocodile
     var SKINTRAIN.CONTAINER goldenweave belt
# EPISTEMIC JOURNAL - For Epistemic Journals ONLY - Writes to Journal every 24 hours
# Set JOURNAL.TYPE ( NULL to NOT USE ) - Set NOUN of item to use ( traveler's diary / explorer's log / soldier journal / etc)
     var JOURNAL.TYPE NULL
# DISARM BOXES? (USES DISARM SCRIPT - MAKE SURE YOU SET THE VARIABLES UP IN disarm-vars)
     var DISARM ON
# BURGLE RUN (ON or OFF) - BURGLE RUN USING THE BURGLE SCRIPT (BURGLE.PAWN ON will Pawn all Burgle items)
     var BURGLE ON
     var BURGLE.PAWN ON
# BURGLE DUMP (ON or OFF) - Burgle Dump ON will DUMP/TRASH any Burgle item that does not sell at pawn shop
     var BURGLE.DUMP ON
# STEALING RUN (ON or OFF) - Does STEALING Run with the Ultimate Stealing Script
     var STEAL OFF
# PERFORMANCE RUN (ON or OFF) - DEDICATED PERFORMANCE TRAINING RUN DURING TOWN RUN (Uses your Zill.Name variable to train)
     var PERFORMANCE ON
# MAGICAL RESEARCH TRAINING (ON or OFF) - DEDICATED MAGICAL RESEARCH TRAINING DURING END OF TOWN RUN - TAKES A BIT OF TIME! 
     var MAGICAL.RESEARCH OFF
# PRIMARY MAGICAL RESEARCH TYPE ( SET TO NULL TO CHOOSE AUTOMATICALLY BASED ON LEARNING )
# OPTIONS ARE: FUNDAMENTAL, STREAM, AUGMENTATION, UTILITY, WARDING, SORCERY, FIELD, SPELL
     var RESEARCH.TYPE NULL
# TEACHING? (ON or OFF) - If ON, will attempt to teach your other characters/people in the Friends variable
     var TEACH OFF
     var TEACH.SKILL hiding
     var TEACH.SKILL.2 evasion
## SUPPORT FOR MASTERCRAFT TRAINING
## IF YOU USE MASTERCRAFT - SET EACH SKILL ON THAT YOU WANT TO TRAIN
## *YOU MUST SET UP MASTERCRAFT - TOOLS ETC SEPARATELY
     var ALCHEMY OFF
     var ENGINEERING OFF
     var FORGING OFF
     var OUTFITTING OFF
     var ENCHANTING OFF
## VAULT SWAP (ON or OFF) - ON WILL TEMPORARILY SWAP YOUR 'var CONTAINER' FOR A SPECIAL BAG IN YOUR VAULT FOR MASTERCRAFT PURPOSES ONLY!
## AFTER MASTERCRAFT IS OVER, GOES BACK TO VAULT AND SWAPS BACK TO ORIGINAL BAG - PUTS YOUR CRAFTING BAG BACK IN THE VAULT!
## MAKE SURE YOU HAVE ENOUGH ROOM IN YOUR VAULT! THE SWAP CONTAINER SHOULD FIT ON THE SAME BODY SLOT AS THE BAG YOU ARE SWAPPING OUT!
     var VAULT.SWAP OFF
## VAULT CITY - SET THIS TO THE CITY NAME WHERE YOU HAVE YOUR VAULT - IF VAULT.SWAP IS ~ON~ IT WILL RUN TO THIS CITY FIRST
     var VAULT.CITY FC
## SET THE NAME OF YOUR CRAFTING BAG IN YOUR VAULT - MUST HAVE ~ALL YOUR CRAFTING TOOLS~ IN THIS BAG!!
## MAKE SURE TO BE SPECIFIC WITH YOUR CONTAINER VARIABLES SO THEY DONT GET MIXED UP! THIS CONTAINER SHOULD USE THE SAME BODY SLOT AS YOUR VAR CONTAINER!
     var CRAFTING.BAG dreamweave lootsack

# ALMANAC (ON or OFF) - USE ALMANACS (That trains random skill OR pick-a-skill every 10 minutes)
     var ALMANAC OFF
## ALMANAC VERB - if using the special encyclopedic almanac, MUST be set to 'encyclopedic almanac' to use the pick a skill function
     var ALMANAC.TYPE almanac
     var Almanac.Container goldenweave belt
## ALMANAC SKILLS to check/pick for encyclopedic almanac i.e. Sorcery|Forging|Engineering
## The default list has ALL skills listed - You can remove skills you don't want to boost
     var ALMANAC.LEARN Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor|Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing|Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow|Appraisal|Tactics|Performance|Enchanting|Forging|Engineering|Alchemy|Outfitting|Arcana
# LOCKPICK TRAINING ITEM? (Set to NULL to not use) - Must match EXACTLY with item name in hands (2 words only)
# For MAGIC LOCKPICK TRAINING ITEMS - * Assumes you use a WORN lockpick ring/case 
     var LOCKPICK.ITEM NULL
## SET A SECONDARY LOCKPICK ITEM HERE IF YOU HAVE A SECONDARY (OR SET TO NULL)
     var LOCKPICK.ITEM.2 NULL
## Lockpick.Container is where the MAGIC LOCKPICK ITEMS should be stored (NULL to try wear them)
     var Lockpick.Container NULL
# PILGRIM BADGES (ON or OFF) *CLERIC/PALADINS ONLY! - VISIT UNVISITED BADGE LOCATIONS - PRAY TO BADGE
     var PILGRIM ON
# POWERWALKING (ON or OFF) - FOR MAGIC USERS - DO A POWERWALK DURING TOWN RUN 
     var POWERWALK ON
## SCRIPT CHECK LOGIC - TURN SCRIPT CHECK LOGIC (ON OR OFF) - WARNING - THERE ~WILL~ BE FALSE POSITIVES!! UNAVOIDABLE!!
## IF IT DETECTS ANY GM SCRIPT CHECKS - WILL ~ATTEMPT~ TO AUTOMATICALLY HANDLE IT AND/OR RUN AWAY (Not Log Out)
     var SCRIPTCHECK ON
## Setting NO.CONTACT to "ON" will log out for 5 minutes if someone tries to drag you or hold your hand (DEFAULT: OFF)
## WARNING! IT WILL ALSO ESCAPE COMBAT IF ANYONE TALKS IN YOUR COMBAT ROOM! INCLUDING CRITTERS! SO IT CAN FALSE POSITIVE ON TALKING CRITTERS
     var NO.CONTACT OFF
## LOG.ON.STUN (ON or OFF) Set to "ON" to log out if you are too hurt/stunned and are unsuccessful running away (DEFAULT: ON)
     var LOG.ON.STUN ON
## LOG.ON.DEATH (ON or OFF) Set OFF to stay logged in even if you die (DEFAULT: ON)
     var LOG.ON.DEATH ON
## TOTAL TIME ONLINE - MAX TIME TO STAY ONLINE (IN SECONDS) After this time has passed will idle and logout to avoid AFK checks (Set to 0 to always stay online)
     var ONLINE.TIME 0
## FANG COVE? (ON or OFF) - Do you want to go to FANG COVE for healing/town stuff (Only works in Prime if Premium)
     var FANGCOVE OFF
## USE PREMIUM JUMP JEWELRY? (ON or OFF) - Will use Premie JJ to teleport to Fang Cove for healing/bundles/gems/etc
     var JumpJewelry OFF
     var JewerlyVerb ironwood ring
## PERSONAL EMPATH HEAL (Put EMPATH'S NAME HERE to use. NULL to turn off) - If you use a personal empath to heal
## Setting this to anything OTHER than NULL/OFF will turn OFF the triggers to nod to someone when they ask if you want healing
     var PocketEmpath NULL
## EmpathRoom is ROOM NUMBER where you can find your PERSONAL EMPATH. (MUST be in the CITY you go to for TOWN RUN)
     var EmpathRoom NULL
## BankBot - Used for F2P characters to tip a bankbot any remaining coin at end of town run
## Set Tipping to 1, Bankbot name and Tiproom = room number bankbot is at, in your home town
     var Tipping 1
     var BankBot morph
     var TipRoom 753
## CLAN ITEM (TF USE ONLY)
     var CLAN OFF
     var CLAN.ITEM sphere
## LIGHTER ITEM (For using a Lighter to start fires instead of flint and blade)
## USAGE - var LIGHTER (ON or OFF) - Lighter.Name = verb of the item
     var Lighter OFF
     var Lighter.Name world dragon
## CUSTOM TOWN SCRIPT - (Must be the exact name of the script (IGNORE .CMD - JUST USE NAME)
## Set your own script to run during the town run
## YOU MUST HAVE A PARSE AT THE END OF YOUR SCRIPT: put #parse SCRIPT FINISHED!
## IF YOU DO NOT HAVE THIS PARSE THEN UBER WILL NOT RECOVER PROPERLY!
     var Custom.Script NULL
## RPA BESTOW? (ON or OFF) - MUST BE IN THE PIRP SYSTEM TO BESTOW RPAS! https://elanthipedia.play.net/RPA_command
     var RPA OFF
## LIST THE PEOPLE YOU WANT TO BESTOW RP POINTS TO BELOW IN AN ARRAY!!
## ie. var PirpList Name1|Name2|Name3|Name4|Name5
     var PirpList Raidboss|Healbitch|Illuminati|Breckin|Ryhs|Rhoat|Shepherd|Kohen|Worril|Odium|Morvetan|Orcher|Amroth|Mephos|Yew|Lorak|Wryll|Rellie|Beerfest|Bayndayd|Xana|Crivic|Blaakwulf|Wong|Findal|Regnar|Lakshmi|Vivica|Phucker|Jimdickens|Kiroq|Bleed|Rutinger|Nekhet|Leecya|Arazenya|Kithkani


######################################################################################################################
######################################################################################################################
# GENERAL MAGIC VARS - ALL MAGIC USERS MUST SET THESE VARIABLES
# GENERIC MAGIC VARIABLES FOR ALL MAGIC USERS
######################################################################################################################
######################################################################################################################
# SMART MANA FOR SPELLS? AUTO-DETERMINES OPTIMAL MANA FOR SPELLS AFTER A NEW SETUP (OR EVERY ~2 WEEKS IN GAME)
# SMART MANA WILL AUTOMATICALLY ADJUST YOUR MANA LEVELS UP AND DOWN AS YOU GAIN IN RANKS FOR OPTIMAL LEARNING
# (ON or OFF) - RECOMMEND LEAVING ON - SETTING THIS ON WILL OVERRIDE ALL MANUAL MANA SETTINGS 
# TURNING SMART.SPELLS OFF MEANS YOU WILL ~HAVE~ TO SET MANA MANALLY AND DO MUCH MORE FINE TUNING 
     var SMART.SPELLS ON
# CAMB HEAVY (ON or OFF) (OFF by default) - ON WILL MAKE SMART MANA PUT MORE MANA INTO CAMBRINTH THEN MAIN PREP
     var Camb.Heavy OFF
# MAGIC RATE - (NULL is RECOMMENDED) Set the MIN Magic Rate to reach before switching to a different spell school. 
# SETTING TO A NUMBER WILL SPAM THE SAME SPELL UNTIL YOU REACH DESIRED LEARNINGRATE. Set to NULL to cycle through spells normally 
     var Magic.Rate NULL
# MAGIC SNAP CAST. Set to 0 for Full Aim. Set to desired number of seconds to pause for that many seconds before casting
     var MAGIC.SNAP 0
# CAMBRINTH CHARGES - Number of Times to Charge your cambrinth (or harness if Cambrinth is NULL) each time!
# RECOMMEND LEAVING THIS AT 1 - 2 AT MAX - THIS VARIABLE TIES INTO HOW SMART MANA CALCULATES MANA
     var CambrinthCharge 1
# OFFENSIVE SPELL MANA AMOUNTS - Set BASE MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Mana 15
     var Debilitation.Mana 15
     var Utility.Mana 15
     var Augmentation.Mana 15
     var Warding.Mana 15
     var Sorcery.Mana 15
# OFFENSIVE SPELL CAMBRINTH AMOUNTS - Set CAMBRINTH MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Camb 20
     var Debilitation.Camb 20
     var Utility.Camb 20
     var Augmentation.Camb 20
     var Warding.Camb 20
     var Sorcery.Camb 20
# USE HARNESS / CAMBRINTH FOR OFFENSE SPELLS (ON or OFF)
# TURN OFF TO SKIP HARNESS/CAMBRINTH COMPLETELY
     var Use.Cambrinth ON
# USE HARNESS / CAMBRINTH FOR BUFFS (ON or OFF)
     var Use.Cambrinth.Buffs ON
# CAMBRINTH ITEM for charging BUFFS/SPELLS (Set to NULL to not use)
     var Cambrinth cambrinth ring
     var Cyclic.Cambrinth NULL
# CAMBRINTH MANA AMOUNT FOR SPELLS - Amount of Mana to put in CAMBRINTH for Magic Tattoos / Harness for Cyclics when No Raw Chanelling feat
     var CambrinthMana 5
# CAMBRINTH MANA FOR Cylics - Amount of Mana to put in cambrinth for Cylics ONLY
     var CyclicCharge 10
# SLOW.CAST (ON or OFF) - OFF IS DEFAULT - Slow Cast ON will cast offensive spells about half as often as normal
# SLOW.CAST OFF (Default) will spam spells in between attacks as much as possible (mana permitting)
     var Slow.Cast OFF
# NO CAMBRINTH USE DURING TM / DEBIL SPELLS (ON or OFF)
# IF YOU SET THIS ON, SCRIPT WILL SKIP USING A CAMBRINTH FOR TM OR DEBIL SPELLS
     var NoCambTM OFF
# POWER PERCEIVE (Perceives every ~5 minutes)
     var POWERP ON

# RITUAL FOCUS ITEM (REQUIRED for RITUAL SPELLS - set Ritual to NULL to not use)
# Ritual.Container can be set to any Container - or set to NULL to wear it first
     var Ritual staff
     var Ritual.Container %Container
# SORCERY RITUAL FOCUS (Separate ritual focus for Sorcery IF NEEDED)
     var Sorcery.Focus NULL
# TM DAMAGE FOCUS ITEM - IF SET WILL USE TM FOCI MODE EVERY ~HOUR (set to NULL to not use)
     var TMFoci NULL
     var TMFoci.Container %Container
# USE SYMBIOSIS ON ATTACK SPELLS? (ON or OFF)
# ONLY USEFUL AT ~HIGHER RANKS~ OF MAGIC - ~NOT~ FOR NOOBS!!
     var Target.Symbiosis OFF
     var Utility.Symbiosis OFF
     var Augmentation.Symbiosis OFF
     var Warding.Symbiosis OFF
     var Sorcery.Symbiosis OFF
     var Debilitation.Symbiosis OFF
# USE SYMBIOSIS ON BUFFS? (ON or OFF) - FOR HIGHER RANKS ONLY
     var Symbiosis.Buffs OFF

# MAGIC TATTOO (Set to NULL or the FULL SPELLTIMER NAME i.e - IronConstitution / MajorPhysicalProtection) - Will use a Magic Tattoo every ~5-10 minutes
# FULL SPELLTIMER NAME MUST ALSO BE SET IN YOUR BUFFS OR SPELLS - USE SORCERY.CAMB (ABOVE) TO SET CAMB MANA FOR MAGIC TATTOO
     var Magic.Tattoo NULL
# MAGIC TATTOO CAMBRINTH/HARNESS MANA - Set the amount of Camb Mana you want to boost your tattoo with
     var Tattoo.Camb 30
# HEROIC TATTOO (ON or OFF) - ONLY FOR HEROIC TATTOOS! (Normal tattoos use Magic.Tattoo)
# VERY BASIC - WILL JUST INVOKE TATTOO / CAST ON A 1 HOUR COOLDOWN
     var Runic.Tattoo OFF

#########################################################################################
# GUILD SPECIFIC OPTIONS BELOW
# SET THE GUILD OPTIONS FOR THE CURRENT CHARACTER YOU ARE EDITING 
########################################################################################
########################################################################################
# NECROMANCER SETTINGS
# SET NECRO.HEAL ON TO USE NECRO HEALING - (Consume Flesh / Devour depending on skills)
     var Necro.Heal ON
## NECROHEAL CREATURE (SET A ~LOW LEVEL~ CREATURE TO KILL ~ONLY FOR DEDICATED HEALING PURPOSES~)
## IDEALLY SET THIS TO A CREATURE NEAR YOUR "HOME CITY" SO YOU DON'T HAVE FAR TO RUN FOR HEALING
     var NecroHeal.Critter GOBLIN SHARD
# SET NECRORITUAL ON TO PERFORM RITUALS IN COMBAT (Preserve/Harvest/Dissect/Butchery/etc)
     var NecroRitual ON
## FORSAKEN? (ON or OFF) - IS NECRO FORSAKEN?? IF ON - WILL AVOID TOWNS/SERVICES AS MUCH AS POSSIBLE!! 
## *Not fully tested/implemented-may not be perfect- but should avoid towns. May have issues REPAIRING ARMOR Unless USING FC* 
     var Forsaken OFF
## RISEN? (ON or OFF) - CREATES RISEN MINIONS IN COMBAT (CAREFUL - GENERATES DIVINE OUTRAGE!) 
     var Risen OFF
## QUICKEN EARTH - ON TO CHECK FOR AND SUMMON DIRT CONSTRUCTS EVERY ~5 MINUTES
     var QuickenEarth OFF
     var QE.Mana 10
     var CFB.Mana 10
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Necro.Cyclics |USOL|ROC
     var Necro.Cyclics.mana |5|4
## Necromancer ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Necro.Target.Spell ACS|VS
     var Necro.Debilitation.Spell HP
     var Necro.Utility.Spell GAF
     var Necro.Augmentation.Spell Obfuscation
     var Necro.Warding.Spell MAF
     var Necro.Sorcery.Spell MPP
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Necro.Buffs IVM|REI|ROC|CH
########################################################################################
########################################################################################
### BARD SETTINGS
# Cyclic Spell Setup
# YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST be set for each individual cyclics!
# YOU MUST SET cyclic.mana in an array to match!! 6 cyclic - 6 mana numbers
  # SET TO NULL/OFF IF NOT TRAINING CYCLICS - THERE ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Bard.Cyclics |AEWO|HODI|FAE|CARE|PYRE|GJ
     var Bard.Cyclics.mana |5|4|5|5|5|6
## Bard ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Bard.Target.Spell BOS
     var Bard.Debilitation.Spell DMRS
     var Bard.Utility.Spell AOT
     var Bard.Augmentation.Spell WILL
     var Bard.Warding.Spell REPR
     var Bard.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Bard.Buffs |MIS|HARM|RAGE|REPR
## BARD SCREAMS? ( Screams in combat every ~60 seconds) (ON or OFF)
     var Bard.Scream ON
## BARD WHISTLE (ON or OFF)
     var Bard.Whistle ON
########################################################################################
########################################################################################
# WARRIOR MAGE SETTINGS
## USE SUMMONING? (Will train Summoning every ~3 minutes)
     var Summoning ON
## ELEMENTAL ALIGNMENT - Element can be FIRE, WATER, ELECTRIC, AETHER, AIR or EARTH
     var element FIRE
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var WM.Cyclics |EE|AC|FR
     var WM.Cyclics.mana |5|4|5
## Warrior Mage ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var WM.Target.Spell FS|FB
     var WM.Debilitation.Spell EE|ALA
     var WM.Utility.Spell ETF
     var WM.Augmentation.Spell YS
     var WM.Warding.Spell ES
     var WM.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var WM.Buffs Ease|TW|SW|Zephyr|SUF|Ignite
## ~WEAPON SUMMONING LOGIC~
# SUMMON WEAPONS (ON or OFF)
     var SummonWeapons OFF
# SUMMON ELEMENT - Must set your WEAPON SUMMON ELEMENT ( Stone/Earth (Default) - Fiery/Fire (Fiery Infusions) - Icy/Ice (Icy Infusions) - or Electric (Shocking Infusions)
     var SummonElement FIRE
# ELEMENTAL CHARGE SPELL Must be *a spammable spell* of your chosen element. Will prep at minimum mana - if you want to prep at something else put a number after
     var ChargeSpell MOA
# SUMMON WEAPON TEMPLATE (0 or 1) - 0 = Default weapon, 1 = Turn weapon to other template
     var SummonTemplate 1
# SUMMON WEIGHT/DENSITY (0 - 2 to set weapon density - Must know QUICK INFUSIONS spell)
# 0 = Lightest Weight, 1 = DEFAULT, 2 = Heavier Weight
     var SummonWeight 1
# Set weapons you want to summon (ON or OFF) - Setting to ON will override your default weapon variables at top of script
     var SummonHT OFF
     var SummonLT OFF
     var SummonSE OFF
     var SummonLE OFF
     var SummonTHE ON
     var SummonSB OFF
     var SummonLB OFF
     var SummonTHB ON
     var SummonPolearms ON
     var SummonStaves ON
## INGOT (ON or OFF) Bump up tier of weapons - Must know REINFORCED INFUSIONS spell and have a rare metal ingot
     var WMIngot OFF
## SET INGOT STORAGE CONTAINER (Set to either a sigil ring or a specific container)
     var Ingot.Container sigil ring
########################################################################################
########################################################################################
# MOON MAGE SETTINGS
## MOON MAGE ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var MM.Target.Spell DO|Burn
     var MM.Debilitation.Spell Dazzle|MB
     var MM.Utility.Spell PG
     var MM.Augmentation.Spell AUS|ART
     var MM.Warding.Spell PSY
     var MM.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var MM.Cyclics |SHW
     var MM.Cyclics.mana |5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var MM.Buffs CV|Shadows|TS|COL|Shadowling|PSY
## OBSERVATION TRAINING - PREDICT TOOL IS ONLY USED FOR PREDICTION OUTSIDE OF COMBAT! TOOL MUST ALREADY BE BONDED!!
## Predict.tool can be - BONES, CHART, MIRROR, PRISM, BOWL, DECK or NULL to turn off.
     var Predict.Tool DECK
## Read The Ripples (RTR ON or OFF) - Will Perform a RTR routine (observe spam) during town run **MUST HAVE TELESCOPE!
     var RTR OFF
## Where you store your telescope * If any - defaults to your main Container if not set
     var Telescope.Container NULL
## OBSERVE IN COMBAT (ON or OFF) - If ON will do Astrology observations in Combat every couple minutes
     var Combat.Observe ON
########################################################################################
########################################################################################
# CLERIC SETTINGS
## CLERIC ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Cleric.Target.Spell FOU|FF
     var Cleric.Debilitation.Spell PS|Malediction
     var Cleric.Utility.Spell DR|BLESS
     var Cleric.Augmentation.Spell Benediction
     var Cleric.Warding.Spell MPP|SL
     var Cleric.Sorcery.Spell dazzle
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Cleric.Cyclics |HYH|GHS|REV|SA
     var Cleric.Cyclics.mana |15|15|15|15
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Cleric.Buffs OM|Auspice|SOS|POM|MAPP|PFE|YS
## ARE YOU USING OM ORB? (MUST BE SET IN BUFFS ABOVE!) SET MANA AMOUNT TO CAST OM / CHARGE ORB WITH EACH TIME
     var OM.Mana 25
## TYPE OF ORB YOU USE FOR OM - OPTIONS:( FIRULF, MERAUD or KEREN)
     var FavorOrb meraud
## BUFF SPELLS YOU WANT TO ALWAYS KEEP ACTIVE IN YOUR OM ORB (You can just set this to var OM.Buffs %Cleric.Buffs ) 
     var OM.Buffs PFE|POM|MPP|MAPP|SAP|SOL
## CLERIC RITUALS? (Perform CLERIC RITUALS during Town Runs/in Combat)
     var ClericRituals ON
### Prayer Mat - Set to NULL to not use or the noun of the mat/rug
     var PrayerMat mat
## HOLY WATER VESSEL - Set your container you use to store/collect holy water
     var HolyWater chalice
### COMBAT COMMUNES - (ON or OFF) - Set the COMMUNES you wish to perform while IN COMBAT 
     var Commune.Meraud ON
     var Commune.Truffenyi ON
     var Commune.Tamsine OFF
### FLINT KNIFE - Set a DEDICATED WEAPON/KNIFE to STRIKE FLINT for MAKING FIRE for RITUALS
### MUST be a METAL weapon you can use to STRIKE FLINT for fire
     var FlintKnife knife
## CLERIC ALIGNMENT GOD - Set a God to align to ( https://elanthipedia.play.net/Cleric_3.0#Alignment )
## CHOOSE A LIGHT/DARK/NEUTRAL GOD ONLY - Each Type will buff 2 magic skills and penalize 3 others
## BY DEFAULT SCRIPT WILL USE ~CHADATRU~ (Which buffs AUG/WARDING - Generally the most lacking magics for Clerics)
## Set a different god if you wish to buff other magics but BE CAREFUL!!! 
     var Alignment.God CHADATRU
########################################################################################
########################################################################################
# RANGER SETTINGS
## RANGER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Ranger.Target.Spell DEVI|STAMPEDE
     var Ranger.Debilitation.Spell DEADFALL|SWARM
     var Ranger.Utility.Spell EM|BLEND
     var Ranger.Augmentation.Spell SOTT
     var Ranger.Warding.Spell EY
     var Ranger.Sorcery.Spell ECRY
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Ranger.Cyclics |CS|BES
     var Ranger.Cyclics.mana |5|5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Ranger.Buffs Athleticism|STW|EY|WOTP|OATH|ETC|Bloodthorns
########################################################################################
########################################################################################
## PALADIN SETTINGS
## PALADIN ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Paladin.Target.Spell FST
     var Paladin.Debilitation.Spell Shatter
     var Paladin.Utility.Spell AS
     var Paladin.Augmentation.Spell RW
     var Paladin.Warding.Spell SP
     var Paladin.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Paladin.Cyclics |HOW|TR
     var Paladin.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Paladin.Buffs AA|Courage|HES|RW|SR|Clarity
## SET your HOLY WEAPON here (NULL to ignore) - Holy Weapon Name
     var HolyWeapon NULL
## Holy Icon (NULL TO NOT USE/IGNORE) - Set to the noun of your icon
     var HolyIcon NULL
########################################################################################
########################################################################################
## TRADER SETTINGS
## TRADER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Trader.Target.Spell CRD|STARCRASH
     var Trader.Debilitation.Spell FLUORESCE|AVA
     var Trader.Utility.Spell NOUMENA
     var Trader.Augmentation.Spell BLUR
     var Trader.Warding.Spell IR
     var Trader.Sorcery.Spell MPP
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Trader.Cyclics |ARS|SOV
     var Trader.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Trader.Buffs |TRC|Blur|LGV|NONCHALANCE
########################################################################################
########################################################################################
# EMPATH SETTINGS
## EMPATH ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Empath.Target.Spell PARALYSIS
     var Empath.Debilitation.Spell LETHARGY|NB
     var Empath.Utility.Spell GS|HEAL
     var Empath.Augmentation.Spell REFRESH
     var Empath.Warding.Spell IC|POP
     var Empath.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Empath.Cyclics |AD|REGEN
     var Empath.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Empath.Buffs  |AGS|BS|IC|GOL|MEF|TRANQUILITY
## GAURDIAN SPIRIT? (ON or OFF) - ON will keep up Guardian Spirit while in Combat
     var Guardian.Spirit ON
## CUSTOM GUARDIAN SPIRIT (ON or OFF) - If ON - will "cast custom" instead of casting normal
     var Guardian.Custom OFF
## ATTACK CONSTRUCTS ONLY? (ON or OFF) - ON will ONLY attack constructs (unless using Absolution vs unded). OFF will attack everything
## WARNING - SETTING TO OFF WILL CAUSE EMPATHIC SHOCK!!!!
     var Construct.Only ON
## USE MANIPULATE FRIENDSHIP (ON or OFF) - ON will attempt to manipulate non-construct creatures
     var Manipulate ON
## ESCAPE COMBAT WHEN EMPATHY REACHES 0? (ON or OFF) - If Empathy LearningRate reaches 0 during combat, will go on town run
     var Empathy.Escape OFF
## EMPATH PERCEIVE HEALTH WALKS (ON or OFF) - If ON - Will go on perceive health walks around town during town run
     var Empath.Walk ON
## EMPATH UNITY LINK (ON or OFF) - FOR EMPATH HEALBOT MODE - DO YOU KNOW UNITY LINK? MUST BE 70+ CIRCLE AND 380+ EMPATHY
     var Unity ON
## TEACH CLASS (FOR HEALBOT MODE) - SET THE SKILL OF THE CLASS YOU WANT TO TEACH
     var TeachClass TM
## BLACKLIST! (FOR HEALBOT MODE) - SET THE NAMES OF THE PEOPLE TO BLACKLIST FROM HEALING SERVICES!
## MUST BE IN AN ARRAY - var Blacklist Bob|Frank|Dave
     var Blacklist NULL
########################################################################################
########################################################################################
# THIEF SETTINGS
# AMBUSH TRAINING (Use AMBUSH MOVES in COMBAT - STUN/CLOUT/SLASH)
     var Ambush ON
# SELECT KHRI TO USE (Set as many ON / OFF as you want )
# IT WILL ONLY USE AS MANY KHRI AS YOU CAN HANDLE AT ONCE, PRIORITIZING THE MOST IMPORTANT DEPENDING ON SCENARIO)
     var khriSAGACITY ON
     var khriSTEADY ON
     var khriSTRIKE ON
     var khriFOCUS ON
     var khriELUSION ON
     var khriENDURE ON
     var khriAVOIDANCE ON
     var khriADAPTATION ON
     var khriPROWESS ON
     var khriHASTEN ON
     var khriHARRIER OFF
     var khriSERENITY OFF
     var khriSIGHT ON
     var khriFLIGHT ON
     var khriCALM OFF
     var khriGUILE OFF
     var khriDARKEN ON
     var khriDAMPEN ON
     var khriSHADOWSTEP ON
     var khriELIMINATE OFF
     var khriTERRIFY OFF
     var khriFRIGHT OFF
     var khriINTIMIDATE OFF
     var khriPLUNDER ON
     var khriSAFE ON
     var khriEVANESCENCE OFF
     var khriCREDENCE OFF
     var khriCUNNING OFF
# USE KHRI DURING TOWN RUN? (ON or OFF) - Turn OFF to Skip using Khri during town run - for Sanowret use
     var Khri.Town ON
########################################################################################
########################################################################################
# BARBARIAN SETTINGS
# USE WHIRLWIND?
     var Whirlwind ON
# USE DUAL WIELD? (ON or OFF) - Dual wield requires 450+ in the weapon
     var DualWield ON
# EXPERTISE COMBOS? (ON or OFF) - Does Barb Expertise Combos (and helps generate IR)
     var Expertise ON
# Set which Forms you want to use (ON or OFF)
# Auto-turns some forms on/off depending on what skills you are training
     var barbEagle ON
     var barbBadger ON
     var barbPanther ON
     var barbPiranha ON
     var barbDragon ON
     var barbMonkey ON
     var barbTurtle OFF
     var barbOwl OFF
     var barbBear ON
     var barbBuffalo OFF
     var barbPython ON
     var barbSwan ON
     var barbToad OFF
     var barbWolverine OFF
# ROARS to use (will only use one)
     var roarEmbrace OFF
     var roarEverild ON
     var roarWail OFF
     var roarScreech OFF
     var roarShriek OFF
     var roarAnger ON
     var roarKuniyo ON
# BERSERKS to use
     var zerkHurricane OFF
     var zerkBlizzard ON
     var zerkFamine ON
     var zerkAvalanche ON
     var zerkTsunami OFF
     var zerkWildfire OFF
     var zerkEarthquake OFF
     var zerkTornado OFF
     var zerkFlashflood ON
     var zerkLandslide ON
     var zerkCyclone OFF
     var zerkDrought OFF
# MEDITATIONS to use (ON or OFF) - WILL ONLY WORK FOR HIGHER LEVEL BARBS
     var medContemplation ON
     var medTenacity ON
     var medSerenity ON
### END OF CHARACTER 5 VARIABLES
### STOP EDITING HERE ~~~ END OF CHARACTER 5 VARIABLES ##########
####################################################################################
####################################################################################
echo **** LOADED %CHARACTER5 VARIABLES
goto END.OF.VARS
}

CHARACTER6:
#########################################################################################################
#########################################################################################################
## CHARACTER 6 VARIABLES
## *CHARACTER6 VARIABLES BLOCK BELOW
if matchre("$charactername", "(?i)%CHARACTER6") then
#########################################################################################################
{
### GENIE LAYOUT - SET THE GENIE LAYOUT YOU WANT THIS CHARACTER TO USE - MUST EXACTLY MATCH THE LAYOUT NAME IN GENIE!
### Example: var GENIE.LAYOUT Shroom.layout - TO SAVE A LAYOUT IN GENIE SET IT UP HOW YOU LIKE AND CLICK LAYOUT > SAVE LAYOUT AS > NAME IT HOW YOU WANT
### IF YOU LEAVE THIS SET TO NULL THEN IT WILL JUST USE THE DEFAULT LAYOUT THAT IS SET (default.layout) 
     var GENIE.LAYOUT Acidbath.layout
### HEAL.CITY ( NULL or CITY NAME (CROSS/LETH/HIB/RIVER/THEREN/SHARD) - Will run to this town for HEALING no matter where you are
     var HEAL.CITY NULL
### HOME CITY (NULL or CITY NAME) - Will attempt to return to your home city after a heal run (if not already in that city) ONLY SUPPORTS MAINLAND CITIES
     var HOME.CITY NULL
### SAFE ROOM (set to NULL to ignore) ~MUST~ TIE INTO HOME.CITY ABOVE! THE ROOM ID YOU WANT TO SCRIPT IN DURING TOWN RUN - MUST BE VALID ROOMID IN YOUR HOME CITY!
### WARNING!: IF YOU DO NOT SET BOTH HOME.CITY AND SAFE.ROOM CORRECTLY YOU ~WILL~ RUN INTO ERRORS - LEAVE BOTH AT NULL TO LET SCRIPT LOGIC HANDLE IT
     var SAFE.ROOM NULL
### AUTO-PROGRESS? (ON or OFF) - ON WILL CHOOSE YOUR COMBAT CREATURE AUTOMATICALLY BASED ON YOUR RANKS - YOU DO NOT NEED TO SET IT! OVERRIDES COMBAT.CRITTER VARIABLE
     var AUTO.PROGRESS ON
### AUTO-PROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var PROGRESS.TYPE NECRO
### COMBAT CRITTER - ONLY USED WITH AUTO.PROGRESS OFF - MUST BE A VALID CREATURE NAME! USE FULL NAME OR 1/2/3 TO SPECIFY TIERS ie SNOW GOBLIN 2
     var COMBAT.CRITTER GOBLIN
### ALTERNATE CRITTER - PICK A ALTERNATE CRITTER TO HUNT - IF YOUR MAIN HUNTING GROUND IS FULL!
     var ALTERNATE.CRITTER MUSK HOG
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var PRIORITY.ROOMS NULL
### XP TRACKER RESET ON SCRIPT STARTUP - (ON or OFF) - RESETS EXP TRACKER TRACKING TIME ON INITIAL LAUNCH OF SCRIPT ONLY
     var XP.RESET ON

### GUI OPTIONS ARE RECOMMENDED TO LEAVE OFF COMPLETELY - THESE OPTIONS ONLY HERE BY SPECIAL REQUEST - WILL BE ANNOYING IF YOU TURN IT ON
### CRITTER.GUI (ON or OFF) - OFF by default - CREATES CRITTER GUI WINDOW - MUST MANUALLY CLICK TO CHOOSE YOUR COMBAT CRITTER BASED ON PROVINCE / SKILL / PREFERENCE
     var CRITTER.GUI OFF
### WEAPON.GUI (ON or OFF) - OFF by default - CREATES WEAPON GUI WINDOW - CHOOSE YOUR WEAPONS FOR THAT RUN *IF YOU HAVE AN ARRAY OF WEAPONS SET IN A SINGLE WEAPON VARIABLE
     var WEAPON.GUI OFF

# FRIEND LIST (People you will hunt with) Put your friends names in place of these. Ex. Bob|Fred|George
# Can just put your name in here or make it blank and it will only find empty rooms.
     var FRIENDS %ALLCHARACTERS|%GLOBALFRIENDS

##############################################################
# WEAPON / CONTAINERS / AMMO SETTINGS - BE VERY SPECIFIC! 
##############################################################

# CONTAINERS - MANDATORY! - SET YOUR MAIN ~3-4~ LARGEST CONTAINERS!
# BE SPECIFIC WITH CONTAINER NAMES - USE 2 WORDS WHENEVER POSSIBLE!
     var Container backpack
     var Container.Boxes lootsack
     var Container.Backup war belt
     var Container.Crafting leather bag
# SHEATH CONTAINER IS FOR SUPER LONG ITEMS - CAN BE ANY LARGE CONTAINER - NOT NECCESARY TO SET 
     var Container.Sheath war belt
# AMMO CONTAINER FOR STORING AMMO - ARROWS/BOLTS/ROCKS - BACKUP CONTAINER IS "OVERFLOW" FOR EXTRA AMMO
     var Container.Ammo arm quiver
     var Container.Ammo.Backup NULL
## CONTAINER.GEMPOUCH - VERY IMPORTANT! - ~MUST BE A SEPARATE CONTAINER~ FROM OTHER BAGS! SMALL/MEDIUM-SIZE CONTAINER IS FINE
## SPECIAL CONTAINER! SCRIPT WILL KEEP THIS CLOSED AT ALL TIMES AND ~ONLY USE IT FOR STORING FULL GEM POUCHES!~
## CONTAINER.GEMPOUCH MUST BE A ~CLOSABLE~ CONTAINER TO STORE ~FULL~ GEM POUCHES IN 
## AGAIN - DO NOT SHARE THIS CONTAINER WITH ~ANY OTHER CONTAINERS~ (except Repair Pouch Container) 
     var Container.GemPouch thigh bag
# Container.EmptyPouch is for storing EMPTY GEM POUCHES (This can be ANY container EXCEPT for Container.GemPouch )
     var Container.EmptyPouch lootsack
# DIRT CONTAINER - For storing dirt for various use (ONLY used by Thieves/Clerics/Necros)
     var Container.Dirt lootsack
## MISC SHEATH OPTIONS (Storing specific weapons in specific containers - toolstraps/bandoliers/harnesses etc) - SET TO NULL/OFF TO NOT USE
## SET THE SHEATH NAME UNDER SHEATH.1 - SET THE WEAPONS YOU WANT TO USE ON EACH SHEATH UNDERNEATH IN AN ARRAY ex:
## var Sheath.1 toolbelt
## var Sheath.1.Weapons sabre|axe|broadsword
     var Sheath.1 hip pouch
     var Sheath.1.Weapons mace|flamberge|mattock|quarterstaff|throwing club|spear|surgical saw|throwing hammer|dagesse
     var Sheath.2 war belt
     var Sheath.2.Weapons crossbow|shortbow|sling
     var Sheath.3 NULL
     var Sheath.3.Weapons NULL
     var Sheath.4 NULL
     var Sheath.4.Weapons NULL
     var Sheath.5 NULL
     var Sheath.5.Weapons NULL
     var Sheath.6 NULL
     var Sheath.6.Weapons NULL
     
## WEAR WEAPONS (Set an array of weapons/shields you want the script to try and wear first before stowing)
     var Wear.Weapons NULL

## SMART.WEAPONS - ON TO TRAIN WEAPONS FROM LOWEST SKILL TO HIGHEST. "OFF" WILL GO IN A LINEAR ORDER (DEFAULT: ON)
## ON WILL DYNAMICALLY TRAIN TO ALWAYS MAKE SURE THE LOWEST SKILLED WEAPON IS TRAINED FIRST 
     var SMART.WEAPONS ON
     
## WEAPON SETTINGS - BE VERY SPECIFIC SETTING WEAPONS ! USE TWO WORDS WHENEVER POSSIBLE!
## SET ALL YOUR WEAPONS BELOW - MUST ~EXACTLY MATCH THE ITEM DESCRIPTION WHEN IN HANDS~! (GLANCE at it in your hands to get correct description) 
## BE SPECIFIC WHEN SETTING WEAPONS!! USE 2 WORDS WHEN POSSIBLE! TO TURN A WEAPON SKILL ~OFF~ SET IT TO - NULL
     var SEWEAPON surgical saw
     var LEWEAPON kertig dagesse
     var THEWEAPON flamberge
     var SBWEAPON throwing club
     var LBWEAPON throwing hammer
     var THBWEAPON war mattock
     var STAVES diamondwood quarterstaff
     var POLEARMS nope spear
     var RANGED.BOW bogbirch shortbow
     var RANGED.CROSSBOW wyndwood crossbow
     var RANGED.SLING spidersilk sling
     var LTWEAPON throwing club
     var HTWEAPON throwing hammer
# MAIN OFFHAND WEAPON TRAINING - MELEE ONLY (MUST BE A LIGHT/MEDIUM WEAPON - HEAVY or 2HANDED WEAPONS WONT WORK!!)
     var OHWEAPON flanged mace
# ALTERNATE OFFHAND WEAPONS (For Backtraining/Dual Training weapons while training other Weapons)
# ~MUST~ BE LIGHT/MEDIUM WEIGHT WEAPON! CANNOT USE HEAVY or 2Handed Weapons! (Unless Barb) (SET TO NULL/OFF TO NOT USE)
     var ALTWEAPON1 club
     var ALTWEAPON2 flanged mace
     var ALTWEAPON3 NULL
## BRAWLWEAPON (DEFAULT: $charactername - Set to NULL to skip brawling)
     var BRAWLWEAPON $charactername
     #var BRAWLWEAPON $charactername
## Backstab/Ambush Weapon (Thief Only)
     var BSWEAPON mirror blade

# AMMO SETTINGS - DO NOT REMOVE THE { } BRACKETS!!!
     if (!$AMMOSWAP) then
{
     var XbowAmmo crossbow bolt
     var BowAmmo arrow
     var SlingAmmo smooth rock
}

## ARMOR CHECK (ON or OFF) - Turn this OFF if you want the script to SKIP checking your armor at the beginning
## If ON - at the beginning, script will remove any armor/fluff you are wearing, and then put on all the armor you have set below. This ensures you have the correct armor on.
     var ARMOR.CHECK ON
## SET YOUR SHIELD - ABSOLUTELY 100% MANDATORY! RECOMMEND AN ARM-WORN SHIELD
     var MyShield ceremonial shield
## ARM WORN SHIELD? (ON OR OFF) - I RECOMMEND ALWAYS USING AN ARM WORN / SMALL SHIELD - MAKES LIFE MUCH EASIER
     var ArmWorn ON
## MAIN ARMOR TO CHECK - PRIMARY COMBAT (Set to NULL to IGNORE a slot)
## YOU MUST SET ALL YOUR ARMOR BELOW - IT DOESN'T MATTER WHICH ARMOR SLOT YOU USE - THE SCRIPT DOESN'T CARE
     var CHEST.ARMOR vest
     var FACE.ARMOR chain mask
     var HEAD.ARMOR lamellar helm
     var ABDOMEN.ARMOR tasset
     var BACK.ARMOR NULL
     var ARM.ARMOR plate vambraces
     var HAND.ARMOR chain gloves
     var LEG.ARMOR plate greaves
     var KNUCKLE hand claw
     var PARRYSTICK parry stick

## PRIORITY WEAPONS - WEAPON SKILLS TO KEEP MOVING ~ALWAYS~ - PRIORITIZE THESE WEAPON SKILLS OVER ALL OTHERS IF THEY ~EVER~ DROP TO 0/34
## MUST BE SET IN AN ARRAY - THE EXACT SAME AS GENIE EXP VARIABLE FORMAT ie: var Priority.Weapons Medium_Edged|Twohanded_Edged
## WARNING!! DO NOT SET PRIORITY WEAPONS UNLESS YOU WANT THOSE SKILL(S) TO TAKE PRIORITY OVER ~ALL~ OTHERS! ~WILL~ CAUSE UNEVEN RANKS OVER TIME!!
## THIS IS MAINLY ONLY USEFUL FOR SHORT PERIODS - FOR POWER LEVELING A SINGLE WEAPON SKILL FOR EXAMPLE - RECOMMEND NULL UNLESS YOU KNOW WHAT YOU ARE DOING
     var Priority.Weapons NULL
     
## TRAIN LOWEST (ON or OFF) - ON WILL ALWAYS TRAIN W/ YOUR LOWEST RANK & LOWEST LEARNINGRATE WEAPON AT EVERY WEAPON SWAP 
## THIS EFFECTIVELY ENSURES THAT ALL YOUR WEAPON SKILLS WILL TRAIN AND STAY AT THE ~EXACT SAME RANKS~ - ESPECIALLY IF USED FROM THE START
## NOTE! TRAINLOWEST ON - WILL ALTER THE DEFAULT WEAPON TRAINING ORDER - BYPASSES THE SET ORDER TO DYNAMICALLY TRAIN WEAPONS 
     var TrainLowest OFF

# MAX LEARNING RATE - FOR EACH WEAPON SKILL (WILL SWITCH WEAPONS ONCE REACHING THIS RATE *MAX 33) *SET TO 35 TO IGNORE LEARNINGRATE 
     var MAX.LEARNINGRATE 12
# LEARNING RATE INCREASE - AFTER FULL WEAPON LOOP *OF ALL WEAPONS* - INCREASE THE MAX.LEARNINGRATE BY THIS MUCH
     var LEARNING.INCREASE 4
# MAX TIME PER WEAPON - SET THE MAXIMUM TIME (IN SECONDS) TO TRAIN EACH WEAPON SKILL - BEFORE SWITCHING WEAPONS
# SETTING THIS TOO HIGH MAY CAUSE SUBOPTIMAL TRAINING - RECOMMEND AROUND ~300-500 (~5-8 minutes per weapon)
     var MAX.TIME 250
# MAXIMUM TOTAL COMBAT TRAINING TIME - SET THE MAX TIME (IN SECONDS) TO STAY IN ~COMBAT~ BEFORE ESCAPING TO TOWN ( 3600 SECONDS = 1 HOUR )
# SET VAR MAX.TRAIN 0 - TO LOOP COMBAT FOREVER ( *UNTIL IT ESCAPES DUE TO BEING TOO HURT / BAGS TOO FULL / BURDEN TOO HIGH )
     var MAX.TRAIN 4500
     
# STANCE PER WEAPON (Set NULL to use default - Or SHIELD/PARRY/EVASION/CUSTOM TO USE THAT PARTICULAR STANCE FOR A PARTICULAR WEAPON)
## NOTE SCRIPT IS ALREADY ADVANCED IN CHANGING STANCES DEPENDING ON WEAPON BEING TRAINED - NULL IS FINE FOR MOST PURPOSES
     var SE.STANCE NULL
     var LE.STANCE NULL
     var THE.STANCE NULL
     var SB.STANCE NULL
     var LB.STANCE NULL
     var THB.STANCE NULL
     var POLEARMS.STANCE NULL
     var STAVES.STANCE NULL
     var BOW.STANCE NULL
     var CROSSBOW.STANCE NULL
     var SLINGS.STANCE NULL
     var LT.STANCE NULL
     var HT.STANCE NULL
     var OH.STANCE NULL
     var BRAWL.STANCE NULL

## BACKTRAIN (ON or OFF) - ON FOR SETTING A SEPARATE BACKTRAIN ROUTINE
     var BACKTRAIN OFF
## BACKTRAIN AUTO PROGRESS (ON or OFF) - Turning this ON will automatically set the creature to hunt, based on your BACKTRAIN WEAPON SKILLS
## TURN THIS ~OFF~ TO SET THE BACKTRAIN CREATURE MANUALLY (BELOW)
     var BACKTRAIN.AUTOPROGRESS ON
### BACKTRAIN AUTOPROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var BACKTRAIN.PROGRESS.TYPE NORMAL
## BACKTRAIN CREATURE - Must specify the creature to hunt if BACKTRAIN.AUTOPROGRESS is OFF
     var BACKTRAIN.CRITTER ICE ARCHON
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var BACKTRAIN.PRIORITY.ROOMS NULL
## BACKTRAIN TIME (in SECONDS - Total time to Backtrain)
     var BACKTRAIN.TIME 1200
## BACKTRAIN MAGIC (ON or OFF) IF OFF - WILL SKIP USING ANY OFFENSIVE SPELLS PERIOD WHILE BACKTRAINING - WILL ONLY DO BUFFS
     var BACKTRAIN.MAGIC OFF
## BACKTRAIN TM/DEBIL SPELLS (ON or OFF) IF OFF - WILL SKIP USING ANY TM / DEBIL SPELL DURING BACKTRANING (UNLESS ITS A TATTOO)
     var BACKTRAIN.TM OFF
## BACKTRAIN WEAPONS - Set every weapon you wish to backtrain (NULL to turn off)
     var BACKTRAIN.SE NULL
     var BACKTRAIN.LE NULL
     var BACKTRAIN.THE NULL
     var BACKTRAIN.SB NULL
     var BACKTRAIN.LB NULL
     var BACKTRAIN.THB NULL
     var BACKTRAIN.STAVES NULL
     var BACKTRAIN.POLEARMS NULL
     var BACKTRAIN.BOW NULL
     var BACKTRAIN.CROSSBOW NULL
     var BACKTRAIN.SLING NULL
     var BACKTRAIN.LT NULL
     var BACKTRAIN.HT NULL
     var BACKTRAIN.BRAWL NULL
     var BACKTRAIN.OH NULL
     var BACKTRAIN.BS NULL
## BACKTRAIN STEALTH (OFF or ON)
     var BACKTRAIN.STEALTH ON
## BACKTRAINING LOOTING OPTIONS (ON or OFF)
     var B.Loot.Gems ON
     var B.Loot.Boxes OFF
     var B.Loot.Metals ON
     var B.Loot.Scrolls ON
     var B.Loot.Collectibles OFF
     var B.Loot.SpiderParts OFF
## BACKTRAIN LOOTING MODE ( treasure / boxes / goods / equipment )
     var B.Loot.Option goods
## BACKTRAIN ARMOR (ARMOR ONLY FOR BACKTRAIN ROUTINE) (Set to NULL to not check a piece)
     var B.CHEST.ARMOR NULL
     var B.FACE.ARMOR NULL
     var B.HEAD.ARMOR NULL
     var B.ABDOMEN.ARMOR NULL
     var B.BACK.ARMOR NULL
     var B.ARM.ARMOR NULL
     var B.HAND.ARMOR NULL
     var B.LEG.ARMOR NULL

##############################################################
### COMBAT GENERAL SETTINGS
##############################################################

## GEM POUCH DESCRIPTION - DR IS TRICKY WITH GEM POUCHES!! BE SPECIFIC - use "<color> pouch" only! 
## **RECOMMEND DUMPING ALL POUCHES AND GET NEW ONES FROM GEM SHOP ON FIRST SETUP**
## WHEN ASKING FOR NEW GEM POUCHES, "ASK NPC FOR <COLOR> POUCH" - ~DO NOT 'ASK FOR GEM POUCH' OR just 'POUCH'~ - JUST 'ASK <NPC> FOR BLACK POUCH'
## Then Set the var to the 'color' pouch you have. ie var gemPouch black pouch
     var gemPouch black pouch
# TIE GEM POUCHES? (ON or OFF) 
# TIE POUCHES FOR MORE STORAGE/LESS INVENTORY SPACE USE - but have to sell the FULL TIED POUCHES AT SPECIAL SHOPS or get TRADER to sell them!
# IF HUNTING IN SHARD OR ROSSMAN - NO WORRY AS SCRIPT SELLS TIED POUCHES IN THOSE GEM SHOPS. IF hunting in XING/ISLANDS will have to get Trader to sell pouches.
     var TiePouch OFF
# WORN GEM POUCH? (ON or OFF) (OFF will STOW your gem pouch / ON will wear it )
     var Gempouch.Worn OFF

## RESTOCK AMMO? (ON or OFF) *SCRIPT WILL AUTOMATICALLY CHECK IF YOU RUN OUT OF AMMO AND ATTEMPT TO RESTOCK
     var AmmoStock ON
# Skinning Knife Name (Mandatory if not a worn knife)
     var Skinning.Knife knife
# BELT/WRIST/ANKLE ~WORN~ SKINNING KNIFE? (ON or OFF)
     var BeltKnife ON
#### COMBAT OPTIONS ####
# OFFHAND THROWING - (ON or OFF) SET TO ON IF YOU WANT TO ROTATE RIGHT/LEFT HANDS WHILE THROWING LT/HT
     var OffhandThrow ON
# THROWING TYPE (LOB, THROW or HURL) *LOB will NEVER stick / less damage - HURL ALWAYS STICKS/ max damage. THROW is inbetween
## IF YOU USE A SHARP THROWING WEAPON (LIKE SPEAR) ALWAYS USE LOB! THROW WILL STICK WITH A POINTY WEAPON!
## LOB IS THE SAFEST - LOB NEVER STICKS! - THROW IS SAFE ~IF USING A BLUNT THROWN WEAPON~ - HURL ALWAYS STICKS - AVOID HURL 
     var ThrowType throw
# BONDED THROWING WEAPONS? (ON or OFF) - Will use INVOKE to retrieve thrown weapon
     var Bonded OFF
# ROAMING (ON or OFF) - Will ROAM around to different critter rooms if it doesn't find a creature during bored routine
     var Roaming ON
# USE WEAK ATTACKS (ON or OFF) - Will use WEAK attacks for melee training (good for backtraining or preserving fatigue/balance)
     var WeakAttack OFF
# AIM ACTIONS (Set an array of actions) - ACTIONS TO PERFORM WHILE WAITING FOR FULL AIM (WITH RANGED/SPELLS) Separate with |
     var AimActions bob|attack|attack left
# TRAIN STEALTH? TRAIN STEALTH DURING MELEE / THROWN / BRAWLING ROUTINES
     var TrainStealth ON
## LOOT MONSTERS? (ON or OFF) - LOOT MONSTERS?
## OFF WILL SKIP LOOTING ALL MONSTERS ~PERIOD~ AND LET THEM ROT
     var Loot.Monsters ON
## LOOT OPTION TO USE - TREASURE / BOXES / EQUIPMENT/ GOODS or ALL
     var Loot.Option GOODS
## LOOTING OPTIONS (ON or OFF) - LOOT OPTIONS FOR MAIN COMBAT
     var Loot.Gems ON
     var Loot.Boxes ON
     var Loot.Metals ON
     var Loot.Scrolls ON
     var Loot.Collectibles OFF
     var Loot.SpiderParts OFF
# MAX BOXES (Set a number) - MAX number of BOXES to pick up before turning Box looting off for that run
     var Max.Boxes 25
# DISSECT (ON or OFF) - DISSECT mobs for First Aid training in Combat (Alternates with SKINNING depending on Learning Rates)
     var Dissect ON
# SKINNING OPTIONS (ON or OFF)
# SKIN ON but BUNDLE OFF will skin but DROP all skins. SKIN collecting only supported with bundles ON!
     var Skin ON
     var Bundle ON
# TIE BUNDLES (ON or OFF) (Turns on automatically when F2P is ON) - LOWER ITEM COUNT BY TYING UP YOUR BUNDLES
     var TieBundle ON
# BUNDLE LOCATION (SET to NULL to use ANY open location or set a preferred location (shoulder / waist / back / belt / around shoulder / over shoulder)
     var BundleLocation NULL
# ArrangeTarget (SET TO SKIN, BONE or PART - or NULL to skip arrange)
## Set ArrangeTarget to SKIN/BONE/PART to Arrange one time
## Set ArrangeALL to ON to arrange max times
     var ArrangeTarget SKIN
     var ArrangeAll OFF
## ArrangeAlways (ON or OFF) - Set ON to ALWAYS arrange regardless of skinning learningrate. OFF will SKIP ARRANGING when Skinning learning is locked
     var ArrangeAlways OFF
# MAX BUNDLE SIZE - Max amount of skins to keep in bundle before creating a new bundle (DEFAULT: 30  MAX: 200)
     var MaxBundle 40
# Set SNIPE to ON to use SNIPE (THIEF/RANGER/NECRO ONLY)
     var Snipe ON
# Set POACH to ON to use POACH instead of SNIPE (SNIPE overrides this setting if SNIPE is ON - TURN SNIPE OFF TO USE THIS)
     var Poach OFF
# RANGED AIM PAUSE. Set to 0 for a Full Aim. Set number of seconds to pause that many seconds before firing
     var SNAP.FIRE 6
# RETREAT WHILE USING RANGED WEAPONS/BUFFING? (ON or OFF) - Will RETREAT to stay at ranged when using ranged weapons
     var Retreat OFF
## DANCE / COUNT Critters - Set min number of critters to "dance" with before you start killing. 
## Leave Dance.Count 0 to kill EVERYTHING. Set 1 to dance with 1 creature until a 2nd comes in, etc. If set to 1 will ALWAYS leave 1 creature in your room.
     var Dance.Count 0
## TACTICS TRAINING (ON OR OFF) - Train TACTICS in Combat
     var Tactics ON
# APPRAISE CREATURES - (ON or OFF) to APPRAISE ALL CREATURES
     var APPRAISE ON
# HUNT OPTION (HUNT every ~75 seconds unless perception locked)
     var HUNT ON
## APPRAISE ITEMS WHEN NO CRITTERS IN ROOM? (ON or OFF)
     var APP.ITEMS OFF
## ITEMS TO APPRAISE (Set to NULL to not use) SET YOUR WORN ITEMS TO QUICK APPRAISE 
     var app1 NULL
     var app2 NULL
     var app3 NULL
## SANOWRET CRYSTAL? (ON or OFF) - ON will exhale crystal every ~100 seconds *IF CONCENTRATION ALLOWS
     var Crystal OFF
## USE SANORWRET CRYSTALS IN COMBAT? (ON or OFF) - ON will use Sanowrets in combat (Turning ON WILL effect concentration and hinder spell casting - not recommended for most)
     var SanowretCombat OFF
## ZILLS? (ON or OFF) - FOR WORN INSTRUMENTS - ON will play Zills during certain times (Repairing armor, collecting, etc)
     var Zills ON
## Zill name ( zills / cowbell / etc )
     var Zill.Name zills
# F2P CHARACTER (ON or OFF) - If set to ON - Script will escape combat and go to town run when you get an inventory count warning
     var F2P OFF
# BIOMECHANICAL TARANTULA? (ON or OFF) - IF ON - Will pick a (semi-)random near locked skill to drain every 10 minutes while in combat
     var Tarantula OFF
     var Tarantula.Name tarantula
## TARANTULA SKILLS TO CHECK - SET AN ARRAY OF SKILLS TO CHECK AGAINST FOR TARANTULA DRAIN
## MUST EXACTLY MATCH THE GENIE VARIABLE NAMES! THESE ARE THE SKILLS TARANTULA WILL CHECK FOR EACH SCHOOL
     var Magic.skills Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Arcana
     var Armor.skills Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor
     var Survival.skills Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing
     var Weapons.skills Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow
     var Lore.skills Appraisal|Tactics|Performance
# WARHORN? (ON or OFF) - For Barbarians and Bards only.
     var WarHorn OFF
## WAND SUPPORT (NULL to NOT use) (MEF wand / WoW wand / WoTP wand etc.) Set up to 2 sets of wands to use! Must use actual verb of wand!
## CAN SET AN ARRAY OF WANDS FOR EACH VAR ex- var Wand1 bloodwood branch|oaken staff|crystal
     var Wand1 NULL
     var Wand2 NULL
## WAND CONTAINERS *Must use 2 different containers to store Wands if using 2 identical named wands)
     var Wand1.Container belt
     var Wand2.Container cloak
## Wand Weapon - (NULL or WEAPON NAME) SET A MELEE WEAPON TO BUFF WHEN USING WANDS WITH A WEAPON BUFF
     var WandWeapon NULL
## EGG SUPPORT (ON or OFF)*Uses the HE Gift Egg in Combat every ~15 minutes to invoke more mobs
     var EGG OFF
## ASTROLABE (ON or OFF) - Uses an Astrolabe every 30 mins if ON (Will rotate if you use 2)
     var ASTROLABE OFF
## Set the name of the astrolabes - (2 words ONLY i.e - ornate astrolabe, twisted astrolabe)
     var ASTROLABE1 NULL
     var ASTROLABE2 NULL
     var Astro1.Container NULL
     var Astro2.Container NULL
## ORB RUB IN COMBAT (var Orb.Rub ON or OFF) - TURN ON TO RUB FAVOR ORB IN COMBAT EVERY ~40 MINUTES
## *NOTE THAT SCRIPT AUTOMATICALLY RUBS ORB ~ONE TIME~ EVERY FULL LOOP OF SCRIPT REGARDLESS OF THIS VARIABLE
     var Orb.Rub OFF
####################################################################################################
# ARMOR SWAP - (ON or OFF) - SPECIAL ARMOR SWAPPING ROUTINE FOR HELMS ONLY
# WILL SWAP OUT A SINGLE PIECE OF PLATE/BRIG/CHAIN/LIGHT HELM EVERY ~5 MINUTES IN COMBAT
     var Armor.Swap OFF
# IF Armor.Swap is ON - THEN ALL THE ARMORS BELOW MUST BE SET CORRECTLY!
# SET EVERY PIECE OF ARMOR TO SWAP BELOW, MUST SET AN ARMOR PIECE FOR ALL FOUR TYPES - TWO WORDS ONLY!
# ONE PIECE SHOULD MATCH YOUR MAIN ARMOR HELM
     var Light_Armor.Helm steelsilk balaclava
     var Chain_Armor.Helm chain balaclava
     var Brigandine.Helm brigandine balaclava
     var Plate_Armor.Helm NULL
####################################################################################################
# HEAVY ARMOR REMOVAL - (ON or OFF) - ON will take off plate/brig/chain armor before backstab/stealth routines
# Generally only needed for noobs with less then ~200 ranks in armors
     var Armor.Noob OFF
# Set Plate/Brig/Chain pieces here (USE EXACT SYNTAX) (If no armor to remove set to NULL)
     var PLATE1 gauntlet
     var PLATE2 greaves
     var PLATE3 NULL
     var PLATE4 NULL
# Set Light Armor Pieces to Swap in place of the Heavy armor pieces above - if any (set to NULL to not use)
     var LIGHTARMOR1 rugged gloves
     var LIGHTARMOR2 rugged greaves
     var LIGHTARMOR3 NULL
     var LIGHTARMOR4 NULL
####################################################################################################

##############################################################
# TOWN RUN / SPECIAL MODULES - SETTINGS FOR TOWN 
# AUTO HEALER / SELL GEMS/SKINS, BANK, OPTIONAL MODULES
##############################################################

# RETURN TO COMBAT MODULE (ON or OFF) - RESTARTS SCRIPT AND RETURNS TO COMBAT WHEN TOWN RUN IS FINISHED
# IF OFF - SCRIPT WILL ~ABORT~ ONCE TOWN RUN IS COMPLETE - LEAVE THIS ON FOR INFINITE AFK SCRIPTING
     var RETURN.TO.COMBAT ON
# AUTOHEAL (ON or OFF) - ON - LET SCRIPT HANDLE AUTO-HEALING AFTER COMBAT (DEPENDING ON YOUR GUILD/SETTINGS) 
# LEAVE THIS ON UNLESS YOU WANT TO HANDLE HEALING YOURSELF MANUALLY! (OR WITH ANOTHER SCRIPT) 
# TURNING THIS OFF WILL ~ABORT SCRIPT AFTER ESCAPING FROM COMBAT~! AND WILL PARSE: HELP ESCAPE PLZ!
     var AUTOHEAL ON
# HEAL ALL (ON or OFF ) - HEAL.ALL ON = FULLY HEAL IF YOU HAVE ~ANY~ WOUNDS AT ALL (even minor scars) 
# HEAL.ALL OFF = WILL SKIP HEALING IF INSIGNIFICANT WOUNDS (minor scratches etc)
     var HEAL.ALL ON
# SELL SKINS (ON or OFF) - VISIT FURRIER - SELL SKINS/BUNDLES 
     var SELLSKINS ON
# SELL GEMS (ON or OFF) - VISIT GEM SHOP - SELL ALL GEMS/POUCHES
     var SELLGEMS ON
# SELL METALS (ON or OFF) - VISIT GEM SHOP - SELL ALL LOOSE METALS/NUGGETS/BARS (except those in your Crafting Container) 
     var SELLMETALS ON
# BUY HERBS? (ON or OFF) - VISIT HERB SHOP - AUTO RESTOCK ON HEALING HERB SUPPLIES (IF in city with Herbalist)
     var HERBS ON
# USE HERBS IN COMBAT? (ON or OFF) - If ON - Script will eat herbs during combat every ~5 minutes if needed
     var HERBS.COMBAT ON
## Container.Herb - SET CONTAINER TO STORE YOUR HERBS IN (Can be a stackable herb container)
     var Container.Herb %Container
# BANK RUN (ON or OFF) - VISIT BANKS - DEPOSIT MONEY AFTER TOWN RUN 
     var BANKRUN ON
# INVENTORY CHECK (ON or OFF) - TURNS ON INVENTORY CHECKS FOR DUMPING ANY COMMON TRASH ITEMS IN INVENTORY (OR EXCESS GEM POUCHES / BUNDLING ROPE )
     var INVCHECK ON
# TRASH DUMP (ON or OFF) - IF ON WILL DUMP ANY ITEM IN YOUR TRASH VARIABLE (GLOBAL VARIABLE AT VERY TOP OF VARIABLE FILE)
     var TRASH.DUMP ON
# POUCH DUMP (ON of OFF) - IF ON - DUMPS ANY GEM POUCHES IN YOUR INVENTORY THAT ~DO NOT MATCH~ THE COLOR/DESCRIPTION OF YOUR PRIMARY GEMPOUCH ( var gemPouch )
# WILL ALSO DUMP YOUR NORMAL GEM POUCHES IF YOU HAVE MORE THAN 10 OF THEM until you only have 10 MAX (Prevent buildup of ~50 rogue pouches) 
     var POUCH.DUMP ON

## SHARD CITIZEN (ON or OFF) - Must be a citizen of shard
     var Shard.Citizen ON
# GET FAVORS? (ON or OFF) - (ONLY WORKS IN CROSSING / SHARD / HAVEN )
     var GET.FAVORS ON
     var FAVOR.GOD urrem'tier
# REPAIR ARMOR? (ON or OFF) - REPAIR ALL ARMOR / WEAPONS DURING TOWN RUN (MUST HAVE MONEY IN LOCAL BANK)
     var REPAIR.ARMOR ON
## USE MAGIC REPAIR KITS? (SET NULL/OFF TO NOT USE)
## REPAIR.KIT and REPAIT.KIT.2 ARE FOR FULL REPAIR KITS THAT REPAIR ALL ARMOR ~AND~ WEAPONS
## REPAIR.KIT.WEAPON and REPAIR.KIT.ARMOR ARE ONLY FOR KITS THAT ONLY REPAIR ARMOR OR WEAPONS!
## YOU MUST SET THE CONTAINER THAT EACH SPECIFIC KIT IS FOUND IN! IT TREATS THIS CONTAINER LIKE GEMPOUCH.CONTAINER AND KEEPS CLOSED! *CAN BE SHARED WITH GEMPOUCH.CONTAINER!
     var REPAIR.KIT NULL
     var REPAIR.KIT.2 NULL
     var REPAIR.KIT.WEAPON NULL
     var REPAIR.KIT.ARMOR NULL
     var REPAIR.KIT.CONTAINER NULL
     var REPAIR.KIT.2.CONTAINER NULL
     var REPAIR.KIT.3.CONTAINER NULL
# CLIMBING/SWIMMING RUN (ON or OFF) - ATHLETICS TRAINING 
     var CLIMBING ON
## MAGIC CLIMBING ROPE (ON or OFF) - CHECK FOR MAGIC CLIMBING ROPE - USES THAT INSTEAD OF DEFAULT CLIMBING RUN
     var MAGIC.ROPE OFF
     var ROPE.NAME climbing rope
     var Rope.Container NULL
## WINDBOARD (ON or OFF) - TRAIN ATHLETICS WITH A WINDBOARD INSTEAD
     var WINDBOARD OFF
# COLLECTING - (ON or OFF) - OUTDOORSMANSHIP TRAINING - COLLECT ROCKS/COINS
     var COLLECTING ON
# BRAIDING - (ON or OFF) - TRAINS BRAIDING (ENGINEERING) - ONLY TRAINS TO ~70 RANKS!
     var BRAIDING ON
# RAVEN'S COURT SCHOLARSHIP STUDY (ON or OFF) - ONLY IN CROSSING !
     var RAVEN ON
# TEXTBOOK / COMPENDIUM? (ON or OFF) - TRAIN SCHOLARSHIP/FIRST AID W/ ANATOMY TEXTBOOK
     var TEXTBOOK ON
# TEXTBOOK TYPE - Textbook or Compendium
     var TEXTBOOK.TYPE textbook
     var Textbook.Container lootsack
# SKINNING/FA TRAINER - (ON or OFF) ONLY WORKS FOR THE MAGIC SKINNING / FA TRAINERS
## The ones with 105 uses per day or infinite ( https://elanthipedia.play.net/Item:Small_blue-belly_crocodile_with_prominently_stitched_seams )
     var SKINTRAINER OFF
     var SKINTRAIN.NOUN crocodile
     var SKINTRAIN.CONTAINER goldenweave belt
# EPISTEMIC JOURNAL - For Epistemic Journals ONLY - Writes to Journal every 24 hours
# Set JOURNAL.TYPE ( NULL to NOT USE ) - Set NOUN of item to use ( traveler's diary / explorer's log / soldier journal / etc)
     var JOURNAL.TYPE NULL
# DISARM BOXES? (USES DISARM SCRIPT - MAKE SURE YOU SET THE VARIABLES UP IN disarm-vars)
     var DISARM ON
# BURGLE RUN (ON or OFF) - BURGLE RUN USING THE BURGLE SCRIPT (BURGLE.PAWN ON will Pawn all Burgle items)
     var BURGLE ON
     var BURGLE.PAWN ON
# BURGLE DUMP (ON or OFF) - Burgle Dump ON will DUMP/TRASH any Burgle item that does not sell at pawn shop
     var BURGLE.DUMP ON
# STEALING RUN (ON or OFF) - Does STEALING Run with the Ultimate Stealing Script
     var STEAL OFF
# PERFORMANCE RUN (ON or OFF) - DEDICATED PERFORMANCE TRAINING RUN DURING TOWN RUN (Uses your Zill.Name variable to train)
     var PERFORMANCE ON
# MAGICAL RESEARCH TRAINING (ON or OFF) - DEDICATED MAGICAL RESEARCH TRAINING DURING END OF TOWN RUN - TAKES A BIT OF TIME! 
     var MAGICAL.RESEARCH OFF
# PRIMARY MAGICAL RESEARCH TYPE ( SET TO NULL TO CHOOSE AUTOMATICALLY BASED ON LEARNING )
# OPTIONS ARE: FUNDAMENTAL, STREAM, AUGMENTATION, UTILITY, WARDING, SORCERY, FIELD, SPELL
     var RESEARCH.TYPE NULL
# TEACHING? (ON or OFF) - If ON, will attempt to teach your other characters/people in the Friends variable
     var TEACH OFF
     var TEACH.SKILL hiding
     var TEACH.SKILL.2 evasion
## SUPPORT FOR MASTERCRAFT TRAINING
## IF YOU USE MASTERCRAFT - SET EACH SKILL ON THAT YOU WANT TO TRAIN
## *YOU MUST SET UP MASTERCRAFT - TOOLS ETC SEPARATELY
     var ALCHEMY OFF
     var ENGINEERING OFF
     var FORGING OFF
     var OUTFITTING OFF
     var ENCHANTING OFF
## VAULT SWAP (ON or OFF) - ON WILL TEMPORARILY SWAP YOUR 'var CONTAINER' FOR A SPECIAL BAG IN YOUR VAULT FOR MASTERCRAFT PURPOSES ONLY!
## AFTER MASTERCRAFT IS OVER, GOES BACK TO VAULT AND SWAPS BACK TO ORIGINAL BAG - PUTS YOUR CRAFTING BAG BACK IN THE VAULT!
## MAKE SURE YOU HAVE ENOUGH ROOM IN YOUR VAULT! THE SWAP CONTAINER SHOULD FIT ON THE SAME BODY SLOT AS THE BAG YOU ARE SWAPPING OUT!
     var VAULT.SWAP OFF
## VAULT CITY - SET THIS TO THE CITY NAME WHERE YOU HAVE YOUR VAULT - IF VAULT.SWAP IS ~ON~ IT WILL RUN TO THIS CITY FIRST
     var VAULT.CITY FC
## SET THE NAME OF YOUR CRAFTING BAG IN YOUR VAULT - MUST HAVE ~ALL YOUR CRAFTING TOOLS~ IN THIS BAG!!
## MAKE SURE TO BE SPECIFIC WITH YOUR CONTAINER VARIABLES SO THEY DONT GET MIXED UP! THIS CONTAINER SHOULD USE THE SAME BODY SLOT AS YOUR VAR CONTAINER!
     var CRAFTING.BAG dreamweave lootsack

# ALMANAC (ON or OFF) - USE ALMANACS (That trains random skill OR pick-a-skill every 10 minutes)
     var ALMANAC OFF
## ALMANAC VERB - if using the special encyclopedic almanac, MUST be set to 'encyclopedic almanac' to use the pick a skill function
     var ALMANAC.TYPE almanac
     var Almanac.Container goldenweave belt
## ALMANAC SKILLS to check/pick for encyclopedic almanac i.e. Sorcery|Forging|Engineering
## The default list has ALL skills listed - You can remove skills you don't want to boost
     var ALMANAC.LEARN Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor|Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing|Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow|Appraisal|Tactics|Performance|Enchanting|Forging|Engineering|Alchemy|Outfitting|Arcana
# LOCKPICK TRAINING ITEM? (Set to NULL to not use) - Must match EXACTLY with item name in hands (2 words only)
# For MAGIC LOCKPICK TRAINING ITEMS - * Assumes you use a WORN lockpick ring/case 
     var LOCKPICK.ITEM NULL
## SET A SECONDARY LOCKPICK ITEM HERE IF YOU HAVE A SECONDARY (OR SET TO NULL)
     var LOCKPICK.ITEM.2 NULL
## Lockpick.Container is where the MAGIC LOCKPICK ITEMS should be stored (NULL to try wear them)
     var Lockpick.Container NULL
# PILGRIM BADGES (ON or OFF) *CLERIC/PALADINS ONLY! - VISIT UNVISITED BADGE LOCATIONS - PRAY TO BADGE
     var PILGRIM ON
# POWERWALKING (ON or OFF) - FOR MAGIC USERS - DO A POWERWALK DURING TOWN RUN 
     var POWERWALK ON
## SCRIPT CHECK LOGIC - TURN SCRIPT CHECK LOGIC (ON OR OFF) - WARNING - THERE ~WILL~ BE FALSE POSITIVES!! UNAVOIDABLE!!
## IF IT DETECTS ANY GM SCRIPT CHECKS - WILL ~ATTEMPT~ TO AUTOMATICALLY HANDLE IT AND/OR RUN AWAY (Not Log Out)
     var SCRIPTCHECK OFF
## Setting NO.CONTACT to "ON" will log out for 5 minutes if someone tries to drag you or hold your hand (DEFAULT: OFF)
## WARNING! IT WILL ALSO ESCAPE COMBAT IF ANYONE TALKS IN YOUR COMBAT ROOM! INCLUDING CRITTERS! SO IT CAN FALSE POSITIVE ON TALKING CRITTERS
     var NO.CONTACT OFF
## LOG.ON.STUN (ON or OFF) Set to "ON" to log out if you are too hurt/stunned and are unsuccessful running away (DEFAULT: ON)
     var LOG.ON.STUN ON
## LOG.ON.DEATH (ON or OFF) Set OFF to stay logged in even if you die (DEFAULT: ON)
     var LOG.ON.DEATH ON
## TOTAL TIME ONLINE - MAX TIME TO STAY ONLINE (IN SECONDS) After this time has passed will idle and logout to avoid AFK checks (Set to 0 to always stay online)
     var ONLINE.TIME 0
## FANG COVE? (ON or OFF) - Do you want to go to FANG COVE for healing/town stuff (Only works in Prime if Premium)
     var FANGCOVE ON
## USE PREMIUM JUMP JEWELRY? (ON or OFF) - Will use Premie JJ to teleport to Fang Cove for healing/bundles/gems/etc
     var JumpJewelry OFF
     var JewerlyVerb ironwood ring
## PERSONAL EMPATH HEAL (Put EMPATH'S NAME HERE to use. NULL to turn off) - If you use a personal empath to heal
## Setting this to anything OTHER than NULL/OFF will turn OFF the triggers to nod to someone when they ask if you want healing
     var PocketEmpath NULL
## EmpathRoom is ROOM NUMBER where you can find your PERSONAL EMPATH. (MUST be in the CITY you go to for TOWN RUN)
     var EmpathRoom NULL
## BankBot - Used for F2P characters to tip a bankbot any remaining coin at end of town run
## Set Tipping to 1, Bankbot name and Tiproom = room number bankbot is at, in your home town
     var Tipping 0
     var BankBot morph
     var TipRoom 753
## CLAN ITEM (TF USE ONLY)
     var CLAN OFF
     var CLAN.ITEM sphere
## LIGHTER ITEM (For using a Lighter to start fires instead of flint and blade)
## USAGE - var LIGHTER (ON or OFF) - Lighter.Name = verb of the item
     var Lighter OFF
     var Lighter.Name world dragon
## CUSTOM TOWN SCRIPT - (Must be the exact name of the script (IGNORE .CMD - JUST USE NAME)
## Set your own script to run during the town run
## YOU MUST HAVE A PARSE AT THE END OF YOUR SCRIPT: put #parse SCRIPT FINISHED!
## IF YOU DO NOT HAVE THIS PARSE THEN UBER WILL NOT RECOVER PROPERLY!
     var Custom.Script NULL
## RPA BESTOW? (ON or OFF) - MUST BE IN THE PIRP SYSTEM TO BESTOW RPAS! https://elanthipedia.play.net/RPA_command
     var RPA ON
## LIST THE PEOPLE YOU WANT TO BESTOW RP POINTS TO BELOW IN AN ARRAY!!
## ie. var PirpList Name1|Name2|Name3|Name4|Name5
     var PirpList Raidboss|Healbitch|Illuminati|Breckin|Ryhs|Rhoat|Shepherd|Kohen|Worril|Odium|Morvetan|Orcher|Amroth|Mephos|Yew|Lorak|Wryll|Rellie|Beerfest|Bayndayd|Xana|Crivic|Blaakwulf|Wong|Findal|Regnar|Lakshmi|Vivica|Phucker|Jimdickens|Kiroq|Bleed|Rutinger|Nekhet|Leecya|Arazenya|Kithkani


######################################################################################################################
######################################################################################################################
# GENERAL MAGIC VARS - ALL MAGIC USERS MUST SET THESE VARIABLES
# GENERIC MAGIC VARIABLES FOR ALL MAGIC USERS
######################################################################################################################
######################################################################################################################
# SMART MANA FOR SPELLS? AUTO-DETERMINES OPTIMAL MANA FOR SPELLS AFTER A NEW SETUP (OR EVERY ~2 WEEKS IN GAME)
# SMART MANA WILL AUTOMATICALLY ADJUST YOUR MANA LEVELS UP AND DOWN AS YOU GAIN IN RANKS FOR OPTIMAL LEARNING
# (ON or OFF) - RECOMMEND LEAVING ON - SETTING THIS ON WILL OVERRIDE ALL MANUAL MANA SETTINGS 
# TURNING SMART.SPELLS OFF MEANS YOU WILL ~HAVE~ TO SET MANA MANALLY AND DO MUCH MORE FINE TUNING 
     var SMART.SPELLS ON
# CAMB HEAVY (ON or OFF) (OFF by default) - ON WILL MAKE SMART MANA PUT MORE MANA INTO CAMBRINTH THEN MAIN PREP
     var Camb.Heavy OFF
# MAGIC RATE - (NULL is RECOMMENDED) Set the MIN Magic Rate to reach before switching to a different spell school. 
# SETTING TO A NUMBER WILL SPAM THE SAME SPELL UNTIL YOU REACH DESIRED LEARNINGRATE. Set to NULL to cycle through spells normally 
     var Magic.Rate NULL
# MAGIC SNAP CAST. Set to 0 for Full Aim. Set to desired number of seconds to pause for that many seconds before casting
     var MAGIC.SNAP 0
# CAMBRINTH CHARGES - Number of Times to Charge your cambrinth (or harness if Cambrinth is NULL) each time!
# RECOMMEND LEAVING THIS AT 1 - 2 AT MAX - THIS VARIABLE TIES INTO HOW SMART MANA CALCULATES MANA
     var CambrinthCharge 1
# OFFENSIVE SPELL MANA AMOUNTS - Set BASE MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Mana 15
     var Debilitation.Mana 15
     var Utility.Mana 15
     var Augmentation.Mana 15
     var Warding.Mana 15
     var Sorcery.Mana 15
# OFFENSIVE SPELL CAMBRINTH AMOUNTS - Set CAMBRINTH MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Camb 20
     var Debilitation.Camb 20
     var Utility.Camb 20
     var Augmentation.Camb 20
     var Warding.Camb 20
     var Sorcery.Camb 20
# USE HARNESS / CAMBRINTH FOR OFFENSE SPELLS (ON or OFF)
# TURN OFF TO SKIP HARNESS/CAMBRINTH COMPLETELY
     var Use.Cambrinth ON
# USE HARNESS / CAMBRINTH FOR BUFFS (ON or OFF)
     var Use.Cambrinth.Buffs ON
# CAMBRINTH ITEM for charging BUFFS/SPELLS (Set to NULL to not use)
     var Cambrinth cambrinth tailband
     var Cyclic.Cambrinth NULL
# CAMBRINTH MANA AMOUNT FOR SPELLS - Amount of Mana to put in CAMBRINTH for Magic Tattoos / Harness for Cyclics when No Raw Chanelling feat
     var CambrinthMana 5
# CAMBRINTH MANA FOR Cylics - Amount of Mana to put in cambrinth for Cylics ONLY
     var CyclicCharge 5
# SLOW.CAST (ON or OFF) - OFF IS DEFAULT - Slow Cast ON will cast offensive spells about half as often as normal
# SLOW.CAST OFF (Default) will spam spells in between attacks as much as possible (mana permitting)
     var Slow.Cast OFF
# NO CAMBRINTH USE DURING TM / DEBIL SPELLS (ON or OFF)
# IF YOU SET THIS ON, SCRIPT WILL SKIP USING A CAMBRINTH FOR TM OR DEBIL SPELLS
     var NoCambTM OFF
# POWER PERCEIVE (Perceives every ~5 minutes)
     var POWERP ON

# RITUAL FOCUS ITEM (REQUIRED for RITUAL SPELLS - set Ritual to NULL to not use)
# Ritual.Container can be set to any Container - or set to NULL to wear it first
     var Ritual staff
     var Ritual.Container hip pouch
# SORCERY RITUAL FOCUS (Separate ritual focus for Sorcery IF NEEDED)
     var Sorcery.Focus NULL
# TM DAMAGE FOCUS ITEM - IF SET WILL USE TM FOCI MODE EVERY ~HOUR (set to NULL to not use)
     var TMFoci NULL
     var TMFoci.Container %Container
# USE SYMBIOSIS ON ATTACK SPELLS? (ON or OFF)
# ONLY USEFUL AT ~HIGHER RANKS~ OF MAGIC - ~NOT~ FOR NOOBS!!
     var Target.Symbiosis OFF
     var Utility.Symbiosis OFF
     var Augmentation.Symbiosis OFF
     var Warding.Symbiosis OFF
     var Sorcery.Symbiosis OFF
     var Debilitation.Symbiosis OFF
# USE SYMBIOSIS ON BUFFS? (ON or OFF) - FOR HIGHER RANKS ONLY
     var Symbiosis.Buffs OFF

# MAGIC TATTOO (Set to NULL or the FULL SPELLTIMER NAME i.e - IronConstitution / MajorPhysicalProtection) - Will use a Magic Tattoo every ~5-10 minutes
# FULL SPELLTIMER NAME MUST ALSO BE SET IN YOUR BUFFS OR SPELLS - USE SORCERY.CAMB (ABOVE) TO SET CAMB MANA FOR MAGIC TATTOO
     var Magic.Tattoo NULL
# MAGIC TATTOO CAMBRINTH/HARNESS MANA - Set the amount of Camb Mana you want to boost your tattoo with
     var Tattoo.Camb 30
# HEROIC TATTOO (ON or OFF) - ONLY FOR HEROIC TATTOOS! (Normal tattoos use Magic.Tattoo)
# VERY BASIC - WILL JUST INVOKE TATTOO / CAST ON A 1 HOUR COOLDOWN
     var Runic.Tattoo OFF

#########################################################################################
# GUILD SPECIFIC OPTIONS BELOW
# SET THE GUILD OPTIONS FOR THE CURRENT CHARACTER YOU ARE EDITING 
########################################################################################
########################################################################################
# NECROMANCER SETTINGS
# SET NECRO.HEAL ON TO USE NECRO HEALING - (Consume Flesh / Devour depending on skills)
     var Necro.Heal ON
## NECROHEAL CREATURE (SET A ~LOW LEVEL~ CREATURE TO KILL ~ONLY FOR DEDICATED HEALING PURPOSES~)
## IDEALLY SET THIS TO A CREATURE NEAR YOUR "HOME CITY" SO YOU DON'T HAVE FAR TO RUN FOR HEALING
     var NecroHeal.Critter GOBLIN SHARD
# SET NECRORITUAL ON TO PERFORM RITUALS IN COMBAT (Preserve/Harvest/Dissect/Butchery/etc)
     var NecroRitual ON
## FORSAKEN? (ON or OFF) - IS NECRO FORSAKEN?? IF ON - WILL AVOID TOWNS/SERVICES AS MUCH AS POSSIBLE!! 
## *Not fully tested/implemented-may not be perfect- but should avoid towns. May have issues REPAIRING ARMOR Unless USING FC* 
     var Forsaken OFF
## RISEN? (ON or OFF) - CREATES RISEN MINIONS IN COMBAT (CAREFUL - GENERATES DIVINE OUTRAGE!) 
     var Risen OFF
## QUICKEN EARTH - ON TO CHECK FOR AND SUMMON DIRT CONSTRUCTS EVERY ~5 MINUTES
     var QuickenEarth OFF
     var QE.Mana 10
     var CFB.Mana 10
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Necro.Cyclics |USOL|ROC
     var Necro.Cyclics.mana |5|4
## Necromancer ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Necro.Target.Spell ACS|VS
     var Necro.Debilitation.Spell HP
     var Necro.Utility.Spell GAF
     var Necro.Augmentation.Spell Obfuscation
     var Necro.Warding.Spell MAF
     var Necro.Sorcery.Spell MPP
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Necro.Buffs IVM|REI|ROC|CH
########################################################################################
########################################################################################
### BARD SETTINGS
# Cyclic Spell Setup
# YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST be set for each individual cyclics!
# YOU MUST SET cyclic.mana in an array to match!! 6 cyclic - 6 mana numbers
  # SET TO NULL/OFF IF NOT TRAINING CYCLICS - THERE ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Bard.Cyclics |AEWO|HODI|FAE|CARE|PYRE|GJ
     var Bard.Cyclics.mana |5|4|5|5|5|6
## Bard ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Bard.Target.Spell BOS
     var Bard.Debilitation.Spell DMRS
     var Bard.Utility.Spell AOT
     var Bard.Augmentation.Spell WILL
     var Bard.Warding.Spell REPR
     var Bard.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Bard.Buffs |MIS|HARM|RAGE|REPR
## BARD SCREAMS? ( Screams in combat every ~60 seconds) (ON or OFF)
     var Bard.Scream ON
## BARD WHISTLE (ON or OFF)
     var Bard.Whistle ON
########################################################################################
########################################################################################
# WARRIOR MAGE SETTINGS
## USE SUMMONING? (Will train Summoning every ~3 minutes)
     var Summoning ON
## ELEMENTAL ALIGNMENT - Element can be FIRE, WATER, ELECTRIC, AETHER, AIR or EARTH
     var element FIRE
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var WM.Cyclics |EE|AC|FR
     var WM.Cyclics.mana |5|4|5
## Warrior Mage ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var WM.Target.Spell FS|FB
     var WM.Debilitation.Spell EE|ALA
     var WM.Utility.Spell ETF
     var WM.Augmentation.Spell YS
     var WM.Warding.Spell ES
     var WM.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var WM.Buffs Ease|TW|SW|Zephyr|SUF|Ignite
## ~WEAPON SUMMONING LOGIC~
# SUMMON WEAPONS (ON or OFF)
     var SummonWeapons OFF
# SUMMON ELEMENT - Must set your WEAPON SUMMON ELEMENT ( Stone/Earth (Default) - Fiery/Fire (Fiery Infusions) - Icy/Ice (Icy Infusions) - or Electric (Shocking Infusions)
     var SummonElement FIRE
# ELEMENTAL CHARGE SPELL Must be *a spammable spell* of your chosen element. Will prep at minimum mana - if you want to prep at something else put a number after
     var ChargeSpell MOA
# SUMMON WEAPON TEMPLATE (0 or 1) - 0 = Default weapon, 1 = Turn weapon to other template
     var SummonTemplate 1
# SUMMON WEIGHT/DENSITY (0 - 2 to set weapon density - Must know QUICK INFUSIONS spell)
# 0 = Lightest Weight, 1 = DEFAULT, 2 = Heavier Weight
     var SummonWeight 1
# Set weapons you want to summon (ON or OFF) - Setting to ON will override your default weapon variables at top of script
     var SummonHT OFF
     var SummonLT OFF
     var SummonSE OFF
     var SummonLE OFF
     var SummonTHE ON
     var SummonSB OFF
     var SummonLB OFF
     var SummonTHB ON
     var SummonPolearms ON
     var SummonStaves ON
## INGOT (ON or OFF) Bump up tier of weapons - Must know REINFORCED INFUSIONS spell and have a rare metal ingot
     var WMIngot OFF
## SET INGOT STORAGE CONTAINER (Set to either a sigil ring or a specific container)
     var Ingot.Container sigil ring
########################################################################################
########################################################################################
# MOON MAGE SETTINGS
## MOON MAGE ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var MM.Target.Spell DO|Burn
     var MM.Debilitation.Spell Dazzle|MB
     var MM.Utility.Spell PG
     var MM.Augmentation.Spell AUS|ART
     var MM.Warding.Spell PSY
     var MM.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var MM.Cyclics |SHW
     var MM.Cyclics.mana |5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var MM.Buffs CV|Shadows|TS|COL|Shadowling|PSY
## OBSERVATION TRAINING - PREDICT TOOL IS ONLY USED FOR PREDICTION OUTSIDE OF COMBAT! TOOL MUST ALREADY BE BONDED!!
## Predict.tool can be - BONES, CHART, MIRROR, PRISM, BOWL, DECK or NULL to turn off.
     var Predict.Tool DECK
## Read The Ripples (RTR ON or OFF) - Will Perform a RTR routine (observe spam) during town run **MUST HAVE TELESCOPE!
     var RTR OFF
## Where you store your telescope * If any - defaults to your main Container if not set
     var Telescope.Container NULL
## OBSERVE IN COMBAT (ON or OFF) - If ON will do Astrology observations in Combat every couple minutes
     var Combat.Observe ON
########################################################################################
########################################################################################
# CLERIC SETTINGS
## CLERIC ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Cleric.Target.Spell FOU|FF
     var Cleric.Debilitation.Spell PS|Malediction
     var Cleric.Utility.Spell DR|BLESS
     var Cleric.Augmentation.Spell Benediction
     var Cleric.Warding.Spell MPP|SL
     var Cleric.Sorcery.Spell dazzle
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Cleric.Cyclics |HYH|GHS|REV|SA
     var Cleric.Cyclics.mana |15|15|15|15
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Cleric.Buffs OM|Auspice|SOS|POM|MAPP|PFE|YS
## ARE YOU USING OM ORB? (MUST BE SET IN BUFFS ABOVE!) SET MANA AMOUNT TO CAST OM / CHARGE ORB WITH EACH TIME
     var OM.Mana 25
## TYPE OF ORB YOU USE FOR OM - OPTIONS:( FIRULF, MERAUD or KEREN)
     var FavorOrb meraud
## BUFF SPELLS YOU WANT TO ALWAYS KEEP ACTIVE IN YOUR OM ORB (You can just set this to var OM.Buffs %Cleric.Buffs ) 
     var OM.Buffs PFE|POM|MPP|MAPP|SAP|SOL
## CLERIC RITUALS? (Perform CLERIC RITUALS during Town Runs/in Combat)
     var ClericRituals ON
### Prayer Mat - Set to NULL to not use or the noun of the mat/rug
     var PrayerMat mat
## HOLY WATER VESSEL - Set your container you use to store/collect holy water
     var HolyWater chalice
### COMBAT COMMUNES - (ON or OFF) - Set the COMMUNES you wish to perform while IN COMBAT 
     var Commune.Meraud ON
     var Commune.Truffenyi ON
     var Commune.Tamsine OFF
### FLINT KNIFE - Set a DEDICATED WEAPON/KNIFE to STRIKE FLINT for MAKING FIRE for RITUALS
### MUST be a METAL weapon you can use to STRIKE FLINT for fire
     var FlintKnife knife
## CLERIC ALIGNMENT GOD - Set a God to align to ( https://elanthipedia.play.net/Cleric_3.0#Alignment )
## CHOOSE A LIGHT/DARK/NEUTRAL GOD ONLY - Each Type will buff 2 magic skills and penalize 3 others
## BY DEFAULT SCRIPT WILL USE ~CHADATRU~ (Which buffs AUG/WARDING - Generally the most lacking magics for Clerics)
## Set a different god if you wish to buff other magics but BE CAREFUL!!! 
     var Alignment.God CHADATRU
########################################################################################
########################################################################################
# RANGER SETTINGS
## RANGER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Ranger.Target.Spell DEVI|STAMPEDE
     var Ranger.Debilitation.Spell DEADFALL|SWARM
     var Ranger.Utility.Spell EM|BLEND
     var Ranger.Augmentation.Spell SOTT
     var Ranger.Warding.Spell EY
     var Ranger.Sorcery.Spell ECRY
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Ranger.Cyclics |CS|BES
     var Ranger.Cyclics.mana |5|5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Ranger.Buffs Athleticism|STW|EY|WOTP|OATH|ETC|Bloodthorns
########################################################################################
########################################################################################
## PALADIN SETTINGS
## PALADIN ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Paladin.Target.Spell FST
     var Paladin.Debilitation.Spell Shatter
     var Paladin.Utility.Spell AS
     var Paladin.Augmentation.Spell RW
     var Paladin.Warding.Spell SP
     var Paladin.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Paladin.Cyclics |HOW|TR
     var Paladin.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Paladin.Buffs AA|Courage|HES|RW|SR|Clarity
## SET your HOLY WEAPON here (NULL to ignore) - Holy Weapon Name
     var HolyWeapon NULL
## Holy Icon (NULL TO NOT USE/IGNORE) - Set to the noun of your icon
     var HolyIcon NULL
########################################################################################
########################################################################################
## TRADER SETTINGS
## TRADER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Trader.Target.Spell CRD|STARCRASH
     var Trader.Debilitation.Spell FLUORESCE|AVA
     var Trader.Utility.Spell NOUMENA
     var Trader.Augmentation.Spell BLUR
     var Trader.Warding.Spell IR
     var Trader.Sorcery.Spell MPP
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Trader.Cyclics |ARS|SOV
     var Trader.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Trader.Buffs |TRC|Blur|LGV|NONCHALANCE
########################################################################################
########################################################################################
# EMPATH SETTINGS
## EMPATH ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Empath.Target.Spell PARALYSIS
     var Empath.Debilitation.Spell LETHARGY|NB
     var Empath.Utility.Spell GS|HEAL
     var Empath.Augmentation.Spell REFRESH
     var Empath.Warding.Spell IC|POP
     var Empath.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Empath.Cyclics |AD|REGEN
     var Empath.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Empath.Buffs  |AGS|BS|IC|GOL|MEF|TRANQUILITY
## GAURDIAN SPIRIT? (ON or OFF) - ON will keep up Guardian Spirit while in Combat
     var Guardian.Spirit ON
## CUSTOM GUARDIAN SPIRIT (ON or OFF) - If ON - will "cast custom" instead of casting normal
     var Guardian.Custom OFF
## ATTACK CONSTRUCTS ONLY? (ON or OFF) - ON will ONLY attack constructs (unless using Absolution vs unded). OFF will attack everything
## WARNING - SETTING TO OFF WILL CAUSE EMPATHIC SHOCK!!!!
     var Construct.Only ON
## USE MANIPULATE FRIENDSHIP (ON or OFF) - ON will attempt to manipulate non-construct creatures
     var Manipulate ON
## ESCAPE COMBAT WHEN EMPATHY REACHES 0? (ON or OFF) - If Empathy LearningRate reaches 0 during combat, will go on town run
     var Empathy.Escape OFF
## EMPATH PERCEIVE HEALTH WALKS (ON or OFF) - If ON - Will go on perceive health walks around town during town run
     var Empath.Walk ON
## EMPATH UNITY LINK (ON or OFF) - FOR EMPATH HEALBOT MODE - DO YOU KNOW UNITY LINK? MUST BE 70+ CIRCLE AND 380+ EMPATHY
     var Unity ON
## TEACH CLASS (FOR HEALBOT MODE) - SET THE SKILL OF THE CLASS YOU WANT TO TEACH
     var TeachClass TM
## BLACKLIST! (FOR HEALBOT MODE) - SET THE NAMES OF THE PEOPLE TO BLACKLIST FROM HEALING SERVICES!
## MUST BE IN AN ARRAY - var Blacklist Bob|Frank|Dave
     var Blacklist NULL
########################################################################################
########################################################################################
# THIEF SETTINGS
# AMBUSH TRAINING (Use AMBUSH MOVES in COMBAT - STUN/CLOUT/SLASH)
     var Ambush ON
# SELECT KHRI TO USE (Set as many ON / OFF as you want )
# IT WILL ONLY USE AS MANY KHRI AS YOU CAN HANDLE AT ONCE, PRIORITIZING THE MOST IMPORTANT DEPENDING ON SCENARIO)
     var khriSAGACITY ON
     var khriSTEADY ON
     var khriSTRIKE ON
     var khriFOCUS ON
     var khriELUSION ON
     var khriENDURE ON
     var khriAVOIDANCE ON
     var khriADAPTATION ON
     var khriPROWESS ON
     var khriHASTEN ON
     var khriHARRIER OFF
     var khriSERENITY OFF
     var khriSIGHT ON
     var khriFLIGHT ON
     var khriCALM OFF
     var khriGUILE OFF
     var khriDARKEN ON
     var khriDAMPEN ON
     var khriSHADOWSTEP ON
     var khriELIMINATE OFF
     var khriTERRIFY OFF
     var khriFRIGHT OFF
     var khriINTIMIDATE OFF
     var khriPLUNDER ON
     var khriSAFE OFF
     var khriEVANESCENCE OFF
     var khriCREDENCE OFF
     var khriCUNNING OFF
# USE KHRI DURING TOWN RUN? (ON or OFF) - Turn OFF to Skip using Khri during town run - for Sanowret use
     var Khri.Town ON
########################################################################################
########################################################################################
# BARBARIAN SETTINGS
# USE WHIRLWIND?
     var Whirlwind ON
# USE DUAL WIELD? (ON or OFF) - Dual wield requires 450+ in the weapon
     var DualWield ON
# EXPERTISE COMBOS? (ON or OFF) - Does Barb Expertise Combos (and helps generate IR)
     var Expertise ON
# Set which Forms you want to use (ON or OFF)
# Auto-turns some forms on/off depending on what skills you are training
     var barbEagle ON
     var barbBadger ON
     var barbPanther ON
     var barbPiranha ON
     var barbDragon ON
     var barbMonkey ON
     var barbTurtle OFF
     var barbOwl OFF
     var barbBear ON
     var barbBuffalo OFF
     var barbPython ON
     var barbSwan ON
     var barbToad OFF
     var barbWolverine OFF
# ROARS to use (will only use one)
     var roarEmbrace OFF
     var roarEverild ON
     var roarWail OFF
     var roarScreech OFF
     var roarShriek OFF
     var roarAnger ON
     var roarKuniyo ON
# BERSERKS to use
     var zerkHurricane OFF
     var zerkBlizzard ON
     var zerkFamine ON
     var zerkAvalanche ON
     var zerkTsunami OFF
     var zerkWildfire OFF
     var zerkEarthquake OFF
     var zerkTornado OFF
     var zerkFlashflood ON
     var zerkLandslide ON
     var zerkCyclone OFF
     var zerkDrought OFF
# MEDITATIONS to use (ON or OFF) - WILL ONLY WORK FOR HIGHER LEVEL BARBS
     var medContemplation ON
     var medTenacity ON
     var medSerenity ON
### END OF CHARACTER 6 VARIABLES
### STOP EDITING HERE ~~~ END OF CHARACTER 6 VARIABLES ##########
####################################################################################
####################################################################################
echo **** LOADED %CHARACTER6 VARIABLES
goto END.OF.VARS
}

CHARACTER7:
#########################################################################################################
#########################################################################################################
## CHARACTER 7 VARIABLES
## *CHARACTER7 VARIABLES BLOCK BELOW
if matchre("$charactername", "(?i)%CHARACTER7") then
#########################################################################################################
{
### GENIE LAYOUT - SET THE GENIE LAYOUT YOU WANT THIS CHARACTER TO USE - MUST EXACTLY MATCH THE LAYOUT NAME IN GENIE!
### Example: var GENIE.LAYOUT Shroom.layout - TO SAVE A LAYOUT IN GENIE SET IT UP HOW YOU LIKE AND CLICK LAYOUT > SAVE LAYOUT AS > NAME IT HOW YOU WANT
### IF YOU LEAVE THIS SET TO NULL THEN IT WILL JUST USE THE DEFAULT LAYOUT THAT IS SET (default.layout) 
     var GENIE.LAYOUT Hashish.layout
### HEAL.CITY ( NULL or CITY NAME (CROSS/LETH/HIB/RIVER/THEREN/SHARD) - Will run to this town for HEALING no matter where you are
     var HEAL.CITY NULL
### HOME CITY (NULL or CITY NAME) - Will attempt to return to your home city after a heal run (if not already in that city) ONLY SUPPORTS MAINLAND CITIES
     var HOME.CITY NULL
### SAFE ROOM (set to NULL to ignore) ~MUST~ TIE INTO HOME.CITY ABOVE! THE ROOM ID YOU WANT TO SCRIPT IN DURING TOWN RUN - MUST BE VALID ROOMID IN YOUR HOME CITY!
### WARNING!: IF YOU DO NOT SET BOTH HOME.CITY AND SAFE.ROOM CORRECTLY YOU ~WILL~ RUN INTO ERRORS - LEAVE BOTH AT NULL TO LET SCRIPT LOGIC HANDLE IT
     var SAFE.ROOM NULL
### AUTO-PROGRESS? (ON or OFF) - ON WILL CHOOSE YOUR COMBAT CREATURE AUTOMATICALLY BASED ON YOUR RANKS - YOU DO NOT NEED TO SET IT! OVERRIDES COMBAT.CRITTER VARIABLE
     var AUTO.PROGRESS ON
### AUTO-PROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var PROGRESS.TYPE MM
### COMBAT CRITTER - ONLY USED WITH AUTO.PROGRESS OFF - MUST BE A VALID CREATURE NAME! USE FULL NAME OR 1/2/3 TO SPECIFY TIERS ie SNOW GOBLIN 2
     var COMBAT.CRITTER GOBLIN
### ALTERNATE CRITTER - PICK A ALTERNATE CRITTER TO HUNT - IF YOUR MAIN HUNTING GROUND IS FULL!
     var ALTERNATE.CRITTER MUSK HOG
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var PRIORITY.ROOMS NULL
### XP TRACKER RESET ON SCRIPT STARTUP - (ON or OFF) - RESETS EXP TRACKER TRACKING TIME ON INITIAL LAUNCH OF SCRIPT ONLY
     var XP.RESET ON

### GUI OPTIONS ARE RECOMMENDED TO LEAVE OFF COMPLETELY - THESE OPTIONS ONLY HERE BY SPECIAL REQUEST - WILL BE ANNOYING IF YOU TURN IT ON
### CRITTER.GUI (ON or OFF) - OFF by default - CREATES CRITTER GUI WINDOW - MUST MANUALLY CLICK TO CHOOSE YOUR COMBAT CRITTER BASED ON PROVINCE / SKILL / PREFERENCE
     var CRITTER.GUI OFF
### WEAPON.GUI (ON or OFF) - OFF by default - CREATES WEAPON GUI WINDOW - CHOOSE YOUR WEAPONS FOR THAT RUN *IF YOU HAVE AN ARRAY OF WEAPONS SET IN A SINGLE WEAPON VARIABLE
     var WEAPON.GUI OFF

# FRIEND LIST (People you will hunt with) Put your friends names in place of these. Ex. Bob|Fred|George
# Can just put your name in here or make it blank and it will only find empty rooms.
     var FRIENDS %ALLCHARACTERS|%GLOBALFRIENDS

##############################################################
# WEAPON / CONTAINERS / AMMO SETTINGS - BE VERY SPECIFIC! 
##############################################################

# CONTAINERS - MANDATORY! - SET YOUR MAIN ~3-4~ LARGEST CONTAINERS!
# BE SPECIFIC WITH CONTAINER NAMES - USE 2 WORDS WHENEVER POSSIBLE!
     var Container twilight pack
     var Container.Boxes haversack
     var Container.Backup duffel bag
     var Container.Crafting haversack
# SHEATH CONTAINER IS FOR SUPER LONG ITEMS - CAN BE ANY LARGE CONTAINER - NOT NECCESARY TO SET 
     var Container.Sheath baldric
# AMMO CONTAINER FOR STORING AMMO - ARROWS/BOLTS/ROCKS - BACKUP CONTAINER IS "OVERFLOW" FOR EXTRA AMMO
     var Container.Ammo quiver
     var Container.Ammo.Backup cocoon
## CONTAINER.GEMPOUCH - VERY IMPORTANT! - ~MUST BE A SEPARATE CONTAINER~ FROM OTHER BAGS! SMALL/MEDIUM-SIZE CONTAINER IS FINE
## SPECIAL CONTAINER! SCRIPT WILL KEEP THIS CLOSED AT ALL TIMES AND ~ONLY USE IT FOR STORING FULL GEM POUCHES!~
## CONTAINER.GEMPOUCH MUST BE A ~CLOSABLE~ CONTAINER TO STORE ~FULL~ GEM POUCHES IN 
## AGAIN - DO NOT SHARE THIS CONTAINER WITH ~ANY OTHER CONTAINERS~ (except Repair Pouch Container) 
     var Container.GemPouch thigh bag
# Container.EmptyPouch is for storing EMPTY GEM POUCHES (This can be ANY container EXCEPT for Container.GemPouch )
     var Container.EmptyPouch duffel bag
# DIRT CONTAINER - For storing dirt for various use (ONLY used by Thieves/Clerics/Necros)
     var Container.Dirt duffel bag
## MISC SHEATH OPTIONS (Storing specific weapons in specific containers - toolstraps/bandoliers/harnesses etc) - SET TO NULL/OFF TO NOT USE
## SET THE SHEATH NAME UNDER SHEATH.1 - SET THE WEAPONS YOU WANT TO USE ON EACH SHEATH UNDERNEATH IN AN ARRAY ex:
## var Sheath.1 toolbelt
## var Sheath.1.Weapons sabre|axe|broadsword
     var Sheath.1 baldric
     var Sheath.1.Weapons bastard sword|bow
     var Sheath.2 sword belt
     var Sheath.2.Weapons nightstick|katar
     var Sheath.3 hip pouch
     var Sheath.3.Weapons throwing club|throwing hammer|spear|maul|crossbow
     var Sheath.4 NULL
     var Sheath.4.Weapons NULL
     var Sheath.5 NULL
     var Sheath.5.Weapons NULL
     var Sheath.6 NULL
     var Sheath.6.Weapons NULL
     
## WEAR WEAPONS (Set an array of weapons/shields you want the script to try and wear first before stowing)
     var Wear.Weapons NULL

## SMART.WEAPONS - ON TO TRAIN WEAPONS FROM LOWEST SKILL TO HIGHEST. "OFF" WILL GO IN A LINEAR ORDER (DEFAULT: ON)
## ON WILL DYNAMICALLY TRAIN TO ALWAYS MAKE SURE THE LOWEST SKILLED WEAPON IS TRAINED FIRST 
     var SMART.WEAPONS ON
     
## WEAPON SETTINGS - BE VERY SPECIFIC SETTING WEAPONS ! USE TWO WORDS WHENEVER POSSIBLE!
## SET ALL YOUR WEAPONS BELOW - MUST ~EXACTLY MATCH THE ITEM DESCRIPTION WHEN IN HANDS~! (GLANCE at it in your hands to get correct description) 
## BE SPECIFIC WHEN SETTING WEAPONS!! USE 2 WORDS WHEN POSSIBLE! TO TURN A WEAPON SKILL ~OFF~ SET IT TO - NULL
     var SEWEAPON katar
     var LEWEAPON bastard sword
     var THEWEAPON bastard sword
     var SBWEAPON throwing club
     var LBWEAPON throwing hammer
     var THBWEAPON fulginode maul
     var STAVES nightstick
     var POLEARMS spear
     var RANGED.BOW recurve bow
     var RANGED.CROSSBOW dragonwood crossbow
     var RANGED.SLING sling
     var LTWEAPON throwing club
     var HTWEAPON throwing hammer
# MAIN OFFHAND WEAPON TRAINING - MELEE ONLY (MUST BE A LIGHT/MEDIUM WEAPON - HEAVY or 2HANDED WEAPONS WONT WORK!!)
     var OHWEAPON club
# ALTERNATE OFFHAND WEAPONS (For Backtraining/Dual Training weapons while training other Weapons)
# ~MUST~ BE LIGHT/MEDIUM WEIGHT WEAPON! CANNOT USE HEAVY or 2Handed Weapons! (Unless Barb) (SET TO NULL/OFF TO NOT USE)
     var ALTWEAPON1 club
     var ALTWEAPON2 katar
     var ALTWEAPON3 NULL
## BRAWLWEAPON (DEFAULT: $charactername - Set to NULL to skip brawling)
     var BRAWLWEAPON $charactername
     #var BRAWLWEAPON $charactername
## Backstab/Ambush Weapon (Thief Only)
     var BSWEAPON mirror blade

# AMMO SETTINGS - DO NOT REMOVE THE { } BRACKETS!!!
     if (!$AMMOSWAP) then
{
     var XbowAmmo blunt bolt
     var BowAmmo blunt arrow
     var SlingAmmo smooth rock
}

## ARMOR CHECK (ON or OFF) - Turn this OFF if you want the script to SKIP checking your armor at the beginning
## If ON - at the beginning, script will remove any armor/fluff you are wearing, and then put on all the armor you have set below. This ensures you have the correct armor on.
     var ARMOR.CHECK ON
## SET YOUR SHIELD - ABSOLUTELY 100% MANDATORY! RECOMMEND AN ARM-WORN SHIELD
     var MyShield sipar
## ARM WORN SHIELD? (ON OR OFF) - I RECOMMEND ALWAYS USING AN ARM WORN / SMALL SHIELD - MAKES LIFE MUCH EASIER
     var ArmWorn ON
## MAIN ARMOR TO CHECK - PRIMARY COMBAT (Set to NULL to IGNORE a slot)
## YOU MUST SET ALL YOUR ARMOR BELOW - IT DOESN'T MATTER WHICH ARMOR SLOT YOU USE - THE SCRIPT DOESN'T CARE
     var CHEST.ARMOR chain vest
     var FACE.ARMOR NULL
     var HEAD.ARMOR brigandine balaclava
     var ABDOMEN.ARMOR NULL
     var BACK.ARMOR NULL
     var ARM.ARMOR chain vambraces
     var HAND.ARMOR bone gauntlet
     var LEG.ARMOR greaves
     var KNUCKLE knuckles
     var PARRYSTICK parry stick

## PRIORITY WEAPONS - WEAPON SKILLS TO KEEP MOVING ~ALWAYS~ - PRIORITIZE THESE WEAPON SKILLS OVER ALL OTHERS IF THEY ~EVER~ DROP TO 0/34
## MUST BE SET IN AN ARRAY - THE EXACT SAME AS GENIE EXP VARIABLE FORMAT ie: var Priority.Weapons Medium_Edged|Twohanded_Edged
## WARNING!! DO NOT SET PRIORITY WEAPONS UNLESS YOU WANT THOSE SKILL(S) TO TAKE PRIORITY OVER ~ALL~ OTHERS! ~WILL~ CAUSE UNEVEN RANKS OVER TIME!!
## THIS IS MAINLY ONLY USEFUL FOR SHORT PERIODS - FOR POWER LEVELING A SINGLE WEAPON SKILL FOR EXAMPLE - RECOMMEND NULL UNLESS YOU KNOW WHAT YOU ARE DOING
     var Priority.Weapons NULL
     
## TRAIN LOWEST (ON or OFF) - ON WILL ALWAYS TRAIN W/ YOUR LOWEST RANK & LOWEST LEARNINGRATE WEAPON AT EVERY WEAPON SWAP 
## THIS EFFECTIVELY ENSURES THAT ALL YOUR WEAPON SKILLS WILL TRAIN AND STAY AT THE ~EXACT SAME RANKS~ - ESPECIALLY IF USED FROM THE START
## NOTE! TRAINLOWEST ON - WILL ALTER THE DEFAULT WEAPON TRAINING ORDER - BYPASSES THE SET ORDER TO DYNAMICALLY TRAIN WEAPONS 
     var TrainLowest OFF

# MAX LEARNING RATE - FOR EACH WEAPON SKILL (WILL SWITCH WEAPONS ONCE REACHING THIS RATE *MAX 33) *SET TO 35 TO IGNORE LEARNINGRATE 
     var MAX.LEARNINGRATE 12
# LEARNING RATE INCREASE - AFTER FULL WEAPON LOOP *OF ALL WEAPONS* - INCREASE THE MAX.LEARNINGRATE BY THIS MUCH
     var LEARNING.INCREASE 4
# MAX TIME PER WEAPON - SET THE MAXIMUM TIME (IN SECONDS) TO TRAIN EACH WEAPON SKILL - BEFORE SWITCHING WEAPONS
# SETTING THIS TOO HIGH MAY CAUSE SUBOPTIMAL TRAINING - RECOMMEND AROUND ~300-500 (~5-8 minutes per weapon)
     var MAX.TIME 250
# MAXIMUM TOTAL COMBAT TRAINING TIME - SET THE MAX TIME (IN SECONDS) TO STAY IN ~COMBAT~ BEFORE ESCAPING TO TOWN ( 3600 SECONDS = 1 HOUR )
# SET VAR MAX.TRAIN 0 - TO LOOP COMBAT FOREVER ( *UNTIL IT ESCAPES DUE TO BEING TOO HURT / BAGS TOO FULL / BURDEN TOO HIGH )
     var MAX.TRAIN 4500
     
# STANCE PER WEAPON (Set NULL to use default - Or SHIELD/PARRY/EVASION/CUSTOM TO USE THAT PARTICULAR STANCE FOR A PARTICULAR WEAPON)
## NOTE SCRIPT IS ALREADY ADVANCED IN CHANGING STANCES DEPENDING ON WEAPON BEING TRAINED - NULL IS FINE FOR MOST PURPOSES
     var SE.STANCE NULL
     var LE.STANCE NULL
     var THE.STANCE NULL
     var SB.STANCE NULL
     var LB.STANCE NULL
     var THB.STANCE NULL
     var POLEARMS.STANCE NULL
     var STAVES.STANCE NULL
     var BOW.STANCE NULL
     var CROSSBOW.STANCE NULL
     var SLINGS.STANCE NULL
     var LT.STANCE NULL
     var HT.STANCE NULL
     var OH.STANCE NULL
     var BRAWL.STANCE NULL

## BACKTRAIN (ON or OFF) - ON FOR SETTING A SEPARATE BACKTRAIN ROUTINE
     var BACKTRAIN OFF
## BACKTRAIN AUTO PROGRESS (ON or OFF) - Turning this ON will automatically set the creature to hunt, based on your BACKTRAIN WEAPON SKILLS
## TURN THIS ~OFF~ TO SET THE BACKTRAIN CREATURE MANUALLY (BELOW)
     var BACKTRAIN.AUTOPROGRESS ON
### BACKTRAIN AUTOPROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var BACKTRAIN.PROGRESS.TYPE NORMAL
## BACKTRAIN CREATURE - Must specify the creature to hunt if BACKTRAIN.AUTOPROGRESS is OFF
     var BACKTRAIN.CRITTER ICE ARCHON
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var BACKTRAIN.PRIORITY.ROOMS NULL
## BACKTRAIN TIME (in SECONDS - Total time to Backtrain)
     var BACKTRAIN.TIME 1200
## BACKTRAIN MAGIC (ON or OFF) IF OFF - WILL SKIP USING ANY OFFENSIVE SPELLS PERIOD WHILE BACKTRAINING - WILL ONLY DO BUFFS
     var BACKTRAIN.MAGIC OFF
## BACKTRAIN TM/DEBIL SPELLS (ON or OFF) IF OFF - WILL SKIP USING ANY TM / DEBIL SPELL DURING BACKTRANING (UNLESS ITS A TATTOO)
     var BACKTRAIN.TM OFF
## BACKTRAIN WEAPONS - Set every weapon you wish to backtrain (NULL to turn off)
     var BACKTRAIN.SE NULL
     var BACKTRAIN.LE NULL
     var BACKTRAIN.THE NULL
     var BACKTRAIN.SB NULL
     var BACKTRAIN.LB NULL
     var BACKTRAIN.THB NULL
     var BACKTRAIN.STAVES NULL
     var BACKTRAIN.POLEARMS NULL
     var BACKTRAIN.BOW NULL
     var BACKTRAIN.CROSSBOW NULL
     var BACKTRAIN.SLING NULL
     var BACKTRAIN.LT NULL
     var BACKTRAIN.HT NULL
     var BACKTRAIN.BRAWL NULL
     var BACKTRAIN.OH NULL
     var BACKTRAIN.BS NULL
## BACKTRAIN STEALTH (OFF or ON)
     var BACKTRAIN.STEALTH ON
## BACKTRAINING LOOTING OPTIONS (ON or OFF)
     var B.Loot.Gems ON
     var B.Loot.Boxes OFF
     var B.Loot.Metals ON
     var B.Loot.Scrolls ON
     var B.Loot.Collectibles OFF
     var B.Loot.SpiderParts OFF
## BACKTRAIN LOOTING MODE ( treasure / boxes / goods / equipment )
     var B.Loot.Option goods
## BACKTRAIN ARMOR (ARMOR ONLY FOR BACKTRAIN ROUTINE) (Set to NULL to not check a piece)
     var B.CHEST.ARMOR NULL
     var B.FACE.ARMOR NULL
     var B.HEAD.ARMOR NULL
     var B.ABDOMEN.ARMOR NULL
     var B.BACK.ARMOR NULL
     var B.ARM.ARMOR NULL
     var B.HAND.ARMOR NULL
     var B.LEG.ARMOR NULL

##############################################################
### COMBAT GENERAL SETTINGS
##############################################################

## GEM POUCH DESCRIPTION - DR IS TRICKY WITH GEM POUCHES!! BE SPECIFIC - use "<color> pouch" only! 
## **RECOMMEND DUMPING ALL POUCHES AND GET NEW ONES FROM GEM SHOP ON FIRST SETUP**
## WHEN ASKING FOR NEW GEM POUCHES, "ASK NPC FOR <COLOR> POUCH" - ~DO NOT 'ASK FOR GEM POUCH' OR just 'POUCH'~ - JUST 'ASK <NPC> FOR BLACK POUCH'
## Then Set the var to the 'color' pouch you have. ie var gemPouch black pouch
     var gemPouch black pouch
# TIE GEM POUCHES? (ON or OFF) 
# TIE POUCHES FOR MORE STORAGE/LESS INVENTORY SPACE USE - but have to sell the FULL TIED POUCHES AT SPECIAL SHOPS or get TRADER to sell them!
# IF HUNTING IN SHARD OR ROSSMAN - NO WORRY AS SCRIPT SELLS TIED POUCHES IN THOSE GEM SHOPS. IF hunting in XING/ISLANDS will have to get Trader to sell pouches.
     var TiePouch ON
# WORN GEM POUCH? (ON or OFF) (OFF will STOW your gem pouch / ON will wear it )
     var Gempouch.Worn OFF

## RESTOCK AMMO? (ON or OFF) *SCRIPT WILL AUTOMATICALLY CHECK IF YOU RUN OUT OF AMMO AND ATTEMPT TO RESTOCK
     var AmmoStock ON
# Skinning Knife Name (Mandatory if not a worn knife)
     var Skinning.Knife knife
# BELT/WRIST/ANKLE ~WORN~ SKINNING KNIFE? (ON or OFF)
     var BeltKnife ON
#### COMBAT OPTIONS ####
# OFFHAND THROWING - (ON or OFF) SET TO ON IF YOU WANT TO ROTATE RIGHT/LEFT HANDS WHILE THROWING LT/HT
     var OffhandThrow ON
# THROWING TYPE (LOB, THROW or HURL) *LOB will NEVER stick / less damage - HURL ALWAYS STICKS/ max damage. THROW is inbetween
## IF YOU USE A SHARP THROWING WEAPON (LIKE SPEAR) ALWAYS USE LOB! THROW WILL STICK WITH A POINTY WEAPON!
## LOB IS THE SAFEST - LOB NEVER STICKS! - THROW IS SAFE ~IF USING A BLUNT THROWN WEAPON~ - HURL ALWAYS STICKS - AVOID HURL 
     var ThrowType throw
# BONDED THROWING WEAPONS? (ON or OFF) - Will use INVOKE to retrieve thrown weapon
     var Bonded OFF
# ROAMING (ON or OFF) - Will ROAM around to different critter rooms if it doesn't find a creature during bored routine
     var Roaming ON
# USE WEAK ATTACKS (ON or OFF) - Will use WEAK attacks for melee training (good for backtraining or preserving fatigue/balance)
     var WeakAttack OFF
# AIM ACTIONS (Set an array of actions) - ACTIONS TO PERFORM WHILE WAITING FOR FULL AIM (WITH RANGED/SPELLS) Separate with |
     var AimActions bob|attack|attack left
# TRAIN STEALTH? TRAIN STEALTH DURING MELEE / THROWN / BRAWLING ROUTINES
     var TrainStealth ON
## LOOT MONSTERS? (ON or OFF) - LOOT MONSTERS?
## OFF WILL SKIP LOOTING ALL MONSTERS ~PERIOD~ AND LET THEM ROT
     var Loot.Monsters ON
## LOOT OPTION TO USE - TREASURE / BOXES / EQUIPMENT/ GOODS or ALL
     var Loot.Option GOODS
## LOOTING OPTIONS (ON or OFF) - LOOT OPTIONS FOR MAIN COMBAT
     var Loot.Gems ON
     var Loot.Boxes ON
     var Loot.Metals ON
     var Loot.Scrolls ON
     var Loot.Collectibles OFF
     var Loot.SpiderParts OFF
# MAX BOXES (Set a number) - MAX number of BOXES to pick up before turning Box looting off for that run
     var Max.Boxes 25
# DISSECT (ON or OFF) - DISSECT mobs for First Aid training in Combat (Alternates with SKINNING depending on Learning Rates)
     var Dissect ON
# SKINNING OPTIONS (ON or OFF)
# SKIN ON but BUNDLE OFF will skin but DROP all skins. SKIN collecting only supported with bundles ON!
     var Skin ON
     var Bundle ON
# TIE BUNDLES (ON or OFF) (Turns on automatically when F2P is ON) - LOWER ITEM COUNT BY TYING UP YOUR BUNDLES
     var TieBundle ON
# BUNDLE LOCATION (SET to NULL to use ANY open location or set a preferred location (shoulder / waist / back / belt / around shoulder / over shoulder)
     var BundleLocation NULL
# ArrangeTarget (SET TO SKIN, BONE or PART - or NULL to skip arrange)
## Set ArrangeTarget to SKIN/BONE/PART to Arrange one time
## Set ArrangeALL to ON to arrange max times
     var ArrangeTarget SKIN
     var ArrangeAll OFF
## ArrangeAlways (ON or OFF) - Set ON to ALWAYS arrange regardless of skinning learningrate. OFF will SKIP ARRANGING when Skinning learning is locked
     var ArrangeAlways OFF
# MAX BUNDLE SIZE - Max amount of skins to keep in bundle before creating a new bundle (DEFAULT: 30  MAX: 200)
     var MaxBundle 40
# Set SNIPE to ON to use SNIPE (THIEF/RANGER/NECRO ONLY)
     var Snipe ON
# Set POACH to ON to use POACH instead of SNIPE (SNIPE overrides this setting if SNIPE is ON - TURN SNIPE OFF TO USE THIS)
     var Poach OFF
# RANGED AIM PAUSE. Set to 0 for a Full Aim. Set number of seconds to pause that many seconds before firing
     var SNAP.FIRE 6
# RETREAT WHILE USING RANGED WEAPONS/BUFFING? (ON or OFF) - Will RETREAT to stay at ranged when using ranged weapons
     var Retreat OFF
## DANCE / COUNT Critters - Set min number of critters to "dance" with before you start killing. 
## Leave Dance.Count 0 to kill EVERYTHING. Set 1 to dance with 1 creature until a 2nd comes in, etc. If set to 1 will ALWAYS leave 1 creature in your room.
     var Dance.Count 0
## TACTICS TRAINING (ON OR OFF) - Train TACTICS in Combat
     var Tactics ON
# APPRAISE CREATURES - (ON or OFF) to APPRAISE ALL CREATURES
     var APPRAISE ON
# HUNT OPTION (HUNT every ~75 seconds unless perception locked)
     var HUNT ON
## APPRAISE ITEMS WHEN NO CRITTERS IN ROOM? (ON or OFF)
     var APP.ITEMS OFF
## ITEMS TO APPRAISE (Set to NULL to not use) SET YOUR WORN ITEMS TO QUICK APPRAISE 
     var app1 NULL
     var app2 NULL
     var app3 NULL
## SANOWRET CRYSTAL? (ON or OFF) - ON will exhale crystal every ~100 seconds *IF CONCENTRATION ALLOWS
     var Crystal OFF
## USE SANORWRET CRYSTALS IN COMBAT? (ON or OFF) - ON will use Sanowrets in combat (Turning ON WILL effect concentration and hinder spell casting - not recommended for most)
     var SanowretCombat OFF
## ZILLS? (ON or OFF) - FOR WORN INSTRUMENTS - ON will play Zills during certain times (Repairing armor, collecting, etc)
     var Zills ON
## Zill name ( zills / cowbell / etc )
     var Zill.Name zills
# F2P CHARACTER (ON or OFF) - If set to ON - Script will escape combat and go to town run when you get an inventory count warning
     var F2P OFF
# BIOMECHANICAL TARANTULA? (ON or OFF) - IF ON - Will pick a (semi-)random near locked skill to drain every 10 minutes while in combat
     var Tarantula OFF
     var Tarantula.Name tarantula
## TARANTULA SKILLS TO CHECK - SET AN ARRAY OF SKILLS TO CHECK AGAINST FOR TARANTULA DRAIN
## MUST EXACTLY MATCH THE GENIE VARIABLE NAMES! THESE ARE THE SKILLS TARANTULA WILL CHECK FOR EACH SCHOOL
     var Magic.skills Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Arcana
     var Armor.skills Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor
     var Survival.skills Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing
     var Weapons.skills Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow
     var Lore.skills Appraisal|Tactics|Performance
# WARHORN? (ON or OFF) - For Barbarians and Bards only.
     var WarHorn OFF
## WAND SUPPORT (NULL to NOT use) (MEF wand / WoW wand / WoTP wand etc.) Set up to 2 sets of wands to use! Must use actual verb of wand!
## CAN SET AN ARRAY OF WANDS FOR EACH VAR ex- var Wand1 bloodwood branch|oaken staff|crystal
     var Wand1 NULL
     var Wand2 NULL
## WAND CONTAINERS *Must use 2 different containers to store Wands if using 2 identical named wands)
     var Wand1.Container belt
     var Wand2.Container cloak
## Wand Weapon - (NULL or WEAPON NAME) SET A MELEE WEAPON TO BUFF WHEN USING WANDS WITH A WEAPON BUFF
     var WandWeapon NULL
## EGG SUPPORT (ON or OFF)*Uses the HE Gift Egg in Combat every ~15 minutes to invoke more mobs
     var EGG OFF
## ASTROLABE (ON or OFF) - Uses an Astrolabe every 30 mins if ON (Will rotate if you use 2)
     var ASTROLABE OFF
## Set the name of the astrolabes - (2 words ONLY i.e - ornate astrolabe, twisted astrolabe)
     var ASTROLABE1 NULL
     var ASTROLABE2 NULL
     var Astro1.Container NULL
     var Astro2.Container NULL
## ORB RUB IN COMBAT (var Orb.Rub ON or OFF) - TURN ON TO RUB FAVOR ORB IN COMBAT EVERY ~40 MINUTES
## *NOTE THAT SCRIPT AUTOMATICALLY RUBS ORB ~ONE TIME~ EVERY FULL LOOP OF SCRIPT REGARDLESS OF THIS VARIABLE
     var Orb.Rub OFF
####################################################################################################
# ARMOR SWAP - (ON or OFF) - SPECIAL ARMOR SWAPPING ROUTINE FOR HELMS ONLY
# WILL SWAP OUT A SINGLE PIECE OF PLATE/BRIG/CHAIN/LIGHT HELM EVERY ~5 MINUTES IN COMBAT
     var Armor.Swap OFF
# IF Armor.Swap is ON - THEN ALL THE ARMORS BELOW MUST BE SET CORRECTLY!
# SET EVERY PIECE OF ARMOR TO SWAP BELOW, MUST SET AN ARMOR PIECE FOR ALL FOUR TYPES - TWO WORDS ONLY!
# ONE PIECE SHOULD MATCH YOUR MAIN ARMOR HELM
     var Light_Armor.Helm steelsilk balaclava
     var Chain_Armor.Helm chain balaclava
     var Brigandine.Helm brigandine balaclava
     var Plate_Armor.Helm NULL
####################################################################################################
# HEAVY ARMOR REMOVAL - (ON or OFF) - ON will take off plate/brig/chain armor before backstab/stealth routines
# Generally only needed for noobs with less then ~200 ranks in armors
     var Armor.Noob OFF
# Set Plate/Brig/Chain pieces here (USE EXACT SYNTAX) (If no armor to remove set to NULL)
     var PLATE1 gauntlet
     var PLATE2 greaves
     var PLATE3 NULL
     var PLATE4 NULL
# Set Light Armor Pieces to Swap in place of the Heavy armor pieces above - if any (set to NULL to not use)
     var LIGHTARMOR1 rugged gloves
     var LIGHTARMOR2 rugged greaves
     var LIGHTARMOR3 NULL
     var LIGHTARMOR4 NULL
####################################################################################################

##############################################################
# TOWN RUN / SPECIAL MODULES - SETTINGS FOR TOWN 
# AUTO HEALER / SELL GEMS/SKINS, BANK, OPTIONAL MODULES
##############################################################

# RETURN TO COMBAT MODULE (ON or OFF) - RESTARTS SCRIPT AND RETURNS TO COMBAT WHEN TOWN RUN IS FINISHED
# IF OFF - SCRIPT WILL ~ABORT~ ONCE TOWN RUN IS COMPLETE - LEAVE THIS ON FOR INFINITE AFK SCRIPTING
     var RETURN.TO.COMBAT ON
# AUTOHEAL (ON or OFF) - ON - LET SCRIPT HANDLE AUTO-HEALING AFTER COMBAT (DEPENDING ON YOUR GUILD/SETTINGS) 
# LEAVE THIS ON UNLESS YOU WANT TO HANDLE HEALING YOURSELF MANUALLY! (OR WITH ANOTHER SCRIPT) 
# TURNING THIS OFF WILL ~ABORT SCRIPT AFTER ESCAPING FROM COMBAT~! AND WILL PARSE: HELP ESCAPE PLZ!
     var AUTOHEAL ON
# HEAL ALL (ON or OFF ) - HEAL.ALL ON = FULLY HEAL IF YOU HAVE ~ANY~ WOUNDS AT ALL (even minor scars) 
# HEAL.ALL OFF = WILL SKIP HEALING IF INSIGNIFICANT WOUNDS (minor scratches etc)
     var HEAL.ALL ON
# SELL SKINS (ON or OFF) - VISIT FURRIER - SELL SKINS/BUNDLES 
     var SELLSKINS ON
# SELL GEMS (ON or OFF) - VISIT GEM SHOP - SELL ALL GEMS/POUCHES
     var SELLGEMS ON
# SELL METALS (ON or OFF) - VISIT GEM SHOP - SELL ALL LOOSE METALS/NUGGETS/BARS (except those in your Crafting Container) 
     var SELLMETALS ON
# BUY HERBS? (ON or OFF) - VISIT HERB SHOP - AUTO RESTOCK ON HEALING HERB SUPPLIES (IF in city with Herbalist)
     var HERBS ON
# USE HERBS IN COMBAT? (ON or OFF) - If ON - Script will eat herbs during combat every ~5 minutes if needed
     var HERBS.COMBAT ON
## Container.Herb - SET CONTAINER TO STORE YOUR HERBS IN (Can be a stackable herb container)
     var Container.Herb %Container
# BANK RUN (ON or OFF) - VISIT BANKS - DEPOSIT MONEY AFTER TOWN RUN 
     var BANKRUN ON
# INVENTORY CHECK (ON or OFF) - TURNS ON INVENTORY CHECKS FOR DUMPING ANY COMMON TRASH ITEMS IN INVENTORY (OR EXCESS GEM POUCHES / BUNDLING ROPE )
     var INVCHECK ON
# TRASH DUMP (ON or OFF) - IF ON WILL DUMP ANY ITEM IN YOUR TRASH VARIABLE (GLOBAL VARIABLE AT VERY TOP OF VARIABLE FILE)
     var TRASH.DUMP ON
# POUCH DUMP (ON of OFF) - IF ON - DUMPS ANY GEM POUCHES IN YOUR INVENTORY THAT ~DO NOT MATCH~ THE COLOR/DESCRIPTION OF YOUR PRIMARY GEMPOUCH ( var gemPouch )
# WILL ALSO DUMP YOUR NORMAL GEM POUCHES IF YOU HAVE MORE THAN 10 OF THEM until you only have 10 MAX (Prevent buildup of ~50 rogue pouches) 
     var POUCH.DUMP ON

## SHARD CITIZEN (ON or OFF) - Must be a citizen of shard
     var Shard.Citizen ON
# GET FAVORS? (ON or OFF) - (ONLY WORKS IN CROSSING / SHARD / HAVEN )
     var GET.FAVORS ON
     var FAVOR.GOD hodierna
# REPAIR ARMOR? (ON or OFF) - REPAIR ALL ARMOR / WEAPONS DURING TOWN RUN (MUST HAVE MONEY IN LOCAL BANK)
     var REPAIR.ARMOR ON
## USE MAGIC REPAIR KITS? (SET NULL/OFF TO NOT USE)
## REPAIR.KIT and REPAIT.KIT.2 ARE FOR FULL REPAIR KITS THAT REPAIR ALL ARMOR ~AND~ WEAPONS
## REPAIR.KIT.WEAPON and REPAIR.KIT.ARMOR ARE ONLY FOR KITS THAT ONLY REPAIR ARMOR OR WEAPONS!
## YOU MUST SET THE CONTAINER THAT EACH SPECIFIC KIT IS FOUND IN! IT TREATS THIS CONTAINER LIKE GEMPOUCH.CONTAINER AND KEEPS CLOSED! *CAN BE SHARED WITH GEMPOUCH.CONTAINER!
     var REPAIR.KIT NULL
     var REPAIR.KIT.2 NULL
     var REPAIR.KIT.WEAPON NULL
     var REPAIR.KIT.ARMOR NULL
     var REPAIR.KIT.CONTAINER NULL
     var REPAIR.KIT.2.CONTAINER NULL
     var REPAIR.KIT.3.CONTAINER NULL
# CLIMBING/SWIMMING RUN (ON or OFF) - ATHLETICS TRAINING 
     var CLIMBING ON
## MAGIC CLIMBING ROPE (ON or OFF) - CHECK FOR MAGIC CLIMBING ROPE - USES THAT INSTEAD OF DEFAULT CLIMBING RUN
     var MAGIC.ROPE OFF
     var ROPE.NAME climbing rope
     var Rope.Container NULL
## WINDBOARD (ON or OFF) - TRAIN ATHLETICS WITH A WINDBOARD INSTEAD
     var WINDBOARD OFF
# COLLECTING - (ON or OFF) - OUTDOORSMANSHIP TRAINING - COLLECT ROCKS/COINS
     var COLLECTING ON
# BRAIDING - (ON or OFF) - TRAINS BRAIDING (ENGINEERING) - ONLY TRAINS TO ~70 RANKS!
     var BRAIDING ON
# RAVEN'S COURT SCHOLARSHIP STUDY (ON or OFF) - ONLY IN CROSSING !
     var RAVEN ON
# TEXTBOOK / COMPENDIUM? (ON or OFF) - TRAIN SCHOLARSHIP/FIRST AID W/ ANATOMY TEXTBOOK
     var TEXTBOOK ON
# TEXTBOOK TYPE - Textbook or Compendium
     var TEXTBOOK.TYPE textbook
     var Textbook.Container haversack
# SKINNING/FA TRAINER - (ON or OFF) ONLY WORKS FOR THE MAGIC SKINNING / FA TRAINERS
## The ones with 105 uses per day or infinite ( https://elanthipedia.play.net/Item:Small_blue-belly_crocodile_with_prominently_stitched_seams )
     var SKINTRAINER OFF
     var SKINTRAIN.NOUN crocodile
     var SKINTRAIN.CONTAINER goldenweave belt
# EPISTEMIC JOURNAL - For Epistemic Journals ONLY - Writes to Journal every 24 hours
# Set JOURNAL.TYPE ( NULL to NOT USE ) - Set NOUN of item to use ( traveler's diary / explorer's log / soldier journal / etc)
     var JOURNAL.TYPE NULL
# DISARM BOXES? (USES DISARM SCRIPT - MAKE SURE YOU SET THE VARIABLES UP IN disarm-vars)
     var DISARM ON
# BURGLE RUN (ON or OFF) - BURGLE RUN USING THE BURGLE SCRIPT (BURGLE.PAWN ON will Pawn all Burgle items)
     var BURGLE ON
     var BURGLE.PAWN ON
# BURGLE DUMP (ON or OFF) - Burgle Dump ON will DUMP/TRASH any Burgle item that does not sell at pawn shop
     var BURGLE.DUMP ON
# STEALING RUN (ON or OFF) - Does STEALING Run with the Ultimate Stealing Script
     var STEAL OFF
# PERFORMANCE RUN (ON or OFF) - DEDICATED PERFORMANCE TRAINING RUN DURING TOWN RUN (Uses your Zill.Name variable to train)
     var PERFORMANCE ON
# MAGICAL RESEARCH TRAINING (ON or OFF) - DEDICATED MAGICAL RESEARCH TRAINING DURING END OF TOWN RUN - TAKES A BIT OF TIME! 
     var MAGICAL.RESEARCH ON
# PRIMARY MAGICAL RESEARCH TYPE ( SET TO NULL TO CHOOSE AUTOMATICALLY BASED ON LEARNING )
# OPTIONS ARE: FUNDAMENTAL, STREAM, AUGMENTATION, UTILITY, WARDING, SORCERY, FIELD, SPELL
     var RESEARCH.TYPE NULL
# TEACHING? (ON or OFF) - If ON, will attempt to teach your other characters/people in the Friends variable
     var TEACH OFF
     var TEACH.SKILL hiding
     var TEACH.SKILL.2 evasion
## SUPPORT FOR MASTERCRAFT TRAINING
## IF YOU USE MASTERCRAFT - SET EACH SKILL ON THAT YOU WANT TO TRAIN
## *YOU MUST SET UP MASTERCRAFT - TOOLS ETC SEPARATELY
     var ALCHEMY OFF
     var ENGINEERING OFF
     var FORGING OFF
     var OUTFITTING OFF
     var ENCHANTING OFF
## VAULT SWAP (ON or OFF) - ON WILL TEMPORARILY SWAP YOUR 'var CONTAINER' FOR A SPECIAL BAG IN YOUR VAULT FOR MASTERCRAFT PURPOSES ONLY!
## AFTER MASTERCRAFT IS OVER, GOES BACK TO VAULT AND SWAPS BACK TO ORIGINAL BAG - PUTS YOUR CRAFTING BAG BACK IN THE VAULT!
## MAKE SURE YOU HAVE ENOUGH ROOM IN YOUR VAULT! THE SWAP CONTAINER SHOULD FIT ON THE SAME BODY SLOT AS THE BAG YOU ARE SWAPPING OUT!
     var VAULT.SWAP OFF
## VAULT CITY - SET THIS TO THE CITY NAME WHERE YOU HAVE YOUR VAULT - IF VAULT.SWAP IS ~ON~ IT WILL RUN TO THIS CITY FIRST
     var VAULT.CITY FC
## SET THE NAME OF YOUR CRAFTING BAG IN YOUR VAULT - MUST HAVE ~ALL YOUR CRAFTING TOOLS~ IN THIS BAG!!
## MAKE SURE TO BE SPECIFIC WITH YOUR CONTAINER VARIABLES SO THEY DONT GET MIXED UP! THIS CONTAINER SHOULD USE THE SAME BODY SLOT AS YOUR VAR CONTAINER!
     var CRAFTING.BAG dreamweave lootsack

# ALMANAC (ON or OFF) - USE ALMANACS (That trains random skill OR pick-a-skill every 10 minutes)
     var ALMANAC OFF
## ALMANAC VERB - if using the special encyclopedic almanac, MUST be set to 'encyclopedic almanac' to use the pick a skill function
     var ALMANAC.TYPE almanac
     var Almanac.Container goldenweave belt
## ALMANAC SKILLS to check/pick for encyclopedic almanac i.e. Sorcery|Forging|Engineering
## The default list has ALL skills listed - You can remove skills you don't want to boost
     var ALMANAC.LEARN Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor|Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing|Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow|Appraisal|Tactics|Performance|Enchanting|Forging|Engineering|Alchemy|Outfitting|Arcana
# LOCKPICK TRAINING ITEM? (Set to NULL to not use) - Must match EXACTLY with item name in hands (2 words only)
# For MAGIC LOCKPICK TRAINING ITEMS - * Assumes you use a WORN lockpick ring/case 
     var LOCKPICK.ITEM NULL
## SET A SECONDARY LOCKPICK ITEM HERE IF YOU HAVE A SECONDARY (OR SET TO NULL)
     var LOCKPICK.ITEM.2 NULL
## Lockpick.Container is where the MAGIC LOCKPICK ITEMS should be stored (NULL to try wear them)
     var Lockpick.Container NULL
# PILGRIM BADGES (ON or OFF) *CLERIC/PALADINS ONLY! - VISIT UNVISITED BADGE LOCATIONS - PRAY TO BADGE
     var PILGRIM ON
# POWERWALKING (ON or OFF) - FOR MAGIC USERS - DO A POWERWALK DURING TOWN RUN 
     var POWERWALK ON
## SCRIPT CHECK LOGIC - TURN SCRIPT CHECK LOGIC (ON OR OFF) - WARNING - THERE ~WILL~ BE FALSE POSITIVES!! UNAVOIDABLE!!
## IF IT DETECTS ANY GM SCRIPT CHECKS - WILL ~ATTEMPT~ TO AUTOMATICALLY HANDLE IT AND/OR RUN AWAY (Not Log Out)
     var SCRIPTCHECK OFF
## Setting NO.CONTACT to "ON" will log out for 5 minutes if someone tries to drag you or hold your hand (DEFAULT: OFF)
## WARNING! IT WILL ALSO ESCAPE COMBAT IF ANYONE TALKS IN YOUR COMBAT ROOM! INCLUDING CRITTERS! SO IT CAN FALSE POSITIVE ON TALKING CRITTERS
     var NO.CONTACT OFF
## LOG.ON.STUN (ON or OFF) Set to "ON" to log out if you are too hurt/stunned and are unsuccessful running away (DEFAULT: ON)
     var LOG.ON.STUN ON
## LOG.ON.DEATH (ON or OFF) Set OFF to stay logged in even if you die (DEFAULT: ON)
     var LOG.ON.DEATH ON
## TOTAL TIME ONLINE - MAX TIME TO STAY ONLINE (IN SECONDS) After this time has passed will idle and logout to avoid AFK checks (Set to 0 to always stay online)
     var ONLINE.TIME 0
## FANG COVE? (ON or OFF) - Do you want to go to FANG COVE for healing/town stuff (Only works in Prime if Premium)
     var FANGCOVE ON
## USE PREMIUM JUMP JEWELRY? (ON or OFF) - Will use Premie JJ to teleport to Fang Cove for healing/bundles/gems/etc
     var JumpJewelry OFF
     var JewerlyVerb ironwood ring
## PERSONAL EMPATH HEAL (Put EMPATH'S NAME HERE to use. NULL to turn off) - If you use a personal empath to heal
## Setting this to anything OTHER than NULL/OFF will turn OFF the triggers to nod to someone when they ask if you want healing
     var PocketEmpath NULL
## EmpathRoom is ROOM NUMBER where you can find your PERSONAL EMPATH. (MUST be in the CITY you go to for TOWN RUN)
     var EmpathRoom NULL
## BankBot - Used for F2P characters to tip a bankbot any remaining coin at end of town run
## Set Tipping to 1, Bankbot name and Tiproom = room number bankbot is at, in your home town
     var Tipping 0
     var BankBot morph
     var TipRoom 753
## CLAN ITEM (TF USE ONLY)
     var CLAN OFF
     var CLAN.ITEM sphere
## LIGHTER ITEM (For using a Lighter to start fires instead of flint and blade)
## USAGE - var LIGHTER (ON or OFF) - Lighter.Name = verb of the item
     var Lighter OFF
     var Lighter.Name world dragon
## CUSTOM TOWN SCRIPT - (Must be the exact name of the script (IGNORE .CMD - JUST USE NAME)
## Set your own script to run during the town run
## YOU MUST HAVE A PARSE AT THE END OF YOUR SCRIPT: put #parse SCRIPT FINISHED!
## IF YOU DO NOT HAVE THIS PARSE THEN UBER WILL NOT RECOVER PROPERLY!
     var Custom.Script ubercharswap
## RPA BESTOW? (ON or OFF) - MUST BE IN THE PIRP SYSTEM TO BESTOW RPAS! https://elanthipedia.play.net/RPA_command
     var RPA ON
## LIST THE PEOPLE YOU WANT TO BESTOW RP POINTS TO BELOW IN AN ARRAY!!
## ie. var PirpList Name1|Name2|Name3|Name4|Name5
     var PirpList Raidboss|Healbitch|Illuminati|Breckin|Ryhs|Rhoat|Shepherd|Kohen|Worril|Odium|Morvetan|Orcher|Amroth|Mephos|Yew|Lorak|Wryll|Rellie|Beerfest|Bayndayd|Xana|Crivic|Blaakwulf|Wong|Findal|Regnar|Lakshmi|Vivica|Phucker|Jimdickens|Kiroq|Bleed|Rutinger|Nekhet|Leecya|Arazenya|Kithkani


######################################################################################################################
######################################################################################################################
# GENERAL MAGIC VARS - ALL MAGIC USERS MUST SET THESE VARIABLES
# GENERIC MAGIC VARIABLES FOR ALL MAGIC USERS
######################################################################################################################
######################################################################################################################
# SMART MANA FOR SPELLS? AUTO-DETERMINES OPTIMAL MANA FOR SPELLS AFTER A NEW SETUP (OR EVERY ~2 WEEKS IN GAME)
# SMART MANA WILL AUTOMATICALLY ADJUST YOUR MANA LEVELS UP AND DOWN AS YOU GAIN IN RANKS FOR OPTIMAL LEARNING
# (ON or OFF) - RECOMMEND LEAVING ON - SETTING THIS ON WILL OVERRIDE ALL MANUAL MANA SETTINGS 
# TURNING SMART.SPELLS OFF MEANS YOU WILL ~HAVE~ TO SET MANA MANALLY AND DO MUCH MORE FINE TUNING 
     var SMART.SPELLS ON
# CAMB HEAVY (ON or OFF) (OFF by default) - ON WILL MAKE SMART MANA PUT MORE MANA INTO CAMBRINTH THEN MAIN PREP
     var Camb.Heavy OFF
# MAGIC RATE - (NULL is RECOMMENDED) Set the MIN Magic Rate to reach before switching to a different spell school. 
# SETTING TO A NUMBER WILL SPAM THE SAME SPELL UNTIL YOU REACH DESIRED LEARNINGRATE. Set to NULL to cycle through spells normally 
     var Magic.Rate NULL
# MAGIC SNAP CAST. Set to 0 for Full Aim. Set to desired number of seconds to pause for that many seconds before casting
     var MAGIC.SNAP 0
# CAMBRINTH CHARGES - Number of Times to Charge your cambrinth (or harness if Cambrinth is NULL) each time!
# RECOMMEND LEAVING THIS AT 1 - 2 AT MAX - THIS VARIABLE TIES INTO HOW SMART MANA CALCULATES MANA
     var CambrinthCharge 1
# OFFENSIVE SPELL MANA AMOUNTS - Set BASE MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Mana 15
     var Debilitation.Mana 15
     var Utility.Mana 15
     var Augmentation.Mana 15
     var Warding.Mana 15
     var Sorcery.Mana 15
# OFFENSIVE SPELL CAMBRINTH AMOUNTS - Set CAMBRINTH MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Camb 20
     var Debilitation.Camb 20
     var Utility.Camb 20
     var Augmentation.Camb 20
     var Warding.Camb 20
     var Sorcery.Camb 20
# USE HARNESS / CAMBRINTH FOR OFFENSE SPELLS (ON or OFF)
# TURN OFF TO SKIP HARNESS/CAMBRINTH COMPLETELY
     var Use.Cambrinth ON
# USE HARNESS / CAMBRINTH FOR BUFFS (ON or OFF)
     var Use.Cambrinth.Buffs ON
# CAMBRINTH ITEM for charging BUFFS/SPELLS (Set to NULL to not use)
     var Cambrinth armband
     var Cyclic.Cambrinth NULL
# CAMBRINTH MANA AMOUNT FOR SPELLS - Amount of Mana to put in CAMBRINTH for Magic Tattoos / Harness for Cyclics when No Raw Chanelling feat
     var CambrinthMana 5
# CAMBRINTH MANA FOR Cylics - Amount of Mana to put in cambrinth for Cylics ONLY
     var CyclicCharge 10
# SLOW.CAST (ON or OFF) - OFF IS DEFAULT - Slow Cast ON will cast offensive spells about half as often as normal
# SLOW.CAST OFF (Default) will spam spells in between attacks as much as possible (mana permitting)
     var Slow.Cast OFF
# NO CAMBRINTH USE DURING TM / DEBIL SPELLS (ON or OFF)
# IF YOU SET THIS ON, SCRIPT WILL SKIP USING A CAMBRINTH FOR TM OR DEBIL SPELLS
     var NoCambTM OFF
# POWER PERCEIVE (Perceives every ~5 minutes)
     var POWERP ON

# RITUAL FOCUS ITEM (REQUIRED for RITUAL SPELLS - set Ritual to NULL to not use)
# Ritual.Container can be set to any Container - or set to NULL to wear it first
     var Ritual bloodworm comet
     var Ritual.Container haversack
# SORCERY RITUAL FOCUS (Separate ritual focus for Sorcery IF NEEDED)
     var Sorcery.Focus NULL
# TM DAMAGE FOCUS ITEM - IF SET WILL USE TM FOCI MODE EVERY ~HOUR (set to NULL to not use)
     var TMFoci NULL
     var TMFoci.Container %Container
# USE SYMBIOSIS ON ATTACK SPELLS? (ON or OFF)
# ONLY USEFUL AT ~HIGHER RANKS~ OF MAGIC - ~NOT~ FOR NOOBS!!
     var Target.Symbiosis OFF
     var Utility.Symbiosis OFF
     var Augmentation.Symbiosis OFF
     var Warding.Symbiosis OFF
     var Sorcery.Symbiosis OFF
     var Debilitation.Symbiosis OFF
# USE SYMBIOSIS ON BUFFS? (ON or OFF) - FOR HIGHER RANKS ONLY
     var Symbiosis.Buffs OFF

# MAGIC TATTOO (Set to NULL or the FULL SPELLTIMER NAME i.e - IronConstitution / MajorPhysicalProtection) - Will use a Magic Tattoo every ~5-10 minutes
# FULL SPELLTIMER NAME MUST ALSO BE SET IN YOUR BUFFS OR SPELLS - USE SORCERY.CAMB (ABOVE) TO SET CAMB MANA FOR MAGIC TATTOO
     var Magic.Tattoo Bless
# MAGIC TATTOO CAMBRINTH/HARNESS MANA - Set the amount of Camb Mana you want to boost your tattoo with
     var Tattoo.Camb 30
# HEROIC TATTOO (ON or OFF) - ONLY FOR HEROIC TATTOOS! (Normal tattoos use Magic.Tattoo)
# VERY BASIC - WILL JUST INVOKE TATTOO / CAST ON A 1 HOUR COOLDOWN
     var Runic.Tattoo OFF

#########################################################################################
# GUILD SPECIFIC OPTIONS BELOW
# SET THE GUILD OPTIONS FOR THE CURRENT CHARACTER YOU ARE EDITING 
########################################################################################
########################################################################################
# NECROMANCER SETTINGS
# SET NECRO.HEAL ON TO USE NECRO HEALING - (Consume Flesh / Devour depending on skills)
     var Necro.Heal ON
## NECROHEAL CREATURE (SET A ~LOW LEVEL~ CREATURE TO KILL ~ONLY FOR DEDICATED HEALING PURPOSES~)
## IDEALLY SET THIS TO A CREATURE NEAR YOUR "HOME CITY" SO YOU DON'T HAVE FAR TO RUN FOR HEALING
     var NecroHeal.Critter GOBLIN SHARD
# SET NECRORITUAL ON TO PERFORM RITUALS IN COMBAT (Preserve/Harvest/Dissect/Butchery/etc)
     var NecroRitual ON
## FORSAKEN? (ON or OFF) - IS NECRO FORSAKEN?? IF ON - WILL AVOID TOWNS/SERVICES AS MUCH AS POSSIBLE!! 
## *Not fully tested/implemented-may not be perfect- but should avoid towns. May have issues REPAIRING ARMOR Unless USING FC* 
     var Forsaken OFF
## RISEN? (ON or OFF) - CREATES RISEN MINIONS IN COMBAT (CAREFUL - GENERATES DIVINE OUTRAGE!) 
     var Risen OFF
## QUICKEN EARTH - ON TO CHECK FOR AND SUMMON DIRT CONSTRUCTS EVERY ~5 MINUTES
     var QuickenEarth OFF
     var QE.Mana 10
     var CFB.Mana 10
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Necro.Cyclics |USOL|ROC
     var Necro.Cyclics.mana |5|4
## Necromancer ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Necro.Target.Spell ACS|VS
     var Necro.Debilitation.Spell HP
     var Necro.Utility.Spell GAF
     var Necro.Augmentation.Spell Obfuscation
     var Necro.Warding.Spell MAF
     var Necro.Sorcery.Spell MPP
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Necro.Buffs IVM|REI|ROC|CH
########################################################################################
########################################################################################
### BARD SETTINGS
# Cyclic Spell Setup
# YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST be set for each individual cyclics!
# YOU MUST SET cyclic.mana in an array to match!! 6 cyclic - 6 mana numbers
  # SET TO NULL/OFF IF NOT TRAINING CYCLICS - THERE ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Bard.Cyclics |AEWO|HODI|FAE|CARE|PYRE|GJ
     var Bard.Cyclics.mana |5|4|5|5|5|6
## Bard ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Bard.Target.Spell BOS
     var Bard.Debilitation.Spell DMRS
     var Bard.Utility.Spell AOT
     var Bard.Augmentation.Spell WILL
     var Bard.Warding.Spell REPR
     var Bard.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Bard.Buffs |MIS|HARM|RAGE|REPR
## BARD SCREAMS? ( Screams in combat every ~60 seconds) (ON or OFF)
     var Bard.Scream ON
## BARD WHISTLE (ON or OFF)
     var Bard.Whistle ON
########################################################################################
########################################################################################
# WARRIOR MAGE SETTINGS
## USE SUMMONING? (Will train Summoning every ~3 minutes)
     var Summoning ON
## ELEMENTAL ALIGNMENT - Element can be FIRE, WATER, ELECTRIC, AETHER, AIR or EARTH
     var element FIRE
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var WM.Cyclics |EE|AC|FR
     var WM.Cyclics.mana |5|4|5
## Warrior Mage ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var WM.Target.Spell FS|FB
     var WM.Debilitation.Spell EE|ALA
     var WM.Utility.Spell ETF
     var WM.Augmentation.Spell YS
     var WM.Warding.Spell ES
     var WM.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var WM.Buffs Ease|TW|SW|Zephyr|SUF|Ignite
## ~WEAPON SUMMONING LOGIC~
# SUMMON WEAPONS (ON or OFF)
     var SummonWeapons OFF
# SUMMON ELEMENT - Must set your WEAPON SUMMON ELEMENT ( Stone/Earth (Default) - Fiery/Fire (Fiery Infusions) - Icy/Ice (Icy Infusions) - or Electric (Shocking Infusions)
     var SummonElement FIRE
# ELEMENTAL CHARGE SPELL Must be *a spammable spell* of your chosen element. Will prep at minimum mana - if you want to prep at something else put a number after
     var ChargeSpell MOA
# SUMMON WEAPON TEMPLATE (0 or 1) - 0 = Default weapon, 1 = Turn weapon to other template
     var SummonTemplate 1
# SUMMON WEIGHT/DENSITY (0 - 2 to set weapon density - Must know QUICK INFUSIONS spell)
# 0 = Lightest Weight, 1 = DEFAULT, 2 = Heavier Weight
     var SummonWeight 1
# Set weapons you want to summon (ON or OFF) - Setting to ON will override your default weapon variables at top of script
     var SummonHT OFF
     var SummonLT OFF
     var SummonSE OFF
     var SummonLE OFF
     var SummonTHE ON
     var SummonSB OFF
     var SummonLB OFF
     var SummonTHB ON
     var SummonPolearms ON
     var SummonStaves ON
## INGOT (ON or OFF) Bump up tier of weapons - Must know REINFORCED INFUSIONS spell and have a rare metal ingot
     var WMIngot OFF
## SET INGOT STORAGE CONTAINER (Set to either a sigil ring or a specific container)
     var Ingot.Container sigil ring
########################################################################################
########################################################################################
# MOON MAGE SETTINGS
## MOON MAGE ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var MM.Target.Spell DO|Burn
     var MM.Debilitation.Spell Dazzle|MB
     var MM.Utility.Spell PG
     var MM.Augmentation.Spell AUS|ART
     var MM.Warding.Spell PSY
     var MM.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var MM.Cyclics |SHW
     var MM.Cyclics.mana |5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var MM.Buffs CV|Shadows|TS|COL|Shadowling|PSY
## OBSERVATION TRAINING - PREDICT TOOL IS ONLY USED FOR PREDICTION OUTSIDE OF COMBAT! TOOL MUST ALREADY BE BONDED!!
## Predict.tool can be - BONES, CHART, MIRROR, PRISM, BOWL, DECK or NULL to turn off.
     var Predict.Tool DECK
## Read The Ripples (RTR ON or OFF) - Will Perform a RTR routine (observe spam) during town run **MUST HAVE TELESCOPE!
     var RTR OFF
## Where you store your telescope * If any - defaults to your main Container if not set
     var Telescope.Container NULL
## OBSERVE IN COMBAT (ON or OFF) - If ON will do Astrology observations in Combat every couple minutes
     var Combat.Observe ON
########################################################################################
########################################################################################
# CLERIC SETTINGS
## CLERIC ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Cleric.Target.Spell FOU|FF
     var Cleric.Debilitation.Spell PS|Malediction
     var Cleric.Utility.Spell DR|BLESS
     var Cleric.Augmentation.Spell Benediction
     var Cleric.Warding.Spell MPP|SL
     var Cleric.Sorcery.Spell dazzle
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Cleric.Cyclics |HYH|GHS|REV|SA
     var Cleric.Cyclics.mana |15|15|15|15
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Cleric.Buffs OM|Auspice|SOS|POM|MAPP|PFE|YS
## ARE YOU USING OM ORB? (MUST BE SET IN BUFFS ABOVE!) SET MANA AMOUNT TO CAST OM / CHARGE ORB WITH EACH TIME
     var OM.Mana 25
## TYPE OF ORB YOU USE FOR OM - OPTIONS:( FIRULF, MERAUD or KEREN)
     var FavorOrb meraud
## BUFF SPELLS YOU WANT TO ALWAYS KEEP ACTIVE IN YOUR OM ORB (You can just set this to var OM.Buffs %Cleric.Buffs ) 
     var OM.Buffs PFE|POM|MPP|MAPP|SAP|SOL
## CLERIC RITUALS? (Perform CLERIC RITUALS during Town Runs/in Combat)
     var ClericRituals ON
### Prayer Mat - Set to NULL to not use or the noun of the mat/rug
     var PrayerMat mat
## HOLY WATER VESSEL - Set your container you use to store/collect holy water
     var HolyWater chalice
### COMBAT COMMUNES - (ON or OFF) - Set the COMMUNES you wish to perform while IN COMBAT 
     var Commune.Meraud ON
     var Commune.Truffenyi ON
     var Commune.Tamsine OFF
### FLINT KNIFE - Set a DEDICATED WEAPON/KNIFE to STRIKE FLINT for MAKING FIRE for RITUALS
### MUST be a METAL weapon you can use to STRIKE FLINT for fire
     var FlintKnife knife
## CLERIC ALIGNMENT GOD - Set a God to align to ( https://elanthipedia.play.net/Cleric_3.0#Alignment )
## CHOOSE A LIGHT/DARK/NEUTRAL GOD ONLY - Each Type will buff 2 magic skills and penalize 3 others
## BY DEFAULT SCRIPT WILL USE ~CHADATRU~ (Which buffs AUG/WARDING - Generally the most lacking magics for Clerics)
## Set a different god if you wish to buff other magics but BE CAREFUL!!! 
     var Alignment.God CHADATRU
########################################################################################
########################################################################################
# RANGER SETTINGS
## RANGER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Ranger.Target.Spell DEVI|STAMPEDE
     var Ranger.Debilitation.Spell DEADFALL|SWARM
     var Ranger.Utility.Spell EM|BLEND
     var Ranger.Augmentation.Spell SOTT
     var Ranger.Warding.Spell EY
     var Ranger.Sorcery.Spell ECRY
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Ranger.Cyclics |CS|BES
     var Ranger.Cyclics.mana |5|5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Ranger.Buffs Athleticism|STW|EY|WOTP|OATH|ETC|Bloodthorns
########################################################################################
########################################################################################
## PALADIN SETTINGS
## PALADIN ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Paladin.Target.Spell FST
     var Paladin.Debilitation.Spell Shatter
     var Paladin.Utility.Spell AS
     var Paladin.Augmentation.Spell RW
     var Paladin.Warding.Spell SP
     var Paladin.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Paladin.Cyclics |HOW|TR
     var Paladin.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Paladin.Buffs AA|Courage|HES|RW|SR|Clarity
## SET your HOLY WEAPON here (NULL to ignore) - Holy Weapon Name
     var HolyWeapon NULL
## Holy Icon (NULL TO NOT USE/IGNORE) - Set to the noun of your icon
     var HolyIcon NULL
########################################################################################
########################################################################################
## TRADER SETTINGS
## TRADER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Trader.Target.Spell CRD|STARCRASH
     var Trader.Debilitation.Spell FLUORESCE|AVA
     var Trader.Utility.Spell NOUMENA
     var Trader.Augmentation.Spell BLUR
     var Trader.Warding.Spell IR
     var Trader.Sorcery.Spell MPP|BLESS
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Trader.Cyclics |ARS|SOV
     var Trader.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Trader.Buffs |TRC|Blur|LGV|NONCHALANCE
########################################################################################
########################################################################################
# EMPATH SETTINGS
## EMPATH ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Empath.Target.Spell PARALYSIS
     var Empath.Debilitation.Spell LETHARGY|NB
     var Empath.Utility.Spell GS|HEAL
     var Empath.Augmentation.Spell REFRESH
     var Empath.Warding.Spell IC|POP
     var Empath.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Empath.Cyclics |AD|REGEN
     var Empath.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Empath.Buffs  |AGS|BS|IC|GOL|MEF|TRANQUILITY
## GAURDIAN SPIRIT? (ON or OFF) - ON will keep up Guardian Spirit while in Combat
     var Guardian.Spirit ON
## CUSTOM GUARDIAN SPIRIT (ON or OFF) - If ON - will "cast custom" instead of casting normal
     var Guardian.Custom OFF
## ATTACK CONSTRUCTS ONLY? (ON or OFF) - ON will ONLY attack constructs (unless using Absolution vs unded). OFF will attack everything
## WARNING - SETTING TO OFF WILL CAUSE EMPATHIC SHOCK!!!!
     var Construct.Only ON
## USE MANIPULATE FRIENDSHIP (ON or OFF) - ON will attempt to manipulate non-construct creatures
     var Manipulate ON
## ESCAPE COMBAT WHEN EMPATHY REACHES 0? (ON or OFF) - If Empathy LearningRate reaches 0 during combat, will go on town run
     var Empathy.Escape OFF
## EMPATH PERCEIVE HEALTH WALKS (ON or OFF) - If ON - Will go on perceive health walks around town during town run
     var Empath.Walk ON
## EMPATH UNITY LINK (ON or OFF) - FOR EMPATH HEALBOT MODE - DO YOU KNOW UNITY LINK? MUST BE 70+ CIRCLE AND 380+ EMPATHY
     var Unity ON
## TEACH CLASS (FOR HEALBOT MODE) - SET THE SKILL OF THE CLASS YOU WANT TO TEACH
     var TeachClass TM
## BLACKLIST! (FOR HEALBOT MODE) - SET THE NAMES OF THE PEOPLE TO BLACKLIST FROM HEALING SERVICES!
## MUST BE IN AN ARRAY - var Blacklist Bob|Frank|Dave
     var Blacklist NULL
########################################################################################
########################################################################################
# THIEF SETTINGS
# AMBUSH TRAINING (Use AMBUSH MOVES in COMBAT - STUN/CLOUT/SLASH)
     var Ambush ON
# SELECT KHRI TO USE (Set as many ON / OFF as you want )
# IT WILL ONLY USE AS MANY KHRI AS YOU CAN HANDLE AT ONCE, PRIORITIZING THE MOST IMPORTANT DEPENDING ON SCENARIO)
     var khriSAGACITY ON
     var khriSTEADY ON
     var khriSTRIKE ON
     var khriFOCUS ON
     var khriELUSION ON
     var khriENDURE ON
     var khriAVOIDANCE ON
     var khriADAPTATION ON
     var khriPROWESS ON
     var khriHASTEN ON
     var khriHARRIER OFF
     var khriSERENITY OFF
     var khriSIGHT ON
     var khriFLIGHT ON
     var khriCALM OFF
     var khriGUILE OFF
     var khriDARKEN ON
     var khriDAMPEN ON
     var khriSHADOWSTEP ON
     var khriELIMINATE OFF
     var khriTERRIFY OFF
     var khriFRIGHT OFF
     var khriINTIMIDATE OFF
     var khriPLUNDER ON
     var khriSAFE OFF
     var khriEVANESCENCE OFF
     var khriCREDENCE OFF
     var khriCUNNING OFF
# USE KHRI DURING TOWN RUN? (ON or OFF) - Turn OFF to Skip using Khri during town run - for Sanowret use
     var Khri.Town ON
########################################################################################
########################################################################################
# BARBARIAN SETTINGS
# USE WHIRLWIND?
     var Whirlwind ON
# USE DUAL WIELD? (ON or OFF) - Dual wield requires 450+ in the weapon
     var DualWield ON
# EXPERTISE COMBOS? (ON or OFF) - Does Barb Expertise Combos (and helps generate IR)
     var Expertise ON
# Set which Forms you want to use (ON or OFF)
# Auto-turns some forms on/off depending on what skills you are training
     var barbEagle ON
     var barbBadger ON
     var barbPanther ON
     var barbPiranha ON
     var barbDragon ON
     var barbMonkey ON
     var barbTurtle OFF
     var barbOwl OFF
     var barbBear ON
     var barbBuffalo OFF
     var barbPython ON
     var barbSwan ON
     var barbToad OFF
     var barbWolverine OFF
# ROARS to use (will only use one)
     var roarEmbrace OFF
     var roarEverild ON
     var roarWail OFF
     var roarScreech OFF
     var roarShriek OFF
     var roarAnger ON
     var roarKuniyo ON
# BERSERKS to use
     var zerkHurricane OFF
     var zerkBlizzard ON
     var zerkFamine ON
     var zerkAvalanche ON
     var zerkTsunami OFF
     var zerkWildfire OFF
     var zerkEarthquake OFF
     var zerkTornado OFF
     var zerkFlashflood ON
     var zerkLandslide ON
     var zerkCyclone OFF
     var zerkDrought OFF
# MEDITATIONS to use (ON or OFF) - WILL ONLY WORK FOR HIGHER LEVEL BARBS
     var medContemplation ON
     var medTenacity ON
     var medSerenity ON
### END OF CHARACTER 7 VARIABLES
### STOP EDITING HERE ~~~ END OF CHARACTER 7 VARIABLES ##########
####################################################################################
####################################################################################
echo **** LOADED %CHARACTER7 VARIABLES
goto END.OF.VARS
}

CHARACTER8:
#########################################################################################################
#########################################################################################################
## CHARACTER 8 VARIABLES
## *CHARACTER8 VARIABLES BLOCK BELOW
if matchre("$charactername", "(?i)%CHARACTER8") then
#########################################################################################################
{
### GENIE LAYOUT - SET THE GENIE LAYOUT YOU WANT THIS CHARACTER TO USE - MUST EXACTLY MATCH THE LAYOUT NAME IN GENIE!
### Example: var GENIE.LAYOUT Shroom.layout - TO SAVE A LAYOUT IN GENIE SET IT UP HOW YOU LIKE AND CLICK LAYOUT > SAVE LAYOUT AS > NAME IT HOW YOU WANT
### IF YOU LEAVE THIS SET TO NULL THEN IT WILL JUST USE THE DEFAULT LAYOUT THAT IS SET (default.layout) 
     var GENIE.LAYOUT Fuku.layout
### HEAL.CITY ( NULL or CITY NAME (CROSS/LETH/HIB/RIVER/THEREN/SHARD) - Will run to this town for HEALING no matter where you are
     var HEAL.CITY NULL
### HOME CITY (NULL or CITY NAME) - Will attempt to return to your home city after a heal run (if not already in that city) ONLY SUPPORTS MAINLAND CITIES
     var HOME.CITY NULL
### SAFE ROOM (set to NULL to ignore) ~MUST~ TIE INTO HOME.CITY ABOVE! THE ROOM ID YOU WANT TO SCRIPT IN DURING TOWN RUN - MUST BE VALID ROOMID IN YOUR HOME CITY!
### WARNING!: IF YOU DO NOT SET BOTH HOME.CITY AND SAFE.ROOM CORRECTLY YOU ~WILL~ RUN INTO ERRORS - LEAVE BOTH AT NULL TO LET SCRIPT LOGIC HANDLE IT
     var SAFE.ROOM NULL
### AUTO-PROGRESS? (ON or OFF) - ON WILL CHOOSE YOUR COMBAT CREATURE AUTOMATICALLY BASED ON YOUR RANKS - YOU DO NOT NEED TO SET IT! OVERRIDES COMBAT.CRITTER VARIABLE
     var AUTO.PROGRESS ON
### AUTO-PROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var PROGRESS.TYPE NORMAL
### COMBAT CRITTER - ONLY USED WITH AUTO.PROGRESS OFF - MUST BE A VALID CREATURE NAME! USE FULL NAME OR 1/2/3 TO SPECIFY TIERS ie SNOW GOBLIN 2
     var COMBAT.CRITTER GOBLIN
### ALTERNATE CRITTER - PICK A ALTERNATE CRITTER TO HUNT - IF YOUR MAIN HUNTING GROUND IS FULL!
     var ALTERNATE.CRITTER MUSK HOG
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var PRIORITY.ROOMS NULL
### XP TRACKER RESET ON SCRIPT STARTUP - (ON or OFF) - RESETS EXP TRACKER TRACKING TIME ON INITIAL LAUNCH OF SCRIPT ONLY
     var XP.RESET ON

### GUI OPTIONS ARE RECOMMENDED TO LEAVE OFF COMPLETELY - THESE OPTIONS ONLY HERE BY SPECIAL REQUEST - WILL BE ANNOYING IF YOU TURN IT ON
### CRITTER.GUI (ON or OFF) - OFF by default - CREATES CRITTER GUI WINDOW - MUST MANUALLY CLICK TO CHOOSE YOUR COMBAT CRITTER BASED ON PROVINCE / SKILL / PREFERENCE
     var CRITTER.GUI OFF
### WEAPON.GUI (ON or OFF) - OFF by default - CREATES WEAPON GUI WINDOW - CHOOSE YOUR WEAPONS FOR THAT RUN *IF YOU HAVE AN ARRAY OF WEAPONS SET IN A SINGLE WEAPON VARIABLE
     var WEAPON.GUI OFF

# FRIEND LIST (People you will hunt with) Put your friends names in place of these. Ex. Bob|Fred|George
# Can just put your name in here or make it blank and it will only find empty rooms.
     var FRIENDS %ALLCHARACTERS|%GLOBALFRIENDS

##############################################################
# WEAPON / CONTAINERS / AMMO SETTINGS - BE VERY SPECIFIC! 
##############################################################

# CONTAINERS - MANDATORY! - SET YOUR MAIN ~3-4~ LARGEST CONTAINERS!
# BE SPECIFIC WITH CONTAINER NAMES - USE 2 WORDS WHENEVER POSSIBLE!
     var Container carryall
     var Container.Boxes scavenger's pack
     var Container.Backup portal
     var Container.Crafting haversack
# SHEATH CONTAINER IS FOR SUPER LONG ITEMS - CAN BE ANY LARGE CONTAINER - NOT NECCESARY TO SET 
     var Container.Sheath khiynit satchel
# AMMO CONTAINER FOR STORING AMMO - ARROWS/BOLTS/ROCKS - BACKUP CONTAINER IS "OVERFLOW" FOR EXTRA AMMO
     var Container.Ammo sandskin quiver
     var Container.Ammo.Backup ammunition tube
## CONTAINER.GEMPOUCH - VERY IMPORTANT! - ~MUST BE A SEPARATE CONTAINER~ FROM OTHER BAGS! SMALL/MEDIUM-SIZE CONTAINER IS FINE
## SPECIAL CONTAINER! SCRIPT WILL KEEP THIS CLOSED AT ALL TIMES AND ~ONLY USE IT FOR STORING FULL GEM POUCHES!~
## CONTAINER.GEMPOUCH MUST BE A ~CLOSABLE~ CONTAINER TO STORE ~FULL~ GEM POUCHES IN 
## AGAIN - DO NOT SHARE THIS CONTAINER WITH ~ANY OTHER CONTAINERS~ (except Repair Pouch Container) 
     var Container.GemPouch first kit
# Container.EmptyPouch is for storing EMPTY GEM POUCHES (This can be ANY container EXCEPT for Container.GemPouch )
     var Container.EmptyPouch satchel
# DIRT CONTAINER - For storing dirt for various use (ONLY used by Thieves/Clerics/Necros)
     var Container.Dirt NULL
## MISC SHEATH OPTIONS (Storing specific weapons in specific containers - toolstraps/bandoliers/harnesses etc) - SET TO NULL/OFF TO NOT USE
## SET THE SHEATH NAME UNDER SHEATH.1 - SET THE WEAPONS YOU WANT TO USE ON EACH SHEATH UNDERNEATH IN AN ARRAY ex:
## var Sheath.1 toolbelt
## var Sheath.1.Weapons sabre|axe|broadsword
     var Sheath.1 hip pouch
     var Sheath.1.Weapons flail|brass-inlaid mace|battle axe|throwing hammer|throwing spike|spear|nightstick|longsword|machete
     var Sheath.2 scavenger's pack
     var Sheath.2.Weapons 
     var Sheath.3 khiynit satchel
     var Sheath.3 longbow|shortbow|stonebow|sling|crossbow
     var Sheath.3.Weapons NULL
     var Sheath.4 NULL
     var Sheath.4.Weapons NULL
     var Sheath.5 NULL
     var Sheath.5.Weapons NULL
     var Sheath.6 NULL
     var Sheath.6.Weapons NULL
     
## WEAR WEAPONS (Set an array of weapons/shields you want the script to try and wear first before stowing)
     var Wear.Weapons NULL

## SMART.WEAPONS - ON TO TRAIN WEAPONS FROM LOWEST SKILL TO HIGHEST. "OFF" WILL GO IN A LINEAR ORDER (DEFAULT: ON)
## ON WILL DYNAMICALLY TRAIN TO ALWAYS MAKE SURE THE LOWEST SKILLED WEAPON IS TRAINED FIRST 
     var SMART.WEAPONS ON
     
## WEAPON SETTINGS - BE VERY SPECIFIC SETTING WEAPONS ! USE TWO WORDS WHENEVER POSSIBLE!
## SET ALL YOUR WEAPONS BELOW - MUST ~EXACTLY MATCH THE ITEM DESCRIPTION WHEN IN HANDS~! (GLANCE at it in your hands to get correct description) 
## BE SPECIFIC WHEN SETTING WEAPONS!! USE 2 WORDS WHEN POSSIBLE! TO TURN A WEAPON SKILL ~OFF~ SET IT TO - NULL
     var SEWEAPON throwing spike
     var LEWEAPON battle axe
     var THEWEAPON machete
     var SBWEAPON brass-inlaid mace
     var LBWEAPON throwing hammer
     var THBWEAPON flail
     var STAVES nightstick
     var POLEARMS spear
     var RANGED.BOW longbow
     var RANGED.CROSSBOW stonebow
     var RANGED.SLING sling
     var LTWEAPON throwing spike
     var HTWEAPON throwing hammer
# MAIN OFFHAND WEAPON TRAINING - MELEE ONLY (MUST BE A LIGHT/MEDIUM WEAPON - HEAVY or 2HANDED WEAPONS WONT WORK!!)
     var OHWEAPON mace
# ALTERNATE OFFHAND WEAPONS (For Backtraining/Dual Training weapons while training other Weapons)
# ~MUST~ BE LIGHT/MEDIUM WEIGHT WEAPON! CANNOT USE HEAVY or 2Handed Weapons! (Unless Barb) (SET TO NULL/OFF TO NOT USE)
     var ALTWEAPON1 mace
     var ALTWEAPON2 spike
     var ALTWEAPON3 NULL
## BRAWLWEAPON (DEFAULT: $charactername - Set to NULL to skip brawling)
     var BRAWLWEAPON $charactername
     #var BRAWLWEAPON $charactername
## Backstab/Ambush Weapon (Thief Only)
     var BSWEAPON mirror blade

# AMMO SETTINGS - DO NOT REMOVE THE { } BRACKETS!!!
     if (!$AMMOSWAP) then
{
     var XbowAmmo blunt tip bolt
     var BowAmmo smooth rock
     var SlingAmmo smooth rock
}

## ARMOR CHECK (ON or OFF) - Turn this OFF if you want the script to SKIP checking your armor at the beginning
## If ON - at the beginning, script will remove any armor/fluff you are wearing, and then put on all the armor you have set below. This ensures you have the correct armor on.
     var ARMOR.CHECK ON
## SET YOUR SHIELD - ABSOLUTELY 100% MANDATORY! RECOMMEND AN ARM-WORN SHIELD
     var MyShield smokewhorl shield
## ARM WORN SHIELD? (ON OR OFF) - I RECOMMEND ALWAYS USING AN ARM WORN / SMALL SHIELD - MAKES LIFE MUCH EASIER
     var ArmWorn ON
## MAIN ARMOR TO CHECK - PRIMARY COMBAT (Set to NULL to IGNORE a slot)
## YOU MUST SET ALL YOUR ARMOR BELOW - IT DOESN'T MATTER WHICH ARMOR SLOT YOU USE - THE SCRIPT DOESN'T CARE
     var CHEST.ARMOR leather coat
     var FACE.ARMOR NULL
     var HEAD.ARMOR chain helm
     var ABDOMEN.ARMOR NULL
     var BACK.ARMOR NULL
     var ARM.ARMOR NULL
     var HAND.ARMOR covellite gauntlets
     var LEG.ARMOR plate greaves
     var KNUCKLE knuckle
     var PARRYSTICK parry stick

## PRIORITY WEAPONS - WEAPON SKILLS TO KEEP MOVING ~ALWAYS~ - PRIORITIZE THESE WEAPON SKILLS OVER ALL OTHERS IF THEY ~EVER~ DROP TO 0/34
## MUST BE SET IN AN ARRAY - THE EXACT SAME AS GENIE EXP VARIABLE FORMAT ie: var Priority.Weapons Medium_Edged|Twohanded_Edged
## WARNING!! DO NOT SET PRIORITY WEAPONS UNLESS YOU WANT THOSE SKILL(S) TO TAKE PRIORITY OVER ~ALL~ OTHERS! ~WILL~ CAUSE UNEVEN RANKS OVER TIME!!
## THIS IS MAINLY ONLY USEFUL FOR SHORT PERIODS - FOR POWER LEVELING A SINGLE WEAPON SKILL FOR EXAMPLE - RECOMMEND NULL UNLESS YOU KNOW WHAT YOU ARE DOING
     var Priority.Weapons NULL
     
## TRAIN LOWEST (ON or OFF) - ON WILL ALWAYS TRAIN W/ YOUR LOWEST RANK & LOWEST LEARNINGRATE WEAPON AT EVERY WEAPON SWAP 
## THIS EFFECTIVELY ENSURES THAT ALL YOUR WEAPON SKILLS WILL TRAIN AND STAY AT THE ~EXACT SAME RANKS~ - ESPECIALLY IF USED FROM THE START
## NOTE! TRAINLOWEST ON - WILL ALTER THE DEFAULT WEAPON TRAINING ORDER - BYPASSES THE SET ORDER TO DYNAMICALLY TRAIN WEAPONS 
     var TrainLowest OFF

# MAX LEARNING RATE - FOR EACH WEAPON SKILL (WILL SWITCH WEAPONS ONCE REACHING THIS RATE *MAX 33) *SET TO 35 TO IGNORE LEARNINGRATE 
     var MAX.LEARNINGRATE 12
# LEARNING RATE INCREASE - AFTER FULL WEAPON LOOP *OF ALL WEAPONS* - INCREASE THE MAX.LEARNINGRATE BY THIS MUCH
     var LEARNING.INCREASE 4
# MAX TIME PER WEAPON - SET THE MAXIMUM TIME (IN SECONDS) TO TRAIN EACH WEAPON SKILL - BEFORE SWITCHING WEAPONS
# SETTING THIS TOO HIGH MAY CAUSE SUBOPTIMAL TRAINING - RECOMMEND AROUND ~300-500 (~5-8 minutes per weapon)
     var MAX.TIME 250
# MAXIMUM TOTAL COMBAT TRAINING TIME - SET THE MAX TIME (IN SECONDS) TO STAY IN ~COMBAT~ BEFORE ESCAPING TO TOWN ( 3600 SECONDS = 1 HOUR )
# SET VAR MAX.TRAIN 0 - TO LOOP COMBAT FOREVER ( *UNTIL IT ESCAPES DUE TO BEING TOO HURT / BAGS TOO FULL / BURDEN TOO HIGH )
     var MAX.TRAIN 4500
     
# STANCE PER WEAPON (Set NULL to use default - Or SHIELD/PARRY/EVASION/CUSTOM TO USE THAT PARTICULAR STANCE FOR A PARTICULAR WEAPON)
## NOTE SCRIPT IS ALREADY ADVANCED IN CHANGING STANCES DEPENDING ON WEAPON BEING TRAINED - NULL IS FINE FOR MOST PURPOSES
     var SE.STANCE NULL
     var LE.STANCE NULL
     var THE.STANCE NULL
     var SB.STANCE NULL
     var LB.STANCE NULL
     var THB.STANCE NULL
     var POLEARMS.STANCE NULL
     var STAVES.STANCE NULL
     var BOW.STANCE NULL
     var CROSSBOW.STANCE NULL
     var SLINGS.STANCE NULL
     var LT.STANCE NULL
     var HT.STANCE NULL
     var OH.STANCE NULL
     var BRAWL.STANCE NULL

## BACKTRAIN (ON or OFF) - ON FOR SETTING A SEPARATE BACKTRAIN ROUTINE
     var BACKTRAIN OFF
## BACKTRAIN AUTO PROGRESS (ON or OFF) - Turning this ON will automatically set the creature to hunt, based on your BACKTRAIN WEAPON SKILLS
## TURN THIS ~OFF~ TO SET THE BACKTRAIN CREATURE MANUALLY (BELOW)
     var BACKTRAIN.AUTOPROGRESS ON
### BACKTRAIN AUTOPROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var BACKTRAIN.PROGRESS.TYPE NORMAL
## BACKTRAIN CREATURE - Must specify the creature to hunt if BACKTRAIN.AUTOPROGRESS is OFF
     var BACKTRAIN.CRITTER ICE ARCHON
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var BACKTRAIN.PRIORITY.ROOMS NULL
## BACKTRAIN TIME (in SECONDS - Total time to Backtrain)
     var BACKTRAIN.TIME 1200
## BACKTRAIN MAGIC (ON or OFF) IF OFF - WILL SKIP USING ANY OFFENSIVE SPELLS PERIOD WHILE BACKTRAINING - WILL ONLY DO BUFFS
     var BACKTRAIN.MAGIC OFF
## BACKTRAIN TM/DEBIL SPELLS (ON or OFF) IF OFF - WILL SKIP USING ANY TM / DEBIL SPELL DURING BACKTRANING (UNLESS ITS A TATTOO)
     var BACKTRAIN.TM OFF
## BACKTRAIN WEAPONS - Set every weapon you wish to backtrain (NULL to turn off)
     var BACKTRAIN.SE NULL
     var BACKTRAIN.LE NULL
     var BACKTRAIN.THE NULL
     var BACKTRAIN.SB NULL
     var BACKTRAIN.LB NULL
     var BACKTRAIN.THB NULL
     var BACKTRAIN.STAVES NULL
     var BACKTRAIN.POLEARMS NULL
     var BACKTRAIN.BOW NULL
     var BACKTRAIN.CROSSBOW NULL
     var BACKTRAIN.SLING NULL
     var BACKTRAIN.LT NULL
     var BACKTRAIN.HT NULL
     var BACKTRAIN.BRAWL NULL
     var BACKTRAIN.OH NULL
     var BACKTRAIN.BS NULL
## BACKTRAIN STEALTH (OFF or ON)
     var BACKTRAIN.STEALTH ON
## BACKTRAINING LOOTING OPTIONS (ON or OFF)
     var B.Loot.Gems ON
     var B.Loot.Boxes OFF
     var B.Loot.Metals ON
     var B.Loot.Scrolls ON
     var B.Loot.Collectibles OFF
     var B.Loot.SpiderParts OFF
## BACKTRAIN LOOTING MODE ( treasure / boxes / goods / equipment )
     var B.Loot.Option goods
## BACKTRAIN ARMOR (ARMOR ONLY FOR BACKTRAIN ROUTINE) (Set to NULL to not check a piece)
     var B.CHEST.ARMOR NULL
     var B.FACE.ARMOR NULL
     var B.HEAD.ARMOR NULL
     var B.ABDOMEN.ARMOR NULL
     var B.BACK.ARMOR NULL
     var B.ARM.ARMOR NULL
     var B.HAND.ARMOR NULL
     var B.LEG.ARMOR NULL

##############################################################
### COMBAT GENERAL SETTINGS
##############################################################

## GEM POUCH DESCRIPTION - DR IS TRICKY WITH GEM POUCHES!! BE SPECIFIC - use "<color> pouch" only! 
## **RECOMMEND DUMPING ALL POUCHES AND GET NEW ONES FROM GEM SHOP ON FIRST SETUP**
## WHEN ASKING FOR NEW GEM POUCHES, "ASK NPC FOR <COLOR> POUCH" - ~DO NOT 'ASK FOR GEM POUCH' OR just 'POUCH'~ - JUST 'ASK <NPC> FOR BLACK POUCH'
## Then Set the var to the 'color' pouch you have. ie var gemPouch black pouch
     var gemPouch black pouch
# TIE GEM POUCHES? (ON or OFF) 
# TIE POUCHES FOR MORE STORAGE/LESS INVENTORY SPACE USE - but have to sell the FULL TIED POUCHES AT SPECIAL SHOPS or get TRADER to sell them!
# IF HUNTING IN SHARD OR ROSSMAN - NO WORRY AS SCRIPT SELLS TIED POUCHES IN THOSE GEM SHOPS. IF hunting in XING/ISLANDS will have to get Trader to sell pouches.
     var TiePouch ON
# WORN GEM POUCH? (ON or OFF) (OFF will STOW your gem pouch / ON will wear it )
     var Gempouch.Worn OFF

## RESTOCK AMMO? (ON or OFF) *SCRIPT WILL AUTOMATICALLY CHECK IF YOU RUN OUT OF AMMO AND ATTEMPT TO RESTOCK
     var AmmoStock ON
# Skinning Knife Name (Mandatory if not a worn knife)
     var Skinning.Knife knife
# BELT/WRIST/ANKLE ~WORN~ SKINNING KNIFE? (ON or OFF)
     var BeltKnife ON
#### COMBAT OPTIONS ####
# OFFHAND THROWING - (ON or OFF) SET TO ON IF YOU WANT TO ROTATE RIGHT/LEFT HANDS WHILE THROWING LT/HT
     var OffhandThrow ON
# THROWING TYPE (LOB, THROW or HURL) *LOB will NEVER stick / less damage - HURL ALWAYS STICKS/ max damage. THROW is inbetween
## IF YOU USE A SHARP THROWING WEAPON (LIKE SPEAR) ALWAYS USE LOB! THROW WILL STICK WITH A POINTY WEAPON!
## LOB IS THE SAFEST - LOB NEVER STICKS! - THROW IS SAFE ~IF USING A BLUNT THROWN WEAPON~ - HURL ALWAYS STICKS - AVOID HURL 
     var ThrowType lob
# BONDED THROWING WEAPONS? (ON or OFF) - Will use INVOKE to retrieve thrown weapon
     var Bonded OFF
# ROAMING (ON or OFF) - Will ROAM around to different critter rooms if it doesn't find a creature during bored routine
     var Roaming ON
# USE WEAK ATTACKS (ON or OFF) - Will use WEAK attacks for melee training (good for backtraining or preserving fatigue/balance)
     var WeakAttack OFF
# AIM ACTIONS (Set an array of actions) - ACTIONS TO PERFORM WHILE WAITING FOR FULL AIM (WITH RANGED/SPELLS) Separate with |
     var AimActions bob|attack|attack left
# TRAIN STEALTH? TRAIN STEALTH DURING MELEE / THROWN / BRAWLING ROUTINES
     var TrainStealth ON
## LOOT MONSTERS? (ON or OFF) - LOOT MONSTERS?
## OFF WILL SKIP LOOTING ALL MONSTERS ~PERIOD~ AND LET THEM ROT
     var Loot.Monsters ON
## LOOT OPTION TO USE - TREASURE / BOXES / EQUIPMENT/ GOODS or ALL
     var Loot.Option GOODS
## LOOTING OPTIONS (ON or OFF) - LOOT OPTIONS FOR MAIN COMBAT
     var Loot.Gems ON
     var Loot.Boxes ON
     var Loot.Metals ON
     var Loot.Scrolls ON
     var Loot.Collectibles OFF
     var Loot.SpiderParts OFF
# MAX BOXES (Set a number) - MAX number of BOXES to pick up before turning Box looting off for that run
     var Max.Boxes 25
# DISSECT (ON or OFF) - DISSECT mobs for First Aid training in Combat (Alternates with SKINNING depending on Learning Rates)
     var Dissect ON
# SKINNING OPTIONS (ON or OFF)
# SKIN ON but BUNDLE OFF will skin but DROP all skins. SKIN collecting only supported with bundles ON!
     var Skin ON
     var Bundle ON
# TIE BUNDLES (ON or OFF) (Turns on automatically when F2P is ON) - LOWER ITEM COUNT BY TYING UP YOUR BUNDLES
     var TieBundle ON
# BUNDLE LOCATION (SET to NULL to use ANY open location or set a preferred location (shoulder / waist / back / belt / around shoulder / over shoulder)
     var BundleLocation NULL
# ArrangeTarget (SET TO SKIN, BONE or PART - or NULL to skip arrange)
## Set ArrangeTarget to SKIN/BONE/PART to Arrange one time
## Set ArrangeALL to ON to arrange max times
     var ArrangeTarget SKIN
     var ArrangeAll OFF
## ArrangeAlways (ON or OFF) - Set ON to ALWAYS arrange regardless of skinning learningrate. OFF will SKIP ARRANGING when Skinning learning is locked
     var ArrangeAlways OFF
# MAX BUNDLE SIZE - Max amount of skins to keep in bundle before creating a new bundle (DEFAULT: 30  MAX: 200)
     var MaxBundle 40
# Set SNIPE to ON to use SNIPE (THIEF/RANGER/NECRO ONLY)
     var Snipe ON
# Set POACH to ON to use POACH instead of SNIPE (SNIPE overrides this setting if SNIPE is ON - TURN SNIPE OFF TO USE THIS)
     var Poach OFF
# RANGED AIM PAUSE. Set to 0 for a Full Aim. Set number of seconds to pause that many seconds before firing
     var SNAP.FIRE 6
# RETREAT WHILE USING RANGED WEAPONS/BUFFING? (ON or OFF) - Will RETREAT to stay at ranged when using ranged weapons
     var Retreat OFF
## DANCE / COUNT Critters - Set min number of critters to "dance" with before you start killing. 
## Leave Dance.Count 0 to kill EVERYTHING. Set 1 to dance with 1 creature until a 2nd comes in, etc. If set to 1 will ALWAYS leave 1 creature in your room.
     var Dance.Count 0
## TACTICS TRAINING (ON OR OFF) - Train TACTICS in Combat
     var Tactics ON
# APPRAISE CREATURES - (ON or OFF) to APPRAISE ALL CREATURES
     var APPRAISE ON
# HUNT OPTION (HUNT every ~75 seconds unless perception locked)
     var HUNT ON
## APPRAISE ITEMS WHEN NO CRITTERS IN ROOM? (ON or OFF)
     var APP.ITEMS OFF
## ITEMS TO APPRAISE (Set to NULL to not use) SET YOUR WORN ITEMS TO QUICK APPRAISE 
     var app1 NULL
     var app2 NULL
     var app3 NULL
## SANOWRET CRYSTAL? (ON or OFF) - ON will exhale crystal every ~100 seconds *IF CONCENTRATION ALLOWS
     var Crystal OFF
## USE SANORWRET CRYSTALS IN COMBAT? (ON or OFF) - ON will use Sanowrets in combat (Turning ON WILL effect concentration and hinder spell casting - not recommended for most)
     var SanowretCombat OFF
## ZILLS? (ON or OFF) - FOR WORN INSTRUMENTS - ON will play Zills during certain times (Repairing armor, collecting, etc)
     var Zills ON
## Zill name ( zills / cowbell / etc )
     var Zill.Name zills
# F2P CHARACTER (ON or OFF) - If set to ON - Script will escape combat and go to town run when you get an inventory count warning
     var F2P OFF
# BIOMECHANICAL TARANTULA? (ON or OFF) - IF ON - Will pick a (semi-)random near locked skill to drain every 10 minutes while in combat
     var Tarantula OFF
     var Tarantula.Name tarantula
## TARANTULA SKILLS TO CHECK - SET AN ARRAY OF SKILLS TO CHECK AGAINST FOR TARANTULA DRAIN
## MUST EXACTLY MATCH THE GENIE VARIABLE NAMES! THESE ARE THE SKILLS TARANTULA WILL CHECK FOR EACH SCHOOL
     var Magic.skills Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Arcana
     var Armor.skills Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor
     var Survival.skills Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing
     var Weapons.skills Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow
     var Lore.skills Appraisal|Tactics|Performance
# WARHORN? (ON or OFF) - For Barbarians and Bards only.
     var WarHorn OFF
## WAND SUPPORT (NULL to NOT use) (MEF wand / WoW wand / WoTP wand etc.) Set up to 2 sets of wands to use! Must use actual verb of wand!
## CAN SET AN ARRAY OF WANDS FOR EACH VAR ex- var Wand1 bloodwood branch|oaken staff|crystal
     var Wand1 bloodwood branch|diamondwood scepter|crystal$|phoenix|ironwood wand|glass bottle|dodecahedron|spiritwood wand|cloudbark wand
     var Wand2 phoenix|diamondwood scepter|bloodwood branch|note$|ironwood wand|garland|silversteel scepter|eyelash viper
## WAND CONTAINERS *Must use 2 different containers to store Wands if using 2 identical named wands)
     var Wand1.Container goldenweave belt
     var Wand2.Container scavenger's pack
## Wand Weapon - (NULL or WEAPON NAME) SET A MELEE WEAPON TO BUFF WHEN USING WANDS WITH A WEAPON BUFF
     var WandWeapon NULL
## EGG SUPPORT (ON or OFF)*Uses the HE Gift Egg in Combat every ~15 minutes to invoke more mobs
     var EGG OFF
## ASTROLABE (ON or OFF) - Uses an Astrolabe every 30 mins if ON (Will rotate if you use 2)
     var ASTROLABE OFF
## Set the name of the astrolabes - (2 words ONLY i.e - ornate astrolabe, twisted astrolabe)
     var ASTROLABE1 NULL
     var ASTROLABE2 NULL
     var Astro1.Container NULL
     var Astro2.Container NULL
## ORB RUB IN COMBAT (var Orb.Rub ON or OFF) - TURN ON TO RUB FAVOR ORB IN COMBAT EVERY ~40 MINUTES
## *NOTE THAT SCRIPT AUTOMATICALLY RUBS ORB ~ONE TIME~ EVERY FULL LOOP OF SCRIPT REGARDLESS OF THIS VARIABLE
     var Orb.Rub OFF
####################################################################################################
# ARMOR SWAP - (ON or OFF) - SPECIAL ARMOR SWAPPING ROUTINE FOR HELMS ONLY
# WILL SWAP OUT A SINGLE PIECE OF PLATE/BRIG/CHAIN/LIGHT HELM EVERY ~5 MINUTES IN COMBAT
     var Armor.Swap OFF
# IF Armor.Swap is ON - THEN ALL THE ARMORS BELOW MUST BE SET CORRECTLY!
# SET EVERY PIECE OF ARMOR TO SWAP BELOW, MUST SET AN ARMOR PIECE FOR ALL FOUR TYPES - TWO WORDS ONLY!
# ONE PIECE SHOULD MATCH YOUR MAIN ARMOR HELM
     var Light_Armor.Helm steelsilk balaclava
     var Chain_Armor.Helm chain balaclava
     var Brigandine.Helm brigandine balaclava
     var Plate_Armor.Helm NULL
####################################################################################################
# HEAVY ARMOR REMOVAL - (ON or OFF) - ON will take off plate/brig/chain armor before backstab/stealth routines
# Generally only needed for noobs with less then ~200 ranks in armors
     var Armor.Noob OFF
# Set Plate/Brig/Chain pieces here (USE EXACT SYNTAX) (If no armor to remove set to NULL)
     var PLATE1 gauntlet
     var PLATE2 greaves
     var PLATE3 NULL
     var PLATE4 NULL
# Set Light Armor Pieces to Swap in place of the Heavy armor pieces above - if any (set to NULL to not use)
     var LIGHTARMOR1 rugged gloves
     var LIGHTARMOR2 rugged greaves
     var LIGHTARMOR3 NULL
     var LIGHTARMOR4 NULL
####################################################################################################

##############################################################
# TOWN RUN / SPECIAL MODULES - SETTINGS FOR TOWN 
# AUTO HEALER / SELL GEMS/SKINS, BANK, OPTIONAL MODULES
##############################################################

# RETURN TO COMBAT MODULE (ON or OFF) - RESTARTS SCRIPT AND RETURNS TO COMBAT WHEN TOWN RUN IS FINISHED
# IF OFF - SCRIPT WILL ~ABORT~ ONCE TOWN RUN IS COMPLETE - LEAVE THIS ON FOR INFINITE AFK SCRIPTING
     var RETURN.TO.COMBAT ON
# AUTOHEAL (ON or OFF) - ON - LET SCRIPT HANDLE AUTO-HEALING AFTER COMBAT (DEPENDING ON YOUR GUILD/SETTINGS) 
# LEAVE THIS ON UNLESS YOU WANT TO HANDLE HEALING YOURSELF MANUALLY! (OR WITH ANOTHER SCRIPT) 
# TURNING THIS OFF WILL ~ABORT SCRIPT AFTER ESCAPING FROM COMBAT~! AND WILL PARSE: HELP ESCAPE PLZ!
     var AUTOHEAL ON
# HEAL ALL (ON or OFF ) - HEAL.ALL ON = FULLY HEAL IF YOU HAVE ~ANY~ WOUNDS AT ALL (even minor scars) 
# HEAL.ALL OFF = WILL SKIP HEALING IF INSIGNIFICANT WOUNDS (minor scratches etc)
     var HEAL.ALL ON
# SELL SKINS (ON or OFF) - VISIT FURRIER - SELL SKINS/BUNDLES 
     var SELLSKINS ON
# SELL GEMS (ON or OFF) - VISIT GEM SHOP - SELL ALL GEMS/POUCHES
     var SELLGEMS ON
# SELL METALS (ON or OFF) - VISIT GEM SHOP - SELL ALL LOOSE METALS/NUGGETS/BARS (except those in your Crafting Container) 
     var SELLMETALS ON
# BUY HERBS? (ON or OFF) - VISIT HERB SHOP - AUTO RESTOCK ON HEALING HERB SUPPLIES (IF in city with Herbalist)
     var HERBS ON
# USE HERBS IN COMBAT? (ON or OFF) - If ON - Script will eat herbs during combat every ~5 minutes if needed
     var HERBS.COMBAT ON
## Container.Herb - SET CONTAINER TO STORE YOUR HERBS IN (Can be a stackable herb container)
     var Container.Herb foraging apron
# BANK RUN (ON or OFF) - VISIT BANKS - DEPOSIT MONEY AFTER TOWN RUN 
     var BANKRUN ON
# INVENTORY CHECK (ON or OFF) - TURNS ON INVENTORY CHECKS FOR DUMPING ANY COMMON TRASH ITEMS IN INVENTORY (OR EXCESS GEM POUCHES / BUNDLING ROPE )
     var INVCHECK ON
# TRASH DUMP (ON or OFF) - IF ON WILL DUMP ANY ITEM IN YOUR TRASH VARIABLE (GLOBAL VARIABLE AT VERY TOP OF VARIABLE FILE)
     var TRASH.DUMP ON
# POUCH DUMP (ON of OFF) - IF ON - DUMPS ANY GEM POUCHES IN YOUR INVENTORY THAT ~DO NOT MATCH~ THE COLOR/DESCRIPTION OF YOUR PRIMARY GEMPOUCH ( var gemPouch )
# WILL ALSO DUMP YOUR NORMAL GEM POUCHES IF YOU HAVE MORE THAN 10 OF THEM until you only have 10 MAX (Prevent buildup of ~50 rogue pouches) 
     var POUCH.DUMP ON

## SHARD CITIZEN (ON or OFF) - Must be a citizen of shard
     var Shard.Citizen ON
# GET FAVORS? (ON or OFF) - (ONLY WORKS IN CROSSING / SHARD / HAVEN )
     var GET.FAVORS ON
     var FAVOR.GOD damaris
# REPAIR ARMOR? (ON or OFF) - REPAIR ALL ARMOR / WEAPONS DURING TOWN RUN (MUST HAVE MONEY IN LOCAL BANK)
     var REPAIR.ARMOR ON
## USE MAGIC REPAIR KITS? (SET NULL/OFF TO NOT USE)
## REPAIR.KIT and REPAIT.KIT.2 ARE FOR FULL REPAIR KITS THAT REPAIR ALL ARMOR ~AND~ WEAPONS
## REPAIR.KIT.WEAPON and REPAIR.KIT.ARMOR ARE ONLY FOR KITS THAT ONLY REPAIR ARMOR OR WEAPONS!
## YOU MUST SET THE CONTAINER THAT EACH SPECIFIC KIT IS FOUND IN! IT TREATS THIS CONTAINER LIKE GEMPOUCH.CONTAINER AND KEEPS CLOSED! *CAN BE SHARED WITH GEMPOUCH.CONTAINER!
     var REPAIR.KIT wire brush
     var REPAIR.KIT.CONTAINER first kit
     var REPAIR.KIT.2 omnibus toolkit
     var REPAIR.KIT.2.CONTAINER first kit
     var REPAIR.KIT.WEAPON NULL
     var REPAIR.KIT.ARMOR NULL
     var REPAIR.KIT.3.CONTAINER NULL
# CLIMBING/SWIMMING RUN (ON or OFF) - ATHLETICS TRAINING 
     var CLIMBING ON
## MAGIC CLIMBING ROPE (ON or OFF) - CHECK FOR MAGIC CLIMBING ROPE - USES THAT INSTEAD OF DEFAULT CLIMBING RUN
     var MAGIC.ROPE OFF
     var ROPE.NAME climbing rope
     var Rope.Container NULL
## WINDBOARD (ON or OFF) - TRAIN ATHLETICS WITH A WINDBOARD INSTEAD
     var WINDBOARD OFF
# COLLECTING - (ON or OFF) - OUTDOORSMANSHIP TRAINING - COLLECT ROCKS/COINS
     var COLLECTING ON
# BRAIDING - (ON or OFF) - TRAINS BRAIDING (ENGINEERING) - ONLY TRAINS TO ~70 RANKS!
     var BRAIDING ON
# RAVEN'S COURT SCHOLARSHIP STUDY (ON or OFF) - ONLY IN CROSSING !
     var RAVEN ON
# TEXTBOOK / COMPENDIUM? (ON or OFF) - TRAIN SCHOLARSHIP/FIRST AID W/ ANATOMY TEXTBOOK
     var TEXTBOOK ON
# TEXTBOOK TYPE - Textbook or Compendium
     var TEXTBOOK.TYPE textbook
     var Textbook.Container portal
# SKINNING/FA TRAINER - (ON or OFF) ONLY WORKS FOR THE MAGIC SKINNING / FA TRAINERS
## The ones with 105 uses per day or infinite ( https://elanthipedia.play.net/Item:Small_blue-belly_crocodile_with_prominently_stitched_seams )
     var SKINTRAINER ON
     var SKINTRAIN.NOUN crocodile
     var SKINTRAIN.CONTAINER haversack
# EPISTEMIC JOURNAL - For Epistemic Journals ONLY - Writes to Journal every 24 hours
# Set JOURNAL.TYPE ( NULL to NOT USE ) - Set NOUN of item to use ( traveler's diary / explorer's log / soldier journal / etc)
     var JOURNAL.TYPE NULL
# DISARM BOXES? (USES DISARM SCRIPT - MAKE SURE YOU SET THE VARIABLES UP IN disarm-vars)
     var DISARM ON
# BURGLE RUN (ON or OFF) - BURGLE RUN USING THE BURGLE SCRIPT (BURGLE.PAWN ON will Pawn all Burgle items)
     var BURGLE ON
     var BURGLE.PAWN ON
# BURGLE DUMP (ON or OFF) - Burgle Dump ON will DUMP/TRASH any Burgle item that does not sell at pawn shop
     var BURGLE.DUMP ON
# STEALING RUN (ON or OFF) - Does STEALING Run with the Ultimate Stealing Script
     var STEAL OFF
# PERFORMANCE RUN (ON or OFF) - DEDICATED PERFORMANCE TRAINING RUN DURING TOWN RUN (Uses your Zill.Name variable to train)
     var PERFORMANCE ON
# MAGICAL RESEARCH TRAINING (ON or OFF) - DEDICATED MAGICAL RESEARCH TRAINING DURING END OF TOWN RUN - TAKES A BIT OF TIME! 
     var MAGICAL.RESEARCH ON
# PRIMARY MAGICAL RESEARCH TYPE ( SET TO NULL TO CHOOSE AUTOMATICALLY BASED ON LEARNING )
# OPTIONS ARE: FUNDAMENTAL, STREAM, AUGMENTATION, UTILITY, WARDING, SORCERY, FIELD, SPELL
     var RESEARCH.TYPE NULL
# TEACHING? (ON or OFF) - If ON, will attempt to teach your other characters/people in the Friends variable
     var TEACH OFF
     var TEACH.SKILL hiding
     var TEACH.SKILL.2 evasion
## SUPPORT FOR MASTERCRAFT TRAINING
## IF YOU USE MASTERCRAFT - SET EACH SKILL ON THAT YOU WANT TO TRAIN
## *YOU MUST SET UP MASTERCRAFT - TOOLS ETC SEPARATELY
     var ALCHEMY OFF
     var ENGINEERING OFF
     var FORGING OFF
     var OUTFITTING OFF
     var ENCHANTING OFF
## VAULT SWAP (ON or OFF) - ON WILL TEMPORARILY SWAP YOUR 'var CONTAINER' FOR A SPECIAL BAG IN YOUR VAULT FOR MASTERCRAFT PURPOSES ONLY!
## AFTER MASTERCRAFT IS OVER, GOES BACK TO VAULT AND SWAPS BACK TO ORIGINAL BAG - PUTS YOUR CRAFTING BAG BACK IN THE VAULT!
## MAKE SURE YOU HAVE ENOUGH ROOM IN YOUR VAULT! THE SWAP CONTAINER SHOULD FIT ON THE SAME BODY SLOT AS THE BAG YOU ARE SWAPPING OUT!
     var VAULT.SWAP OFF
## VAULT CITY - SET THIS TO THE CITY NAME WHERE YOU HAVE YOUR VAULT - IF VAULT.SWAP IS ~ON~ IT WILL RUN TO THIS CITY FIRST
     var VAULT.CITY FC
## SET THE NAME OF YOUR CRAFTING BAG IN YOUR VAULT - MUST HAVE ~ALL YOUR CRAFTING TOOLS~ IN THIS BAG!!
## MAKE SURE TO BE SPECIFIC WITH YOUR CONTAINER VARIABLES SO THEY DONT GET MIXED UP! THIS CONTAINER SHOULD USE THE SAME BODY SLOT AS YOUR VAR CONTAINER!
     var CRAFTING.BAG dreamweave lootsack

# ALMANAC (ON or OFF) - USE ALMANACS (That trains random skill OR pick-a-skill every 10 minutes)
     var ALMANAC ON      
## ALMANAC VERB - if using the special encyclopedic almanac, MUST be set to 'encyclopedic almanac' to use the pick a skill function
     var ALMANAC.TYPE almanac
     var Almanac.Container portal
## ALMANAC SKILLS to check/pick for encyclopedic almanac i.e. Sorcery|Forging|Engineering
## The default list has ALL skills listed - You can remove skills you don't want to boost
     var ALMANAC.LEARN Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor|Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing|Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow|Appraisal|Tactics|Performance|Enchanting|Forging|Engineering|Alchemy|Outfitting|Arcana
# LOCKPICK TRAINING ITEM? (Set to NULL to not use) - Must match EXACTLY with item name in hands (2 words only)
# For MAGIC LOCKPICK TRAINING ITEMS - * Assumes you use a WORN lockpick ring/case 
     var LOCKPICK.ITEM NULL
## SET A SECONDARY LOCKPICK ITEM HERE IF YOU HAVE A SECONDARY (OR SET TO NULL)
     var LOCKPICK.ITEM.2 NULL
## Lockpick.Container is where the MAGIC LOCKPICK ITEMS should be stored (NULL to try wear them)
     var Lockpick.Container NULL
# PILGRIM BADGES (ON or OFF) *CLERIC/PALADINS ONLY! - VISIT UNVISITED BADGE LOCATIONS - PRAY TO BADGE
     var PILGRIM ON
# POWERWALKING (ON or OFF) - FOR MAGIC USERS - DO A POWERWALK DURING TOWN RUN 
     var POWERWALK ON
## SCRIPT CHECK LOGIC - TURN SCRIPT CHECK LOGIC (ON OR OFF) - WARNING - THERE ~WILL~ BE FALSE POSITIVES!! UNAVOIDABLE!!
## IF IT DETECTS ANY GM SCRIPT CHECKS - WILL ~ATTEMPT~ TO AUTOMATICALLY HANDLE IT AND/OR RUN AWAY (Not Log Out)
     var SCRIPTCHECK OFF
## Setting NO.CONTACT to "ON" will log out for 5 minutes if someone tries to drag you or hold your hand (DEFAULT: OFF)
## WARNING! IT WILL ALSO ESCAPE COMBAT IF ANYONE TALKS IN YOUR COMBAT ROOM! INCLUDING CRITTERS! SO IT CAN FALSE POSITIVE ON TALKING CRITTERS
     var NO.CONTACT OFF
## LOG.ON.STUN (ON or OFF) Set to "ON" to log out if you are too hurt/stunned and are unsuccessful running away (DEFAULT: ON)
     var LOG.ON.STUN ON
## LOG.ON.DEATH (ON or OFF) Set OFF to stay logged in even if you die (DEFAULT: ON)
     var LOG.ON.DEATH ON
## TOTAL TIME ONLINE - MAX TIME TO STAY ONLINE (IN SECONDS) After this time has passed will idle and logout to avoid AFK checks (Set to 0 to always stay online)
     var ONLINE.TIME 0
## FANG COVE? (ON or OFF) - Do you want to go to FANG COVE for healing/town stuff (Only works in Prime if Premium)
     var FANGCOVE ON
## USE PREMIUM JUMP JEWELRY? (ON or OFF) - Will use Premie JJ to teleport to Fang Cove for healing/bundles/gems/etc
     var JumpJewelry OFF
     var JewerlyVerb ironwood ring
## PERSONAL EMPATH HEAL (Put EMPATH'S NAME HERE to use. NULL to turn off) - If you use a personal empath to heal
## Setting this to anything OTHER than NULL/OFF will turn OFF the triggers to nod to someone when they ask if you want healing
     var PocketEmpath NULL
## EmpathRoom is ROOM NUMBER where you can find your PERSONAL EMPATH. (MUST be in the CITY you go to for TOWN RUN)
     var EmpathRoom NULL
## BankBot - Used for F2P characters to tip a bankbot any remaining coin at end of town run
## Set Tipping to 1, Bankbot name and Tiproom = room number bankbot is at, in your home town
     var Tipping 0
     var BankBot morph
     var TipRoom 753
## CLAN ITEM (TF USE ONLY)
     var CLAN OFF
     var CLAN.ITEM sphere
## LIGHTER ITEM (For using a Lighter to start fires instead of flint and blade)
## USAGE - var LIGHTER (ON or OFF) - Lighter.Name = verb of the item
     var Lighter OFF
     var Lighter.Name world dragon
## CUSTOM TOWN SCRIPT - (Must be the exact name of the script (IGNORE .CMD - JUST USE NAME)
## Set your own script to run during the town run
## YOU MUST HAVE A PARSE AT THE END OF YOUR SCRIPT: put #parse SCRIPT FINISHED!
## IF YOU DO NOT HAVE THIS PARSE THEN UBER WILL NOT RECOVER PROPERLY!
     var Custom.Script ubercharswap
## RPA BESTOW? (ON or OFF) - MUST BE IN THE PIRP SYSTEM TO BESTOW RPAS! https://elanthipedia.play.net/RPA_command
     var RPA ON
## LIST THE PEOPLE YOU WANT TO BESTOW RP POINTS TO BELOW IN AN ARRAY!!
## ie. var PirpList Name1|Name2|Name3|Name4|Name5
     var PirpList Raidboss|Healbitch|Illuminati|Breckin|Ryhs|Rhoat|Shepherd|Kohen|Worril|Odium|Morvetan|Orcher|Amroth|Mephos|Yew|Lorak|Wryll|Rellie|Beerfest|Bayndayd|Xana|Crivic|Blaakwulf|Wong|Findal|Regnar|Lakshmi|Vivica|Phucker|Jimdickens|Kiroq|Bleed|Rutinger|Nekhet|Leecya|Arazenya|Kithkani


######################################################################################################################
######################################################################################################################
# GENERAL MAGIC VARS - ALL MAGIC USERS MUST SET THESE VARIABLES
# GENERIC MAGIC VARIABLES FOR ALL MAGIC USERS
######################################################################################################################
######################################################################################################################
# SMART MANA FOR SPELLS? AUTO-DETERMINES OPTIMAL MANA FOR SPELLS AFTER A NEW SETUP (OR EVERY ~2 WEEKS IN GAME)
# SMART MANA WILL AUTOMATICALLY ADJUST YOUR MANA LEVELS UP AND DOWN AS YOU GAIN IN RANKS FOR OPTIMAL LEARNING
# (ON or OFF) - RECOMMEND LEAVING ON - SETTING THIS ON WILL OVERRIDE ALL MANUAL MANA SETTINGS 
# TURNING SMART.SPELLS OFF MEANS YOU WILL ~HAVE~ TO SET MANA MANALLY AND DO MUCH MORE FINE TUNING 
     var SMART.SPELLS ON
# CAMB HEAVY (ON or OFF) (OFF by default) - ON WILL MAKE SMART MANA PUT MORE MANA INTO CAMBRINTH THEN MAIN PREP
     var Camb.Heavy OFF
# MAGIC RATE - (NULL is RECOMMENDED) Set the MIN Magic Rate to reach before switching to a different spell school. 
# SETTING TO A NUMBER WILL SPAM THE SAME SPELL UNTIL YOU REACH DESIRED LEARNINGRATE. Set to NULL to cycle through spells normally 
     var Magic.Rate NULL
# MAGIC SNAP CAST. Set to 0 for Full Aim. Set to desired number of seconds to pause for that many seconds before casting
     var MAGIC.SNAP 0
# CAMBRINTH CHARGES - Number of Times to Charge your cambrinth (or harness if Cambrinth is NULL) each time!
# RECOMMEND LEAVING THIS AT 1 - 2 AT MAX - THIS VARIABLE TIES INTO HOW SMART MANA CALCULATES MANA
     var CambrinthCharge 1
# OFFENSIVE SPELL MANA AMOUNTS - Set BASE MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Mana 15
     var Debilitation.Mana 15
     var Utility.Mana 15
     var Augmentation.Mana 15
     var Warding.Mana 15
     var Sorcery.Mana 15
# OFFENSIVE SPELL CAMBRINTH AMOUNTS - Set CAMBRINTH MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Camb 20
     var Debilitation.Camb 20
     var Utility.Camb 20
     var Augmentation.Camb 20
     var Warding.Camb 20
     var Sorcery.Camb 20
# USE HARNESS / CAMBRINTH FOR OFFENSE SPELLS (ON or OFF)
# TURN OFF TO SKIP HARNESS/CAMBRINTH COMPLETELY
     var Use.Cambrinth ON
# USE HARNESS / CAMBRINTH FOR BUFFS (ON or OFF)
     var Use.Cambrinth.Buffs ON
# CAMBRINTH ITEM for charging BUFFS/SPELLS (Set to NULL to not use)
     var Cambrinth armband
     var Cyclic.Cambrinth NULL
# CAMBRINTH MANA AMOUNT FOR SPELLS - Amount of Mana to put in CAMBRINTH for Magic Tattoos / Harness for Cyclics when No Raw Chanelling feat
     var CambrinthMana 5
# CAMBRINTH MANA FOR Cylics - Amount of Mana to put in cambrinth for Cylics ONLY
     var CyclicCharge 10
# SLOW.CAST (ON or OFF) - OFF IS DEFAULT - Slow Cast ON will cast offensive spells about half as often as normal
# SLOW.CAST OFF (Default) will spam spells in between attacks as much as possible (mana permitting)
     var Slow.Cast OFF
# NO CAMBRINTH USE DURING TM / DEBIL SPELLS (ON or OFF)
# IF YOU SET THIS ON, SCRIPT WILL SKIP USING A CAMBRINTH FOR TM OR DEBIL SPELLS
     var NoCambTM OFF
# POWER PERCEIVE (Perceives every ~5 minutes)
     var POWERP ON

# RITUAL FOCUS ITEM (REQUIRED for RITUAL SPELLS - set Ritual to NULL to not use)
# Ritual.Container can be set to any Container - or set to NULL to wear it first
     var Ritual tree statuette
     var Ritual.Container satchel
# SORCERY RITUAL FOCUS (Separate ritual focus for Sorcery IF NEEDED)
     var Sorcery.Focus NULL
# TM DAMAGE FOCUS ITEM - IF SET WILL USE TM FOCI MODE EVERY ~HOUR (set to NULL to not use)
     var TMFoci NULL
     var TMFoci.Container %Container
# USE SYMBIOSIS ON ATTACK SPELLS? (ON or OFF)
# ONLY USEFUL AT ~HIGHER RANKS~ OF MAGIC - ~NOT~ FOR NOOBS!!
     var Target.Symbiosis OFF
     var Utility.Symbiosis OFF
     var Augmentation.Symbiosis OFF
     var Warding.Symbiosis OFF
     var Sorcery.Symbiosis OFF
     var Debilitation.Symbiosis OFF
# USE SYMBIOSIS ON BUFFS? (ON or OFF) - FOR HIGHER RANKS ONLY
     var Symbiosis.Buffs OFF

# MAGIC TATTOO (Set to NULL or the FULL SPELLTIMER NAME i.e - IronConstitution / MajorPhysicalProtection) - Will use a Magic Tattoo every ~5-10 minutes
# FULL SPELLTIMER NAME MUST ALSO BE SET IN YOUR BUFFS OR SPELLS - USE SORCERY.CAMB (ABOVE) TO SET CAMB MANA FOR MAGIC TATTOO
     var Magic.Tattoo NULL
# MAGIC TATTOO CAMBRINTH/HARNESS MANA - Set the amount of Camb Mana you want to boost your tattoo with
     var Tattoo.Camb 30
# HEROIC TATTOO (ON or OFF) - ONLY FOR HEROIC TATTOOS! (Normal tattoos use Magic.Tattoo)
# VERY BASIC - WILL JUST INVOKE TATTOO / CAST ON A 1 HOUR COOLDOWN
     var Runic.Tattoo OFF

#########################################################################################
# GUILD SPECIFIC OPTIONS BELOW
# SET THE GUILD OPTIONS FOR THE CURRENT CHARACTER YOU ARE EDITING 
########################################################################################
########################################################################################
# NECROMANCER SETTINGS
# SET NECRO.HEAL ON TO USE NECRO HEALING - (Consume Flesh / Devour depending on skills)
     var Necro.Heal ON
## NECROHEAL CREATURE (SET A ~LOW LEVEL~ CREATURE TO KILL ~ONLY FOR DEDICATED HEALING PURPOSES~)
## IDEALLY SET THIS TO A CREATURE NEAR YOUR "HOME CITY" SO YOU DON'T HAVE FAR TO RUN FOR HEALING
     var NecroHeal.Critter GOBLIN SHARD
# SET NECRORITUAL ON TO PERFORM RITUALS IN COMBAT (Preserve/Harvest/Dissect/Butchery/etc)
     var NecroRitual ON
## FORSAKEN? (ON or OFF) - IS NECRO FORSAKEN?? IF ON - WILL AVOID TOWNS/SERVICES AS MUCH AS POSSIBLE!! 
## *Not fully tested/implemented-may not be perfect- but should avoid towns. May have issues REPAIRING ARMOR Unless USING FC* 
     var Forsaken OFF
## RISEN? (ON or OFF) - CREATES RISEN MINIONS IN COMBAT (CAREFUL - GENERATES DIVINE OUTRAGE!) 
     var Risen OFF
## QUICKEN EARTH - ON TO CHECK FOR AND SUMMON DIRT CONSTRUCTS EVERY ~5 MINUTES
     var QuickenEarth OFF
     var QE.Mana 10
     var CFB.Mana 10
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Necro.Cyclics |USOL|ROC
     var Necro.Cyclics.mana |5|4
## Necromancer ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Necro.Target.Spell ACS|VS
     var Necro.Debilitation.Spell HP
     var Necro.Utility.Spell GAF
     var Necro.Augmentation.Spell Obfuscation
     var Necro.Warding.Spell MAF
     var Necro.Sorcery.Spell MPP
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Necro.Buffs IVM|REI|ROC|CH
########################################################################################
########################################################################################
### BARD SETTINGS
# Cyclic Spell Setup
# YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST be set for each individual cyclics!
# YOU MUST SET cyclic.mana in an array to match!! 6 cyclic - 6 mana numbers
  # SET TO NULL/OFF IF NOT TRAINING CYCLICS - THERE ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Bard.Cyclics |AEWO|HODI|FAE|CARE|PYRE|GJ
     var Bard.Cyclics.mana |5|4|5|5|5|6
## Bard ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Bard.Target.Spell BOS
     var Bard.Debilitation.Spell DMRS
     var Bard.Utility.Spell AOT
     var Bard.Augmentation.Spell WILL
     var Bard.Warding.Spell REPR
     var Bard.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Bard.Buffs |MIS|HARM|RAGE|REPR
## BARD SCREAMS? ( Screams in combat every ~60 seconds) (ON or OFF)
     var Bard.Scream ON
## BARD WHISTLE (ON or OFF)
     var Bard.Whistle ON
########################################################################################
########################################################################################
# WARRIOR MAGE SETTINGS
## USE SUMMONING? (Will train Summoning every ~3 minutes)
     var Summoning ON
## ELEMENTAL ALIGNMENT - Element can be FIRE, WATER, ELECTRIC, AETHER, AIR or EARTH
     var element FIRE
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var WM.Cyclics |EE|AC|FR
     var WM.Cyclics.mana |5|4|5
## Warrior Mage ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var WM.Target.Spell FS|FB
     var WM.Debilitation.Spell EE|ALA
     var WM.Utility.Spell ETF
     var WM.Augmentation.Spell YS
     var WM.Warding.Spell ES
     var WM.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var WM.Buffs Ease|TW|SW|Zephyr|SUF|Ignite
## ~WEAPON SUMMONING LOGIC~
# SUMMON WEAPONS (ON or OFF)
     var SummonWeapons OFF
# SUMMON ELEMENT - Must set your WEAPON SUMMON ELEMENT ( Stone/Earth (Default) - Fiery/Fire (Fiery Infusions) - Icy/Ice (Icy Infusions) - or Electric (Shocking Infusions)
     var SummonElement FIRE
# ELEMENTAL CHARGE SPELL Must be *a spammable spell* of your chosen element. Will prep at minimum mana - if you want to prep at something else put a number after
     var ChargeSpell MOA
# SUMMON WEAPON TEMPLATE (0 or 1) - 0 = Default weapon, 1 = Turn weapon to other template
     var SummonTemplate 1
# SUMMON WEIGHT/DENSITY (0 - 2 to set weapon density - Must know QUICK INFUSIONS spell)
# 0 = Lightest Weight, 1 = DEFAULT, 2 = Heavier Weight
     var SummonWeight 1
# Set weapons you want to summon (ON or OFF) - Setting to ON will override your default weapon variables at top of script
     var SummonHT OFF
     var SummonLT OFF
     var SummonSE OFF
     var SummonLE OFF
     var SummonTHE ON
     var SummonSB OFF
     var SummonLB OFF
     var SummonTHB ON
     var SummonPolearms ON
     var SummonStaves ON
## INGOT (ON or OFF) Bump up tier of weapons - Must know REINFORCED INFUSIONS spell and have a rare metal ingot
     var WMIngot OFF
## SET INGOT STORAGE CONTAINER (Set to either a sigil ring or a specific container)
     var Ingot.Container sigil ring
########################################################################################
########################################################################################
# MOON MAGE SETTINGS
## MOON MAGE ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var MM.Target.Spell DO|Burn
     var MM.Debilitation.Spell Dazzle|MB
     var MM.Utility.Spell PG
     var MM.Augmentation.Spell AUS|ART
     var MM.Warding.Spell PSY
     var MM.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var MM.Cyclics |SHW
     var MM.Cyclics.mana |5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var MM.Buffs CV|Shadows|TS|COL|Shadowling|PSY
## OBSERVATION TRAINING - PREDICT TOOL IS ONLY USED FOR PREDICTION OUTSIDE OF COMBAT! TOOL MUST ALREADY BE BONDED!!
## Predict.tool can be - BONES, CHART, MIRROR, PRISM, BOWL, DECK or NULL to turn off.
     var Predict.Tool DECK
## Read The Ripples (RTR ON or OFF) - Will Perform a RTR routine (observe spam) during town run **MUST HAVE TELESCOPE!
     var RTR OFF
## Where you store your telescope * If any - defaults to your main Container if not set
     var Telescope.Container NULL
## OBSERVE IN COMBAT (ON or OFF) - If ON will do Astrology observations in Combat every couple minutes
     var Combat.Observe ON
########################################################################################
########################################################################################
# CLERIC SETTINGS
## CLERIC ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Cleric.Target.Spell FOU|FF
     var Cleric.Debilitation.Spell PS|Malediction
     var Cleric.Utility.Spell DR|BLESS
     var Cleric.Augmentation.Spell Benediction
     var Cleric.Warding.Spell MPP|SL
     var Cleric.Sorcery.Spell dazzle
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Cleric.Cyclics |HYH|GHS|REV|SA
     var Cleric.Cyclics.mana |15|15|15|15
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Cleric.Buffs OM|Auspice|SOS|POM|MAPP|PFE|YS
## ARE YOU USING OM ORB? (MUST BE SET IN BUFFS ABOVE!) SET MANA AMOUNT TO CAST OM / CHARGE ORB WITH EACH TIME
     var OM.Mana 25
## TYPE OF ORB YOU USE FOR OM - OPTIONS:( FIRULF, MERAUD or KEREN)
     var FavorOrb meraud
## BUFF SPELLS YOU WANT TO ALWAYS KEEP ACTIVE IN YOUR OM ORB (You can just set this to var OM.Buffs %Cleric.Buffs ) 
     var OM.Buffs PFE|POM|MPP|MAPP|SAP|SOL
## CLERIC RITUALS? (Perform CLERIC RITUALS during Town Runs/in Combat)
     var ClericRituals ON
### Prayer Mat - Set to NULL to not use or the noun of the mat/rug
     var PrayerMat mat
## HOLY WATER VESSEL - Set your container you use to store/collect holy water
     var HolyWater chalice
### COMBAT COMMUNES - (ON or OFF) - Set the COMMUNES you wish to perform while IN COMBAT 
     var Commune.Meraud ON
     var Commune.Truffenyi ON
     var Commune.Tamsine OFF
### FLINT KNIFE - Set a DEDICATED WEAPON/KNIFE to STRIKE FLINT for MAKING FIRE for RITUALS
### MUST be a METAL weapon you can use to STRIKE FLINT for fire
     var FlintKnife knife
## CLERIC ALIGNMENT GOD - Set a God to align to ( https://elanthipedia.play.net/Cleric_3.0#Alignment )
## CHOOSE A LIGHT/DARK/NEUTRAL GOD ONLY - Each Type will buff 2 magic skills and penalize 3 others
## BY DEFAULT SCRIPT WILL USE ~CHADATRU~ (Which buffs AUG/WARDING - Generally the most lacking magics for Clerics)
## Set a different god if you wish to buff other magics but BE CAREFUL!!! 
     var Alignment.God CHADATRU
########################################################################################
########################################################################################
# RANGER SETTINGS
## RANGER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Ranger.Target.Spell DEVI|STAMPEDE
     var Ranger.Debilitation.Spell DEADFALL|SWARM
     var Ranger.Utility.Spell EM|BLEND
     var Ranger.Augmentation.Spell SOTT
     var Ranger.Warding.Spell EY
     var Ranger.Sorcery.Spell ECRY
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Ranger.Cyclics |CS|BES
     var Ranger.Cyclics.mana |5|5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Ranger.Buffs Athleticism|STW|EY|WOTP|OATH|ETC|Bloodthorns
########################################################################################
########################################################################################
## PALADIN SETTINGS
## PALADIN ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Paladin.Target.Spell FST
     var Paladin.Debilitation.Spell Shatter
     var Paladin.Utility.Spell AS
     var Paladin.Augmentation.Spell RW
     var Paladin.Warding.Spell SP
     var Paladin.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Paladin.Cyclics |HOW|TR
     var Paladin.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Paladin.Buffs AA|Courage|HES|RW|SR|Clarity
## SET your HOLY WEAPON here (NULL to ignore) - Holy Weapon Name
     var HolyWeapon NULL
## Holy Icon (NULL TO NOT USE/IGNORE) - Set to the noun of your icon
     var HolyIcon NULL
########################################################################################
########################################################################################
## TRADER SETTINGS
## TRADER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Trader.Target.Spell CRD|STARCRASH
     var Trader.Debilitation.Spell FLUORESCE|AVA
     var Trader.Utility.Spell NOUMENA
     var Trader.Augmentation.Spell BLUR
     var Trader.Warding.Spell IR
     var Trader.Sorcery.Spell MPP
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Trader.Cyclics |ARS|SOV
     var Trader.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Trader.Buffs |TRC|Blur|LGV|NONCHALANCE
########################################################################################
########################################################################################
# EMPATH SETTINGS
## EMPATH ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Empath.Target.Spell PARALYSIS
     var Empath.Debilitation.Spell LETHARGY|NB
     var Empath.Utility.Spell GS|HEAL
     var Empath.Augmentation.Spell REFRESH
     var Empath.Warding.Spell IC|POP
     var Empath.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Empath.Cyclics |AD|REGEN
     var Empath.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Empath.Buffs  |AGS|BS|IC|GOL|MEF|TRANQUILITY
## GAURDIAN SPIRIT? (ON or OFF) - ON will keep up Guardian Spirit while in Combat
     var Guardian.Spirit ON
## CUSTOM GUARDIAN SPIRIT (ON or OFF) - If ON - will "cast custom" instead of casting normal
     var Guardian.Custom OFF
## ATTACK CONSTRUCTS ONLY? (ON or OFF) - ON will ONLY attack constructs (unless using Absolution vs unded). OFF will attack everything
## WARNING - SETTING TO OFF WILL CAUSE EMPATHIC SHOCK!!!!
     var Construct.Only ON
## USE MANIPULATE FRIENDSHIP (ON or OFF) - ON will attempt to manipulate non-construct creatures
     var Manipulate ON
## ESCAPE COMBAT WHEN EMPATHY REACHES 0? (ON or OFF) - If Empathy LearningRate reaches 0 during combat, will go on town run
     var Empathy.Escape OFF
## EMPATH PERCEIVE HEALTH WALKS (ON or OFF) - If ON - Will go on perceive health walks around town during town run
     var Empath.Walk ON
## EMPATH UNITY LINK (ON or OFF) - FOR EMPATH HEALBOT MODE - DO YOU KNOW UNITY LINK? MUST BE 70+ CIRCLE AND 380+ EMPATHY
     var Unity ON
## TEACH CLASS (FOR HEALBOT MODE) - SET THE SKILL OF THE CLASS YOU WANT TO TEACH
     var TeachClass TM
## BLACKLIST! (FOR HEALBOT MODE) - SET THE NAMES OF THE PEOPLE TO BLACKLIST FROM HEALING SERVICES!
## MUST BE IN AN ARRAY - var Blacklist Bob|Frank|Dave
     var Blacklist NULL
########################################################################################
########################################################################################
# THIEF SETTINGS
# AMBUSH TRAINING (Use AMBUSH MOVES in COMBAT - STUN/CLOUT/SLASH)
     var Ambush ON
# SELECT KHRI TO USE (Set as many ON / OFF as you want )
# IT WILL ONLY USE AS MANY KHRI AS YOU CAN HANDLE AT ONCE, PRIORITIZING THE MOST IMPORTANT DEPENDING ON SCENARIO)
     var khriSAGACITY ON
     var khriSTEADY ON
     var khriSTRIKE ON
     var khriFOCUS ON
     var khriELUSION ON
     var khriENDURE ON
     var khriAVOIDANCE ON
     var khriADAPTATION ON
     var khriPROWESS ON
     var khriHASTEN ON
     var khriHARRIER OFF
     var khriSERENITY OFF
     var khriSIGHT ON
     var khriFLIGHT ON
     var khriCALM OFF
     var khriGUILE OFF
     var khriDARKEN ON
     var khriDAMPEN ON
     var khriSHADOWSTEP ON
     var khriELIMINATE OFF
     var khriTERRIFY OFF
     var khriFRIGHT OFF
     var khriINTIMIDATE OFF
     var khriPLUNDER ON
     var khriSAFE OFF
     var khriEVANESCENCE OFF
     var khriCREDENCE OFF
     var khriCUNNING OFF
# USE KHRI DURING TOWN RUN? (ON or OFF) - Turn OFF to Skip using Khri during town run - for Sanowret use
     var Khri.Town ON
########################################################################################
########################################################################################
# BARBARIAN SETTINGS
# USE WHIRLWIND?
     var Whirlwind ON
# USE DUAL WIELD? (ON or OFF) - Dual wield requires 450+ in the weapon
     var DualWield ON
# EXPERTISE COMBOS? (ON or OFF) - Does Barb Expertise Combos (and helps generate IR)
     var Expertise ON
# Set which Forms you want to use (ON or OFF)
# Auto-turns some forms on/off depending on what skills you are training
     var barbEagle ON
     var barbBadger ON
     var barbPanther ON
     var barbPiranha ON
     var barbDragon ON
     var barbMonkey ON
     var barbTurtle OFF
     var barbOwl OFF
     var barbBear ON
     var barbBuffalo OFF
     var barbPython ON
     var barbSwan ON
     var barbToad OFF
     var barbWolverine OFF
# ROARS to use (will only use one)
     var roarEmbrace OFF
     var roarEverild ON
     var roarWail OFF
     var roarScreech OFF
     var roarShriek OFF
     var roarAnger ON
     var roarKuniyo ON
# BERSERKS to use
     var zerkHurricane OFF
     var zerkBlizzard ON
     var zerkFamine ON
     var zerkAvalanche ON
     var zerkTsunami OFF
     var zerkWildfire OFF
     var zerkEarthquake OFF
     var zerkTornado OFF
     var zerkFlashflood ON
     var zerkLandslide ON
     var zerkCyclone OFF
     var zerkDrought OFF
# MEDITATIONS to use (ON or OFF) - WILL ONLY WORK FOR HIGHER LEVEL BARBS
     var medContemplation ON
     var medTenacity ON
     var medSerenity ON
### END OF CHARACTER 8 VARIABLES
### STOP EDITING HERE ~~~ END OF CHARACTER 8 VARIABLES ##########
####################################################################################
####################################################################################
echo **** LOADED %CHARACTER8 VARIABLES
goto END.OF.VARS
}

CHARACTER9:
#########################################################################################################
#########################################################################################################
## CHARACTER 9 VARIABLES
## *CHARACTER9 VARIABLES BLOCK BELOW
if matchre("$charactername", "(?i)%CHARACTER9") then
#########################################################################################################
{
### GENIE LAYOUT - SET THE GENIE LAYOUT YOU WANT THIS CHARACTER TO USE - MUST EXACTLY MATCH THE LAYOUT NAME IN GENIE!
### Example: var GENIE.LAYOUT Shroom.layout - TO SAVE A LAYOUT IN GENIE SET IT UP HOW YOU LIKE AND CLICK LAYOUT > SAVE LAYOUT AS > NAME IT HOW YOU WANT
### IF YOU LEAVE THIS SET TO NULL THEN IT WILL JUST USE THE DEFAULT LAYOUT THAT IS SET (default.layout) 
     var GENIE.LAYOUT default.layout
### HEAL.CITY ( NULL or CITY NAME (CROSS/LETH/HIB/RIVER/THEREN/SHARD) - Will run to this town for HEALING no matter where you are
     var HEAL.CITY NULL
### HOME CITY (NULL or CITY NAME) - Will attempt to return to your home city after a heal run (if not already in that city) ONLY SUPPORTS MAINLAND CITIES
     var HOME.CITY NULL
### SAFE ROOM (set to NULL to ignore) ~MUST~ TIE INTO HOME.CITY ABOVE! THE ROOM ID YOU WANT TO SCRIPT IN DURING TOWN RUN - MUST BE VALID ROOMID IN YOUR HOME CITY!
### WARNING!: IF YOU DO NOT SET BOTH HOME.CITY AND SAFE.ROOM CORRECTLY YOU ~WILL~ RUN INTO ERRORS - LEAVE BOTH AT NULL TO LET SCRIPT LOGIC HANDLE IT
     var SAFE.ROOM NULL
### AUTO-PROGRESS? (ON or OFF) - ON WILL CHOOSE YOUR COMBAT CREATURE AUTOMATICALLY BASED ON YOUR RANKS - YOU DO NOT NEED TO SET IT! OVERRIDES COMBAT.CRITTER VARIABLE
     var AUTO.PROGRESS ON
### AUTO-PROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var PROGRESS.TYPE NORMAL
### COMBAT CRITTER - ONLY USED WITH AUTO.PROGRESS OFF - MUST BE A VALID CREATURE NAME! USE FULL NAME OR 1/2/3 TO SPECIFY TIERS ie SNOW GOBLIN 2
     var COMBAT.CRITTER GOBLIN
### ALTERNATE CRITTER - PICK A ALTERNATE CRITTER TO HUNT - IF YOUR MAIN HUNTING GROUND IS FULL!
     var ALTERNATE.CRITTER MUSK HOG
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var PRIORITY.ROOMS NULL
### XP TRACKER RESET ON SCRIPT STARTUP - (ON or OFF) - RESETS EXP TRACKER TRACKING TIME ON INITIAL LAUNCH OF SCRIPT ONLY
     var XP.RESET ON

### GUI OPTIONS ARE RECOMMENDED TO LEAVE OFF COMPLETELY - THESE OPTIONS ONLY HERE BY SPECIAL REQUEST - WILL BE ANNOYING IF YOU TURN IT ON
### CRITTER.GUI (ON or OFF) - OFF by default - CREATES CRITTER GUI WINDOW - MUST MANUALLY CLICK TO CHOOSE YOUR COMBAT CRITTER BASED ON PROVINCE / SKILL / PREFERENCE
     var CRITTER.GUI OFF
### WEAPON.GUI (ON or OFF) - OFF by default - CREATES WEAPON GUI WINDOW - CHOOSE YOUR WEAPONS FOR THAT RUN *IF YOU HAVE AN ARRAY OF WEAPONS SET IN A SINGLE WEAPON VARIABLE
     var WEAPON.GUI OFF

# FRIEND LIST (People you will hunt with) Put your friends names in place of these. Ex. Bob|Fred|George
# Can just put your name in here or make it blank and it will only find empty rooms.
     var FRIENDS %ALLCHARACTERS|%GLOBALFRIENDS

##############################################################
# WEAPON / CONTAINERS / AMMO SETTINGS - BE VERY SPECIFIC! 
##############################################################

# CONTAINERS - MANDATORY! - SET YOUR MAIN ~3-4~ LARGEST CONTAINERS!
# BE SPECIFIC WITH CONTAINER NAMES - USE 2 WORDS WHENEVER POSSIBLE!
     var Container backpack
     var Container.Boxes haversack
     var Container.Backup duffel bag
     var Container.Crafting carryall
# SHEATH CONTAINER IS FOR SUPER LONG ITEMS - CAN BE ANY LARGE CONTAINER - NOT NECCESARY TO SET 
     var Container.Sheath NULL
# AMMO CONTAINER FOR STORING AMMO - ARROWS/BOLTS/ROCKS - BACKUP CONTAINER IS "OVERFLOW" FOR EXTRA AMMO
     var Container.Ammo quiver
     var Container.Ammo.Backup NULL
## CONTAINER.GEMPOUCH - VERY IMPORTANT! - ~MUST BE A SEPARATE CONTAINER~ FROM OTHER BAGS! SMALL/MEDIUM-SIZE CONTAINER IS FINE
## SPECIAL CONTAINER! SCRIPT WILL KEEP THIS CLOSED AT ALL TIMES AND ~ONLY USE IT FOR STORING FULL GEM POUCHES!~
## CONTAINER.GEMPOUCH MUST BE A ~CLOSABLE~ CONTAINER TO STORE ~FULL~ GEM POUCHES IN 
## AGAIN - DO NOT SHARE THIS CONTAINER WITH ~ANY OTHER CONTAINERS~ (except Repair Pouch Container) 
     var Container.GemPouch thigh pouch
# Container.EmptyPouch is for storing EMPTY GEM POUCHES (This can be ANY container EXCEPT for Container.GemPouch )
     var Container.EmptyPouch backpack
# DIRT CONTAINER - For storing dirt for various use (ONLY used by Thieves/Clerics/Necros)
     var Container.Dirt backpack
## MISC SHEATH OPTIONS (Storing specific weapons in specific containers - toolstraps/bandoliers/harnesses etc) - SET TO NULL/OFF TO NOT USE
## SET THE SHEATH NAME UNDER SHEATH.1 - SET THE WEAPONS YOU WANT TO USE ON EACH SHEATH UNDERNEATH IN AN ARRAY ex:
## var Sheath.1 toolbelt
## var Sheath.1.Weapons sabre|axe|broadsword
     var Sheath.1 NULL
     var Sheath.1.Weapons machete|crossbow|club|flail|slingshot|assassin's blade|steppe bow|katana|nightstick|thrusting blade|shortbow|mace|ngalio|sling|maul|quarterstaff|zweihander|spear|flamberge|mirror ava|throwing (mallet|hammer|club)
     var Sheath.2 NULL
     var Sheath.2.Weapons stonebow|slingshot|blowgun|boomerang
     var Sheath.3 NULL
     var Sheath.3.Weapons mirror blade
     var Sheath.4 NULL
     var Sheath.4.Weapons mirror knife
     var Sheath.5 NULL
     var Sheath.5.Weapons throwing blade|icicles|icicle
     var Sheath.6 NULL
     var Sheath.6.Weapons kertig dart
     
## WEAR WEAPONS (Set an array of weapons/shields you want the script to try and wear first before stowing)
     var Wear.Weapons NULL

## SMART.WEAPONS - ON TO TRAIN WEAPONS FROM LOWEST SKILL TO HIGHEST. "OFF" WILL GO IN A LINEAR ORDER (DEFAULT: ON)
## ON WILL DYNAMICALLY TRAIN TO ALWAYS MAKE SURE THE LOWEST SKILLED WEAPON IS TRAINED FIRST 
     var SMART.WEAPONS ON
     
## WEAPON SETTINGS - BE VERY SPECIFIC SETTING WEAPONS ! USE TWO WORDS WHENEVER POSSIBLE!
## SET ALL YOUR WEAPONS BELOW - MUST ~EXACTLY MATCH THE ITEM DESCRIPTION WHEN IN HANDS~! (GLANCE at it in your hands to get correct description) 
## BE SPECIFIC WHEN SETTING WEAPONS!! USE 2 WORDS WHEN POSSIBLE! TO TURN A WEAPON SKILL ~OFF~ SET IT TO - NULL
     var SEWEAPON assassin's blade
     var LEWEAPON damaris falchion
     var THEWEAPON zweihander
     var SBWEAPON damaris bola
     var LBWEAPON horseman's flail
     var THBWEAPON damaris akabo
     var STAVES damaris quarterstaff
     var POLEARMS damaris pike
     var RANGED.BOW lirisan shortbow
     var RANGED.CROSSBOW cloudbark crossbow
     var RANGED.SLING damaris sling
     var LTWEAPON icicles
     var HTWEAPON damaris mallet
# MAIN OFFHAND WEAPON TRAINING - MELEE ONLY (MUST BE A LIGHT/MEDIUM WEAPON - HEAVY or 2HANDED WEAPONS WONT WORK!!)
     var OHWEAPON club
# ALTERNATE OFFHAND WEAPONS (For Backtraining/Dual Training weapons while training other Weapons)
# ~MUST~ BE LIGHT/MEDIUM WEIGHT WEAPON! CANNOT USE HEAVY or 2Handed Weapons! (Unless Barb) (SET TO NULL/OFF TO NOT USE)
     var ALTWEAPON1 club
     var ALTWEAPON2 bola
     var ALTWEAPON3 NULL
## BRAWLWEAPON (DEFAULT: $charactername - Set to NULL to skip brawling)
     var BRAWLWEAPON $charactername
     #var BRAWLWEAPON $charactername
## Backstab/Ambush Weapon (Thief Only)
     var BSWEAPON mirror blade

# AMMO SETTINGS - DO NOT REMOVE THE { } BRACKETS!!!
     if (!$AMMOSWAP) then
{
     var XbowAmmo crossbow bolt
     var BowAmmo arrow
     var SlingAmmo stone shard
}

## ARMOR CHECK (ON or OFF) - Turn this OFF if you want the script to SKIP checking your armor at the beginning
## If ON - at the beginning, script will remove any armor/fluff you are wearing, and then put on all the armor you have set below. This ensures you have the correct armor on.
     var ARMOR.CHECK ON
## SET YOUR SHIELD - ABSOLUTELY 100% MANDATORY! RECOMMEND AN ARM-WORN SHIELD
     var MyShield diamondwood shield
## ARM WORN SHIELD? (ON OR OFF) - I RECOMMEND ALWAYS USING AN ARM WORN / SMALL SHIELD - MAKES LIFE MUCH EASIER
     var ArmWorn ON
## MAIN ARMOR TO CHECK - PRIMARY COMBAT (Set to NULL to IGNORE a slot)
## YOU MUST SET ALL YOUR ARMOR BELOW - IT DOESN'T MATTER WHICH ARMOR SLOT YOU USE - THE SCRIPT DOESN'T CARE
     var CHEST.ARMOR khiynit robe
     var FACE.ARMOR NULL
     var HEAD.ARMOR leather cowl
     var ABDOMEN.ARMOR NULL
     var BACK.ARMOR NULL
     var ARM.ARMOR assassin's sleeves
     var HAND.ARMOR NULL
     var LEG.ARMOR NULL
     var KNUCKLE telothian knuckle
     var PARRYSTICK parry stick

## PRIORITY WEAPONS - WEAPON SKILLS TO KEEP MOVING ~ALWAYS~ - PRIORITIZE THESE WEAPON SKILLS OVER ALL OTHERS IF THEY ~EVER~ DROP TO 0/34
## MUST BE SET IN AN ARRAY - THE EXACT SAME AS GENIE EXP VARIABLE FORMAT ie: var Priority.Weapons Medium_Edged|Twohanded_Edged
## WARNING!! DO NOT SET PRIORITY WEAPONS UNLESS YOU WANT THOSE SKILL(S) TO TAKE PRIORITY OVER ~ALL~ OTHERS! ~WILL~ CAUSE UNEVEN RANKS OVER TIME!!
## THIS IS MAINLY ONLY USEFUL FOR SHORT PERIODS - FOR POWER LEVELING A SINGLE WEAPON SKILL FOR EXAMPLE - RECOMMEND NULL UNLESS YOU KNOW WHAT YOU ARE DOING
     var Priority.Weapons NULL
     
## TRAIN LOWEST (ON or OFF) - ON WILL ALWAYS TRAIN W/ YOUR LOWEST RANK & LOWEST LEARNINGRATE WEAPON AT EVERY WEAPON SWAP 
## THIS EFFECTIVELY ENSURES THAT ALL YOUR WEAPON SKILLS WILL TRAIN AND STAY AT THE ~EXACT SAME RANKS~ - ESPECIALLY IF USED FROM THE START
## NOTE! TRAINLOWEST ON - WILL ALTER THE DEFAULT WEAPON TRAINING ORDER - BYPASSES THE SET ORDER TO DYNAMICALLY TRAIN WEAPONS 
     var TrainLowest OFF

# MAX LEARNING RATE - FOR EACH WEAPON SKILL (WILL SWITCH WEAPONS ONCE REACHING THIS RATE *MAX 33) *SET TO 35 TO IGNORE LEARNINGRATE 
     var MAX.LEARNINGRATE 12
# LEARNING RATE INCREASE - AFTER FULL WEAPON LOOP *OF ALL WEAPONS* - INCREASE THE MAX.LEARNINGRATE BY THIS MUCH
     var LEARNING.INCREASE 4
# MAX TIME PER WEAPON - SET THE MAXIMUM TIME (IN SECONDS) TO TRAIN EACH WEAPON SKILL - BEFORE SWITCHING WEAPONS
# SETTING THIS TOO HIGH MAY CAUSE SUBOPTIMAL TRAINING - RECOMMEND AROUND ~300-500 (~5-8 minutes per weapon)
     var MAX.TIME 250
# MAXIMUM TOTAL COMBAT TRAINING TIME - SET THE MAX TIME (IN SECONDS) TO STAY IN ~COMBAT~ BEFORE ESCAPING TO TOWN ( 3600 SECONDS = 1 HOUR )
# SET VAR MAX.TRAIN 0 - TO LOOP COMBAT FOREVER ( *UNTIL IT ESCAPES DUE TO BEING TOO HURT / BAGS TOO FULL / BURDEN TOO HIGH )
     var MAX.TRAIN 4500
     
# STANCE PER WEAPON (Set NULL to use default - Or SHIELD/PARRY/EVASION/CUSTOM TO USE THAT PARTICULAR STANCE FOR A PARTICULAR WEAPON)
## NOTE SCRIPT IS ALREADY ADVANCED IN CHANGING STANCES DEPENDING ON WEAPON BEING TRAINED - NULL IS FINE FOR MOST PURPOSES
     var SE.STANCE NULL
     var LE.STANCE NULL
     var THE.STANCE NULL
     var SB.STANCE NULL
     var LB.STANCE NULL
     var THB.STANCE NULL
     var POLEARMS.STANCE NULL
     var STAVES.STANCE NULL
     var BOW.STANCE NULL
     var CROSSBOW.STANCE NULL
     var SLINGS.STANCE NULL
     var LT.STANCE NULL
     var HT.STANCE NULL
     var OH.STANCE NULL
     var BRAWL.STANCE NULL

## BACKTRAIN (ON or OFF) - ON FOR SETTING A SEPARATE BACKTRAIN ROUTINE
     var BACKTRAIN OFF
## BACKTRAIN AUTO PROGRESS (ON or OFF) - Turning this ON will automatically set the creature to hunt, based on your BACKTRAIN WEAPON SKILLS
## TURN THIS ~OFF~ TO SET THE BACKTRAIN CREATURE MANUALLY (BELOW)
     var BACKTRAIN.AUTOPROGRESS ON
### BACKTRAIN AUTOPROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var BACKTRAIN.PROGRESS.TYPE NORMAL
## BACKTRAIN CREATURE - Must specify the creature to hunt if BACKTRAIN.AUTOPROGRESS is OFF
     var BACKTRAIN.CRITTER ICE ARCHON
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var BACKTRAIN.PRIORITY.ROOMS NULL
## BACKTRAIN TIME (in SECONDS - Total time to Backtrain)
     var BACKTRAIN.TIME 1200
## BACKTRAIN MAGIC (ON or OFF) IF OFF - WILL SKIP USING ANY OFFENSIVE SPELLS PERIOD WHILE BACKTRAINING - WILL ONLY DO BUFFS
     var BACKTRAIN.MAGIC OFF
## BACKTRAIN TM/DEBIL SPELLS (ON or OFF) IF OFF - WILL SKIP USING ANY TM / DEBIL SPELL DURING BACKTRANING (UNLESS ITS A TATTOO)
     var BACKTRAIN.TM OFF
## BACKTRAIN WEAPONS - Set every weapon you wish to backtrain (NULL to turn off)
     var BACKTRAIN.SE NULL
     var BACKTRAIN.LE NULL
     var BACKTRAIN.THE NULL
     var BACKTRAIN.SB NULL
     var BACKTRAIN.LB NULL
     var BACKTRAIN.THB NULL
     var BACKTRAIN.STAVES NULL
     var BACKTRAIN.POLEARMS NULL
     var BACKTRAIN.BOW NULL
     var BACKTRAIN.CROSSBOW NULL
     var BACKTRAIN.SLING NULL
     var BACKTRAIN.LT NULL
     var BACKTRAIN.HT NULL
     var BACKTRAIN.BRAWL NULL
     var BACKTRAIN.OH NULL
     var BACKTRAIN.BS NULL
## BACKTRAIN STEALTH (OFF or ON)
     var BACKTRAIN.STEALTH ON
## BACKTRAINING LOOTING OPTIONS (ON or OFF)
     var B.Loot.Gems ON
     var B.Loot.Boxes OFF
     var B.Loot.Metals ON
     var B.Loot.Scrolls ON
     var B.Loot.Collectibles OFF
     var B.Loot.SpiderParts OFF
## BACKTRAIN LOOTING MODE ( treasure / boxes / goods / equipment )
     var B.Loot.Option goods
## BACKTRAIN ARMOR (ARMOR ONLY FOR BACKTRAIN ROUTINE) (Set to NULL to not check a piece)
     var B.CHEST.ARMOR NULL
     var B.FACE.ARMOR NULL
     var B.HEAD.ARMOR NULL
     var B.ABDOMEN.ARMOR NULL
     var B.BACK.ARMOR NULL
     var B.ARM.ARMOR NULL
     var B.HAND.ARMOR NULL
     var B.LEG.ARMOR NULL

##############################################################
### COMBAT GENERAL SETTINGS
##############################################################

## GEM POUCH DESCRIPTION - DR IS TRICKY WITH GEM POUCHES!! BE SPECIFIC - use "<color> pouch" only! 
## **RECOMMEND DUMPING ALL POUCHES AND GET NEW ONES FROM GEM SHOP ON FIRST SETUP**
## WHEN ASKING FOR NEW GEM POUCHES, "ASK NPC FOR <COLOR> POUCH" - ~DO NOT 'ASK FOR GEM POUCH' OR just 'POUCH'~ - JUST 'ASK <NPC> FOR BLACK POUCH'
## Then Set the var to the 'color' pouch you have. ie var gemPouch black pouch
     var gemPouch black pouch
# TIE GEM POUCHES? (ON or OFF) 
# TIE POUCHES FOR MORE STORAGE/LESS INVENTORY SPACE USE - but have to sell the FULL TIED POUCHES AT SPECIAL SHOPS or get TRADER to sell them!
# IF HUNTING IN SHARD OR ROSSMAN - NO WORRY AS SCRIPT SELLS TIED POUCHES IN THOSE GEM SHOPS. IF hunting in XING/ISLANDS will have to get Trader to sell pouches.
     var TiePouch OFF
# WORN GEM POUCH? (ON or OFF) (OFF will STOW your gem pouch / ON will wear it )
     var Gempouch.Worn OFF

## RESTOCK AMMO? (ON or OFF) *SCRIPT WILL AUTOMATICALLY CHECK IF YOU RUN OUT OF AMMO AND ATTEMPT TO RESTOCK
     var AmmoStock ON
# Skinning Knife Name (Mandatory if not a worn knife)
     var Skinning.Knife knife
# BELT/WRIST/ANKLE ~WORN~ SKINNING KNIFE? (ON or OFF)
     var BeltKnife ON
#### COMBAT OPTIONS ####
# OFFHAND THROWING - (ON or OFF) SET TO ON IF YOU WANT TO ROTATE RIGHT/LEFT HANDS WHILE THROWING LT/HT
     var OffhandThrow ON
# THROWING TYPE (LOB, THROW or HURL) *LOB will NEVER stick / less damage - HURL ALWAYS STICKS/ max damage. THROW is inbetween
## IF YOU USE A SHARP THROWING WEAPON (LIKE SPEAR) ALWAYS USE LOB! THROW WILL STICK WITH A POINTY WEAPON!
## LOB IS THE SAFEST - LOB NEVER STICKS! - THROW IS SAFE ~IF USING A BLUNT THROWN WEAPON~ - HURL ALWAYS STICKS - AVOID HURL 
     var ThrowType throw
# BONDED THROWING WEAPONS? (ON or OFF) - Will use INVOKE to retrieve thrown weapon
     var Bonded OFF
# ROAMING (ON or OFF) - Will ROAM around to different critter rooms if it doesn't find a creature during bored routine
     var Roaming ON
# USE WEAK ATTACKS (ON or OFF) - Will use WEAK attacks for melee training (good for backtraining or preserving fatigue/balance)
     var WeakAttack OFF
# AIM ACTIONS (Set an array of actions) - ACTIONS TO PERFORM WHILE WAITING FOR FULL AIM (WITH RANGED/SPELLS) Separate with |
     var AimActions bob|attack|attack left
# TRAIN STEALTH? TRAIN STEALTH DURING MELEE / THROWN / BRAWLING ROUTINES
     var TrainStealth ON
## LOOT MONSTERS? (ON or OFF) - LOOT MONSTERS?
## OFF WILL SKIP LOOTING ALL MONSTERS ~PERIOD~ AND LET THEM ROT
     var Loot.Monsters ON
## LOOT OPTION TO USE - TREASURE / BOXES / EQUIPMENT/ GOODS or ALL
     var Loot.Option GOODS
## LOOTING OPTIONS (ON or OFF) - LOOT OPTIONS FOR MAIN COMBAT
     var Loot.Gems ON
     var Loot.Boxes ON
     var Loot.Metals ON
     var Loot.Scrolls ON
     var Loot.Collectibles OFF
     var Loot.SpiderParts OFF
# MAX BOXES (Set a number) - MAX number of BOXES to pick up before turning Box looting off for that run
     var Max.Boxes 25
# DISSECT (ON or OFF) - DISSECT mobs for First Aid training in Combat (Alternates with SKINNING depending on Learning Rates)
     var Dissect ON
# SKINNING OPTIONS (ON or OFF)
# SKIN ON but BUNDLE OFF will skin but DROP all skins. SKIN collecting only supported with bundles ON!
     var Skin ON
     var Bundle ON
# TIE BUNDLES (ON or OFF) (Turns on automatically when F2P is ON) - LOWER ITEM COUNT BY TYING UP YOUR BUNDLES
     var TieBundle ON
# BUNDLE LOCATION (SET to NULL to use ANY open location or set a preferred location (shoulder / waist / back / belt / around shoulder / over shoulder)
     var BundleLocation NULL
# ArrangeTarget (SET TO SKIN, BONE or PART - or NULL to skip arrange)
## Set ArrangeTarget to SKIN/BONE/PART to Arrange one time
## Set ArrangeALL to ON to arrange max times
     var ArrangeTarget SKIN
     var ArrangeAll OFF
## ArrangeAlways (ON or OFF) - Set ON to ALWAYS arrange regardless of skinning learningrate. OFF will SKIP ARRANGING when Skinning learning is locked
     var ArrangeAlways OFF
# MAX BUNDLE SIZE - Max amount of skins to keep in bundle before creating a new bundle (DEFAULT: 30  MAX: 200)
     var MaxBundle 40
# Set SNIPE to ON to use SNIPE (THIEF/RANGER/NECRO ONLY)
     var Snipe ON
# Set POACH to ON to use POACH instead of SNIPE (SNIPE overrides this setting if SNIPE is ON - TURN SNIPE OFF TO USE THIS)
     var Poach OFF
# RANGED AIM PAUSE. Set to 0 for a Full Aim. Set number of seconds to pause that many seconds before firing
     var SNAP.FIRE 6
# RETREAT WHILE USING RANGED WEAPONS/BUFFING? (ON or OFF) - Will RETREAT to stay at ranged when using ranged weapons
     var Retreat OFF
## DANCE / COUNT Critters - Set min number of critters to "dance" with before you start killing. 
## Leave Dance.Count 0 to kill EVERYTHING. Set 1 to dance with 1 creature until a 2nd comes in, etc. If set to 1 will ALWAYS leave 1 creature in your room.
     var Dance.Count 0
## TACTICS TRAINING (ON OR OFF) - Train TACTICS in Combat
     var Tactics ON
# APPRAISE CREATURES - (ON or OFF) to APPRAISE ALL CREATURES
     var APPRAISE ON
# HUNT OPTION (HUNT every ~75 seconds unless perception locked)
     var HUNT ON
## APPRAISE ITEMS WHEN NO CRITTERS IN ROOM? (ON or OFF)
     var APP.ITEMS OFF
## ITEMS TO APPRAISE (Set to NULL to not use) SET YOUR WORN ITEMS TO QUICK APPRAISE 
     var app1 NULL
     var app2 NULL
     var app3 NULL
## SANOWRET CRYSTAL? (ON or OFF) - ON will exhale crystal every ~100 seconds *IF CONCENTRATION ALLOWS
     var Crystal OFF
## USE SANORWRET CRYSTALS IN COMBAT? (ON or OFF) - ON will use Sanowrets in combat (Turning ON WILL effect concentration and hinder spell casting - not recommended for most)
     var SanowretCombat OFF
## ZILLS? (ON or OFF) - FOR WORN INSTRUMENTS - ON will play Zills during certain times (Repairing armor, collecting, etc)
     var Zills ON
## Zill name ( zills / cowbell / etc )
     var Zill.Name zills
# F2P CHARACTER (ON or OFF) - If set to ON - Script will escape combat and go to town run when you get an inventory count warning
     var F2P OFF
# BIOMECHANICAL TARANTULA? (ON or OFF) - IF ON - Will pick a (semi-)random near locked skill to drain every 10 minutes while in combat
     var Tarantula OFF
     var Tarantula.Name tarantula
## TARANTULA SKILLS TO CHECK - SET AN ARRAY OF SKILLS TO CHECK AGAINST FOR TARANTULA DRAIN
## MUST EXACTLY MATCH THE GENIE VARIABLE NAMES! THESE ARE THE SKILLS TARANTULA WILL CHECK FOR EACH SCHOOL
     var Magic.skills Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Arcana
     var Armor.skills Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor
     var Survival.skills Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing
     var Weapons.skills Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow
     var Lore.skills Appraisal|Tactics|Performance
# WARHORN? (ON or OFF) - For Barbarians and Bards only.
     var WarHorn OFF
## WAND SUPPORT (NULL to NOT use) (MEF wand / WoW wand / WoTP wand etc.) Set up to 2 sets of wands to use! Must use actual verb of wand!
## CAN SET AN ARRAY OF WANDS FOR EACH VAR ex- var Wand1 bloodwood branch|oaken staff|crystal
     var Wand1 NULL
     var Wand2 NULL
## WAND CONTAINERS *Must use 2 different containers to store Wands if using 2 identical named wands)
     var Wand1.Container belt
     var Wand2.Container cloak
## Wand Weapon - (NULL or WEAPON NAME) SET A MELEE WEAPON TO BUFF WHEN USING WANDS WITH A WEAPON BUFF
     var WandWeapon NULL
## EGG SUPPORT (ON or OFF)*Uses the HE Gift Egg in Combat every ~15 minutes to invoke more mobs
     var EGG OFF
## ASTROLABE (ON or OFF) - Uses an Astrolabe every 30 mins if ON (Will rotate if you use 2)
     var ASTROLABE OFF
## Set the name of the astrolabes - (2 words ONLY i.e - ornate astrolabe, twisted astrolabe)
     var ASTROLABE1 NULL
     var ASTROLABE2 NULL
     var Astro1.Container NULL
     var Astro2.Container NULL
## ORB RUB IN COMBAT (var Orb.Rub ON or OFF) - TURN ON TO RUB FAVOR ORB IN COMBAT EVERY ~40 MINUTES
## *NOTE THAT SCRIPT AUTOMATICALLY RUBS ORB ~ONE TIME~ EVERY FULL LOOP OF SCRIPT REGARDLESS OF THIS VARIABLE
     var Orb.Rub OFF
####################################################################################################
# ARMOR SWAP - (ON or OFF) - SPECIAL ARMOR SWAPPING ROUTINE FOR HELMS ONLY
# WILL SWAP OUT A SINGLE PIECE OF PLATE/BRIG/CHAIN/LIGHT HELM EVERY ~5 MINUTES IN COMBAT
     var Armor.Swap OFF
# IF Armor.Swap is ON - THEN ALL THE ARMORS BELOW MUST BE SET CORRECTLY!
# SET EVERY PIECE OF ARMOR TO SWAP BELOW, MUST SET AN ARMOR PIECE FOR ALL FOUR TYPES - TWO WORDS ONLY!
# ONE PIECE SHOULD MATCH YOUR MAIN ARMOR HELM
     var Light_Armor.Helm steelsilk balaclava
     var Chain_Armor.Helm chain balaclava
     var Brigandine.Helm brigandine balaclava
     var Plate_Armor.Helm NULL
####################################################################################################
# HEAVY ARMOR REMOVAL - (ON or OFF) - ON will take off plate/brig/chain armor before backstab/stealth routines
# Generally only needed for noobs with less then ~200 ranks in armors
     var Armor.Noob OFF
# Set Plate/Brig/Chain pieces here (USE EXACT SYNTAX) (If no armor to remove set to NULL)
     var PLATE1 gauntlet
     var PLATE2 greaves
     var PLATE3 NULL
     var PLATE4 NULL
# Set Light Armor Pieces to Swap in place of the Heavy armor pieces above - if any (set to NULL to not use)
     var LIGHTARMOR1 rugged gloves
     var LIGHTARMOR2 rugged greaves
     var LIGHTARMOR3 NULL
     var LIGHTARMOR4 NULL
####################################################################################################

##############################################################
# TOWN RUN / SPECIAL MODULES - SETTINGS FOR TOWN 
# AUTO HEALER / SELL GEMS/SKINS, BANK, OPTIONAL MODULES
##############################################################

# RETURN TO COMBAT MODULE (ON or OFF) - RESTARTS SCRIPT AND RETURNS TO COMBAT WHEN TOWN RUN IS FINISHED
# IF OFF - SCRIPT WILL ~ABORT~ ONCE TOWN RUN IS COMPLETE - LEAVE THIS ON FOR INFINITE AFK SCRIPTING
     var RETURN.TO.COMBAT ON
# AUTOHEAL (ON or OFF) - ON - LET SCRIPT HANDLE AUTO-HEALING AFTER COMBAT (DEPENDING ON YOUR GUILD/SETTINGS) 
# LEAVE THIS ON UNLESS YOU WANT TO HANDLE HEALING YOURSELF MANUALLY! (OR WITH ANOTHER SCRIPT) 
# TURNING THIS OFF WILL ~ABORT SCRIPT AFTER ESCAPING FROM COMBAT~! AND WILL PARSE: HELP ESCAPE PLZ!
     var AUTOHEAL ON
# HEAL ALL (ON or OFF ) - HEAL.ALL ON = FULLY HEAL IF YOU HAVE ~ANY~ WOUNDS AT ALL (even minor scars) 
# HEAL.ALL OFF = WILL SKIP HEALING IF INSIGNIFICANT WOUNDS (minor scratches etc)
     var HEAL.ALL ON
# SELL SKINS (ON or OFF) - VISIT FURRIER - SELL SKINS/BUNDLES 
     var SELLSKINS ON
# SELL GEMS (ON or OFF) - VISIT GEM SHOP - SELL ALL GEMS/POUCHES
     var SELLGEMS ON
# SELL METALS (ON or OFF) - VISIT GEM SHOP - SELL ALL LOOSE METALS/NUGGETS/BARS (except those in your Crafting Container) 
     var SELLMETALS ON
# BUY HERBS? (ON or OFF) - VISIT HERB SHOP - AUTO RESTOCK ON HEALING HERB SUPPLIES (IF in city with Herbalist)
     var HERBS ON
# USE HERBS IN COMBAT? (ON or OFF) - If ON - Script will eat herbs during combat every ~5 minutes if needed
     var HERBS.COMBAT ON
## Container.Herb - SET CONTAINER TO STORE YOUR HERBS IN (Can be a stackable herb container)
     var Container.Herb %Container
# BANK RUN (ON or OFF) - VISIT BANKS - DEPOSIT MONEY AFTER TOWN RUN 
     var BANKRUN ON
# INVENTORY CHECK (ON or OFF) - TURNS ON INVENTORY CHECKS FOR DUMPING ANY COMMON TRASH ITEMS IN INVENTORY (OR EXCESS GEM POUCHES / BUNDLING ROPE )
     var INVCHECK ON
# TRASH DUMP (ON or OFF) - IF ON WILL DUMP ANY ITEM IN YOUR TRASH VARIABLE (GLOBAL VARIABLE AT VERY TOP OF VARIABLE FILE)
     var TRASH.DUMP ON
# POUCH DUMP (ON of OFF) - IF ON - DUMPS ANY GEM POUCHES IN YOUR INVENTORY THAT ~DO NOT MATCH~ THE COLOR/DESCRIPTION OF YOUR PRIMARY GEMPOUCH ( var gemPouch )
# WILL ALSO DUMP YOUR NORMAL GEM POUCHES IF YOU HAVE MORE THAN 10 OF THEM until you only have 10 MAX (Prevent buildup of ~50 rogue pouches) 
     var POUCH.DUMP ON

## SHARD CITIZEN (ON or OFF) - Must be a citizen of shard
     var Shard.Citizen ON
# GET FAVORS? (ON or OFF) - (ONLY WORKS IN CROSSING / SHARD / HAVEN )
     var GET.FAVORS ON
     var FAVOR.GOD damaris
# REPAIR ARMOR? (ON or OFF) - REPAIR ALL ARMOR / WEAPONS DURING TOWN RUN (MUST HAVE MONEY IN LOCAL BANK)
     var REPAIR.ARMOR ON
## USE MAGIC REPAIR KITS? (SET NULL/OFF TO NOT USE)
## REPAIR.KIT and REPAIT.KIT.2 ARE FOR FULL REPAIR KITS THAT REPAIR ALL ARMOR ~AND~ WEAPONS
## REPAIR.KIT.WEAPON and REPAIR.KIT.ARMOR ARE ONLY FOR KITS THAT ONLY REPAIR ARMOR OR WEAPONS!
## YOU MUST SET THE CONTAINER THAT EACH SPECIFIC KIT IS FOUND IN! IT TREATS THIS CONTAINER LIKE GEMPOUCH.CONTAINER AND KEEPS CLOSED! *CAN BE SHARED WITH GEMPOUCH.CONTAINER!
     var REPAIR.KIT NULL
     var REPAIR.KIT.2 NULL
     var REPAIR.KIT.WEAPON NULL
     var REPAIR.KIT.ARMOR NULL
     var REPAIR.KIT.CONTAINER NULL
     var REPAIR.KIT.2.CONTAINER NULL
     var REPAIR.KIT.3.CONTAINER NULL
# CLIMBING/SWIMMING RUN (ON or OFF) - ATHLETICS TRAINING 
     var CLIMBING ON
## MAGIC CLIMBING ROPE (ON or OFF) - CHECK FOR MAGIC CLIMBING ROPE - USES THAT INSTEAD OF DEFAULT CLIMBING RUN
     var MAGIC.ROPE OFF
     var ROPE.NAME climbing rope
     var Rope.Container NULL
## WINDBOARD (ON or OFF) - TRAIN ATHLETICS WITH A WINDBOARD INSTEAD
     var WINDBOARD OFF
# COLLECTING - (ON or OFF) - OUTDOORSMANSHIP TRAINING - COLLECT ROCKS/COINS
     var COLLECTING ON
# BRAIDING - (ON or OFF) - TRAINS BRAIDING (ENGINEERING) - ONLY TRAINS TO ~70 RANKS!
     var BRAIDING ON
# RAVEN'S COURT SCHOLARSHIP STUDY (ON or OFF) - ONLY IN CROSSING !
     var RAVEN ON
# TEXTBOOK / COMPENDIUM? (ON or OFF) - TRAIN SCHOLARSHIP/FIRST AID W/ ANATOMY TEXTBOOK
     var TEXTBOOK OFF
# TEXTBOOK TYPE - Textbook or Compendium
     var TEXTBOOK.TYPE textbook
     var Textbook.Container cloak
# SKINNING/FA TRAINER - (ON or OFF) ONLY WORKS FOR THE MAGIC SKINNING / FA TRAINERS
## The ones with 105 uses per day or infinite ( https://elanthipedia.play.net/Item:Small_blue-belly_crocodile_with_prominently_stitched_seams )
     var SKINTRAINER OFF
     var SKINTRAIN.NOUN crocodile
     var SKINTRAIN.CONTAINER goldenweave belt
# EPISTEMIC JOURNAL - For Epistemic Journals ONLY - Writes to Journal every 24 hours
# Set JOURNAL.TYPE ( NULL to NOT USE ) - Set NOUN of item to use ( traveler's diary / explorer's log / soldier journal / etc)
     var JOURNAL.TYPE NULL
# DISARM BOXES? (USES DISARM SCRIPT - MAKE SURE YOU SET THE VARIABLES UP IN disarm-vars)
     var DISARM ON
# BURGLE RUN (ON or OFF) - BURGLE RUN USING THE BURGLE SCRIPT (BURGLE.PAWN ON will Pawn all Burgle items)
     var BURGLE ON
     var BURGLE.PAWN ON
# BURGLE DUMP (ON or OFF) - Burgle Dump ON will DUMP/TRASH any Burgle item that does not sell at pawn shop
     var BURGLE.DUMP ON
# STEALING RUN (ON or OFF) - Does STEALING Run with the Ultimate Stealing Script
     var STEAL OFF
# PERFORMANCE RUN (ON or OFF) - DEDICATED PERFORMANCE TRAINING RUN DURING TOWN RUN (Uses your Zill.Name variable to train)
     var PERFORMANCE ON
# MAGICAL RESEARCH TRAINING (ON or OFF) - DEDICATED MAGICAL RESEARCH TRAINING DURING END OF TOWN RUN - TAKES A BIT OF TIME! 
     var MAGICAL.RESEARCH OFF
# PRIMARY MAGICAL RESEARCH TYPE ( SET TO NULL TO CHOOSE AUTOMATICALLY BASED ON LEARNING )
# OPTIONS ARE: FUNDAMENTAL, STREAM, AUGMENTATION, UTILITY, WARDING, SORCERY, FIELD, SPELL
     var RESEARCH.TYPE NULL
# TEACHING? (ON or OFF) - If ON, will attempt to teach your other characters/people in the Friends variable
     var TEACH OFF
     var TEACH.SKILL hiding
     var TEACH.SKILL.2 evasion
## SUPPORT FOR MASTERCRAFT TRAINING
## IF YOU USE MASTERCRAFT - SET EACH SKILL ON THAT YOU WANT TO TRAIN
## *YOU MUST SET UP MASTERCRAFT - TOOLS ETC SEPARATELY
     var ALCHEMY OFF
     var ENGINEERING OFF
     var FORGING OFF
     var OUTFITTING OFF
     var ENCHANTING OFF
## VAULT SWAP (ON or OFF) - ON WILL TEMPORARILY SWAP YOUR 'var CONTAINER' FOR A SPECIAL BAG IN YOUR VAULT FOR MASTERCRAFT PURPOSES ONLY!
## AFTER MASTERCRAFT IS OVER, GOES BACK TO VAULT AND SWAPS BACK TO ORIGINAL BAG - PUTS YOUR CRAFTING BAG BACK IN THE VAULT!
## MAKE SURE YOU HAVE ENOUGH ROOM IN YOUR VAULT! THE SWAP CONTAINER SHOULD FIT ON THE SAME BODY SLOT AS THE BAG YOU ARE SWAPPING OUT!
     var VAULT.SWAP OFF
## VAULT CITY - SET THIS TO THE CITY NAME WHERE YOU HAVE YOUR VAULT - IF VAULT.SWAP IS ~ON~ IT WILL RUN TO THIS CITY FIRST
     var VAULT.CITY FC
## SET THE NAME OF YOUR CRAFTING BAG IN YOUR VAULT - MUST HAVE ~ALL YOUR CRAFTING TOOLS~ IN THIS BAG!!
## MAKE SURE TO BE SPECIFIC WITH YOUR CONTAINER VARIABLES SO THEY DONT GET MIXED UP! THIS CONTAINER SHOULD USE THE SAME BODY SLOT AS YOUR VAR CONTAINER!
     var CRAFTING.BAG dreamweave lootsack

# ALMANAC (ON or OFF) - USE ALMANACS (That trains random skill OR pick-a-skill every 10 minutes)
     var ALMANAC OFF
## ALMANAC VERB - if using the special encyclopedic almanac, MUST be set to 'encyclopedic almanac' to use the pick a skill function
     var ALMANAC.TYPE almanac
     var Almanac.Container goldenweave belt
## ALMANAC SKILLS to check/pick for encyclopedic almanac i.e. Sorcery|Forging|Engineering
## The default list has ALL skills listed - You can remove skills you don't want to boost
     var ALMANAC.LEARN Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor|Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing|Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow|Appraisal|Tactics|Performance|Enchanting|Forging|Engineering|Alchemy|Outfitting|Arcana
# LOCKPICK TRAINING ITEM? (Set to NULL to not use) - Must match EXACTLY with item name in hands (2 words only)
# For MAGIC LOCKPICK TRAINING ITEMS - * Assumes you use a WORN lockpick ring/case 
     var LOCKPICK.ITEM NULL
## SET A SECONDARY LOCKPICK ITEM HERE IF YOU HAVE A SECONDARY (OR SET TO NULL)
     var LOCKPICK.ITEM.2 NULL
## Lockpick.Container is where the MAGIC LOCKPICK ITEMS should be stored (NULL to try wear them)
     var Lockpick.Container NULL
# PILGRIM BADGES (ON or OFF) *CLERIC/PALADINS ONLY! - VISIT UNVISITED BADGE LOCATIONS - PRAY TO BADGE
     var PILGRIM ON
# POWERWALKING (ON or OFF) - FOR MAGIC USERS - DO A POWERWALK DURING TOWN RUN 
     var POWERWALK ON
## SCRIPT CHECK LOGIC - TURN SCRIPT CHECK LOGIC (ON OR OFF) - WARNING - THERE ~WILL~ BE FALSE POSITIVES!! UNAVOIDABLE!!
## IF IT DETECTS ANY GM SCRIPT CHECKS - WILL ~ATTEMPT~ TO AUTOMATICALLY HANDLE IT AND/OR RUN AWAY (Not Log Out)
     var SCRIPTCHECK OFF
## Setting NO.CONTACT to "ON" will log out for 5 minutes if someone tries to drag you or hold your hand (DEFAULT: OFF)
## WARNING! IT WILL ALSO ESCAPE COMBAT IF ANYONE TALKS IN YOUR COMBAT ROOM! INCLUDING CRITTERS! SO IT CAN FALSE POSITIVE ON TALKING CRITTERS
     var NO.CONTACT OFF
## LOG.ON.STUN (ON or OFF) Set to "ON" to log out if you are too hurt/stunned and are unsuccessful running away (DEFAULT: ON)
     var LOG.ON.STUN OFF
## LOG.ON.DEATH (ON or OFF) Set OFF to stay logged in even if you die (DEFAULT: ON)
     var LOG.ON.DEATH ON
## TOTAL TIME ONLINE - MAX TIME TO STAY ONLINE (IN SECONDS) After this time has passed will idle and logout to avoid AFK checks (Set to 0 to always stay online)
     var ONLINE.TIME 0
## FANG COVE? (ON or OFF) - Do you want to go to FANG COVE for healing/town stuff (Only works in Prime if Premium)
     var FANGCOVE ON
## USE PREMIUM JUMP JEWELRY? (ON or OFF) - Will use Premie JJ to teleport to Fang Cove for healing/bundles/gems/etc
     var JumpJewelry OFF
     var JewerlyVerb ironwood ring
## PERSONAL EMPATH HEAL (Put EMPATH'S NAME HERE to use. NULL to turn off) - If you use a personal empath to heal
## Setting this to anything OTHER than NULL/OFF will turn OFF the triggers to nod to someone when they ask if you want healing
     var PocketEmpath NULL
## EmpathRoom is ROOM NUMBER where you can find your PERSONAL EMPATH. (MUST be in the CITY you go to for TOWN RUN)
     var EmpathRoom NULL
## BankBot - Used for F2P characters to tip a bankbot any remaining coin at end of town run
## Set Tipping to 1, Bankbot name and Tiproom = room number bankbot is at, in your home town
     var Tipping 0
     var BankBot morph
     var TipRoom 753
## CLAN ITEM (TF USE ONLY)
     var CLAN OFF
     var CLAN.ITEM sphere
## LIGHTER ITEM (For using a Lighter to start fires instead of flint and blade)
## USAGE - var LIGHTER (ON or OFF) - Lighter.Name = verb of the item
     var Lighter OFF
     var Lighter.Name world dragon
## CUSTOM TOWN SCRIPT - (Must be the exact name of the script (IGNORE .CMD - JUST USE NAME)
## Set your own script to run during the town run
## YOU MUST HAVE A PARSE AT THE END OF YOUR SCRIPT: put #parse SCRIPT FINISHED!
## IF YOU DO NOT HAVE THIS PARSE THEN UBER WILL NOT RECOVER PROPERLY!
     var Custom.Script NULL
## RPA BESTOW? (ON or OFF) - MUST BE IN THE PIRP SYSTEM TO BESTOW RPAS! https://elanthipedia.play.net/RPA_command
     var RPA ON
## LIST THE PEOPLE YOU WANT TO BESTOW RP POINTS TO BELOW IN AN ARRAY!!
## ie. var PirpList Name1|Name2|Name3|Name4|Name5
     var PirpList Raidboss|Healbitch|Illuminati|Breckin|Ryhs|Rhoat|Shepherd|Kohen|Worril|Odium|Morvetan|Orcher|Amroth|Mephos|Yew|Lorak|Wryll|Rellie|Beerfest|Bayndayd|Xana|Crivic|Blaakwulf|Wong|Findal|Regnar|Lakshmi|Vivica|Phucker|Jimdickens|Kiroq|Bleed|Rutinger|Nekhet|Leecya|Arazenya|Kithkani


######################################################################################################################
######################################################################################################################
# GENERAL MAGIC VARS - ALL MAGIC USERS MUST SET THESE VARIABLES
# GENERIC MAGIC VARIABLES FOR ALL MAGIC USERS
######################################################################################################################
######################################################################################################################
# SMART MANA FOR SPELLS? AUTO-DETERMINES OPTIMAL MANA FOR SPELLS AFTER A NEW SETUP (OR EVERY ~2 WEEKS IN GAME)
# SMART MANA WILL AUTOMATICALLY ADJUST YOUR MANA LEVELS UP AND DOWN AS YOU GAIN IN RANKS FOR OPTIMAL LEARNING
# (ON or OFF) - RECOMMEND LEAVING ON - SETTING THIS ON WILL OVERRIDE ALL MANUAL MANA SETTINGS 
# TURNING SMART.SPELLS OFF MEANS YOU WILL ~HAVE~ TO SET MANA MANALLY AND DO MUCH MORE FINE TUNING 
     var SMART.SPELLS ON
# CAMB HEAVY (ON or OFF) (OFF by default) - ON WILL MAKE SMART MANA PUT MORE MANA INTO CAMBRINTH THEN MAIN PREP
     var Camb.Heavy OFF
# MAGIC RATE - (NULL is RECOMMENDED) Set the MIN Magic Rate to reach before switching to a different spell school. 
# SETTING TO A NUMBER WILL SPAM THE SAME SPELL UNTIL YOU REACH DESIRED LEARNINGRATE. Set to NULL to cycle through spells normally 
     var Magic.Rate NULL
# MAGIC SNAP CAST. Set to 0 for Full Aim. Set to desired number of seconds to pause for that many seconds before casting
     var MAGIC.SNAP 0
# CAMBRINTH CHARGES - Number of Times to Charge your cambrinth (or harness if Cambrinth is NULL) each time!
# RECOMMEND LEAVING THIS AT 1 - 2 AT MAX - THIS VARIABLE TIES INTO HOW SMART MANA CALCULATES MANA
     var CambrinthCharge 1
# OFFENSIVE SPELL MANA AMOUNTS - Set BASE MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Mana 15
     var Debilitation.Mana 15
     var Utility.Mana 15
     var Augmentation.Mana 15
     var Warding.Mana 15
     var Sorcery.Mana 15
# OFFENSIVE SPELL CAMBRINTH AMOUNTS - Set CAMBRINTH MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Camb 20
     var Debilitation.Camb 20
     var Utility.Camb 20
     var Augmentation.Camb 20
     var Warding.Camb 20
     var Sorcery.Camb 20
# USE HARNESS / CAMBRINTH FOR OFFENSE SPELLS (ON or OFF)
# TURN OFF TO SKIP HARNESS/CAMBRINTH COMPLETELY
     var Use.Cambrinth ON
# USE HARNESS / CAMBRINTH FOR BUFFS (ON or OFF)
     var Use.Cambrinth.Buffs ON
# CAMBRINTH ITEM for charging BUFFS/SPELLS (Set to NULL to not use)
     var Cambrinth cambrinth ring
     var Cyclic.Cambrinth NULL
# CAMBRINTH MANA AMOUNT FOR SPELLS - Amount of Mana to put in CAMBRINTH for Magic Tattoos / Harness for Cyclics when No Raw Chanelling feat
     var CambrinthMana 5
# CAMBRINTH MANA FOR Cylics - Amount of Mana to put in cambrinth for Cylics ONLY
     var CyclicCharge 10
# SLOW.CAST (ON or OFF) - OFF IS DEFAULT - Slow Cast ON will cast offensive spells about half as often as normal
# SLOW.CAST OFF (Default) will spam spells in between attacks as much as possible (mana permitting)
     var Slow.Cast OFF
# NO CAMBRINTH USE DURING TM / DEBIL SPELLS (ON or OFF)
# IF YOU SET THIS ON, SCRIPT WILL SKIP USING A CAMBRINTH FOR TM OR DEBIL SPELLS
     var NoCambTM OFF
# POWER PERCEIVE (Perceives every ~5 minutes)
     var POWERP ON

# RITUAL FOCUS ITEM (REQUIRED for RITUAL SPELLS - set Ritual to NULL to not use)
# Ritual.Container can be set to any Container - or set to NULL to wear it first
     var Ritual staff
     var Ritual.Container %Container
# SORCERY RITUAL FOCUS (Separate ritual focus for Sorcery IF NEEDED)
     var Sorcery.Focus NULL
# TM DAMAGE FOCUS ITEM - IF SET WILL USE TM FOCI MODE EVERY ~HOUR (set to NULL to not use)
     var TMFoci NULL
     var TMFoci.Container %Container
# USE SYMBIOSIS ON ATTACK SPELLS? (ON or OFF)
# ONLY USEFUL AT ~HIGHER RANKS~ OF MAGIC - ~NOT~ FOR NOOBS!!
     var Target.Symbiosis OFF
     var Utility.Symbiosis OFF
     var Augmentation.Symbiosis OFF
     var Warding.Symbiosis OFF
     var Sorcery.Symbiosis OFF
     var Debilitation.Symbiosis OFF
# USE SYMBIOSIS ON BUFFS? (ON or OFF) - FOR HIGHER RANKS ONLY
     var Symbiosis.Buffs OFF

# MAGIC TATTOO (Set to NULL or the FULL SPELLTIMER NAME i.e - IronConstitution / MajorPhysicalProtection) - Will use a Magic Tattoo every ~5-10 minutes
# FULL SPELLTIMER NAME MUST ALSO BE SET IN YOUR BUFFS OR SPELLS - USE SORCERY.CAMB (ABOVE) TO SET CAMB MANA FOR MAGIC TATTOO
     var Magic.Tattoo NULL
# MAGIC TATTOO CAMBRINTH/HARNESS MANA - Set the amount of Camb Mana you want to boost your tattoo with
     var Tattoo.Camb 30
# HEROIC TATTOO (ON or OFF) - ONLY FOR HEROIC TATTOOS! (Normal tattoos use Magic.Tattoo)
# VERY BASIC - WILL JUST INVOKE TATTOO / CAST ON A 1 HOUR COOLDOWN
     var Runic.Tattoo OFF

#########################################################################################
# GUILD SPECIFIC OPTIONS BELOW
# SET THE GUILD OPTIONS FOR THE CURRENT CHARACTER YOU ARE EDITING 
########################################################################################
########################################################################################
# NECROMANCER SETTINGS
# SET NECRO.HEAL ON TO USE NECRO HEALING - (Consume Flesh / Devour depending on skills)
     var Necro.Heal ON
## NECROHEAL CREATURE (SET A ~LOW LEVEL~ CREATURE TO KILL ~ONLY FOR DEDICATED HEALING PURPOSES~)
## IDEALLY SET THIS TO A CREATURE NEAR YOUR "HOME CITY" SO YOU DON'T HAVE FAR TO RUN FOR HEALING
     var NecroHeal.Critter GOBLIN SHARD
# SET NECRORITUAL ON TO PERFORM RITUALS IN COMBAT (Preserve/Harvest/Dissect/Butchery/etc)
     var NecroRitual ON
## FORSAKEN? (ON or OFF) - IS NECRO FORSAKEN?? IF ON - WILL AVOID TOWNS/SERVICES AS MUCH AS POSSIBLE!! 
## *Not fully tested/implemented-may not be perfect- but should avoid towns. May have issues REPAIRING ARMOR Unless USING FC* 
     var Forsaken OFF
## RISEN? (ON or OFF) - CREATES RISEN MINIONS IN COMBAT (CAREFUL - GENERATES DIVINE OUTRAGE!) 
     var Risen OFF
## QUICKEN EARTH - ON TO CHECK FOR AND SUMMON DIRT CONSTRUCTS EVERY ~5 MINUTES
     var QuickenEarth OFF
     var QE.Mana 10
     var CFB.Mana 10
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Necro.Cyclics |USOL|ROC
     var Necro.Cyclics.mana |5|4
## Necromancer ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Necro.Target.Spell ACS|VS
     var Necro.Debilitation.Spell HP
     var Necro.Utility.Spell GAF
     var Necro.Augmentation.Spell Obfuscation
     var Necro.Warding.Spell MAF
     var Necro.Sorcery.Spell MPP
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Necro.Buffs IVM|REI|ROC|CH
########################################################################################
########################################################################################
### BARD SETTINGS
# Cyclic Spell Setup
# YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST be set for each individual cyclics!
# YOU MUST SET cyclic.mana in an array to match!! 6 cyclic - 6 mana numbers
  # SET TO NULL/OFF IF NOT TRAINING CYCLICS - THERE ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Bard.Cyclics |AEWO|HODI|FAE|CARE|PYRE|GJ
     var Bard.Cyclics.mana |5|4|5|5|5|6
## Bard ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Bard.Target.Spell BOS
     var Bard.Debilitation.Spell DMRS
     var Bard.Utility.Spell AOT
     var Bard.Augmentation.Spell WILL
     var Bard.Warding.Spell REPR
     var Bard.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Bard.Buffs |MIS|HARM|RAGE|REPR
## BARD SCREAMS? ( Screams in combat every ~60 seconds) (ON or OFF)
     var Bard.Scream ON
## BARD WHISTLE (ON or OFF)
     var Bard.Whistle ON
########################################################################################
########################################################################################
# WARRIOR MAGE SETTINGS
## USE SUMMONING? (Will train Summoning every ~3 minutes)
     var Summoning ON
## ELEMENTAL ALIGNMENT - Element can be FIRE, WATER, ELECTRIC, AETHER, AIR or EARTH
     var element FIRE
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var WM.Cyclics |EE|AC|FR
     var WM.Cyclics.mana |5|4|5
## Warrior Mage ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var WM.Target.Spell FS|FB
     var WM.Debilitation.Spell EE|ALA
     var WM.Utility.Spell ETF
     var WM.Augmentation.Spell YS
     var WM.Warding.Spell ES
     var WM.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var WM.Buffs Ease|TW|SW|Zephyr|SUF|Ignite
## ~WEAPON SUMMONING LOGIC~
# SUMMON WEAPONS (ON or OFF)
     var SummonWeapons OFF
# SUMMON ELEMENT - Must set your WEAPON SUMMON ELEMENT ( Stone/Earth (Default) - Fiery/Fire (Fiery Infusions) - Icy/Ice (Icy Infusions) - or Electric (Shocking Infusions)
     var SummonElement FIRE
# ELEMENTAL CHARGE SPELL Must be *a spammable spell* of your chosen element. Will prep at minimum mana - if you want to prep at something else put a number after
     var ChargeSpell MOA
# SUMMON WEAPON TEMPLATE (0 or 1) - 0 = Default weapon, 1 = Turn weapon to other template
     var SummonTemplate 1
# SUMMON WEIGHT/DENSITY (0 - 2 to set weapon density - Must know QUICK INFUSIONS spell)
# 0 = Lightest Weight, 1 = DEFAULT, 2 = Heavier Weight
     var SummonWeight 1
# Set weapons you want to summon (ON or OFF) - Setting to ON will override your default weapon variables at top of script
     var SummonHT OFF
     var SummonLT OFF
     var SummonSE OFF
     var SummonLE OFF
     var SummonTHE ON
     var SummonSB OFF
     var SummonLB OFF
     var SummonTHB ON
     var SummonPolearms ON
     var SummonStaves ON
## INGOT (ON or OFF) Bump up tier of weapons - Must know REINFORCED INFUSIONS spell and have a rare metal ingot
     var WMIngot OFF
## SET INGOT STORAGE CONTAINER (Set to either a sigil ring or a specific container)
     var Ingot.Container sigil ring
########################################################################################
########################################################################################
# MOON MAGE SETTINGS
## MOON MAGE ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var MM.Target.Spell DO|Burn
     var MM.Debilitation.Spell Dazzle|MB
     var MM.Utility.Spell PG
     var MM.Augmentation.Spell AUS|ART
     var MM.Warding.Spell PSY
     var MM.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var MM.Cyclics |SHW
     var MM.Cyclics.mana |5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var MM.Buffs CV|Shadows|TS|COL|Shadowling|PSY
## OBSERVATION TRAINING - PREDICT TOOL IS ONLY USED FOR PREDICTION OUTSIDE OF COMBAT! TOOL MUST ALREADY BE BONDED!!
## Predict.tool can be - BONES, CHART, MIRROR, PRISM, BOWL, DECK or NULL to turn off.
     var Predict.Tool DECK
## Read The Ripples (RTR ON or OFF) - Will Perform a RTR routine (observe spam) during town run **MUST HAVE TELESCOPE!
     var RTR OFF
## Where you store your telescope * If any - defaults to your main Container if not set
     var Telescope.Container NULL
## OBSERVE IN COMBAT (ON or OFF) - If ON will do Astrology observations in Combat every couple minutes
     var Combat.Observe ON
########################################################################################
########################################################################################
# CLERIC SETTINGS
## CLERIC ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Cleric.Target.Spell FOU|FF
     var Cleric.Debilitation.Spell PS|Malediction
     var Cleric.Utility.Spell DR|BLESS
     var Cleric.Augmentation.Spell Benediction
     var Cleric.Warding.Spell MPP|SL
     var Cleric.Sorcery.Spell dazzle
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Cleric.Cyclics |HYH|GHS|REV|SA
     var Cleric.Cyclics.mana |15|15|15|15
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Cleric.Buffs OM|Auspice|SOS|POM|MAPP|PFE|YS
## ARE YOU USING OM ORB? (MUST BE SET IN BUFFS ABOVE!) SET MANA AMOUNT TO CAST OM / CHARGE ORB WITH EACH TIME
     var OM.Mana 25
## TYPE OF ORB YOU USE FOR OM - OPTIONS:( FIRULF, MERAUD or KEREN)
     var FavorOrb meraud
## BUFF SPELLS YOU WANT TO ALWAYS KEEP ACTIVE IN YOUR OM ORB (You can just set this to var OM.Buffs %Cleric.Buffs ) 
     var OM.Buffs PFE|POM|MPP|MAPP|SAP|SOL
## CLERIC RITUALS? (Perform CLERIC RITUALS during Town Runs/in Combat)
     var ClericRituals ON
### Prayer Mat - Set to NULL to not use or the noun of the mat/rug
     var PrayerMat mat
## HOLY WATER VESSEL - Set your container you use to store/collect holy water
     var HolyWater chalice
### COMBAT COMMUNES - (ON or OFF) - Set the COMMUNES you wish to perform while IN COMBAT 
     var Commune.Meraud ON
     var Commune.Truffenyi ON
     var Commune.Tamsine OFF
### FLINT KNIFE - Set a DEDICATED WEAPON/KNIFE to STRIKE FLINT for MAKING FIRE for RITUALS
### MUST be a METAL weapon you can use to STRIKE FLINT for fire
     var FlintKnife knife
## CLERIC ALIGNMENT GOD - Set a God to align to ( https://elanthipedia.play.net/Cleric_3.0#Alignment )
## CHOOSE A LIGHT/DARK/NEUTRAL GOD ONLY - Each Type will buff 2 magic skills and penalize 3 others
## BY DEFAULT SCRIPT WILL USE ~CHADATRU~ (Which buffs AUG/WARDING - Generally the most lacking magics for Clerics)
## Set a different god if you wish to buff other magics but BE CAREFUL!!! 
     var Alignment.God CHADATRU
########################################################################################
########################################################################################
# RANGER SETTINGS
## RANGER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Ranger.Target.Spell DEVI|STAMPEDE
     var Ranger.Debilitation.Spell DEADFALL|SWARM
     var Ranger.Utility.Spell EM|BLEND
     var Ranger.Augmentation.Spell SOTT
     var Ranger.Warding.Spell EY
     var Ranger.Sorcery.Spell ECRY
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Ranger.Cyclics |CS|BES
     var Ranger.Cyclics.mana |5|5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Ranger.Buffs Athleticism|STW|EY|WOTP|OATH|ETC|Bloodthorns
########################################################################################
########################################################################################
## PALADIN SETTINGS
## PALADIN ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Paladin.Target.Spell FST
     var Paladin.Debilitation.Spell Shatter
     var Paladin.Utility.Spell AS
     var Paladin.Augmentation.Spell RW
     var Paladin.Warding.Spell SP
     var Paladin.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Paladin.Cyclics |HOW|TR
     var Paladin.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Paladin.Buffs AA|Courage|HES|RW|SR|Clarity
## SET your HOLY WEAPON here (NULL to ignore) - Holy Weapon Name
     var HolyWeapon NULL
## Holy Icon (NULL TO NOT USE/IGNORE) - Set to the noun of your icon
     var HolyIcon NULL
########################################################################################
########################################################################################
## TRADER SETTINGS
## TRADER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Trader.Target.Spell CRD|STARCRASH
     var Trader.Debilitation.Spell FLUORESCE|AVA
     var Trader.Utility.Spell NOUMENA
     var Trader.Augmentation.Spell BLUR
     var Trader.Warding.Spell IR
     var Trader.Sorcery.Spell MPP
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Trader.Cyclics |ARS|SOV
     var Trader.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Trader.Buffs |TRC|Blur|LGV|NONCHALANCE
########################################################################################
########################################################################################
# EMPATH SETTINGS
## EMPATH ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Empath.Target.Spell PARALYSIS
     var Empath.Debilitation.Spell LETHARGY|NB
     var Empath.Utility.Spell GS|HEAL
     var Empath.Augmentation.Spell REFRESH
     var Empath.Warding.Spell IC|POP
     var Empath.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Empath.Cyclics |AD|REGEN
     var Empath.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Empath.Buffs  |AGS|BS|IC|GOL|MEF|TRANQUILITY
## GAURDIAN SPIRIT? (ON or OFF) - ON will keep up Guardian Spirit while in Combat
     var Guardian.Spirit ON
## CUSTOM GUARDIAN SPIRIT (ON or OFF) - If ON - will "cast custom" instead of casting normal
     var Guardian.Custom OFF
## ATTACK CONSTRUCTS ONLY? (ON or OFF) - ON will ONLY attack constructs (unless using Absolution vs unded). OFF will attack everything
## WARNING - SETTING TO OFF WILL CAUSE EMPATHIC SHOCK!!!!
     var Construct.Only ON
## USE MANIPULATE FRIENDSHIP (ON or OFF) - ON will attempt to manipulate non-construct creatures
     var Manipulate ON
## ESCAPE COMBAT WHEN EMPATHY REACHES 0? (ON or OFF) - If Empathy LearningRate reaches 0 during combat, will go on town run
     var Empathy.Escape OFF
## EMPATH PERCEIVE HEALTH WALKS (ON or OFF) - If ON - Will go on perceive health walks around town during town run
     var Empath.Walk ON
## EMPATH UNITY LINK (ON or OFF) - FOR EMPATH HEALBOT MODE - DO YOU KNOW UNITY LINK? MUST BE 70+ CIRCLE AND 380+ EMPATHY
     var Unity ON
## TEACH CLASS (FOR HEALBOT MODE) - SET THE SKILL OF THE CLASS YOU WANT TO TEACH
     var TeachClass TM
## BLACKLIST! (FOR HEALBOT MODE) - SET THE NAMES OF THE PEOPLE TO BLACKLIST FROM HEALING SERVICES!
## MUST BE IN AN ARRAY - var Blacklist Bob|Frank|Dave
     var Blacklist NULL
########################################################################################
########################################################################################
# THIEF SETTINGS
# AMBUSH TRAINING (Use AMBUSH MOVES in COMBAT - STUN/CLOUT/SLASH)
     var Ambush ON
# SELECT KHRI TO USE (Set as many ON / OFF as you want )
# IT WILL ONLY USE AS MANY KHRI AS YOU CAN HANDLE AT ONCE, PRIORITIZING THE MOST IMPORTANT DEPENDING ON SCENARIO)
     var khriSAGACITY ON
     var khriSTEADY ON
     var khriSTRIKE ON
     var khriFOCUS ON
     var khriELUSION ON
     var khriENDURE ON
     var khriAVOIDANCE ON
     var khriADAPTATION ON
     var khriPROWESS ON
     var khriHASTEN ON
     var khriHARRIER OFF
     var khriSERENITY OFF
     var khriSIGHT ON
     var khriFLIGHT ON
     var khriCALM OFF
     var khriGUILE OFF
     var khriDARKEN ON
     var khriDAMPEN ON
     var khriSHADOWSTEP ON
     var khriELIMINATE OFF
     var khriTERRIFY OFF
     var khriFRIGHT OFF
     var khriINTIMIDATE OFF
     var khriPLUNDER ON
     var khriSAFE OFF
     var khriEVANESCENCE OFF
     var khriCREDENCE OFF
     var khriCUNNING OFF
# USE KHRI DURING TOWN RUN? (ON or OFF) - Turn OFF to Skip using Khri during town run - for Sanowret use
     var Khri.Town ON
########################################################################################
########################################################################################
# BARBARIAN SETTINGS
# USE WHIRLWIND?
     var Whirlwind ON
# USE DUAL WIELD? (ON or OFF) - Dual wield requires 450+ in the weapon
     var DualWield ON
# EXPERTISE COMBOS? (ON or OFF) - Does Barb Expertise Combos (and helps generate IR)
     var Expertise ON
# Set which Forms you want to use (ON or OFF)
# Auto-turns some forms on/off depending on what skills you are training
     var barbEagle ON
     var barbBadger ON
     var barbPanther ON
     var barbPiranha ON
     var barbDragon ON
     var barbMonkey ON
     var barbTurtle OFF
     var barbOwl OFF
     var barbBear ON
     var barbBuffalo OFF
     var barbPython ON
     var barbSwan ON
     var barbToad OFF
     var barbWolverine OFF
# ROARS to use (will only use one)
     var roarEmbrace OFF
     var roarEverild ON
     var roarWail OFF
     var roarScreech OFF
     var roarShriek OFF
     var roarAnger ON
     var roarKuniyo ON
# BERSERKS to use
     var zerkHurricane OFF
     var zerkBlizzard ON
     var zerkFamine ON
     var zerkAvalanche ON
     var zerkTsunami OFF
     var zerkWildfire OFF
     var zerkEarthquake OFF
     var zerkTornado OFF
     var zerkFlashflood ON
     var zerkLandslide ON
     var zerkCyclone OFF
     var zerkDrought OFF
# MEDITATIONS to use (ON or OFF) - WILL ONLY WORK FOR HIGHER LEVEL BARBS
     var medContemplation ON
     var medTenacity ON
     var medSerenity ON
### END OF CHARACTER 9 VARIABLES
### STOP EDITING HERE ~~~ END OF CHARACTER 9 VARIABLES ##########
####################################################################################
####################################################################################
echo **** LOADED %CHARACTER9 VARIABLES
goto END.OF.VARS
}

CHARACTER10:
#########################################################################################################
#########################################################################################################
## CHARACTER 10 VARIABLES
## *CHARACTER10 VARIABLES BLOCK BELOW
if matchre("$charactername", "(?i)%CHARACTER10") then
#########################################################################################################
{
### GENIE LAYOUT - SET THE GENIE LAYOUT YOU WANT THIS CHARACTER TO USE - MUST EXACTLY MATCH THE LAYOUT NAME IN GENIE!
### Example: var GENIE.LAYOUT Shroom.layout - TO SAVE A LAYOUT IN GENIE SET IT UP HOW YOU LIKE AND CLICK LAYOUT > SAVE LAYOUT AS > NAME IT HOW YOU WANT
### IF YOU LEAVE THIS SET TO NULL THEN IT WILL JUST USE THE DEFAULT LAYOUT THAT IS SET (default.layout) 
     var GENIE.LAYOUT default.layout
### HEAL.CITY ( NULL or CITY NAME (CROSS/LETH/HIB/RIVER/THEREN/SHARD) - Will run to this town for HEALING no matter where you are
     var HEAL.CITY NULL
### HOME CITY (NULL or CITY NAME) - Will attempt to return to your home city after a heal run (if not already in that city) ONLY SUPPORTS MAINLAND CITIES
     var HOME.CITY NULL
### SAFE ROOM (set to NULL to ignore) ~MUST~ TIE INTO HOME.CITY ABOVE! THE ROOM ID YOU WANT TO SCRIPT IN DURING TOWN RUN - MUST BE VALID ROOMID IN YOUR HOME CITY!
### WARNING!: IF YOU DO NOT SET BOTH HOME.CITY AND SAFE.ROOM CORRECTLY YOU ~WILL~ RUN INTO ERRORS - LEAVE BOTH AT NULL TO LET SCRIPT LOGIC HANDLE IT
     var SAFE.ROOM NULL
### AUTO-PROGRESS? (ON or OFF) - ON WILL CHOOSE YOUR COMBAT CREATURE AUTOMATICALLY BASED ON YOUR RANKS - YOU DO NOT NEED TO SET IT! OVERRIDES COMBAT.CRITTER VARIABLE
     var AUTO.PROGRESS ON
### AUTO-PROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var PROGRESS.TYPE NORMAL
### COMBAT CRITTER - ONLY USED WITH AUTO.PROGRESS OFF - MUST BE A VALID CREATURE NAME! USE FULL NAME OR 1/2/3 TO SPECIFY TIERS ie SNOW GOBLIN 2
     var COMBAT.CRITTER GOBLIN
### ALTERNATE CRITTER - PICK A ALTERNATE CRITTER TO HUNT - IF YOUR MAIN HUNTING GROUND IS FULL!
     var ALTERNATE.CRITTER MUSK HOG
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var PRIORITY.ROOMS NULL
### XP TRACKER RESET ON SCRIPT STARTUP - (ON or OFF) - RESETS EXP TRACKER TRACKING TIME ON INITIAL LAUNCH OF SCRIPT ONLY
     var XP.RESET ON

### GUI OPTIONS ARE RECOMMENDED TO LEAVE OFF COMPLETELY - THESE OPTIONS ONLY HERE BY SPECIAL REQUEST - WILL BE ANNOYING IF YOU TURN IT ON
### CRITTER.GUI (ON or OFF) - OFF by default - CREATES CRITTER GUI WINDOW - MUST MANUALLY CLICK TO CHOOSE YOUR COMBAT CRITTER BASED ON PROVINCE / SKILL / PREFERENCE
     var CRITTER.GUI OFF
### WEAPON.GUI (ON or OFF) - OFF by default - CREATES WEAPON GUI WINDOW - CHOOSE YOUR WEAPONS FOR THAT RUN *IF YOU HAVE AN ARRAY OF WEAPONS SET IN A SINGLE WEAPON VARIABLE
     var WEAPON.GUI OFF

# FRIEND LIST (People you will hunt with) Put your friends names in place of these. Ex. Bob|Fred|George
# Can just put your name in here or make it blank and it will only find empty rooms.
     var FRIENDS %ALLCHARACTERS|%GLOBALFRIENDS

##############################################################
# WEAPON / CONTAINERS / AMMO SETTINGS - BE VERY SPECIFIC! 
##############################################################

# CONTAINERS - MANDATORY! - SET YOUR MAIN ~3-4~ LARGEST CONTAINERS!
# BE SPECIFIC WITH CONTAINER NAMES - USE 2 WORDS WHENEVER POSSIBLE!
     var Container backpack
     var Container.Boxes haversack
     var Container.Backup duffel bag
     var Container.Crafting carryall
# SHEATH CONTAINER IS FOR SUPER LONG ITEMS - CAN BE ANY LARGE CONTAINER - NOT NECCESARY TO SET 
     var Container.Sheath NULL
# AMMO CONTAINER FOR STORING AMMO - ARROWS/BOLTS/ROCKS - BACKUP CONTAINER IS "OVERFLOW" FOR EXTRA AMMO
     var Container.Ammo quiver
     var Container.Ammo.Backup NULL
## CONTAINER.GEMPOUCH - VERY IMPORTANT! - ~MUST BE A SEPARATE CONTAINER~ FROM OTHER BAGS! SMALL/MEDIUM-SIZE CONTAINER IS FINE
## SPECIAL CONTAINER! SCRIPT WILL KEEP THIS CLOSED AT ALL TIMES AND ~ONLY USE IT FOR STORING FULL GEM POUCHES!~
## CONTAINER.GEMPOUCH MUST BE A ~CLOSABLE~ CONTAINER TO STORE ~FULL~ GEM POUCHES IN 
## AGAIN - DO NOT SHARE THIS CONTAINER WITH ~ANY OTHER CONTAINERS~ (except Repair Pouch Container) 
     var Container.GemPouch thigh pouch
# Container.EmptyPouch is for storing EMPTY GEM POUCHES (This can be ANY container EXCEPT for Container.GemPouch )
     var Container.EmptyPouch backpack
# DIRT CONTAINER - For storing dirt for various use (ONLY used by Thieves/Clerics/Necros)
     var Container.Dirt backpack
## MISC SHEATH OPTIONS (Storing specific weapons in specific containers - toolstraps/bandoliers/harnesses etc) - SET TO NULL/OFF TO NOT USE
## SET THE SHEATH NAME UNDER SHEATH.1 - SET THE WEAPONS YOU WANT TO USE ON EACH SHEATH UNDERNEATH IN AN ARRAY ex:
## var Sheath.1 toolbelt
## var Sheath.1.Weapons sabre|axe|broadsword
     var Sheath.1 NULL
     var Sheath.1.Weapons machete|crossbow|club|flail|slingshot|assassin's blade|steppe bow|katana|nightstick|thrusting blade|shortbow|mace|ngalio|sling|maul|quarterstaff|zweihander|spear|flamberge|mirror ava|throwing (mallet|hammer|club)
     var Sheath.2 NULL
     var Sheath.2.Weapons stonebow|slingshot|blowgun|boomerang
     var Sheath.3 NULL
     var Sheath.3.Weapons mirror blade
     var Sheath.4 NULL
     var Sheath.4.Weapons mirror knife
     var Sheath.5 NULL
     var Sheath.5.Weapons throwing blade|icicles|icicle
     var Sheath.6 NULL
     var Sheath.6.Weapons kertig dart
     
## WEAR WEAPONS (Set an array of weapons/shields you want the script to try and wear first before stowing)
     var Wear.Weapons NULL

## SMART.WEAPONS - ON TO TRAIN WEAPONS FROM LOWEST SKILL TO HIGHEST. "OFF" WILL GO IN A LINEAR ORDER (DEFAULT: ON)
## ON WILL DYNAMICALLY TRAIN TO ALWAYS MAKE SURE THE LOWEST SKILLED WEAPON IS TRAINED FIRST 
     var SMART.WEAPONS ON
     
## WEAPON SETTINGS - BE VERY SPECIFIC SETTING WEAPONS ! USE TWO WORDS WHENEVER POSSIBLE!
## SET ALL YOUR WEAPONS BELOW - MUST ~EXACTLY MATCH THE ITEM DESCRIPTION WHEN IN HANDS~! (GLANCE at it in your hands to get correct description) 
## BE SPECIFIC WHEN SETTING WEAPONS!! USE 2 WORDS WHEN POSSIBLE! TO TURN A WEAPON SKILL ~OFF~ SET IT TO - NULL
     var SEWEAPON assassin's blade
     var LEWEAPON damaris falchion
     var THEWEAPON zweihander
     var SBWEAPON damaris bola
     var LBWEAPON horseman's flail
     var THBWEAPON damaris akabo
     var STAVES damaris quarterstaff
     var POLEARMS damaris pike
     var RANGED.BOW lirisan shortbow
     var RANGED.CROSSBOW cloudbark crossbow
     var RANGED.SLING damaris sling
     var LTWEAPON icicles
     var HTWEAPON damaris mallet
# MAIN OFFHAND WEAPON TRAINING - MELEE ONLY (MUST BE A LIGHT/MEDIUM WEAPON - HEAVY or 2HANDED WEAPONS WONT WORK!!)
     var OHWEAPON club
# ALTERNATE OFFHAND WEAPONS (For Backtraining/Dual Training weapons while training other Weapons)
# ~MUST~ BE LIGHT/MEDIUM WEIGHT WEAPON! CANNOT USE HEAVY or 2Handed Weapons! (Unless Barb) (SET TO NULL/OFF TO NOT USE)
     var ALTWEAPON1 club
     var ALTWEAPON2 bola
     var ALTWEAPON3 NULL
## BRAWLWEAPON (DEFAULT: $charactername - Set to NULL to skip brawling)
     var BRAWLWEAPON $charactername
     #var BRAWLWEAPON $charactername
## Backstab/Ambush Weapon (Thief Only)
     var BSWEAPON mirror blade

# AMMO SETTINGS - DO NOT REMOVE THE { } BRACKETS!!!
     if (!$AMMOSWAP) then
{
     var XbowAmmo crossbow bolt
     var BowAmmo arrow
     var SlingAmmo stone shard
}

## ARMOR CHECK (ON or OFF) - Turn this OFF if you want the script to SKIP checking your armor at the beginning
## If ON - at the beginning, script will remove any armor/fluff you are wearing, and then put on all the armor you have set below. This ensures you have the correct armor on.
     var ARMOR.CHECK ON
## SET YOUR SHIELD - ABSOLUTELY 100% MANDATORY! RECOMMEND AN ARM-WORN SHIELD
     var MyShield diamondwood shield
## ARM WORN SHIELD? (ON OR OFF) - I RECOMMEND ALWAYS USING AN ARM WORN / SMALL SHIELD - MAKES LIFE MUCH EASIER
     var ArmWorn ON
## MAIN ARMOR TO CHECK - PRIMARY COMBAT (Set to NULL to IGNORE a slot)
## YOU MUST SET ALL YOUR ARMOR BELOW - IT DOESN'T MATTER WHICH ARMOR SLOT YOU USE - THE SCRIPT DOESN'T CARE
     var CHEST.ARMOR khiynit robe
     var FACE.ARMOR NULL
     var HEAD.ARMOR leather cowl
     var ABDOMEN.ARMOR NULL
     var BACK.ARMOR NULL
     var ARM.ARMOR assassin's sleeves
     var HAND.ARMOR NULL
     var LEG.ARMOR NULL
     var KNUCKLE telothian knuckle
     var PARRYSTICK parry stick

## PRIORITY WEAPONS - WEAPON SKILLS TO KEEP MOVING ~ALWAYS~ - PRIORITIZE THESE WEAPON SKILLS OVER ALL OTHERS IF THEY ~EVER~ DROP TO 0/34
## MUST BE SET IN AN ARRAY - THE EXACT SAME AS GENIE EXP VARIABLE FORMAT ie: var Priority.Weapons Medium_Edged|Twohanded_Edged
## WARNING!! DO NOT SET PRIORITY WEAPONS UNLESS YOU WANT THOSE SKILL(S) TO TAKE PRIORITY OVER ~ALL~ OTHERS! ~WILL~ CAUSE UNEVEN RANKS OVER TIME!!
## THIS IS MAINLY ONLY USEFUL FOR SHORT PERIODS - FOR POWER LEVELING A SINGLE WEAPON SKILL FOR EXAMPLE - RECOMMEND NULL UNLESS YOU KNOW WHAT YOU ARE DOING
     var Priority.Weapons NULL
     
## TRAIN LOWEST (ON or OFF) - ON WILL ALWAYS TRAIN W/ YOUR LOWEST RANK & LOWEST LEARNINGRATE WEAPON AT EVERY WEAPON SWAP 
## THIS EFFECTIVELY ENSURES THAT ALL YOUR WEAPON SKILLS WILL TRAIN AND STAY AT THE ~EXACT SAME RANKS~ - ESPECIALLY IF USED FROM THE START
## NOTE! TRAINLOWEST ON - WILL ALTER THE DEFAULT WEAPON TRAINING ORDER - BYPASSES THE SET ORDER TO DYNAMICALLY TRAIN WEAPONS 
     var TrainLowest OFF

# MAX LEARNING RATE - FOR EACH WEAPON SKILL (WILL SWITCH WEAPONS ONCE REACHING THIS RATE *MAX 33) *SET TO 35 TO IGNORE LEARNINGRATE 
     var MAX.LEARNINGRATE 12
# LEARNING RATE INCREASE - AFTER FULL WEAPON LOOP *OF ALL WEAPONS* - INCREASE THE MAX.LEARNINGRATE BY THIS MUCH
     var LEARNING.INCREASE 4
# MAX TIME PER WEAPON - SET THE MAXIMUM TIME (IN SECONDS) TO TRAIN EACH WEAPON SKILL - BEFORE SWITCHING WEAPONS
# SETTING THIS TOO HIGH MAY CAUSE SUBOPTIMAL TRAINING - RECOMMEND AROUND ~300-500 (~5-8 minutes per weapon)
     var MAX.TIME 250
# MAXIMUM TOTAL COMBAT TRAINING TIME - SET THE MAX TIME (IN SECONDS) TO STAY IN ~COMBAT~ BEFORE ESCAPING TO TOWN ( 3600 SECONDS = 1 HOUR )
# SET VAR MAX.TRAIN 0 - TO LOOP COMBAT FOREVER ( *UNTIL IT ESCAPES DUE TO BEING TOO HURT / BAGS TOO FULL / BURDEN TOO HIGH )
     var MAX.TRAIN 4500
     
# STANCE PER WEAPON (Set NULL to use default - Or SHIELD/PARRY/EVASION/CUSTOM TO USE THAT PARTICULAR STANCE FOR A PARTICULAR WEAPON)
## NOTE SCRIPT IS ALREADY ADVANCED IN CHANGING STANCES DEPENDING ON WEAPON BEING TRAINED - NULL IS FINE FOR MOST PURPOSES
     var SE.STANCE NULL
     var LE.STANCE NULL
     var THE.STANCE NULL
     var SB.STANCE NULL
     var LB.STANCE NULL
     var THB.STANCE NULL
     var POLEARMS.STANCE NULL
     var STAVES.STANCE NULL
     var BOW.STANCE NULL
     var CROSSBOW.STANCE NULL
     var SLINGS.STANCE NULL
     var LT.STANCE NULL
     var HT.STANCE NULL
     var OH.STANCE NULL
     var BRAWL.STANCE NULL

## BACKTRAIN (ON or OFF) - ON FOR SETTING A SEPARATE BACKTRAIN ROUTINE
     var BACKTRAIN OFF
## BACKTRAIN AUTO PROGRESS (ON or OFF) - Turning this ON will automatically set the creature to hunt, based on your BACKTRAIN WEAPON SKILLS
## TURN THIS ~OFF~ TO SET THE BACKTRAIN CREATURE MANUALLY (BELOW)
     var BACKTRAIN.AUTOPROGRESS ON
### BACKTRAIN AUTOPROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var BACKTRAIN.PROGRESS.TYPE NORMAL
## BACKTRAIN CREATURE - Must specify the creature to hunt if BACKTRAIN.AUTOPROGRESS is OFF
     var BACKTRAIN.CRITTER ICE ARCHON
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var BACKTRAIN.PRIORITY.ROOMS NULL
## BACKTRAIN TIME (in SECONDS - Total time to Backtrain)
     var BACKTRAIN.TIME 1200
## BACKTRAIN MAGIC (ON or OFF) IF OFF - WILL SKIP USING ANY OFFENSIVE SPELLS PERIOD WHILE BACKTRAINING - WILL ONLY DO BUFFS
     var BACKTRAIN.MAGIC OFF
## BACKTRAIN TM/DEBIL SPELLS (ON or OFF) IF OFF - WILL SKIP USING ANY TM / DEBIL SPELL DURING BACKTRANING (UNLESS ITS A TATTOO)
     var BACKTRAIN.TM OFF
## BACKTRAIN WEAPONS - Set every weapon you wish to backtrain (NULL to turn off)
     var BACKTRAIN.SE NULL
     var BACKTRAIN.LE NULL
     var BACKTRAIN.THE NULL
     var BACKTRAIN.SB NULL
     var BACKTRAIN.LB NULL
     var BACKTRAIN.THB NULL
     var BACKTRAIN.STAVES NULL
     var BACKTRAIN.POLEARMS NULL
     var BACKTRAIN.BOW NULL
     var BACKTRAIN.CROSSBOW NULL
     var BACKTRAIN.SLING NULL
     var BACKTRAIN.LT NULL
     var BACKTRAIN.HT NULL
     var BACKTRAIN.BRAWL NULL
     var BACKTRAIN.OH NULL
     var BACKTRAIN.BS NULL
## BACKTRAIN STEALTH (OFF or ON)
     var BACKTRAIN.STEALTH ON
## BACKTRAINING LOOTING OPTIONS (ON or OFF)
     var B.Loot.Gems ON
     var B.Loot.Boxes OFF
     var B.Loot.Metals ON
     var B.Loot.Scrolls ON
     var B.Loot.Collectibles OFF
     var B.Loot.SpiderParts OFF
## BACKTRAIN LOOTING MODE ( treasure / boxes / goods / equipment )
     var B.Loot.Option goods
## BACKTRAIN ARMOR (ARMOR ONLY FOR BACKTRAIN ROUTINE) (Set to NULL to not check a piece)
     var B.CHEST.ARMOR NULL
     var B.FACE.ARMOR NULL
     var B.HEAD.ARMOR NULL
     var B.ABDOMEN.ARMOR NULL
     var B.BACK.ARMOR NULL
     var B.ARM.ARMOR NULL
     var B.HAND.ARMOR NULL
     var B.LEG.ARMOR NULL

##############################################################
### COMBAT GENERAL SETTINGS
##############################################################

## GEM POUCH DESCRIPTION - DR IS TRICKY WITH GEM POUCHES!! BE SPECIFIC - use "<color> pouch" only! 
## **RECOMMEND DUMPING ALL POUCHES AND GET NEW ONES FROM GEM SHOP ON FIRST SETUP**
## WHEN ASKING FOR NEW GEM POUCHES, "ASK NPC FOR <COLOR> POUCH" - ~DO NOT 'ASK FOR GEM POUCH' OR just 'POUCH'~ - JUST 'ASK <NPC> FOR BLACK POUCH'
## Then Set the var to the 'color' pouch you have. ie var gemPouch black pouch
     var gemPouch black pouch
# TIE GEM POUCHES? (ON or OFF) 
# TIE POUCHES FOR MORE STORAGE/LESS INVENTORY SPACE USE - but have to sell the FULL TIED POUCHES AT SPECIAL SHOPS or get TRADER to sell them!
# IF HUNTING IN SHARD OR ROSSMAN - NO WORRY AS SCRIPT SELLS TIED POUCHES IN THOSE GEM SHOPS. IF hunting in XING/ISLANDS will have to get Trader to sell pouches.
     var TiePouch OFF
# WORN GEM POUCH? (ON or OFF) (OFF will STOW your gem pouch / ON will wear it )
     var Gempouch.Worn OFF

## RESTOCK AMMO? (ON or OFF) *SCRIPT WILL AUTOMATICALLY CHECK IF YOU RUN OUT OF AMMO AND ATTEMPT TO RESTOCK
     var AmmoStock ON
# Skinning Knife Name (Mandatory if not a worn knife)
     var Skinning.Knife knife
# BELT/WRIST/ANKLE ~WORN~ SKINNING KNIFE? (ON or OFF)
     var BeltKnife ON
#### COMBAT OPTIONS ####
# OFFHAND THROWING - (ON or OFF) SET TO ON IF YOU WANT TO ROTATE RIGHT/LEFT HANDS WHILE THROWING LT/HT
     var OffhandThrow ON
# THROWING TYPE (LOB, THROW or HURL) *LOB will NEVER stick / less damage - HURL ALWAYS STICKS/ max damage. THROW is inbetween
## IF YOU USE A SHARP THROWING WEAPON (LIKE SPEAR) ALWAYS USE LOB! THROW WILL STICK WITH A POINTY WEAPON!
## LOB IS THE SAFEST - LOB NEVER STICKS! - THROW IS SAFE ~IF USING A BLUNT THROWN WEAPON~ - HURL ALWAYS STICKS - AVOID HURL 
     var ThrowType throw
# BONDED THROWING WEAPONS? (ON or OFF) - Will use INVOKE to retrieve thrown weapon
     var Bonded OFF
# ROAMING (ON or OFF) - Will ROAM around to different critter rooms if it doesn't find a creature during bored routine
     var Roaming ON
# USE WEAK ATTACKS (ON or OFF) - Will use WEAK attacks for melee training (good for backtraining or preserving fatigue/balance)
     var WeakAttack OFF
# AIM ACTIONS (Set an array of actions) - ACTIONS TO PERFORM WHILE WAITING FOR FULL AIM (WITH RANGED/SPELLS) Separate with |
     var AimActions bob|attack|attack left
# TRAIN STEALTH? TRAIN STEALTH DURING MELEE / THROWN / BRAWLING ROUTINES
     var TrainStealth ON
## LOOT MONSTERS? (ON or OFF) - LOOT MONSTERS?
## OFF WILL SKIP LOOTING ALL MONSTERS ~PERIOD~ AND LET THEM ROT
     var Loot.Monsters ON
## LOOT OPTION TO USE - TREASURE / BOXES / EQUIPMENT/ GOODS or ALL
     var Loot.Option GOODS
## LOOTING OPTIONS (ON or OFF) - LOOT OPTIONS FOR MAIN COMBAT
     var Loot.Gems ON
     var Loot.Boxes ON
     var Loot.Metals ON
     var Loot.Scrolls ON
     var Loot.Collectibles OFF
     var Loot.SpiderParts OFF
# MAX BOXES (Set a number) - MAX number of BOXES to pick up before turning Box looting off for that run
     var Max.Boxes 25
# DISSECT (ON or OFF) - DISSECT mobs for First Aid training in Combat (Alternates with SKINNING depending on Learning Rates)
     var Dissect ON
# SKINNING OPTIONS (ON or OFF)
# SKIN ON but BUNDLE OFF will skin but DROP all skins. SKIN collecting only supported with bundles ON!
     var Skin ON
     var Bundle ON
# TIE BUNDLES (ON or OFF) (Turns on automatically when F2P is ON) - LOWER ITEM COUNT BY TYING UP YOUR BUNDLES
     var TieBundle ON
# BUNDLE LOCATION (SET to NULL to use ANY open location or set a preferred location (shoulder / waist / back / belt / around shoulder / over shoulder)
     var BundleLocation NULL
# ArrangeTarget (SET TO SKIN, BONE or PART - or NULL to skip arrange)
## Set ArrangeTarget to SKIN/BONE/PART to Arrange one time
## Set ArrangeALL to ON to arrange max times
     var ArrangeTarget SKIN
     var ArrangeAll OFF
## ArrangeAlways (ON or OFF) - Set ON to ALWAYS arrange regardless of skinning learningrate. OFF will SKIP ARRANGING when Skinning learning is locked
     var ArrangeAlways OFF
# MAX BUNDLE SIZE - Max amount of skins to keep in bundle before creating a new bundle (DEFAULT: 30  MAX: 200)
     var MaxBundle 40
# Set SNIPE to ON to use SNIPE (THIEF/RANGER/NECRO ONLY)
     var Snipe ON
# Set POACH to ON to use POACH instead of SNIPE (SNIPE overrides this setting if SNIPE is ON - TURN SNIPE OFF TO USE THIS)
     var Poach OFF
# RANGED AIM PAUSE. Set to 0 for a Full Aim. Set number of seconds to pause that many seconds before firing
     var SNAP.FIRE 6
# RETREAT WHILE USING RANGED WEAPONS/BUFFING? (ON or OFF) - Will RETREAT to stay at ranged when using ranged weapons
     var Retreat OFF
## DANCE / COUNT Critters - Set min number of critters to "dance" with before you start killing. 
## Leave Dance.Count 0 to kill EVERYTHING. Set 1 to dance with 1 creature until a 2nd comes in, etc. If set to 1 will ALWAYS leave 1 creature in your room.
     var Dance.Count 0
## TACTICS TRAINING (ON OR OFF) - Train TACTICS in Combat
     var Tactics ON
# APPRAISE CREATURES - (ON or OFF) to APPRAISE ALL CREATURES
     var APPRAISE ON
# HUNT OPTION (HUNT every ~75 seconds unless perception locked)
     var HUNT ON
## APPRAISE ITEMS WHEN NO CRITTERS IN ROOM? (ON or OFF)
     var APP.ITEMS OFF
## ITEMS TO APPRAISE (Set to NULL to not use) SET YOUR WORN ITEMS TO QUICK APPRAISE 
     var app1 NULL
     var app2 NULL
     var app3 NULL
## SANOWRET CRYSTAL? (ON or OFF) - ON will exhale crystal every ~100 seconds *IF CONCENTRATION ALLOWS
     var Crystal OFF
## USE SANORWRET CRYSTALS IN COMBAT? (ON or OFF) - ON will use Sanowrets in combat (Turning ON WILL effect concentration and hinder spell casting - not recommended for most)
     var SanowretCombat OFF
## ZILLS? (ON or OFF) - FOR WORN INSTRUMENTS - ON will play Zills during certain times (Repairing armor, collecting, etc)
     var Zills ON
## Zill name ( zills / cowbell / etc )
     var Zill.Name zills
# F2P CHARACTER (ON or OFF) - If set to ON - Script will escape combat and go to town run when you get an inventory count warning
     var F2P OFF
# BIOMECHANICAL TARANTULA? (ON or OFF) - IF ON - Will pick a (semi-)random near locked skill to drain every 10 minutes while in combat
     var Tarantula OFF
     var Tarantula.Name tarantula
## TARANTULA SKILLS TO CHECK - SET AN ARRAY OF SKILLS TO CHECK AGAINST FOR TARANTULA DRAIN
## MUST EXACTLY MATCH THE GENIE VARIABLE NAMES! THESE ARE THE SKILLS TARANTULA WILL CHECK FOR EACH SCHOOL
     var Magic.skills Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Arcana
     var Armor.skills Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor
     var Survival.skills Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing
     var Weapons.skills Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow
     var Lore.skills Appraisal|Tactics|Performance
# WARHORN? (ON or OFF) - For Barbarians and Bards only.
     var WarHorn OFF
## WAND SUPPORT (NULL to NOT use) (MEF wand / WoW wand / WoTP wand etc.) Set up to 2 sets of wands to use! Must use actual verb of wand!
## CAN SET AN ARRAY OF WANDS FOR EACH VAR ex- var Wand1 bloodwood branch|oaken staff|crystal
     var Wand1 NULL
     var Wand2 NULL
## WAND CONTAINERS *Must use 2 different containers to store Wands if using 2 identical named wands)
     var Wand1.Container belt
     var Wand2.Container cloak
## Wand Weapon - (NULL or WEAPON NAME) SET A MELEE WEAPON TO BUFF WHEN USING WANDS WITH A WEAPON BUFF
     var WandWeapon NULL
## EGG SUPPORT (ON or OFF)*Uses the HE Gift Egg in Combat every ~15 minutes to invoke more mobs
     var EGG OFF
## ASTROLABE (ON or OFF) - Uses an Astrolabe every 30 mins if ON (Will rotate if you use 2)
     var ASTROLABE OFF
## Set the name of the astrolabes - (2 words ONLY i.e - ornate astrolabe, twisted astrolabe)
     var ASTROLABE1 NULL
     var ASTROLABE2 NULL
     var Astro1.Container NULL
     var Astro2.Container NULL
## ORB RUB IN COMBAT (var Orb.Rub ON or OFF) - TURN ON TO RUB FAVOR ORB IN COMBAT EVERY ~40 MINUTES
## *NOTE THAT SCRIPT AUTOMATICALLY RUBS ORB ~ONE TIME~ EVERY FULL LOOP OF SCRIPT REGARDLESS OF THIS VARIABLE
     var Orb.Rub OFF
####################################################################################################
# ARMOR SWAP - (ON or OFF) - SPECIAL ARMOR SWAPPING ROUTINE FOR HELMS ONLY
# WILL SWAP OUT A SINGLE PIECE OF PLATE/BRIG/CHAIN/LIGHT HELM EVERY ~5 MINUTES IN COMBAT
     var Armor.Swap OFF
# IF Armor.Swap is ON - THEN ALL THE ARMORS BELOW MUST BE SET CORRECTLY!
# SET EVERY PIECE OF ARMOR TO SWAP BELOW, MUST SET AN ARMOR PIECE FOR ALL FOUR TYPES - TWO WORDS ONLY!
# ONE PIECE SHOULD MATCH YOUR MAIN ARMOR HELM
     var Light_Armor.Helm steelsilk balaclava
     var Chain_Armor.Helm chain balaclava
     var Brigandine.Helm brigandine balaclava
     var Plate_Armor.Helm NULL
####################################################################################################
# HEAVY ARMOR REMOVAL - (ON or OFF) - ON will take off plate/brig/chain armor before backstab/stealth routines
# Generally only needed for noobs with less then ~200 ranks in armors
     var Armor.Noob OFF
# Set Plate/Brig/Chain pieces here (USE EXACT SYNTAX) (If no armor to remove set to NULL)
     var PLATE1 gauntlet
     var PLATE2 greaves
     var PLATE3 NULL
     var PLATE4 NULL
# Set Light Armor Pieces to Swap in place of the Heavy armor pieces above - if any (set to NULL to not use)
     var LIGHTARMOR1 rugged gloves
     var LIGHTARMOR2 rugged greaves
     var LIGHTARMOR3 NULL
     var LIGHTARMOR4 NULL
####################################################################################################

##############################################################
# TOWN RUN / SPECIAL MODULES - SETTINGS FOR TOWN 
# AUTO HEALER / SELL GEMS/SKINS, BANK, OPTIONAL MODULES
##############################################################

# RETURN TO COMBAT MODULE (ON or OFF) - RESTARTS SCRIPT AND RETURNS TO COMBAT WHEN TOWN RUN IS FINISHED
# IF OFF - SCRIPT WILL ~ABORT~ ONCE TOWN RUN IS COMPLETE - LEAVE THIS ON FOR INFINITE AFK SCRIPTING
     var RETURN.TO.COMBAT ON
# AUTOHEAL (ON or OFF) - ON - LET SCRIPT HANDLE AUTO-HEALING AFTER COMBAT (DEPENDING ON YOUR GUILD/SETTINGS) 
# LEAVE THIS ON UNLESS YOU WANT TO HANDLE HEALING YOURSELF MANUALLY! (OR WITH ANOTHER SCRIPT) 
# TURNING THIS OFF WILL ~ABORT SCRIPT AFTER ESCAPING FROM COMBAT~! AND WILL PARSE: HELP ESCAPE PLZ!
     var AUTOHEAL ON
# HEAL ALL (ON or OFF ) - HEAL.ALL ON = FULLY HEAL IF YOU HAVE ~ANY~ WOUNDS AT ALL (even minor scars) 
# HEAL.ALL OFF = WILL SKIP HEALING IF INSIGNIFICANT WOUNDS (minor scratches etc)
     var HEAL.ALL ON
# SELL SKINS (ON or OFF) - VISIT FURRIER - SELL SKINS/BUNDLES 
     var SELLSKINS ON
# SELL GEMS (ON or OFF) - VISIT GEM SHOP - SELL ALL GEMS/POUCHES
     var SELLGEMS ON
# SELL METALS (ON or OFF) - VISIT GEM SHOP - SELL ALL LOOSE METALS/NUGGETS/BARS (except those in your Crafting Container) 
     var SELLMETALS ON
# BUY HERBS? (ON or OFF) - VISIT HERB SHOP - AUTO RESTOCK ON HEALING HERB SUPPLIES (IF in city with Herbalist)
     var HERBS ON
# USE HERBS IN COMBAT? (ON or OFF) - If ON - Script will eat herbs during combat every ~5 minutes if needed
     var HERBS.COMBAT ON
## Container.Herb - SET CONTAINER TO STORE YOUR HERBS IN (Can be a stackable herb container)
     var Container.Herb %Container
# BANK RUN (ON or OFF) - VISIT BANKS - DEPOSIT MONEY AFTER TOWN RUN 
     var BANKRUN ON
# INVENTORY CHECK (ON or OFF) - TURNS ON INVENTORY CHECKS FOR DUMPING ANY COMMON TRASH ITEMS IN INVENTORY (OR EXCESS GEM POUCHES / BUNDLING ROPE )
     var INVCHECK ON
# TRASH DUMP (ON or OFF) - IF ON WILL DUMP ANY ITEM IN YOUR TRASH VARIABLE (GLOBAL VARIABLE AT VERY TOP OF VARIABLE FILE)
     var TRASH.DUMP ON
# POUCH DUMP (ON of OFF) - IF ON - DUMPS ANY GEM POUCHES IN YOUR INVENTORY THAT ~DO NOT MATCH~ THE COLOR/DESCRIPTION OF YOUR PRIMARY GEMPOUCH ( var gemPouch )
# WILL ALSO DUMP YOUR NORMAL GEM POUCHES IF YOU HAVE MORE THAN 10 OF THEM until you only have 10 MAX (Prevent buildup of ~50 rogue pouches) 
     var POUCH.DUMP ON

## SHARD CITIZEN (ON or OFF) - Must be a citizen of shard
     var Shard.Citizen ON
# GET FAVORS? (ON or OFF) - (ONLY WORKS IN CROSSING / SHARD / HAVEN )
     var GET.FAVORS ON
     var FAVOR.GOD damaris
# REPAIR ARMOR? (ON or OFF) - REPAIR ALL ARMOR / WEAPONS DURING TOWN RUN (MUST HAVE MONEY IN LOCAL BANK)
     var REPAIR.ARMOR ON
## USE MAGIC REPAIR KITS? (SET NULL/OFF TO NOT USE)
## REPAIR.KIT and REPAIT.KIT.2 ARE FOR FULL REPAIR KITS THAT REPAIR ALL ARMOR ~AND~ WEAPONS
## REPAIR.KIT.WEAPON and REPAIR.KIT.ARMOR ARE ONLY FOR KITS THAT ONLY REPAIR ARMOR OR WEAPONS!
## YOU MUST SET THE CONTAINER THAT EACH SPECIFIC KIT IS FOUND IN! IT TREATS THIS CONTAINER LIKE GEMPOUCH.CONTAINER AND KEEPS CLOSED! *CAN BE SHARED WITH GEMPOUCH.CONTAINER!
     var REPAIR.KIT NULL
     var REPAIR.KIT.2 NULL
     var REPAIR.KIT.WEAPON NULL
     var REPAIR.KIT.ARMOR NULL
     var REPAIR.KIT.CONTAINER NULL
     var REPAIR.KIT.2.CONTAINER NULL
     var REPAIR.KIT.3.CONTAINER NULL
# CLIMBING/SWIMMING RUN (ON or OFF) - ATHLETICS TRAINING 
     var CLIMBING ON
## MAGIC CLIMBING ROPE (ON or OFF) - CHECK FOR MAGIC CLIMBING ROPE - USES THAT INSTEAD OF DEFAULT CLIMBING RUN
     var MAGIC.ROPE OFF
     var ROPE.NAME climbing rope
     var Rope.Container NULL
## WINDBOARD (ON or OFF) - TRAIN ATHLETICS WITH A WINDBOARD INSTEAD
     var WINDBOARD OFF
# COLLECTING - (ON or OFF) - OUTDOORSMANSHIP TRAINING - COLLECT ROCKS/COINS
     var COLLECTING ON
# BRAIDING - (ON or OFF) - TRAINS BRAIDING (ENGINEERING) - ONLY TRAINS TO ~70 RANKS!
     var BRAIDING ON
# RAVEN'S COURT SCHOLARSHIP STUDY (ON or OFF) - ONLY IN CROSSING !
     var RAVEN ON
# TEXTBOOK / COMPENDIUM? (ON or OFF) - TRAIN SCHOLARSHIP/FIRST AID W/ ANATOMY TEXTBOOK
     var TEXTBOOK OFF
# TEXTBOOK TYPE - Textbook or Compendium
     var TEXTBOOK.TYPE textbook
     var Textbook.Container cloak
# SKINNING/FA TRAINER - (ON or OFF) ONLY WORKS FOR THE MAGIC SKINNING / FA TRAINERS
## The ones with 105 uses per day or infinite ( https://elanthipedia.play.net/Item:Small_blue-belly_crocodile_with_prominently_stitched_seams )
     var SKINTRAINER OFF
     var SKINTRAIN.NOUN crocodile
     var SKINTRAIN.CONTAINER goldenweave belt
# EPISTEMIC JOURNAL - For Epistemic Journals ONLY - Writes to Journal every 24 hours
# Set JOURNAL.TYPE ( NULL to NOT USE ) - Set NOUN of item to use ( traveler's diary / explorer's log / soldier journal / etc)
     var JOURNAL.TYPE NULL
# DISARM BOXES? (USES DISARM SCRIPT - MAKE SURE YOU SET THE VARIABLES UP IN disarm-vars)
     var DISARM ON
# BURGLE RUN (ON or OFF) - BURGLE RUN USING THE BURGLE SCRIPT (BURGLE.PAWN ON will Pawn all Burgle items)
     var BURGLE ON
     var BURGLE.PAWN ON
# BURGLE DUMP (ON or OFF) - Burgle Dump ON will DUMP/TRASH any Burgle item that does not sell at pawn shop
     var BURGLE.DUMP ON
# STEALING RUN (ON or OFF) - Does STEALING Run with the Ultimate Stealing Script
     var STEAL OFF
# PERFORMANCE RUN (ON or OFF) - DEDICATED PERFORMANCE TRAINING RUN DURING TOWN RUN (Uses your Zill.Name variable to train)
     var PERFORMANCE ON
# MAGICAL RESEARCH TRAINING (ON or OFF) - DEDICATED MAGICAL RESEARCH TRAINING DURING END OF TOWN RUN - TAKES A BIT OF TIME! 
     var MAGICAL.RESEARCH OFF
# PRIMARY MAGICAL RESEARCH TYPE ( SET TO NULL TO CHOOSE AUTOMATICALLY BASED ON LEARNING )
# OPTIONS ARE: FUNDAMENTAL, STREAM, AUGMENTATION, UTILITY, WARDING, SORCERY, FIELD, SPELL
     var RESEARCH.TYPE NULL
# TEACHING? (ON or OFF) - If ON, will attempt to teach your other characters/people in the Friends variable
     var TEACH OFF
     var TEACH.SKILL hiding
     var TEACH.SKILL.2 evasion
## SUPPORT FOR MASTERCRAFT TRAINING
## IF YOU USE MASTERCRAFT - SET EACH SKILL ON THAT YOU WANT TO TRAIN
## *YOU MUST SET UP MASTERCRAFT - TOOLS ETC SEPARATELY
     var ALCHEMY OFF
     var ENGINEERING OFF
     var FORGING OFF
     var OUTFITTING OFF
     var ENCHANTING OFF
## VAULT SWAP (ON or OFF) - ON WILL TEMPORARILY SWAP YOUR 'var CONTAINER' FOR A SPECIAL BAG IN YOUR VAULT FOR MASTERCRAFT PURPOSES ONLY!
## AFTER MASTERCRAFT IS OVER, GOES BACK TO VAULT AND SWAPS BACK TO ORIGINAL BAG - PUTS YOUR CRAFTING BAG BACK IN THE VAULT!
## MAKE SURE YOU HAVE ENOUGH ROOM IN YOUR VAULT! THE SWAP CONTAINER SHOULD FIT ON THE SAME BODY SLOT AS THE BAG YOU ARE SWAPPING OUT!
     var VAULT.SWAP OFF
## VAULT CITY - SET THIS TO THE CITY NAME WHERE YOU HAVE YOUR VAULT - IF VAULT.SWAP IS ~ON~ IT WILL RUN TO THIS CITY FIRST
     var VAULT.CITY FC
## SET THE NAME OF YOUR CRAFTING BAG IN YOUR VAULT - MUST HAVE ~ALL YOUR CRAFTING TOOLS~ IN THIS BAG!!
## MAKE SURE TO BE SPECIFIC WITH YOUR CONTAINER VARIABLES SO THEY DONT GET MIXED UP! THIS CONTAINER SHOULD USE THE SAME BODY SLOT AS YOUR VAR CONTAINER!
     var CRAFTING.BAG dreamweave lootsack

# ALMANAC (ON or OFF) - USE ALMANACS (That trains random skill OR pick-a-skill every 10 minutes)
     var ALMANAC OFF
## ALMANAC VERB - if using the special encyclopedic almanac, MUST be set to 'encyclopedic almanac' to use the pick a skill function
     var ALMANAC.TYPE almanac
     var Almanac.Container goldenweave belt
## ALMANAC SKILLS to check/pick for encyclopedic almanac i.e. Sorcery|Forging|Engineering
## The default list has ALL skills listed - You can remove skills you don't want to boost
     var ALMANAC.LEARN Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor|Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing|Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow|Appraisal|Tactics|Performance|Enchanting|Forging|Engineering|Alchemy|Outfitting|Arcana
# LOCKPICK TRAINING ITEM? (Set to NULL to not use) - Must match EXACTLY with item name in hands (2 words only)
# For MAGIC LOCKPICK TRAINING ITEMS - * Assumes you use a WORN lockpick ring/case 
     var LOCKPICK.ITEM NULL
## SET A SECONDARY LOCKPICK ITEM HERE IF YOU HAVE A SECONDARY (OR SET TO NULL)
     var LOCKPICK.ITEM.2 NULL
## Lockpick.Container is where the MAGIC LOCKPICK ITEMS should be stored (NULL to try wear them)
     var Lockpick.Container NULL
# PILGRIM BADGES (ON or OFF) *CLERIC/PALADINS ONLY! - VISIT UNVISITED BADGE LOCATIONS - PRAY TO BADGE
     var PILGRIM ON
# POWERWALKING (ON or OFF) - FOR MAGIC USERS - DO A POWERWALK DURING TOWN RUN 
     var POWERWALK ON
## SCRIPT CHECK LOGIC - TURN SCRIPT CHECK LOGIC (ON OR OFF) - WARNING - THERE ~WILL~ BE FALSE POSITIVES!! UNAVOIDABLE!!
## IF IT DETECTS ANY GM SCRIPT CHECKS - WILL ~ATTEMPT~ TO AUTOMATICALLY HANDLE IT AND/OR RUN AWAY (Not Log Out)
     var SCRIPTCHECK OFF
## Setting NO.CONTACT to "ON" will log out for 5 minutes if someone tries to drag you or hold your hand (DEFAULT: OFF)
## WARNING! IT WILL ALSO ESCAPE COMBAT IF ANYONE TALKS IN YOUR COMBAT ROOM! INCLUDING CRITTERS! SO IT CAN FALSE POSITIVE ON TALKING CRITTERS
     var NO.CONTACT OFF
## LOG.ON.STUN (ON or OFF) Set to "ON" to log out if you are too hurt/stunned and are unsuccessful running away (DEFAULT: ON)
     var LOG.ON.STUN OFF
## LOG.ON.DEATH (ON or OFF) Set OFF to stay logged in even if you die (DEFAULT: ON)
     var LOG.ON.DEATH ON
## TOTAL TIME ONLINE - MAX TIME TO STAY ONLINE (IN SECONDS) After this time has passed will idle and logout to avoid AFK checks (Set to 0 to always stay online)
     var ONLINE.TIME 0
## FANG COVE? (ON or OFF) - Do you want to go to FANG COVE for healing/town stuff (Only works in Prime if Premium)
     var FANGCOVE ON
## USE PREMIUM JUMP JEWELRY? (ON or OFF) - Will use Premie JJ to teleport to Fang Cove for healing/bundles/gems/etc
     var JumpJewelry OFF
     var JewerlyVerb ironwood ring
## PERSONAL EMPATH HEAL (Put EMPATH'S NAME HERE to use. NULL to turn off) - If you use a personal empath to heal
## Setting this to anything OTHER than NULL/OFF will turn OFF the triggers to nod to someone when they ask if you want healing
     var PocketEmpath NULL
## EmpathRoom is ROOM NUMBER where you can find your PERSONAL EMPATH. (MUST be in the CITY you go to for TOWN RUN)
     var EmpathRoom NULL
## BankBot - Used for F2P characters to tip a bankbot any remaining coin at end of town run
## Set Tipping to 1, Bankbot name and Tiproom = room number bankbot is at, in your home town
     var Tipping 0
     var BankBot morph
     var TipRoom 753
## CLAN ITEM (TF USE ONLY)
     var CLAN OFF
     var CLAN.ITEM sphere
## LIGHTER ITEM (For using a Lighter to start fires instead of flint and blade)
## USAGE - var LIGHTER (ON or OFF) - Lighter.Name = verb of the item
     var Lighter OFF
     var Lighter.Name world dragon
## CUSTOM TOWN SCRIPT - (Must be the exact name of the script (IGNORE .CMD - JUST USE NAME)
## Set your own script to run during the town run
## YOU MUST HAVE A PARSE AT THE END OF YOUR SCRIPT: put #parse SCRIPT FINISHED!
## IF YOU DO NOT HAVE THIS PARSE THEN UBER WILL NOT RECOVER PROPERLY!
     var Custom.Script NULL
## RPA BESTOW? (ON or OFF) - MUST BE IN THE PIRP SYSTEM TO BESTOW RPAS! https://elanthipedia.play.net/RPA_command
     var RPA ON
## LIST THE PEOPLE YOU WANT TO BESTOW RP POINTS TO BELOW IN AN ARRAY!!
## ie. var PirpList Name1|Name2|Name3|Name4|Name5
     var PirpList Raidboss|Healbitch|Illuminati|Breckin|Ryhs|Rhoat|Shepherd|Kohen|Worril|Odium|Morvetan|Orcher|Amroth|Mephos|Yew|Lorak|Wryll|Rellie|Beerfest|Bayndayd|Xana|Crivic|Blaakwulf|Wong|Findal|Regnar|Lakshmi|Vivica|Phucker|Jimdickens|Kiroq|Bleed|Rutinger|Nekhet|Leecya|Arazenya|Kithkani


######################################################################################################################
######################################################################################################################
# GENERAL MAGIC VARS - ALL MAGIC USERS MUST SET THESE VARIABLES
# GENERIC MAGIC VARIABLES FOR ALL MAGIC USERS
######################################################################################################################
######################################################################################################################
# SMART MANA FOR SPELLS? AUTO-DETERMINES OPTIMAL MANA FOR SPELLS AFTER A NEW SETUP (OR EVERY ~2 WEEKS IN GAME)
# SMART MANA WILL AUTOMATICALLY ADJUST YOUR MANA LEVELS UP AND DOWN AS YOU GAIN IN RANKS FOR OPTIMAL LEARNING
# (ON or OFF) - RECOMMEND LEAVING ON - SETTING THIS ON WILL OVERRIDE ALL MANUAL MANA SETTINGS 
# TURNING SMART.SPELLS OFF MEANS YOU WILL ~HAVE~ TO SET MANA MANALLY AND DO MUCH MORE FINE TUNING 
     var SMART.SPELLS ON
# CAMB HEAVY (ON or OFF) (OFF by default) - ON WILL MAKE SMART MANA PUT MORE MANA INTO CAMBRINTH THEN MAIN PREP
     var Camb.Heavy OFF
# MAGIC RATE - (NULL is RECOMMENDED) Set the MIN Magic Rate to reach before switching to a different spell school. 
# SETTING TO A NUMBER WILL SPAM THE SAME SPELL UNTIL YOU REACH DESIRED LEARNINGRATE. Set to NULL to cycle through spells normally 
     var Magic.Rate NULL
# MAGIC SNAP CAST. Set to 0 for Full Aim. Set to desired number of seconds to pause for that many seconds before casting
     var MAGIC.SNAP 0
# CAMBRINTH CHARGES - Number of Times to Charge your cambrinth (or harness if Cambrinth is NULL) each time!
# RECOMMEND LEAVING THIS AT 1 - 2 AT MAX - THIS VARIABLE TIES INTO HOW SMART MANA CALCULATES MANA
     var CambrinthCharge 1
# OFFENSIVE SPELL MANA AMOUNTS - Set BASE MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Mana 15
     var Debilitation.Mana 15
     var Utility.Mana 15
     var Augmentation.Mana 15
     var Warding.Mana 15
     var Sorcery.Mana 15
# OFFENSIVE SPELL CAMBRINTH AMOUNTS - Set CAMBRINTH MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Camb 20
     var Debilitation.Camb 20
     var Utility.Camb 20
     var Augmentation.Camb 20
     var Warding.Camb 20
     var Sorcery.Camb 20
# USE HARNESS / CAMBRINTH FOR OFFENSE SPELLS (ON or OFF)
# TURN OFF TO SKIP HARNESS/CAMBRINTH COMPLETELY
     var Use.Cambrinth ON
# USE HARNESS / CAMBRINTH FOR BUFFS (ON or OFF)
     var Use.Cambrinth.Buffs ON
# CAMBRINTH ITEM for charging BUFFS/SPELLS (Set to NULL to not use)
     var Cambrinth cambrinth ring
     var Cyclic.Cambrinth NULL
# CAMBRINTH MANA AMOUNT FOR SPELLS - Amount of Mana to put in CAMBRINTH for Magic Tattoos / Harness for Cyclics when No Raw Chanelling feat
     var CambrinthMana 5
# CAMBRINTH MANA FOR Cylics - Amount of Mana to put in cambrinth for Cylics ONLY
     var CyclicCharge 10
# SLOW.CAST (ON or OFF) - OFF IS DEFAULT - Slow Cast ON will cast offensive spells about half as often as normal
# SLOW.CAST OFF (Default) will spam spells in between attacks as much as possible (mana permitting)
     var Slow.Cast OFF
# NO CAMBRINTH USE DURING TM / DEBIL SPELLS (ON or OFF)
# IF YOU SET THIS ON, SCRIPT WILL SKIP USING A CAMBRINTH FOR TM OR DEBIL SPELLS
     var NoCambTM OFF
# POWER PERCEIVE (Perceives every ~5 minutes)
     var POWERP ON

# RITUAL FOCUS ITEM (REQUIRED for RITUAL SPELLS - set Ritual to NULL to not use)
# Ritual.Container can be set to any Container - or set to NULL to wear it first
     var Ritual staff
     var Ritual.Container %Container
# SORCERY RITUAL FOCUS (Separate ritual focus for Sorcery IF NEEDED)
     var Sorcery.Focus NULL
# TM DAMAGE FOCUS ITEM - IF SET WILL USE TM FOCI MODE EVERY ~HOUR (set to NULL to not use)
     var TMFoci NULL
     var TMFoci.Container %Container
# USE SYMBIOSIS ON ATTACK SPELLS? (ON or OFF)
# ONLY USEFUL AT ~HIGHER RANKS~ OF MAGIC - ~NOT~ FOR NOOBS!!
     var Target.Symbiosis OFF
     var Utility.Symbiosis OFF
     var Augmentation.Symbiosis OFF
     var Warding.Symbiosis OFF
     var Sorcery.Symbiosis OFF
     var Debilitation.Symbiosis OFF
# USE SYMBIOSIS ON BUFFS? (ON or OFF) - FOR HIGHER RANKS ONLY
     var Symbiosis.Buffs OFF

# MAGIC TATTOO (Set to NULL or the FULL SPELLTIMER NAME i.e - IronConstitution / MajorPhysicalProtection) - Will use a Magic Tattoo every ~5-10 minutes
# FULL SPELLTIMER NAME MUST ALSO BE SET IN YOUR BUFFS OR SPELLS - USE SORCERY.CAMB (ABOVE) TO SET CAMB MANA FOR MAGIC TATTOO
     var Magic.Tattoo NULL
# MAGIC TATTOO CAMBRINTH/HARNESS MANA - Set the amount of Camb Mana you want to boost your tattoo with
     var Tattoo.Camb 30
# HEROIC TATTOO (ON or OFF) - ONLY FOR HEROIC TATTOOS! (Normal tattoos use Magic.Tattoo)
# VERY BASIC - WILL JUST INVOKE TATTOO / CAST ON A 1 HOUR COOLDOWN
     var Runic.Tattoo OFF

#########################################################################################
# GUILD SPECIFIC OPTIONS BELOW
# SET THE GUILD OPTIONS FOR THE CURRENT CHARACTER YOU ARE EDITING 
########################################################################################
########################################################################################
# NECROMANCER SETTINGS
# SET NECRO.HEAL ON TO USE NECRO HEALING - (Consume Flesh / Devour depending on skills)
     var Necro.Heal ON
## NECROHEAL CREATURE (SET A ~LOW LEVEL~ CREATURE TO KILL ~ONLY FOR DEDICATED HEALING PURPOSES~)
## IDEALLY SET THIS TO A CREATURE NEAR YOUR "HOME CITY" SO YOU DON'T HAVE FAR TO RUN FOR HEALING
     var NecroHeal.Critter GOBLIN SHARD
# SET NECRORITUAL ON TO PERFORM RITUALS IN COMBAT (Preserve/Harvest/Dissect/Butchery/etc)
     var NecroRitual ON
## FORSAKEN? (ON or OFF) - IS NECRO FORSAKEN?? IF ON - WILL AVOID TOWNS/SERVICES AS MUCH AS POSSIBLE!! 
## *Not fully tested/implemented-may not be perfect- but should avoid towns. May have issues REPAIRING ARMOR Unless USING FC* 
     var Forsaken OFF
## RISEN? (ON or OFF) - CREATES RISEN MINIONS IN COMBAT (CAREFUL - GENERATES DIVINE OUTRAGE!) 
     var Risen OFF
## QUICKEN EARTH - ON TO CHECK FOR AND SUMMON DIRT CONSTRUCTS EVERY ~5 MINUTES
     var QuickenEarth OFF
     var QE.Mana 10
     var CFB.Mana 10
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Necro.Cyclics |USOL|ROC
     var Necro.Cyclics.mana |5|4
## Necromancer ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Necro.Target.Spell ACS|VS
     var Necro.Debilitation.Spell HP
     var Necro.Utility.Spell GAF
     var Necro.Augmentation.Spell Obfuscation
     var Necro.Warding.Spell MAF
     var Necro.Sorcery.Spell MPP
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Necro.Buffs IVM|REI|ROC|CH
########################################################################################
########################################################################################
### BARD SETTINGS
# Cyclic Spell Setup
# YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST be set for each individual cyclics!
# YOU MUST SET cyclic.mana in an array to match!! 6 cyclic - 6 mana numbers
  # SET TO NULL/OFF IF NOT TRAINING CYCLICS - THERE ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Bard.Cyclics |AEWO|HODI|FAE|CARE|PYRE|GJ
     var Bard.Cyclics.mana |5|4|5|5|5|6
## Bard ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Bard.Target.Spell BOS
     var Bard.Debilitation.Spell DMRS
     var Bard.Utility.Spell AOT
     var Bard.Augmentation.Spell WILL
     var Bard.Warding.Spell REPR
     var Bard.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Bard.Buffs |MIS|HARM|RAGE|REPR
## BARD SCREAMS? ( Screams in combat every ~60 seconds) (ON or OFF)
     var Bard.Scream ON
## BARD WHISTLE (ON or OFF)
     var Bard.Whistle ON
########################################################################################
########################################################################################
# WARRIOR MAGE SETTINGS
## USE SUMMONING? (Will train Summoning every ~3 minutes)
     var Summoning ON
## ELEMENTAL ALIGNMENT - Element can be FIRE, WATER, ELECTRIC, AETHER, AIR or EARTH
     var element FIRE
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var WM.Cyclics |EE|AC|FR
     var WM.Cyclics.mana |5|4|5
## Warrior Mage ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var WM.Target.Spell FS|FB
     var WM.Debilitation.Spell EE|ALA
     var WM.Utility.Spell ETF
     var WM.Augmentation.Spell YS
     var WM.Warding.Spell ES
     var WM.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var WM.Buffs Ease|TW|SW|Zephyr|SUF|Ignite
## ~WEAPON SUMMONING LOGIC~
# SUMMON WEAPONS (ON or OFF)
     var SummonWeapons OFF
# SUMMON ELEMENT - Must set your WEAPON SUMMON ELEMENT ( Stone/Earth (Default) - Fiery/Fire (Fiery Infusions) - Icy/Ice (Icy Infusions) - or Electric (Shocking Infusions)
     var SummonElement FIRE
# ELEMENTAL CHARGE SPELL Must be *a spammable spell* of your chosen element. Will prep at minimum mana - if you want to prep at something else put a number after
     var ChargeSpell MOA
# SUMMON WEAPON TEMPLATE (0 or 1) - 0 = Default weapon, 1 = Turn weapon to other template
     var SummonTemplate 1
# SUMMON WEIGHT/DENSITY (0 - 2 to set weapon density - Must know QUICK INFUSIONS spell)
# 0 = Lightest Weight, 1 = DEFAULT, 2 = Heavier Weight
     var SummonWeight 1
# Set weapons you want to summon (ON or OFF) - Setting to ON will override your default weapon variables at top of script
     var SummonHT OFF
     var SummonLT OFF
     var SummonSE OFF
     var SummonLE OFF
     var SummonTHE ON
     var SummonSB OFF
     var SummonLB OFF
     var SummonTHB ON
     var SummonPolearms ON
     var SummonStaves ON
## INGOT (ON or OFF) Bump up tier of weapons - Must know REINFORCED INFUSIONS spell and have a rare metal ingot
     var WMIngot OFF
## SET INGOT STORAGE CONTAINER (Set to either a sigil ring or a specific container)
     var Ingot.Container sigil ring
########################################################################################
########################################################################################
# MOON MAGE SETTINGS
## MOON MAGE ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var MM.Target.Spell DO|Burn
     var MM.Debilitation.Spell Dazzle|MB
     var MM.Utility.Spell PG
     var MM.Augmentation.Spell AUS|ART
     var MM.Warding.Spell PSY
     var MM.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var MM.Cyclics |SHW
     var MM.Cyclics.mana |5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var MM.Buffs CV|Shadows|TS|COL|Shadowling|PSY
## OBSERVATION TRAINING - PREDICT TOOL IS ONLY USED FOR PREDICTION OUTSIDE OF COMBAT! TOOL MUST ALREADY BE BONDED!!
## Predict.tool can be - BONES, CHART, MIRROR, PRISM, BOWL, DECK or NULL to turn off.
     var Predict.Tool DECK
## Read The Ripples (RTR ON or OFF) - Will Perform a RTR routine (observe spam) during town run **MUST HAVE TELESCOPE!
     var RTR OFF
## Where you store your telescope * If any - defaults to your main Container if not set
     var Telescope.Container NULL
## OBSERVE IN COMBAT (ON or OFF) - If ON will do Astrology observations in Combat every couple minutes
     var Combat.Observe ON
########################################################################################
########################################################################################
# CLERIC SETTINGS
## CLERIC ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Cleric.Target.Spell FOU|FF
     var Cleric.Debilitation.Spell PS|Malediction
     var Cleric.Utility.Spell DR|BLESS
     var Cleric.Augmentation.Spell Benediction
     var Cleric.Warding.Spell MPP|SL
     var Cleric.Sorcery.Spell dazzle
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Cleric.Cyclics |HYH|GHS|REV|SA
     var Cleric.Cyclics.mana |15|15|15|15
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Cleric.Buffs OM|Auspice|SOS|POM|MAPP|PFE|YS
## ARE YOU USING OM ORB? (MUST BE SET IN BUFFS ABOVE!) SET MANA AMOUNT TO CAST OM / CHARGE ORB WITH EACH TIME
     var OM.Mana 25
## TYPE OF ORB YOU USE FOR OM - OPTIONS:( FIRULF, MERAUD or KEREN)
     var FavorOrb meraud
## BUFF SPELLS YOU WANT TO ALWAYS KEEP ACTIVE IN YOUR OM ORB (You can just set this to var OM.Buffs %Cleric.Buffs ) 
     var OM.Buffs PFE|POM|MPP|MAPP|SAP|SOL
## CLERIC RITUALS? (Perform CLERIC RITUALS during Town Runs/in Combat)
     var ClericRituals ON
### Prayer Mat - Set to NULL to not use or the noun of the mat/rug
     var PrayerMat mat
## HOLY WATER VESSEL - Set your container you use to store/collect holy water
     var HolyWater chalice
### COMBAT COMMUNES - (ON or OFF) - Set the COMMUNES you wish to perform while IN COMBAT 
     var Commune.Meraud ON
     var Commune.Truffenyi ON
     var Commune.Tamsine OFF
### FLINT KNIFE - Set a DEDICATED WEAPON/KNIFE to STRIKE FLINT for MAKING FIRE for RITUALS
### MUST be a METAL weapon you can use to STRIKE FLINT for fire
     var FlintKnife knife
## CLERIC ALIGNMENT GOD - Set a God to align to ( https://elanthipedia.play.net/Cleric_3.0#Alignment )
## CHOOSE A LIGHT/DARK/NEUTRAL GOD ONLY - Each Type will buff 2 magic skills and penalize 3 others
## BY DEFAULT SCRIPT WILL USE ~CHADATRU~ (Which buffs AUG/WARDING - Generally the most lacking magics for Clerics)
## Set a different god if you wish to buff other magics but BE CAREFUL!!! 
     var Alignment.God CHADATRU
########################################################################################
########################################################################################
# RANGER SETTINGS
## RANGER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Ranger.Target.Spell DEVI|STAMPEDE
     var Ranger.Debilitation.Spell DEADFALL|SWARM
     var Ranger.Utility.Spell EM|BLEND
     var Ranger.Augmentation.Spell SOTT
     var Ranger.Warding.Spell EY
     var Ranger.Sorcery.Spell ECRY
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Ranger.Cyclics |CS|BES
     var Ranger.Cyclics.mana |5|5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Ranger.Buffs Athleticism|STW|EY|WOTP|OATH|ETC|Bloodthorns
########################################################################################
########################################################################################
## PALADIN SETTINGS
## PALADIN ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Paladin.Target.Spell FST
     var Paladin.Debilitation.Spell Shatter
     var Paladin.Utility.Spell AS
     var Paladin.Augmentation.Spell RW
     var Paladin.Warding.Spell SP
     var Paladin.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Paladin.Cyclics |HOW|TR
     var Paladin.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Paladin.Buffs AA|Courage|HES|RW|SR|Clarity
## SET your HOLY WEAPON here (NULL to ignore) - Holy Weapon Name
     var HolyWeapon NULL
## Holy Icon (NULL TO NOT USE/IGNORE) - Set to the noun of your icon
     var HolyIcon NULL
########################################################################################
########################################################################################
## TRADER SETTINGS
## TRADER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Trader.Target.Spell CRD|STARCRASH
     var Trader.Debilitation.Spell FLUORESCE|AVA
     var Trader.Utility.Spell NOUMENA
     var Trader.Augmentation.Spell BLUR
     var Trader.Warding.Spell IR
     var Trader.Sorcery.Spell MPP
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Trader.Cyclics |ARS|SOV
     var Trader.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Trader.Buffs |TRC|Blur|LGV|NONCHALANCE
########################################################################################
########################################################################################
# EMPATH SETTINGS
## EMPATH ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Empath.Target.Spell PARALYSIS
     var Empath.Debilitation.Spell LETHARGY|NB
     var Empath.Utility.Spell GS|HEAL
     var Empath.Augmentation.Spell REFRESH
     var Empath.Warding.Spell IC|POP
     var Empath.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Empath.Cyclics |AD|REGEN
     var Empath.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Empath.Buffs  |AGS|BS|IC|GOL|MEF|TRANQUILITY
## GAURDIAN SPIRIT? (ON or OFF) - ON will keep up Guardian Spirit while in Combat
     var Guardian.Spirit ON
## CUSTOM GUARDIAN SPIRIT (ON or OFF) - If ON - will "cast custom" instead of casting normal
     var Guardian.Custom OFF
## ATTACK CONSTRUCTS ONLY? (ON or OFF) - ON will ONLY attack constructs (unless using Absolution vs unded). OFF will attack everything
## WARNING - SETTING TO OFF WILL CAUSE EMPATHIC SHOCK!!!!
     var Construct.Only ON
## USE MANIPULATE FRIENDSHIP (ON or OFF) - ON will attempt to manipulate non-construct creatures
     var Manipulate ON
## ESCAPE COMBAT WHEN EMPATHY REACHES 0? (ON or OFF) - If Empathy LearningRate reaches 0 during combat, will go on town run
     var Empathy.Escape OFF
## EMPATH PERCEIVE HEALTH WALKS (ON or OFF) - If ON - Will go on perceive health walks around town during town run
     var Empath.Walk ON
## EMPATH UNITY LINK (ON or OFF) - FOR EMPATH HEALBOT MODE - DO YOU KNOW UNITY LINK? MUST BE 70+ CIRCLE AND 380+ EMPATHY
     var Unity ON
## TEACH CLASS (FOR HEALBOT MODE) - SET THE SKILL OF THE CLASS YOU WANT TO TEACH
     var TeachClass TM
## BLACKLIST! (FOR HEALBOT MODE) - SET THE NAMES OF THE PEOPLE TO BLACKLIST FROM HEALING SERVICES!
## MUST BE IN AN ARRAY - var Blacklist Bob|Frank|Dave
     var Blacklist NULL
########################################################################################
########################################################################################
# THIEF SETTINGS
# AMBUSH TRAINING (Use AMBUSH MOVES in COMBAT - STUN/CLOUT/SLASH)
     var Ambush ON
# SELECT KHRI TO USE (Set as many ON / OFF as you want )
# IT WILL ONLY USE AS MANY KHRI AS YOU CAN HANDLE AT ONCE, PRIORITIZING THE MOST IMPORTANT DEPENDING ON SCENARIO)
     var khriSAGACITY ON
     var khriSTEADY ON
     var khriSTRIKE ON
     var khriFOCUS ON
     var khriELUSION ON
     var khriENDURE ON
     var khriAVOIDANCE ON
     var khriADAPTATION ON
     var khriPROWESS ON
     var khriHASTEN ON
     var khriHARRIER OFF
     var khriSERENITY OFF
     var khriSIGHT ON
     var khriFLIGHT ON
     var khriCALM OFF
     var khriGUILE OFF
     var khriDARKEN ON
     var khriDAMPEN ON
     var khriSHADOWSTEP ON
     var khriELIMINATE OFF
     var khriTERRIFY OFF
     var khriFRIGHT OFF
     var khriINTIMIDATE OFF
     var khriPLUNDER ON
     var khriSAFE OFF
     var khriEVANESCENCE OFF
     var khriCREDENCE OFF
     var khriCUNNING OFF
# USE KHRI DURING TOWN RUN? (ON or OFF) - Turn OFF to Skip using Khri during town run - for Sanowret use
     var Khri.Town ON
########################################################################################
########################################################################################
# BARBARIAN SETTINGS
# USE WHIRLWIND?
     var Whirlwind ON
# USE DUAL WIELD? (ON or OFF) - Dual wield requires 450+ in the weapon
     var DualWield ON
# EXPERTISE COMBOS? (ON or OFF) - Does Barb Expertise Combos (and helps generate IR)
     var Expertise ON
# Set which Forms you want to use (ON or OFF)
# Auto-turns some forms on/off depending on what skills you are training
     var barbEagle ON
     var barbBadger ON
     var barbPanther ON
     var barbPiranha ON
     var barbDragon ON
     var barbMonkey ON
     var barbTurtle OFF
     var barbOwl OFF
     var barbBear ON
     var barbBuffalo OFF
     var barbPython ON
     var barbSwan ON
     var barbToad OFF
     var barbWolverine OFF
# ROARS to use (will only use one)
     var roarEmbrace OFF
     var roarEverild ON
     var roarWail OFF
     var roarScreech OFF
     var roarShriek OFF
     var roarAnger ON
     var roarKuniyo ON
# BERSERKS to use
     var zerkHurricane OFF
     var zerkBlizzard ON
     var zerkFamine ON
     var zerkAvalanche ON
     var zerkTsunami OFF
     var zerkWildfire OFF
     var zerkEarthquake OFF
     var zerkTornado OFF
     var zerkFlashflood ON
     var zerkLandslide ON
     var zerkCyclone OFF
     var zerkDrought OFF
# MEDITATIONS to use (ON or OFF) - WILL ONLY WORK FOR HIGHER LEVEL BARBS
     var medContemplation ON
     var medTenacity ON
     var medSerenity ON
### END OF CHARACTER 10 VARIABLES
### STOP EDITING HERE ~~~ END OF CHARACTER 10 VARIABLES ##########
####################################################################################
####################################################################################
echo **** LOADED %CHARACTER10 VARIABLES
goto END.OF.VARS
}

CHARACTER11:
#########################################################################################################
#########################################################################################################
## CHARACTER 11 VARIABLES
## *CHARACTER11 VARIABLES BLOCK BELOW
if matchre("$charactername", "(?i)%CHARACTER11") then
#########################################################################################################
{
### GENIE LAYOUT - SET THE GENIE LAYOUT YOU WANT THIS CHARACTER TO USE - MUST EXACTLY MATCH THE LAYOUT NAME IN GENIE!
### Example: var GENIE.LAYOUT Shroom.layout - TO SAVE A LAYOUT IN GENIE SET IT UP HOW YOU LIKE AND CLICK LAYOUT > SAVE LAYOUT AS > NAME IT HOW YOU WANT
### IF YOU LEAVE THIS SET TO NULL THEN IT WILL JUST USE THE DEFAULT LAYOUT THAT IS SET (default.layout) 
     var GENIE.LAYOUT default.layout
### HEAL.CITY ( NULL or CITY NAME (CROSS/LETH/HIB/RIVER/THEREN/SHARD) - Will run to this town for HEALING no matter where you are
     var HEAL.CITY NULL
### HOME CITY (NULL or CITY NAME) - Will attempt to return to your home city after a heal run (if not already in that city) ONLY SUPPORTS MAINLAND CITIES
     var HOME.CITY NULL
### SAFE ROOM (set to NULL to ignore) ~MUST~ TIE INTO HOME.CITY ABOVE! THE ROOM ID YOU WANT TO SCRIPT IN DURING TOWN RUN - MUST BE VALID ROOMID IN YOUR HOME CITY!
### WARNING!: IF YOU DO NOT SET BOTH HOME.CITY AND SAFE.ROOM CORRECTLY YOU ~WILL~ RUN INTO ERRORS - LEAVE BOTH AT NULL TO LET SCRIPT LOGIC HANDLE IT
     var SAFE.ROOM NULL
### AUTO-PROGRESS? (ON or OFF) - ON WILL CHOOSE YOUR COMBAT CREATURE AUTOMATICALLY BASED ON YOUR RANKS - YOU DO NOT NEED TO SET IT! OVERRIDES COMBAT.CRITTER VARIABLE
     var AUTO.PROGRESS ON
### AUTO-PROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var PROGRESS.TYPE NORMAL
### COMBAT CRITTER - ONLY USED WITH AUTO.PROGRESS OFF - MUST BE A VALID CREATURE NAME! USE FULL NAME OR 1/2/3 TO SPECIFY TIERS ie SNOW GOBLIN 2
     var COMBAT.CRITTER GOBLIN
### ALTERNATE CRITTER - PICK A ALTERNATE CRITTER TO HUNT - IF YOUR MAIN HUNTING GROUND IS FULL!
     var ALTERNATE.CRITTER MUSK HOG
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var PRIORITY.ROOMS NULL
### XP TRACKER RESET ON SCRIPT STARTUP - (ON or OFF) - RESETS EXP TRACKER TRACKING TIME ON INITIAL LAUNCH OF SCRIPT ONLY
     var XP.RESET ON

### GUI OPTIONS ARE RECOMMENDED TO LEAVE OFF COMPLETELY - THESE OPTIONS ONLY HERE BY SPECIAL REQUEST - WILL BE ANNOYING IF YOU TURN IT ON
### CRITTER.GUI (ON or OFF) - OFF by default - CREATES CRITTER GUI WINDOW - MUST MANUALLY CLICK TO CHOOSE YOUR COMBAT CRITTER BASED ON PROVINCE / SKILL / PREFERENCE
     var CRITTER.GUI OFF
### WEAPON.GUI (ON or OFF) - OFF by default - CREATES WEAPON GUI WINDOW - CHOOSE YOUR WEAPONS FOR THAT RUN *IF YOU HAVE AN ARRAY OF WEAPONS SET IN A SINGLE WEAPON VARIABLE
     var WEAPON.GUI OFF

# FRIEND LIST (People you will hunt with) Put your friends names in place of these. Ex. Bob|Fred|George
# Can just put your name in here or make it blank and it will only find empty rooms.
     var FRIENDS %ALLCHARACTERS|%GLOBALFRIENDS

##############################################################
# WEAPON / CONTAINERS / AMMO SETTINGS - BE VERY SPECIFIC! 
##############################################################

# CONTAINERS - MANDATORY! - SET YOUR MAIN ~3-4~ LARGEST CONTAINERS!
# BE SPECIFIC WITH CONTAINER NAMES - USE 2 WORDS WHENEVER POSSIBLE!
     var Container backpack
     var Container.Boxes haversack
     var Container.Backup duffel bag
     var Container.Crafting carryall
# SHEATH CONTAINER IS FOR SUPER LONG ITEMS - CAN BE ANY LARGE CONTAINER - NOT NECCESARY TO SET 
     var Container.Sheath NULL
# AMMO CONTAINER FOR STORING AMMO - ARROWS/BOLTS/ROCKS - BACKUP CONTAINER IS "OVERFLOW" FOR EXTRA AMMO
     var Container.Ammo quiver
     var Container.Ammo.Backup NULL
## CONTAINER.GEMPOUCH - VERY IMPORTANT! - ~MUST BE A SEPARATE CONTAINER~ FROM OTHER BAGS! SMALL/MEDIUM-SIZE CONTAINER IS FINE
## SPECIAL CONTAINER! SCRIPT WILL KEEP THIS CLOSED AT ALL TIMES AND ~ONLY USE IT FOR STORING FULL GEM POUCHES!~
## CONTAINER.GEMPOUCH MUST BE A ~CLOSABLE~ CONTAINER TO STORE ~FULL~ GEM POUCHES IN 
## AGAIN - DO NOT SHARE THIS CONTAINER WITH ~ANY OTHER CONTAINERS~ (except Repair Pouch Container) 
     var Container.GemPouch thigh pouch
# Container.EmptyPouch is for storing EMPTY GEM POUCHES (This can be ANY container EXCEPT for Container.GemPouch )
     var Container.EmptyPouch backpack
# DIRT CONTAINER - For storing dirt for various use (ONLY used by Thieves/Clerics/Necros)
     var Container.Dirt backpack
## MISC SHEATH OPTIONS (Storing specific weapons in specific containers - toolstraps/bandoliers/harnesses etc) - SET TO NULL/OFF TO NOT USE
## SET THE SHEATH NAME UNDER SHEATH.1 - SET THE WEAPONS YOU WANT TO USE ON EACH SHEATH UNDERNEATH IN AN ARRAY ex:
## var Sheath.1 toolbelt
## var Sheath.1.Weapons sabre|axe|broadsword
     var Sheath.1 NULL
     var Sheath.1.Weapons machete|crossbow|club|flail|slingshot|assassin's blade|steppe bow|katana|nightstick|thrusting blade|shortbow|mace|ngalio|sling|maul|quarterstaff|zweihander|spear|flamberge|mirror ava|throwing (mallet|hammer|club)
     var Sheath.2 NULL
     var Sheath.2.Weapons stonebow|slingshot|blowgun|boomerang
     var Sheath.3 NULL
     var Sheath.3.Weapons mirror blade
     var Sheath.4 NULL
     var Sheath.4.Weapons mirror knife
     var Sheath.5 NULL
     var Sheath.5.Weapons throwing blade|icicles|icicle
     var Sheath.6 NULL
     var Sheath.6.Weapons kertig dart
     
## WEAR WEAPONS (Set an array of weapons/shields you want the script to try and wear first before stowing)
     var Wear.Weapons NULL

## SMART.WEAPONS - ON TO TRAIN WEAPONS FROM LOWEST SKILL TO HIGHEST. "OFF" WILL GO IN A LINEAR ORDER (DEFAULT: ON)
## ON WILL DYNAMICALLY TRAIN TO ALWAYS MAKE SURE THE LOWEST SKILLED WEAPON IS TRAINED FIRST 
     var SMART.WEAPONS ON
     
## WEAPON SETTINGS - BE VERY SPECIFIC SETTING WEAPONS ! USE TWO WORDS WHENEVER POSSIBLE!
## SET ALL YOUR WEAPONS BELOW - MUST ~EXACTLY MATCH THE ITEM DESCRIPTION WHEN IN HANDS~! (GLANCE at it in your hands to get correct description) 
## BE SPECIFIC WHEN SETTING WEAPONS!! USE 2 WORDS WHEN POSSIBLE! TO TURN A WEAPON SKILL ~OFF~ SET IT TO - NULL
     var SEWEAPON assassin's blade
     var LEWEAPON damaris falchion
     var THEWEAPON zweihander
     var SBWEAPON damaris bola
     var LBWEAPON horseman's flail
     var THBWEAPON damaris akabo
     var STAVES damaris quarterstaff
     var POLEARMS damaris pike
     var RANGED.BOW lirisan shortbow
     var RANGED.CROSSBOW cloudbark crossbow
     var RANGED.SLING damaris sling
     var LTWEAPON icicles
     var HTWEAPON damaris mallet
# MAIN OFFHAND WEAPON TRAINING - MELEE ONLY (MUST BE A LIGHT/MEDIUM WEAPON - HEAVY or 2HANDED WEAPONS WONT WORK!!)
     var OHWEAPON club
# ALTERNATE OFFHAND WEAPONS (For Backtraining/Dual Training weapons while training other Weapons)
# ~MUST~ BE LIGHT/MEDIUM WEIGHT WEAPON! CANNOT USE HEAVY or 2Handed Weapons! (Unless Barb) (SET TO NULL/OFF TO NOT USE)
     var ALTWEAPON1 club
     var ALTWEAPON2 bola
     var ALTWEAPON3 NULL
## BRAWLWEAPON (DEFAULT: $charactername - Set to NULL to skip brawling)
     var BRAWLWEAPON $charactername
     #var BRAWLWEAPON $charactername
## Backstab/Ambush Weapon (Thief Only)
     var BSWEAPON mirror blade

# AMMO SETTINGS - DO NOT REMOVE THE { } BRACKETS!!!
     if (!$AMMOSWAP) then
{
     var XbowAmmo crossbow bolt
     var BowAmmo arrow
     var SlingAmmo stone shard
}

## ARMOR CHECK (ON or OFF) - Turn this OFF if you want the script to SKIP checking your armor at the beginning
## If ON - at the beginning, script will remove any armor/fluff you are wearing, and then put on all the armor you have set below. This ensures you have the correct armor on.
     var ARMOR.CHECK ON
## SET YOUR SHIELD - ABSOLUTELY 100% MANDATORY! RECOMMEND AN ARM-WORN SHIELD
     var MyShield diamondwood shield
## ARM WORN SHIELD? (ON OR OFF) - I RECOMMEND ALWAYS USING AN ARM WORN / SMALL SHIELD - MAKES LIFE MUCH EASIER
     var ArmWorn ON
## MAIN ARMOR TO CHECK - PRIMARY COMBAT (Set to NULL to IGNORE a slot)
## YOU MUST SET ALL YOUR ARMOR BELOW - IT DOESN'T MATTER WHICH ARMOR SLOT YOU USE - THE SCRIPT DOESN'T CARE
     var CHEST.ARMOR khiynit robe
     var FACE.ARMOR NULL
     var HEAD.ARMOR leather cowl
     var ABDOMEN.ARMOR NULL
     var BACK.ARMOR NULL
     var ARM.ARMOR assassin's sleeves
     var HAND.ARMOR NULL
     var LEG.ARMOR NULL
     var KNUCKLE telothian knuckle
     var PARRYSTICK parry stick

## PRIORITY WEAPONS - WEAPON SKILLS TO KEEP MOVING ~ALWAYS~ - PRIORITIZE THESE WEAPON SKILLS OVER ALL OTHERS IF THEY ~EVER~ DROP TO 0/34
## MUST BE SET IN AN ARRAY - THE EXACT SAME AS GENIE EXP VARIABLE FORMAT ie: var Priority.Weapons Medium_Edged|Twohanded_Edged
## WARNING!! DO NOT SET PRIORITY WEAPONS UNLESS YOU WANT THOSE SKILL(S) TO TAKE PRIORITY OVER ~ALL~ OTHERS! ~WILL~ CAUSE UNEVEN RANKS OVER TIME!!
## THIS IS MAINLY ONLY USEFUL FOR SHORT PERIODS - FOR POWER LEVELING A SINGLE WEAPON SKILL FOR EXAMPLE - RECOMMEND NULL UNLESS YOU KNOW WHAT YOU ARE DOING
     var Priority.Weapons NULL
     
## TRAIN LOWEST (ON or OFF) - ON WILL ALWAYS TRAIN W/ YOUR LOWEST RANK & LOWEST LEARNINGRATE WEAPON AT EVERY WEAPON SWAP 
## THIS EFFECTIVELY ENSURES THAT ALL YOUR WEAPON SKILLS WILL TRAIN AND STAY AT THE ~EXACT SAME RANKS~ - ESPECIALLY IF USED FROM THE START
## NOTE! TRAINLOWEST ON - WILL ALTER THE DEFAULT WEAPON TRAINING ORDER - BYPASSES THE SET ORDER TO DYNAMICALLY TRAIN WEAPONS 
     var TrainLowest OFF

# MAX LEARNING RATE - FOR EACH WEAPON SKILL (WILL SWITCH WEAPONS ONCE REACHING THIS RATE *MAX 33) *SET TO 35 TO IGNORE LEARNINGRATE 
     var MAX.LEARNINGRATE 12
# LEARNING RATE INCREASE - AFTER FULL WEAPON LOOP *OF ALL WEAPONS* - INCREASE THE MAX.LEARNINGRATE BY THIS MUCH
     var LEARNING.INCREASE 4
# MAX TIME PER WEAPON - SET THE MAXIMUM TIME (IN SECONDS) TO TRAIN EACH WEAPON SKILL - BEFORE SWITCHING WEAPONS
# SETTING THIS TOO HIGH MAY CAUSE SUBOPTIMAL TRAINING - RECOMMEND AROUND ~300-500 (~5-8 minutes per weapon)
     var MAX.TIME 250
# MAXIMUM TOTAL COMBAT TRAINING TIME - SET THE MAX TIME (IN SECONDS) TO STAY IN ~COMBAT~ BEFORE ESCAPING TO TOWN ( 3600 SECONDS = 1 HOUR )
# SET VAR MAX.TRAIN 0 - TO LOOP COMBAT FOREVER ( *UNTIL IT ESCAPES DUE TO BEING TOO HURT / BAGS TOO FULL / BURDEN TOO HIGH )
     var MAX.TRAIN 4500
     
# STANCE PER WEAPON (Set NULL to use default - Or SHIELD/PARRY/EVASION/CUSTOM TO USE THAT PARTICULAR STANCE FOR A PARTICULAR WEAPON)
## NOTE SCRIPT IS ALREADY ADVANCED IN CHANGING STANCES DEPENDING ON WEAPON BEING TRAINED - NULL IS FINE FOR MOST PURPOSES
     var SE.STANCE NULL
     var LE.STANCE NULL
     var THE.STANCE NULL
     var SB.STANCE NULL
     var LB.STANCE NULL
     var THB.STANCE NULL
     var POLEARMS.STANCE NULL
     var STAVES.STANCE NULL
     var BOW.STANCE NULL
     var CROSSBOW.STANCE NULL
     var SLINGS.STANCE NULL
     var LT.STANCE NULL
     var HT.STANCE NULL
     var OH.STANCE NULL
     var BRAWL.STANCE NULL

## BACKTRAIN (ON or OFF) - ON FOR SETTING A SEPARATE BACKTRAIN ROUTINE
     var BACKTRAIN OFF
## BACKTRAIN AUTO PROGRESS (ON or OFF) - Turning this ON will automatically set the creature to hunt, based on your BACKTRAIN WEAPON SKILLS
## TURN THIS ~OFF~ TO SET THE BACKTRAIN CREATURE MANUALLY (BELOW)
     var BACKTRAIN.AUTOPROGRESS ON
### BACKTRAIN AUTOPROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var BACKTRAIN.PROGRESS.TYPE NORMAL
## BACKTRAIN CREATURE - Must specify the creature to hunt if BACKTRAIN.AUTOPROGRESS is OFF
     var BACKTRAIN.CRITTER ICE ARCHON
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var BACKTRAIN.PRIORITY.ROOMS NULL
## BACKTRAIN TIME (in SECONDS - Total time to Backtrain)
     var BACKTRAIN.TIME 1200
## BACKTRAIN MAGIC (ON or OFF) IF OFF - WILL SKIP USING ANY OFFENSIVE SPELLS PERIOD WHILE BACKTRAINING - WILL ONLY DO BUFFS
     var BACKTRAIN.MAGIC OFF
## BACKTRAIN TM/DEBIL SPELLS (ON or OFF) IF OFF - WILL SKIP USING ANY TM / DEBIL SPELL DURING BACKTRANING (UNLESS ITS A TATTOO)
     var BACKTRAIN.TM OFF
## BACKTRAIN WEAPONS - Set every weapon you wish to backtrain (NULL to turn off)
     var BACKTRAIN.SE NULL
     var BACKTRAIN.LE NULL
     var BACKTRAIN.THE NULL
     var BACKTRAIN.SB NULL
     var BACKTRAIN.LB NULL
     var BACKTRAIN.THB NULL
     var BACKTRAIN.STAVES NULL
     var BACKTRAIN.POLEARMS NULL
     var BACKTRAIN.BOW NULL
     var BACKTRAIN.CROSSBOW NULL
     var BACKTRAIN.SLING NULL
     var BACKTRAIN.LT NULL
     var BACKTRAIN.HT NULL
     var BACKTRAIN.BRAWL NULL
     var BACKTRAIN.OH NULL
     var BACKTRAIN.BS NULL
## BACKTRAIN STEALTH (OFF or ON)
     var BACKTRAIN.STEALTH ON
## BACKTRAINING LOOTING OPTIONS (ON or OFF)
     var B.Loot.Gems ON
     var B.Loot.Boxes OFF
     var B.Loot.Metals ON
     var B.Loot.Scrolls ON
     var B.Loot.Collectibles OFF
     var B.Loot.SpiderParts OFF
## BACKTRAIN LOOTING MODE ( treasure / boxes / goods / equipment )
     var B.Loot.Option goods
## BACKTRAIN ARMOR (ARMOR ONLY FOR BACKTRAIN ROUTINE) (Set to NULL to not check a piece)
     var B.CHEST.ARMOR NULL
     var B.FACE.ARMOR NULL
     var B.HEAD.ARMOR NULL
     var B.ABDOMEN.ARMOR NULL
     var B.BACK.ARMOR NULL
     var B.ARM.ARMOR NULL
     var B.HAND.ARMOR NULL
     var B.LEG.ARMOR NULL

##############################################################
### COMBAT GENERAL SETTINGS
##############################################################

## GEM POUCH DESCRIPTION - DR IS TRICKY WITH GEM POUCHES!! BE SPECIFIC - use "<color> pouch" only! 
## **RECOMMEND DUMPING ALL POUCHES AND GET NEW ONES FROM GEM SHOP ON FIRST SETUP**
## WHEN ASKING FOR NEW GEM POUCHES, "ASK NPC FOR <COLOR> POUCH" - ~DO NOT 'ASK FOR GEM POUCH' OR just 'POUCH'~ - JUST 'ASK <NPC> FOR BLACK POUCH'
## Then Set the var to the 'color' pouch you have. ie var gemPouch black pouch
     var gemPouch black pouch
# TIE GEM POUCHES? (ON or OFF) 
# TIE POUCHES FOR MORE STORAGE/LESS INVENTORY SPACE USE - but have to sell the FULL TIED POUCHES AT SPECIAL SHOPS or get TRADER to sell them!
# IF HUNTING IN SHARD OR ROSSMAN - NO WORRY AS SCRIPT SELLS TIED POUCHES IN THOSE GEM SHOPS. IF hunting in XING/ISLANDS will have to get Trader to sell pouches.
     var TiePouch OFF
# WORN GEM POUCH? (ON or OFF) (OFF will STOW your gem pouch / ON will wear it )
     var Gempouch.Worn OFF

## RESTOCK AMMO? (ON or OFF) *SCRIPT WILL AUTOMATICALLY CHECK IF YOU RUN OUT OF AMMO AND ATTEMPT TO RESTOCK
     var AmmoStock ON
# Skinning Knife Name (Mandatory if not a worn knife)
     var Skinning.Knife knife
# BELT/WRIST/ANKLE ~WORN~ SKINNING KNIFE? (ON or OFF)
     var BeltKnife ON
#### COMBAT OPTIONS ####
# OFFHAND THROWING - (ON or OFF) SET TO ON IF YOU WANT TO ROTATE RIGHT/LEFT HANDS WHILE THROWING LT/HT
     var OffhandThrow ON
# THROWING TYPE (LOB, THROW or HURL) *LOB will NEVER stick / less damage - HURL ALWAYS STICKS/ max damage. THROW is inbetween
## IF YOU USE A SHARP THROWING WEAPON (LIKE SPEAR) ALWAYS USE LOB! THROW WILL STICK WITH A POINTY WEAPON!
## LOB IS THE SAFEST - LOB NEVER STICKS! - THROW IS SAFE ~IF USING A BLUNT THROWN WEAPON~ - HURL ALWAYS STICKS - AVOID HURL 
     var ThrowType throw
# BONDED THROWING WEAPONS? (ON or OFF) - Will use INVOKE to retrieve thrown weapon
     var Bonded OFF
# ROAMING (ON or OFF) - Will ROAM around to different critter rooms if it doesn't find a creature during bored routine
     var Roaming ON
# USE WEAK ATTACKS (ON or OFF) - Will use WEAK attacks for melee training (good for backtraining or preserving fatigue/balance)
     var WeakAttack OFF
# AIM ACTIONS (Set an array of actions) - ACTIONS TO PERFORM WHILE WAITING FOR FULL AIM (WITH RANGED/SPELLS) Separate with |
     var AimActions bob|attack|attack left
# TRAIN STEALTH? TRAIN STEALTH DURING MELEE / THROWN / BRAWLING ROUTINES
     var TrainStealth ON
## LOOT MONSTERS? (ON or OFF) - LOOT MONSTERS?
## OFF WILL SKIP LOOTING ALL MONSTERS ~PERIOD~ AND LET THEM ROT
     var Loot.Monsters ON
## LOOT OPTION TO USE - TREASURE / BOXES / EQUIPMENT/ GOODS or ALL
     var Loot.Option GOODS
## LOOTING OPTIONS (ON or OFF) - LOOT OPTIONS FOR MAIN COMBAT
     var Loot.Gems ON
     var Loot.Boxes ON
     var Loot.Metals ON
     var Loot.Scrolls ON
     var Loot.Collectibles OFF
     var Loot.SpiderParts OFF
# MAX BOXES (Set a number) - MAX number of BOXES to pick up before turning Box looting off for that run
     var Max.Boxes 25
# DISSECT (ON or OFF) - DISSECT mobs for First Aid training in Combat (Alternates with SKINNING depending on Learning Rates)
     var Dissect ON
# SKINNING OPTIONS (ON or OFF)
# SKIN ON but BUNDLE OFF will skin but DROP all skins. SKIN collecting only supported with bundles ON!
     var Skin ON
     var Bundle ON
# TIE BUNDLES (ON or OFF) (Turns on automatically when F2P is ON) - LOWER ITEM COUNT BY TYING UP YOUR BUNDLES
     var TieBundle ON
# BUNDLE LOCATION (SET to NULL to use ANY open location or set a preferred location (shoulder / waist / back / belt / around shoulder / over shoulder)
     var BundleLocation NULL
# ArrangeTarget (SET TO SKIN, BONE or PART - or NULL to skip arrange)
## Set ArrangeTarget to SKIN/BONE/PART to Arrange one time
## Set ArrangeALL to ON to arrange max times
     var ArrangeTarget SKIN
     var ArrangeAll OFF
## ArrangeAlways (ON or OFF) - Set ON to ALWAYS arrange regardless of skinning learningrate. OFF will SKIP ARRANGING when Skinning learning is locked
     var ArrangeAlways OFF
# MAX BUNDLE SIZE - Max amount of skins to keep in bundle before creating a new bundle (DEFAULT: 30  MAX: 200)
     var MaxBundle 40
# Set SNIPE to ON to use SNIPE (THIEF/RANGER/NECRO ONLY)
     var Snipe ON
# Set POACH to ON to use POACH instead of SNIPE (SNIPE overrides this setting if SNIPE is ON - TURN SNIPE OFF TO USE THIS)
     var Poach OFF
# RANGED AIM PAUSE. Set to 0 for a Full Aim. Set number of seconds to pause that many seconds before firing
     var SNAP.FIRE 6
# RETREAT WHILE USING RANGED WEAPONS/BUFFING? (ON or OFF) - Will RETREAT to stay at ranged when using ranged weapons
     var Retreat OFF
## DANCE / COUNT Critters - Set min number of critters to "dance" with before you start killing. 
## Leave Dance.Count 0 to kill EVERYTHING. Set 1 to dance with 1 creature until a 2nd comes in, etc. If set to 1 will ALWAYS leave 1 creature in your room.
     var Dance.Count 0
## TACTICS TRAINING (ON OR OFF) - Train TACTICS in Combat
     var Tactics ON
# APPRAISE CREATURES - (ON or OFF) to APPRAISE ALL CREATURES
     var APPRAISE ON
# HUNT OPTION (HUNT every ~75 seconds unless perception locked)
     var HUNT ON
## APPRAISE ITEMS WHEN NO CRITTERS IN ROOM? (ON or OFF)
     var APP.ITEMS OFF
## ITEMS TO APPRAISE (Set to NULL to not use) SET YOUR WORN ITEMS TO QUICK APPRAISE 
     var app1 NULL
     var app2 NULL
     var app3 NULL
## SANOWRET CRYSTAL? (ON or OFF) - ON will exhale crystal every ~100 seconds *IF CONCENTRATION ALLOWS
     var Crystal OFF
## USE SANORWRET CRYSTALS IN COMBAT? (ON or OFF) - ON will use Sanowrets in combat (Turning ON WILL effect concentration and hinder spell casting - not recommended for most)
     var SanowretCombat OFF
## ZILLS? (ON or OFF) - FOR WORN INSTRUMENTS - ON will play Zills during certain times (Repairing armor, collecting, etc)
     var Zills ON
## Zill name ( zills / cowbell / etc )
     var Zill.Name zills
# F2P CHARACTER (ON or OFF) - If set to ON - Script will escape combat and go to town run when you get an inventory count warning
     var F2P OFF
# BIOMECHANICAL TARANTULA? (ON or OFF) - IF ON - Will pick a (semi-)random near locked skill to drain every 10 minutes while in combat
     var Tarantula OFF
     var Tarantula.Name tarantula
## TARANTULA SKILLS TO CHECK - SET AN ARRAY OF SKILLS TO CHECK AGAINST FOR TARANTULA DRAIN
## MUST EXACTLY MATCH THE GENIE VARIABLE NAMES! THESE ARE THE SKILLS TARANTULA WILL CHECK FOR EACH SCHOOL
     var Magic.skills Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Arcana
     var Armor.skills Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor
     var Survival.skills Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing
     var Weapons.skills Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow
     var Lore.skills Appraisal|Tactics|Performance
# WARHORN? (ON or OFF) - For Barbarians and Bards only.
     var WarHorn OFF
## WAND SUPPORT (NULL to NOT use) (MEF wand / WoW wand / WoTP wand etc.) Set up to 2 sets of wands to use! Must use actual verb of wand!
## CAN SET AN ARRAY OF WANDS FOR EACH VAR ex- var Wand1 bloodwood branch|oaken staff|crystal
     var Wand1 NULL
     var Wand2 NULL
## WAND CONTAINERS *Must use 2 different containers to store Wands if using 2 identical named wands)
     var Wand1.Container belt
     var Wand2.Container cloak
## Wand Weapon - (NULL or WEAPON NAME) SET A MELEE WEAPON TO BUFF WHEN USING WANDS WITH A WEAPON BUFF
     var WandWeapon NULL
## EGG SUPPORT (ON or OFF)*Uses the HE Gift Egg in Combat every ~15 minutes to invoke more mobs
     var EGG OFF
## ASTROLABE (ON or OFF) - Uses an Astrolabe every 30 mins if ON (Will rotate if you use 2)
     var ASTROLABE OFF
## Set the name of the astrolabes - (2 words ONLY i.e - ornate astrolabe, twisted astrolabe)
     var ASTROLABE1 NULL
     var ASTROLABE2 NULL
     var Astro1.Container NULL
     var Astro2.Container NULL
## ORB RUB IN COMBAT (var Orb.Rub ON or OFF) - TURN ON TO RUB FAVOR ORB IN COMBAT EVERY ~40 MINUTES
## *NOTE THAT SCRIPT AUTOMATICALLY RUBS ORB ~ONE TIME~ EVERY FULL LOOP OF SCRIPT REGARDLESS OF THIS VARIABLE
     var Orb.Rub OFF
####################################################################################################
# ARMOR SWAP - (ON or OFF) - SPECIAL ARMOR SWAPPING ROUTINE FOR HELMS ONLY
# WILL SWAP OUT A SINGLE PIECE OF PLATE/BRIG/CHAIN/LIGHT HELM EVERY ~5 MINUTES IN COMBAT
     var Armor.Swap OFF
# IF Armor.Swap is ON - THEN ALL THE ARMORS BELOW MUST BE SET CORRECTLY!
# SET EVERY PIECE OF ARMOR TO SWAP BELOW, MUST SET AN ARMOR PIECE FOR ALL FOUR TYPES - TWO WORDS ONLY!
# ONE PIECE SHOULD MATCH YOUR MAIN ARMOR HELM
     var Light_Armor.Helm steelsilk balaclava
     var Chain_Armor.Helm chain balaclava
     var Brigandine.Helm brigandine balaclava
     var Plate_Armor.Helm NULL
####################################################################################################
# HEAVY ARMOR REMOVAL - (ON or OFF) - ON will take off plate/brig/chain armor before backstab/stealth routines
# Generally only needed for noobs with less then ~200 ranks in armors
     var Armor.Noob OFF
# Set Plate/Brig/Chain pieces here (USE EXACT SYNTAX) (If no armor to remove set to NULL)
     var PLATE1 gauntlet
     var PLATE2 greaves
     var PLATE3 NULL
     var PLATE4 NULL
# Set Light Armor Pieces to Swap in place of the Heavy armor pieces above - if any (set to NULL to not use)
     var LIGHTARMOR1 rugged gloves
     var LIGHTARMOR2 rugged greaves
     var LIGHTARMOR3 NULL
     var LIGHTARMOR4 NULL
####################################################################################################

##############################################################
# TOWN RUN / SPECIAL MODULES - SETTINGS FOR TOWN 
# AUTO HEALER / SELL GEMS/SKINS, BANK, OPTIONAL MODULES
##############################################################

# RETURN TO COMBAT MODULE (ON or OFF) - RESTARTS SCRIPT AND RETURNS TO COMBAT WHEN TOWN RUN IS FINISHED
# IF OFF - SCRIPT WILL ~ABORT~ ONCE TOWN RUN IS COMPLETE - LEAVE THIS ON FOR INFINITE AFK SCRIPTING
     var RETURN.TO.COMBAT ON
# AUTOHEAL (ON or OFF) - ON - LET SCRIPT HANDLE AUTO-HEALING AFTER COMBAT (DEPENDING ON YOUR GUILD/SETTINGS) 
# LEAVE THIS ON UNLESS YOU WANT TO HANDLE HEALING YOURSELF MANUALLY! (OR WITH ANOTHER SCRIPT) 
# TURNING THIS OFF WILL ~ABORT SCRIPT AFTER ESCAPING FROM COMBAT~! AND WILL PARSE: HELP ESCAPE PLZ!
     var AUTOHEAL ON
# HEAL ALL (ON or OFF ) - HEAL.ALL ON = FULLY HEAL IF YOU HAVE ~ANY~ WOUNDS AT ALL (even minor scars) 
# HEAL.ALL OFF = WILL SKIP HEALING IF INSIGNIFICANT WOUNDS (minor scratches etc)
     var HEAL.ALL ON
# SELL SKINS (ON or OFF) - VISIT FURRIER - SELL SKINS/BUNDLES 
     var SELLSKINS ON
# SELL GEMS (ON or OFF) - VISIT GEM SHOP - SELL ALL GEMS/POUCHES
     var SELLGEMS ON
# SELL METALS (ON or OFF) - VISIT GEM SHOP - SELL ALL LOOSE METALS/NUGGETS/BARS (except those in your Crafting Container) 
     var SELLMETALS ON
# BUY HERBS? (ON or OFF) - VISIT HERB SHOP - AUTO RESTOCK ON HEALING HERB SUPPLIES (IF in city with Herbalist)
     var HERBS ON
# USE HERBS IN COMBAT? (ON or OFF) - If ON - Script will eat herbs during combat every ~5 minutes if needed
     var HERBS.COMBAT ON
## Container.Herb - SET CONTAINER TO STORE YOUR HERBS IN (Can be a stackable herb container)
     var Container.Herb %Container
# BANK RUN (ON or OFF) - VISIT BANKS - DEPOSIT MONEY AFTER TOWN RUN 
     var BANKRUN ON
# INVENTORY CHECK (ON or OFF) - TURNS ON INVENTORY CHECKS FOR DUMPING ANY COMMON TRASH ITEMS IN INVENTORY (OR EXCESS GEM POUCHES / BUNDLING ROPE )
     var INVCHECK ON
# TRASH DUMP (ON or OFF) - IF ON WILL DUMP ANY ITEM IN YOUR TRASH VARIABLE (GLOBAL VARIABLE AT VERY TOP OF VARIABLE FILE)
     var TRASH.DUMP ON
# POUCH DUMP (ON of OFF) - IF ON - DUMPS ANY GEM POUCHES IN YOUR INVENTORY THAT ~DO NOT MATCH~ THE COLOR/DESCRIPTION OF YOUR PRIMARY GEMPOUCH ( var gemPouch )
# WILL ALSO DUMP YOUR NORMAL GEM POUCHES IF YOU HAVE MORE THAN 10 OF THEM until you only have 10 MAX (Prevent buildup of ~50 rogue pouches) 
     var POUCH.DUMP ON

## SHARD CITIZEN (ON or OFF) - Must be a citizen of shard
     var Shard.Citizen ON
# GET FAVORS? (ON or OFF) - (ONLY WORKS IN CROSSING / SHARD / HAVEN )
     var GET.FAVORS ON
     var FAVOR.GOD damaris
# REPAIR ARMOR? (ON or OFF) - REPAIR ALL ARMOR / WEAPONS DURING TOWN RUN (MUST HAVE MONEY IN LOCAL BANK)
     var REPAIR.ARMOR ON
## USE MAGIC REPAIR KITS? (SET NULL/OFF TO NOT USE)
## REPAIR.KIT and REPAIT.KIT.2 ARE FOR FULL REPAIR KITS THAT REPAIR ALL ARMOR ~AND~ WEAPONS
## REPAIR.KIT.WEAPON and REPAIR.KIT.ARMOR ARE ONLY FOR KITS THAT ONLY REPAIR ARMOR OR WEAPONS!
## YOU MUST SET THE CONTAINER THAT EACH SPECIFIC KIT IS FOUND IN! IT TREATS THIS CONTAINER LIKE GEMPOUCH.CONTAINER AND KEEPS CLOSED! *CAN BE SHARED WITH GEMPOUCH.CONTAINER!
     var REPAIR.KIT NULL
     var REPAIR.KIT.2 NULL
     var REPAIR.KIT.WEAPON NULL
     var REPAIR.KIT.ARMOR NULL
     var REPAIR.KIT.CONTAINER NULL
     var REPAIR.KIT.2.CONTAINER NULL
     var REPAIR.KIT.3.CONTAINER NULL
# CLIMBING/SWIMMING RUN (ON or OFF) - ATHLETICS TRAINING 
     var CLIMBING ON
## MAGIC CLIMBING ROPE (ON or OFF) - CHECK FOR MAGIC CLIMBING ROPE - USES THAT INSTEAD OF DEFAULT CLIMBING RUN
     var MAGIC.ROPE OFF
     var ROPE.NAME climbing rope
     var Rope.Container NULL
## WINDBOARD (ON or OFF) - TRAIN ATHLETICS WITH A WINDBOARD INSTEAD
     var WINDBOARD OFF
# COLLECTING - (ON or OFF) - OUTDOORSMANSHIP TRAINING - COLLECT ROCKS/COINS
     var COLLECTING ON
# BRAIDING - (ON or OFF) - TRAINS BRAIDING (ENGINEERING) - ONLY TRAINS TO ~70 RANKS!
     var BRAIDING ON
# RAVEN'S COURT SCHOLARSHIP STUDY (ON or OFF) - ONLY IN CROSSING !
     var RAVEN ON
# TEXTBOOK / COMPENDIUM? (ON or OFF) - TRAIN SCHOLARSHIP/FIRST AID W/ ANATOMY TEXTBOOK
     var TEXTBOOK OFF
# TEXTBOOK TYPE - Textbook or Compendium
     var TEXTBOOK.TYPE textbook
     var Textbook.Container cloak
# SKINNING/FA TRAINER - (ON or OFF) ONLY WORKS FOR THE MAGIC SKINNING / FA TRAINERS
## The ones with 105 uses per day or infinite ( https://elanthipedia.play.net/Item:Small_blue-belly_crocodile_with_prominently_stitched_seams )
     var SKINTRAINER OFF
     var SKINTRAIN.NOUN crocodile
     var SKINTRAIN.CONTAINER goldenweave belt
# EPISTEMIC JOURNAL - For Epistemic Journals ONLY - Writes to Journal every 24 hours
# Set JOURNAL.TYPE ( NULL to NOT USE ) - Set NOUN of item to use ( traveler's diary / explorer's log / soldier journal / etc)
     var JOURNAL.TYPE NULL
# DISARM BOXES? (USES DISARM SCRIPT - MAKE SURE YOU SET THE VARIABLES UP IN disarm-vars)
     var DISARM ON
# BURGLE RUN (ON or OFF) - BURGLE RUN USING THE BURGLE SCRIPT (BURGLE.PAWN ON will Pawn all Burgle items)
     var BURGLE ON
     var BURGLE.PAWN ON
# BURGLE DUMP (ON or OFF) - Burgle Dump ON will DUMP/TRASH any Burgle item that does not sell at pawn shop
     var BURGLE.DUMP ON
# STEALING RUN (ON or OFF) - Does STEALING Run with the Ultimate Stealing Script
     var STEAL OFF
# PERFORMANCE RUN (ON or OFF) - DEDICATED PERFORMANCE TRAINING RUN DURING TOWN RUN (Uses your Zill.Name variable to train)
     var PERFORMANCE ON
# MAGICAL RESEARCH TRAINING (ON or OFF) - DEDICATED MAGICAL RESEARCH TRAINING DURING END OF TOWN RUN - TAKES A BIT OF TIME! 
     var MAGICAL.RESEARCH OFF
# PRIMARY MAGICAL RESEARCH TYPE ( SET TO NULL TO CHOOSE AUTOMATICALLY BASED ON LEARNING )
# OPTIONS ARE: FUNDAMENTAL, STREAM, AUGMENTATION, UTILITY, WARDING, SORCERY, FIELD, SPELL
     var RESEARCH.TYPE NULL
# TEACHING? (ON or OFF) - If ON, will attempt to teach your other characters/people in the Friends variable
     var TEACH OFF
     var TEACH.SKILL hiding
     var TEACH.SKILL.2 evasion
## SUPPORT FOR MASTERCRAFT TRAINING
## IF YOU USE MASTERCRAFT - SET EACH SKILL ON THAT YOU WANT TO TRAIN
## *YOU MUST SET UP MASTERCRAFT - TOOLS ETC SEPARATELY
     var ALCHEMY OFF
     var ENGINEERING OFF
     var FORGING OFF
     var OUTFITTING OFF
     var ENCHANTING OFF
## VAULT SWAP (ON or OFF) - ON WILL TEMPORARILY SWAP YOUR 'var CONTAINER' FOR A SPECIAL BAG IN YOUR VAULT FOR MASTERCRAFT PURPOSES ONLY!
## AFTER MASTERCRAFT IS OVER, GOES BACK TO VAULT AND SWAPS BACK TO ORIGINAL BAG - PUTS YOUR CRAFTING BAG BACK IN THE VAULT!
## MAKE SURE YOU HAVE ENOUGH ROOM IN YOUR VAULT! THE SWAP CONTAINER SHOULD FIT ON THE SAME BODY SLOT AS THE BAG YOU ARE SWAPPING OUT!
     var VAULT.SWAP OFF
## VAULT CITY - SET THIS TO THE CITY NAME WHERE YOU HAVE YOUR VAULT - IF VAULT.SWAP IS ~ON~ IT WILL RUN TO THIS CITY FIRST
     var VAULT.CITY FC
## SET THE NAME OF YOUR CRAFTING BAG IN YOUR VAULT - MUST HAVE ~ALL YOUR CRAFTING TOOLS~ IN THIS BAG!!
## MAKE SURE TO BE SPECIFIC WITH YOUR CONTAINER VARIABLES SO THEY DONT GET MIXED UP! THIS CONTAINER SHOULD USE THE SAME BODY SLOT AS YOUR VAR CONTAINER!
     var CRAFTING.BAG dreamweave lootsack

# ALMANAC (ON or OFF) - USE ALMANACS (That trains random skill OR pick-a-skill every 10 minutes)
     var ALMANAC OFF
## ALMANAC VERB - if using the special encyclopedic almanac, MUST be set to 'encyclopedic almanac' to use the pick a skill function
     var ALMANAC.TYPE almanac
     var Almanac.Container goldenweave belt
## ALMANAC SKILLS to check/pick for encyclopedic almanac i.e. Sorcery|Forging|Engineering
## The default list has ALL skills listed - You can remove skills you don't want to boost
     var ALMANAC.LEARN Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor|Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing|Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow|Appraisal|Tactics|Performance|Enchanting|Forging|Engineering|Alchemy|Outfitting|Arcana
# LOCKPICK TRAINING ITEM? (Set to NULL to not use) - Must match EXACTLY with item name in hands (2 words only)
# For MAGIC LOCKPICK TRAINING ITEMS - * Assumes you use a WORN lockpick ring/case 
     var LOCKPICK.ITEM NULL
## SET A SECONDARY LOCKPICK ITEM HERE IF YOU HAVE A SECONDARY (OR SET TO NULL)
     var LOCKPICK.ITEM.2 NULL
## Lockpick.Container is where the MAGIC LOCKPICK ITEMS should be stored (NULL to try wear them)
     var Lockpick.Container NULL
# PILGRIM BADGES (ON or OFF) *CLERIC/PALADINS ONLY! - VISIT UNVISITED BADGE LOCATIONS - PRAY TO BADGE
     var PILGRIM ON
# POWERWALKING (ON or OFF) - FOR MAGIC USERS - DO A POWERWALK DURING TOWN RUN 
     var POWERWALK ON
## SCRIPT CHECK LOGIC - TURN SCRIPT CHECK LOGIC (ON OR OFF) - WARNING - THERE ~WILL~ BE FALSE POSITIVES!! UNAVOIDABLE!!
## IF IT DETECTS ANY GM SCRIPT CHECKS - WILL ~ATTEMPT~ TO AUTOMATICALLY HANDLE IT AND/OR RUN AWAY (Not Log Out)
     var SCRIPTCHECK OFF
## Setting NO.CONTACT to "ON" will log out for 5 minutes if someone tries to drag you or hold your hand (DEFAULT: OFF)
## WARNING! IT WILL ALSO ESCAPE COMBAT IF ANYONE TALKS IN YOUR COMBAT ROOM! INCLUDING CRITTERS! SO IT CAN FALSE POSITIVE ON TALKING CRITTERS
     var NO.CONTACT OFF
## LOG.ON.STUN (ON or OFF) Set to "ON" to log out if you are too hurt/stunned and are unsuccessful running away (DEFAULT: ON)
     var LOG.ON.STUN OFF
## LOG.ON.DEATH (ON or OFF) Set OFF to stay logged in even if you die (DEFAULT: ON)
     var LOG.ON.DEATH ON
## TOTAL TIME ONLINE - MAX TIME TO STAY ONLINE (IN SECONDS) After this time has passed will idle and logout to avoid AFK checks (Set to 0 to always stay online)
     var ONLINE.TIME 0
## FANG COVE? (ON or OFF) - Do you want to go to FANG COVE for healing/town stuff (Only works in Prime if Premium)
     var FANGCOVE ON
## USE PREMIUM JUMP JEWELRY? (ON or OFF) - Will use Premie JJ to teleport to Fang Cove for healing/bundles/gems/etc
     var JumpJewelry OFF
     var JewerlyVerb ironwood ring
## PERSONAL EMPATH HEAL (Put EMPATH'S NAME HERE to use. NULL to turn off) - If you use a personal empath to heal
## Setting this to anything OTHER than NULL/OFF will turn OFF the triggers to nod to someone when they ask if you want healing
     var PocketEmpath NULL
## EmpathRoom is ROOM NUMBER where you can find your PERSONAL EMPATH. (MUST be in the CITY you go to for TOWN RUN)
     var EmpathRoom NULL
## BankBot - Used for F2P characters to tip a bankbot any remaining coin at end of town run
## Set Tipping to 1, Bankbot name and Tiproom = room number bankbot is at, in your home town
     var Tipping 0
     var BankBot morph
     var TipRoom 753
## CLAN ITEM (TF USE ONLY)
     var CLAN OFF
     var CLAN.ITEM sphere
## LIGHTER ITEM (For using a Lighter to start fires instead of flint and blade)
## USAGE - var LIGHTER (ON or OFF) - Lighter.Name = verb of the item
     var Lighter OFF
     var Lighter.Name world dragon
## CUSTOM TOWN SCRIPT - (Must be the exact name of the script (IGNORE .CMD - JUST USE NAME)
## Set your own script to run during the town run
## YOU MUST HAVE A PARSE AT THE END OF YOUR SCRIPT: put #parse SCRIPT FINISHED!
## IF YOU DO NOT HAVE THIS PARSE THEN UBER WILL NOT RECOVER PROPERLY!
     var Custom.Script NULL
## RPA BESTOW? (ON or OFF) - MUST BE IN THE PIRP SYSTEM TO BESTOW RPAS! https://elanthipedia.play.net/RPA_command
     var RPA ON
## LIST THE PEOPLE YOU WANT TO BESTOW RP POINTS TO BELOW IN AN ARRAY!!
## ie. var PirpList Name1|Name2|Name3|Name4|Name5
     var PirpList Raidboss|Healbitch|Illuminati|Breckin|Ryhs|Rhoat|Shepherd|Kohen|Worril|Odium|Morvetan|Orcher|Amroth|Mephos|Yew|Lorak|Wryll|Rellie|Beerfest|Bayndayd|Xana|Crivic|Blaakwulf|Wong|Findal|Regnar|Lakshmi|Vivica|Phucker|Jimdickens|Kiroq|Bleed|Rutinger|Nekhet|Leecya|Arazenya|Kithkani


######################################################################################################################
######################################################################################################################
# GENERAL MAGIC VARS - ALL MAGIC USERS MUST SET THESE VARIABLES
# GENERIC MAGIC VARIABLES FOR ALL MAGIC USERS
######################################################################################################################
######################################################################################################################
# SMART MANA FOR SPELLS? AUTO-DETERMINES OPTIMAL MANA FOR SPELLS AFTER A NEW SETUP (OR EVERY ~2 WEEKS IN GAME)
# SMART MANA WILL AUTOMATICALLY ADJUST YOUR MANA LEVELS UP AND DOWN AS YOU GAIN IN RANKS FOR OPTIMAL LEARNING
# (ON or OFF) - RECOMMEND LEAVING ON - SETTING THIS ON WILL OVERRIDE ALL MANUAL MANA SETTINGS 
# TURNING SMART.SPELLS OFF MEANS YOU WILL ~HAVE~ TO SET MANA MANALLY AND DO MUCH MORE FINE TUNING 
     var SMART.SPELLS ON
# CAMB HEAVY (ON or OFF) (OFF by default) - ON WILL MAKE SMART MANA PUT MORE MANA INTO CAMBRINTH THEN MAIN PREP
     var Camb.Heavy OFF
# MAGIC RATE - (NULL is RECOMMENDED) Set the MIN Magic Rate to reach before switching to a different spell school. 
# SETTING TO A NUMBER WILL SPAM THE SAME SPELL UNTIL YOU REACH DESIRED LEARNINGRATE. Set to NULL to cycle through spells normally 
     var Magic.Rate NULL
# MAGIC SNAP CAST. Set to 0 for Full Aim. Set to desired number of seconds to pause for that many seconds before casting
     var MAGIC.SNAP 0
# CAMBRINTH CHARGES - Number of Times to Charge your cambrinth (or harness if Cambrinth is NULL) each time!
# RECOMMEND LEAVING THIS AT 1 - 2 AT MAX - THIS VARIABLE TIES INTO HOW SMART MANA CALCULATES MANA
     var CambrinthCharge 1
# OFFENSIVE SPELL MANA AMOUNTS - Set BASE MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Mana 15
     var Debilitation.Mana 15
     var Utility.Mana 15
     var Augmentation.Mana 15
     var Warding.Mana 15
     var Sorcery.Mana 15
# OFFENSIVE SPELL CAMBRINTH AMOUNTS - Set CAMBRINTH MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Camb 20
     var Debilitation.Camb 20
     var Utility.Camb 20
     var Augmentation.Camb 20
     var Warding.Camb 20
     var Sorcery.Camb 20
# USE HARNESS / CAMBRINTH FOR OFFENSE SPELLS (ON or OFF)
# TURN OFF TO SKIP HARNESS/CAMBRINTH COMPLETELY
     var Use.Cambrinth ON
# USE HARNESS / CAMBRINTH FOR BUFFS (ON or OFF)
     var Use.Cambrinth.Buffs ON
# CAMBRINTH ITEM for charging BUFFS/SPELLS (Set to NULL to not use)
     var Cambrinth cambrinth ring
     var Cyclic.Cambrinth NULL
# CAMBRINTH MANA AMOUNT FOR SPELLS - Amount of Mana to put in CAMBRINTH for Magic Tattoos / Harness for Cyclics when No Raw Chanelling feat
     var CambrinthMana 5
# CAMBRINTH MANA FOR Cylics - Amount of Mana to put in cambrinth for Cylics ONLY
     var CyclicCharge 10
# SLOW.CAST (ON or OFF) - OFF IS DEFAULT - Slow Cast ON will cast offensive spells about half as often as normal
# SLOW.CAST OFF (Default) will spam spells in between attacks as much as possible (mana permitting)
     var Slow.Cast OFF
# NO CAMBRINTH USE DURING TM / DEBIL SPELLS (ON or OFF)
# IF YOU SET THIS ON, SCRIPT WILL SKIP USING A CAMBRINTH FOR TM OR DEBIL SPELLS
     var NoCambTM OFF
# POWER PERCEIVE (Perceives every ~5 minutes)
     var POWERP ON

# RITUAL FOCUS ITEM (REQUIRED for RITUAL SPELLS - set Ritual to NULL to not use)
# Ritual.Container can be set to any Container - or set to NULL to wear it first
     var Ritual staff
     var Ritual.Container %Container
# SORCERY RITUAL FOCUS (Separate ritual focus for Sorcery IF NEEDED)
     var Sorcery.Focus NULL
# TM DAMAGE FOCUS ITEM - IF SET WILL USE TM FOCI MODE EVERY ~HOUR (set to NULL to not use)
     var TMFoci NULL
     var TMFoci.Container %Container
# USE SYMBIOSIS ON ATTACK SPELLS? (ON or OFF)
# ONLY USEFUL AT ~HIGHER RANKS~ OF MAGIC - ~NOT~ FOR NOOBS!!
     var Target.Symbiosis OFF
     var Utility.Symbiosis OFF
     var Augmentation.Symbiosis OFF
     var Warding.Symbiosis OFF
     var Sorcery.Symbiosis OFF
     var Debilitation.Symbiosis OFF
# USE SYMBIOSIS ON BUFFS? (ON or OFF) - FOR HIGHER RANKS ONLY
     var Symbiosis.Buffs OFF

# MAGIC TATTOO (Set to NULL or the FULL SPELLTIMER NAME i.e - IronConstitution / MajorPhysicalProtection) - Will use a Magic Tattoo every ~5-10 minutes
# FULL SPELLTIMER NAME MUST ALSO BE SET IN YOUR BUFFS OR SPELLS - USE SORCERY.CAMB (ABOVE) TO SET CAMB MANA FOR MAGIC TATTOO
     var Magic.Tattoo NULL
# MAGIC TATTOO CAMBRINTH/HARNESS MANA - Set the amount of Camb Mana you want to boost your tattoo with
     var Tattoo.Camb 30
# HEROIC TATTOO (ON or OFF) - ONLY FOR HEROIC TATTOOS! (Normal tattoos use Magic.Tattoo)
# VERY BASIC - WILL JUST INVOKE TATTOO / CAST ON A 1 HOUR COOLDOWN
     var Runic.Tattoo OFF

#########################################################################################
# GUILD SPECIFIC OPTIONS BELOW
# SET THE GUILD OPTIONS FOR THE CURRENT CHARACTER YOU ARE EDITING 
########################################################################################
########################################################################################
# NECROMANCER SETTINGS
# SET NECRO.HEAL ON TO USE NECRO HEALING - (Consume Flesh / Devour depending on skills)
     var Necro.Heal ON
## NECROHEAL CREATURE (SET A ~LOW LEVEL~ CREATURE TO KILL ~ONLY FOR DEDICATED HEALING PURPOSES~)
## IDEALLY SET THIS TO A CREATURE NEAR YOUR "HOME CITY" SO YOU DON'T HAVE FAR TO RUN FOR HEALING
     var NecroHeal.Critter GOBLIN SHARD
# SET NECRORITUAL ON TO PERFORM RITUALS IN COMBAT (Preserve/Harvest/Dissect/Butchery/etc)
     var NecroRitual ON
## FORSAKEN? (ON or OFF) - IS NECRO FORSAKEN?? IF ON - WILL AVOID TOWNS/SERVICES AS MUCH AS POSSIBLE!! 
## *Not fully tested/implemented-may not be perfect- but should avoid towns. May have issues REPAIRING ARMOR Unless USING FC* 
     var Forsaken OFF
## RISEN? (ON or OFF) - CREATES RISEN MINIONS IN COMBAT (CAREFUL - GENERATES DIVINE OUTRAGE!) 
     var Risen OFF
## QUICKEN EARTH - ON TO CHECK FOR AND SUMMON DIRT CONSTRUCTS EVERY ~5 MINUTES
     var QuickenEarth OFF
     var QE.Mana 10
     var CFB.Mana 10
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Necro.Cyclics |USOL|ROC
     var Necro.Cyclics.mana |5|4
## Necromancer ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Necro.Target.Spell ACS|VS
     var Necro.Debilitation.Spell HP
     var Necro.Utility.Spell GAF
     var Necro.Augmentation.Spell Obfuscation
     var Necro.Warding.Spell MAF
     var Necro.Sorcery.Spell MPP
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Necro.Buffs IVM|REI|ROC|CH
########################################################################################
########################################################################################
### BARD SETTINGS
# Cyclic Spell Setup
# YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST be set for each individual cyclics!
# YOU MUST SET cyclic.mana in an array to match!! 6 cyclic - 6 mana numbers
  # SET TO NULL/OFF IF NOT TRAINING CYCLICS - THERE ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Bard.Cyclics |AEWO|HODI|FAE|CARE|PYRE|GJ
     var Bard.Cyclics.mana |5|4|5|5|5|6
## Bard ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Bard.Target.Spell BOS
     var Bard.Debilitation.Spell DMRS
     var Bard.Utility.Spell AOT
     var Bard.Augmentation.Spell WILL
     var Bard.Warding.Spell REPR
     var Bard.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Bard.Buffs |MIS|HARM|RAGE|REPR
## BARD SCREAMS? ( Screams in combat every ~60 seconds) (ON or OFF)
     var Bard.Scream ON
## BARD WHISTLE (ON or OFF)
     var Bard.Whistle ON
########################################################################################
########################################################################################
# WARRIOR MAGE SETTINGS
## USE SUMMONING? (Will train Summoning every ~3 minutes)
     var Summoning ON
## ELEMENTAL ALIGNMENT - Element can be FIRE, WATER, ELECTRIC, AETHER, AIR or EARTH
     var element FIRE
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var WM.Cyclics |EE|AC|FR
     var WM.Cyclics.mana |5|4|5
## Warrior Mage ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var WM.Target.Spell FS|FB
     var WM.Debilitation.Spell EE|ALA
     var WM.Utility.Spell ETF
     var WM.Augmentation.Spell YS
     var WM.Warding.Spell ES
     var WM.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var WM.Buffs Ease|TW|SW|Zephyr|SUF|Ignite
## ~WEAPON SUMMONING LOGIC~
# SUMMON WEAPONS (ON or OFF)
     var SummonWeapons OFF
# SUMMON ELEMENT - Must set your WEAPON SUMMON ELEMENT ( Stone/Earth (Default) - Fiery/Fire (Fiery Infusions) - Icy/Ice (Icy Infusions) - or Electric (Shocking Infusions)
     var SummonElement FIRE
# ELEMENTAL CHARGE SPELL Must be *a spammable spell* of your chosen element. Will prep at minimum mana - if you want to prep at something else put a number after
     var ChargeSpell MOA
# SUMMON WEAPON TEMPLATE (0 or 1) - 0 = Default weapon, 1 = Turn weapon to other template
     var SummonTemplate 1
# SUMMON WEIGHT/DENSITY (0 - 2 to set weapon density - Must know QUICK INFUSIONS spell)
# 0 = Lightest Weight, 1 = DEFAULT, 2 = Heavier Weight
     var SummonWeight 1
# Set weapons you want to summon (ON or OFF) - Setting to ON will override your default weapon variables at top of script
     var SummonHT OFF
     var SummonLT OFF
     var SummonSE OFF
     var SummonLE OFF
     var SummonTHE ON
     var SummonSB OFF
     var SummonLB OFF
     var SummonTHB ON
     var SummonPolearms ON
     var SummonStaves ON
## INGOT (ON or OFF) Bump up tier of weapons - Must know REINFORCED INFUSIONS spell and have a rare metal ingot
     var WMIngot OFF
## SET INGOT STORAGE CONTAINER (Set to either a sigil ring or a specific container)
     var Ingot.Container sigil ring
########################################################################################
########################################################################################
# MOON MAGE SETTINGS
## MOON MAGE ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var MM.Target.Spell DO|Burn
     var MM.Debilitation.Spell Dazzle|MB
     var MM.Utility.Spell PG
     var MM.Augmentation.Spell AUS|ART
     var MM.Warding.Spell PSY
     var MM.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var MM.Cyclics |SHW
     var MM.Cyclics.mana |5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var MM.Buffs CV|Shadows|TS|COL|Shadowling|PSY
## OBSERVATION TRAINING - PREDICT TOOL IS ONLY USED FOR PREDICTION OUTSIDE OF COMBAT! TOOL MUST ALREADY BE BONDED!!
## Predict.tool can be - BONES, CHART, MIRROR, PRISM, BOWL, DECK or NULL to turn off.
     var Predict.Tool DECK
## Read The Ripples (RTR ON or OFF) - Will Perform a RTR routine (observe spam) during town run **MUST HAVE TELESCOPE!
     var RTR OFF
## Where you store your telescope * If any - defaults to your main Container if not set
     var Telescope.Container NULL
## OBSERVE IN COMBAT (ON or OFF) - If ON will do Astrology observations in Combat every couple minutes
     var Combat.Observe ON
########################################################################################
########################################################################################
# CLERIC SETTINGS
## CLERIC ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Cleric.Target.Spell FOU|FF
     var Cleric.Debilitation.Spell PS|Malediction
     var Cleric.Utility.Spell DR|BLESS
     var Cleric.Augmentation.Spell Benediction
     var Cleric.Warding.Spell MPP|SL
     var Cleric.Sorcery.Spell dazzle
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Cleric.Cyclics |HYH|GHS|REV|SA
     var Cleric.Cyclics.mana |15|15|15|15
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Cleric.Buffs OM|Auspice|SOS|POM|MAPP|PFE|YS
## ARE YOU USING OM ORB? (MUST BE SET IN BUFFS ABOVE!) SET MANA AMOUNT TO CAST OM / CHARGE ORB WITH EACH TIME
     var OM.Mana 25
## TYPE OF ORB YOU USE FOR OM - OPTIONS:( FIRULF, MERAUD or KEREN)
     var FavorOrb meraud
## BUFF SPELLS YOU WANT TO ALWAYS KEEP ACTIVE IN YOUR OM ORB (You can just set this to var OM.Buffs %Cleric.Buffs ) 
     var OM.Buffs PFE|POM|MPP|MAPP|SAP|SOL
## CLERIC RITUALS? (Perform CLERIC RITUALS during Town Runs/in Combat)
     var ClericRituals ON
### Prayer Mat - Set to NULL to not use or the noun of the mat/rug
     var PrayerMat mat
## HOLY WATER VESSEL - Set your container you use to store/collect holy water
     var HolyWater chalice
### COMBAT COMMUNES - (ON or OFF) - Set the COMMUNES you wish to perform while IN COMBAT 
     var Commune.Meraud ON
     var Commune.Truffenyi ON
     var Commune.Tamsine OFF
### FLINT KNIFE - Set a DEDICATED WEAPON/KNIFE to STRIKE FLINT for MAKING FIRE for RITUALS
### MUST be a METAL weapon you can use to STRIKE FLINT for fire
     var FlintKnife knife
## CLERIC ALIGNMENT GOD - Set a God to align to ( https://elanthipedia.play.net/Cleric_3.0#Alignment )
## CHOOSE A LIGHT/DARK/NEUTRAL GOD ONLY - Each Type will buff 2 magic skills and penalize 3 others
## BY DEFAULT SCRIPT WILL USE ~CHADATRU~ (Which buffs AUG/WARDING - Generally the most lacking magics for Clerics)
## Set a different god if you wish to buff other magics but BE CAREFUL!!! 
     var Alignment.God CHADATRU
########################################################################################
########################################################################################
# RANGER SETTINGS
## RANGER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Ranger.Target.Spell DEVI|STAMPEDE
     var Ranger.Debilitation.Spell DEADFALL|SWARM
     var Ranger.Utility.Spell EM|BLEND
     var Ranger.Augmentation.Spell SOTT
     var Ranger.Warding.Spell EY
     var Ranger.Sorcery.Spell ECRY
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Ranger.Cyclics |CS|BES
     var Ranger.Cyclics.mana |5|5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Ranger.Buffs Athleticism|STW|EY|WOTP|OATH|ETC|Bloodthorns
########################################################################################
########################################################################################
## PALADIN SETTINGS
## PALADIN ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Paladin.Target.Spell FST
     var Paladin.Debilitation.Spell Shatter
     var Paladin.Utility.Spell AS
     var Paladin.Augmentation.Spell RW
     var Paladin.Warding.Spell SP
     var Paladin.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Paladin.Cyclics |HOW|TR
     var Paladin.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Paladin.Buffs AA|Courage|HES|RW|SR|Clarity
## SET your HOLY WEAPON here (NULL to ignore) - Holy Weapon Name
     var HolyWeapon NULL
## Holy Icon (NULL TO NOT USE/IGNORE) - Set to the noun of your icon
     var HolyIcon NULL
########################################################################################
########################################################################################
## TRADER SETTINGS
## TRADER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Trader.Target.Spell CRD|STARCRASH
     var Trader.Debilitation.Spell FLUORESCE|AVA
     var Trader.Utility.Spell NOUMENA
     var Trader.Augmentation.Spell BLUR
     var Trader.Warding.Spell IR
     var Trader.Sorcery.Spell MPP
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Trader.Cyclics |ARS|SOV
     var Trader.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Trader.Buffs |TRC|Blur|LGV|NONCHALANCE
########################################################################################
########################################################################################
# EMPATH SETTINGS
## EMPATH ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Empath.Target.Spell PARALYSIS
     var Empath.Debilitation.Spell LETHARGY|NB
     var Empath.Utility.Spell GS|HEAL
     var Empath.Augmentation.Spell REFRESH
     var Empath.Warding.Spell IC|POP
     var Empath.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Empath.Cyclics |AD|REGEN
     var Empath.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Empath.Buffs  |AGS|BS|IC|GOL|MEF|TRANQUILITY
## GAURDIAN SPIRIT? (ON or OFF) - ON will keep up Guardian Spirit while in Combat
     var Guardian.Spirit ON
## CUSTOM GUARDIAN SPIRIT (ON or OFF) - If ON - will "cast custom" instead of casting normal
     var Guardian.Custom OFF
## ATTACK CONSTRUCTS ONLY? (ON or OFF) - ON will ONLY attack constructs (unless using Absolution vs unded). OFF will attack everything
## WARNING - SETTING TO OFF WILL CAUSE EMPATHIC SHOCK!!!!
     var Construct.Only ON
## USE MANIPULATE FRIENDSHIP (ON or OFF) - ON will attempt to manipulate non-construct creatures
     var Manipulate ON
## ESCAPE COMBAT WHEN EMPATHY REACHES 0? (ON or OFF) - If Empathy LearningRate reaches 0 during combat, will go on town run
     var Empathy.Escape OFF
## EMPATH PERCEIVE HEALTH WALKS (ON or OFF) - If ON - Will go on perceive health walks around town during town run
     var Empath.Walk ON
## EMPATH UNITY LINK (ON or OFF) - FOR EMPATH HEALBOT MODE - DO YOU KNOW UNITY LINK? MUST BE 70+ CIRCLE AND 380+ EMPATHY
     var Unity ON
## TEACH CLASS (FOR HEALBOT MODE) - SET THE SKILL OF THE CLASS YOU WANT TO TEACH
     var TeachClass TM
## BLACKLIST! (FOR HEALBOT MODE) - SET THE NAMES OF THE PEOPLE TO BLACKLIST FROM HEALING SERVICES!
## MUST BE IN AN ARRAY - var Blacklist Bob|Frank|Dave
     var Blacklist NULL
########################################################################################
########################################################################################
# THIEF SETTINGS
# AMBUSH TRAINING (Use AMBUSH MOVES in COMBAT - STUN/CLOUT/SLASH)
     var Ambush ON
# SELECT KHRI TO USE (Set as many ON / OFF as you want )
# IT WILL ONLY USE AS MANY KHRI AS YOU CAN HANDLE AT ONCE, PRIORITIZING THE MOST IMPORTANT DEPENDING ON SCENARIO)
     var khriSAGACITY ON
     var khriSTEADY ON
     var khriSTRIKE ON
     var khriFOCUS ON
     var khriELUSION ON
     var khriENDURE ON
     var khriAVOIDANCE ON
     var khriADAPTATION ON
     var khriPROWESS ON
     var khriHASTEN ON
     var khriHARRIER OFF
     var khriSERENITY OFF
     var khriSIGHT ON
     var khriFLIGHT ON
     var khriCALM OFF
     var khriGUILE OFF
     var khriDARKEN ON
     var khriDAMPEN ON
     var khriSHADOWSTEP ON
     var khriELIMINATE OFF
     var khriTERRIFY OFF
     var khriFRIGHT OFF
     var khriINTIMIDATE OFF
     var khriPLUNDER ON
     var khriSAFE OFF
     var khriEVANESCENCE OFF
     var khriCREDENCE OFF
     var khriCUNNING OFF
# USE KHRI DURING TOWN RUN? (ON or OFF) - Turn OFF to Skip using Khri during town run - for Sanowret use
     var Khri.Town ON
########################################################################################
########################################################################################
# BARBARIAN SETTINGS
# USE WHIRLWIND?
     var Whirlwind ON
# USE DUAL WIELD? (ON or OFF) - Dual wield requires 450+ in the weapon
     var DualWield ON
# EXPERTISE COMBOS? (ON or OFF) - Does Barb Expertise Combos (and helps generate IR)
     var Expertise ON
# Set which Forms you want to use (ON or OFF)
# Auto-turns some forms on/off depending on what skills you are training
     var barbEagle ON
     var barbBadger ON
     var barbPanther ON
     var barbPiranha ON
     var barbDragon ON
     var barbMonkey ON
     var barbTurtle OFF
     var barbOwl OFF
     var barbBear ON
     var barbBuffalo OFF
     var barbPython ON
     var barbSwan ON
     var barbToad OFF
     var barbWolverine OFF
# ROARS to use (will only use one)
     var roarEmbrace OFF
     var roarEverild ON
     var roarWail OFF
     var roarScreech OFF
     var roarShriek OFF
     var roarAnger ON
     var roarKuniyo ON
# BERSERKS to use
     var zerkHurricane OFF
     var zerkBlizzard ON
     var zerkFamine ON
     var zerkAvalanche ON
     var zerkTsunami OFF
     var zerkWildfire OFF
     var zerkEarthquake OFF
     var zerkTornado OFF
     var zerkFlashflood ON
     var zerkLandslide ON
     var zerkCyclone OFF
     var zerkDrought OFF
# MEDITATIONS to use (ON or OFF) - WILL ONLY WORK FOR HIGHER LEVEL BARBS
     var medContemplation ON
     var medTenacity ON
     var medSerenity ON
### END OF CHARACTER 11 VARIABLES
### STOP EDITING HERE ~~~ END OF CHARACTER 11 VARIABLES ##########
####################################################################################
####################################################################################
echo **** LOADED %CHARACTER11 VARIABLES
goto END.OF.VARS
}

CHARACTER12:
#########################################################################################################
#########################################################################################################
## CHARACTER 12 VARIABLES
## *CHARACTER12 VARIABLES BLOCK BELOW
if matchre("$charactername", "(?i)%CHARACTER12") then
#########################################################################################################
{
### GENIE LAYOUT - SET THE GENIE LAYOUT YOU WANT THIS CHARACTER TO USE - MUST EXACTLY MATCH THE LAYOUT NAME IN GENIE!
### Example: var GENIE.LAYOUT Shroom.layout - TO SAVE A LAYOUT IN GENIE SET IT UP HOW YOU LIKE AND CLICK LAYOUT > SAVE LAYOUT AS > NAME IT HOW YOU WANT
### IF YOU LEAVE THIS SET TO NULL THEN IT WILL JUST USE THE DEFAULT LAYOUT THAT IS SET (default.layout) 
     var GENIE.LAYOUT default.layout
### HEAL.CITY ( NULL or CITY NAME (CROSS/LETH/HIB/RIVER/THEREN/SHARD) - Will run to this town for HEALING no matter where you are
     var HEAL.CITY NULL
### HOME CITY (NULL or CITY NAME) - Will attempt to return to your home city after a heal run (if not already in that city) ONLY SUPPORTS MAINLAND CITIES
     var HOME.CITY NULL
### SAFE ROOM (set to NULL to ignore) ~MUST~ TIE INTO HOME.CITY ABOVE! THE ROOM ID YOU WANT TO SCRIPT IN DURING TOWN RUN - MUST BE VALID ROOMID IN YOUR HOME CITY!
### WARNING!: IF YOU DO NOT SET BOTH HOME.CITY AND SAFE.ROOM CORRECTLY YOU ~WILL~ RUN INTO ERRORS - LEAVE BOTH AT NULL TO LET SCRIPT LOGIC HANDLE IT
     var SAFE.ROOM NULL
### AUTO-PROGRESS? (ON or OFF) - ON WILL CHOOSE YOUR COMBAT CREATURE AUTOMATICALLY BASED ON YOUR RANKS - YOU DO NOT NEED TO SET IT! OVERRIDES COMBAT.CRITTER VARIABLE
     var AUTO.PROGRESS ON
### AUTO-PROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var PROGRESS.TYPE NORMAL
### COMBAT CRITTER - ONLY USED WITH AUTO.PROGRESS OFF - MUST BE A VALID CREATURE NAME! USE FULL NAME OR 1/2/3 TO SPECIFY TIERS ie SNOW GOBLIN 2
     var COMBAT.CRITTER GOBLIN
### ALTERNATE CRITTER - PICK A ALTERNATE CRITTER TO HUNT - IF YOUR MAIN HUNTING GROUND IS FULL!
     var ALTERNATE.CRITTER MUSK HOG
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var PRIORITY.ROOMS NULL
### XP TRACKER RESET ON SCRIPT STARTUP - (ON or OFF) - RESETS EXP TRACKER TRACKING TIME ON INITIAL LAUNCH OF SCRIPT ONLY
     var XP.RESET ON

### GUI OPTIONS ARE RECOMMENDED TO LEAVE OFF COMPLETELY - THESE OPTIONS ONLY HERE BY SPECIAL REQUEST - WILL BE ANNOYING IF YOU TURN IT ON
### CRITTER.GUI (ON or OFF) - OFF by default - CREATES CRITTER GUI WINDOW - MUST MANUALLY CLICK TO CHOOSE YOUR COMBAT CRITTER BASED ON PROVINCE / SKILL / PREFERENCE
     var CRITTER.GUI OFF
### WEAPON.GUI (ON or OFF) - OFF by default - CREATES WEAPON GUI WINDOW - CHOOSE YOUR WEAPONS FOR THAT RUN *IF YOU HAVE AN ARRAY OF WEAPONS SET IN A SINGLE WEAPON VARIABLE
     var WEAPON.GUI OFF

# FRIEND LIST (People you will hunt with) Put your friends names in place of these. Ex. Bob|Fred|George
# Can just put your name in here or make it blank and it will only find empty rooms.
     var FRIENDS %ALLCHARACTERS|%GLOBALFRIENDS

##############################################################
# WEAPON / CONTAINERS / AMMO SETTINGS - BE VERY SPECIFIC! 
##############################################################

# CONTAINERS - MANDATORY! - SET YOUR MAIN ~3-4~ LARGEST CONTAINERS!
# BE SPECIFIC WITH CONTAINER NAMES - USE 2 WORDS WHENEVER POSSIBLE!
     var Container backpack
     var Container.Boxes haversack
     var Container.Backup duffel bag
     var Container.Crafting carryall
# SHEATH CONTAINER IS FOR SUPER LONG ITEMS - CAN BE ANY LARGE CONTAINER - NOT NECCESARY TO SET 
     var Container.Sheath NULL
# AMMO CONTAINER FOR STORING AMMO - ARROWS/BOLTS/ROCKS - BACKUP CONTAINER IS "OVERFLOW" FOR EXTRA AMMO
     var Container.Ammo quiver
     var Container.Ammo.Backup NULL
## CONTAINER.GEMPOUCH - VERY IMPORTANT! - ~MUST BE A SEPARATE CONTAINER~ FROM OTHER BAGS! SMALL/MEDIUM-SIZE CONTAINER IS FINE
## SPECIAL CONTAINER! SCRIPT WILL KEEP THIS CLOSED AT ALL TIMES AND ~ONLY USE IT FOR STORING FULL GEM POUCHES!~
## CONTAINER.GEMPOUCH MUST BE A ~CLOSABLE~ CONTAINER TO STORE ~FULL~ GEM POUCHES IN 
## AGAIN - DO NOT SHARE THIS CONTAINER WITH ~ANY OTHER CONTAINERS~ (except Repair Pouch Container) 
     var Container.GemPouch thigh pouch
# Container.EmptyPouch is for storing EMPTY GEM POUCHES (This can be ANY container EXCEPT for Container.GemPouch )
     var Container.EmptyPouch backpack
# DIRT CONTAINER - For storing dirt for various use (ONLY used by Thieves/Clerics/Necros)
     var Container.Dirt backpack
## MISC SHEATH OPTIONS (Storing specific weapons in specific containers - toolstraps/bandoliers/harnesses etc) - SET TO NULL/OFF TO NOT USE
## SET THE SHEATH NAME UNDER SHEATH.1 - SET THE WEAPONS YOU WANT TO USE ON EACH SHEATH UNDERNEATH IN AN ARRAY ex:
## var Sheath.1 toolbelt
## var Sheath.1.Weapons sabre|axe|broadsword
     var Sheath.1 NULL
     var Sheath.1.Weapons machete|crossbow|club|flail|slingshot|assassin's blade|steppe bow|katana|nightstick|thrusting blade|shortbow|mace|ngalio|sling|maul|quarterstaff|zweihander|spear|flamberge|mirror ava|throwing (mallet|hammer|club)
     var Sheath.2 NULL
     var Sheath.2.Weapons stonebow|slingshot|blowgun|boomerang
     var Sheath.3 NULL
     var Sheath.3.Weapons mirror blade
     var Sheath.4 NULL
     var Sheath.4.Weapons mirror knife
     var Sheath.5 NULL
     var Sheath.5.Weapons throwing blade|icicles|icicle
     var Sheath.6 NULL
     var Sheath.6.Weapons kertig dart
     
## WEAR WEAPONS (Set an array of weapons/shields you want the script to try and wear first before stowing)
     var Wear.Weapons NULL

## SMART.WEAPONS - ON TO TRAIN WEAPONS FROM LOWEST SKILL TO HIGHEST. "OFF" WILL GO IN A LINEAR ORDER (DEFAULT: ON)
## ON WILL DYNAMICALLY TRAIN TO ALWAYS MAKE SURE THE LOWEST SKILLED WEAPON IS TRAINED FIRST 
     var SMART.WEAPONS ON
     
## WEAPON SETTINGS - BE VERY SPECIFIC SETTING WEAPONS ! USE TWO WORDS WHENEVER POSSIBLE!
## SET ALL YOUR WEAPONS BELOW - MUST ~EXACTLY MATCH THE ITEM DESCRIPTION WHEN IN HANDS~! (GLANCE at it in your hands to get correct description) 
## BE SPECIFIC WHEN SETTING WEAPONS!! USE 2 WORDS WHEN POSSIBLE! TO TURN A WEAPON SKILL ~OFF~ SET IT TO - NULL
     var SEWEAPON assassin's blade
     var LEWEAPON damaris falchion
     var THEWEAPON zweihander
     var SBWEAPON damaris bola
     var LBWEAPON horseman's flail
     var THBWEAPON damaris akabo
     var STAVES damaris quarterstaff
     var POLEARMS damaris pike
     var RANGED.BOW lirisan shortbow
     var RANGED.CROSSBOW cloudbark crossbow
     var RANGED.SLING damaris sling
     var LTWEAPON icicles
     var HTWEAPON damaris mallet
# MAIN OFFHAND WEAPON TRAINING - MELEE ONLY (MUST BE A LIGHT/MEDIUM WEAPON - HEAVY or 2HANDED WEAPONS WONT WORK!!)
     var OHWEAPON club
# ALTERNATE OFFHAND WEAPONS (For Backtraining/Dual Training weapons while training other Weapons)
# ~MUST~ BE LIGHT/MEDIUM WEIGHT WEAPON! CANNOT USE HEAVY or 2Handed Weapons! (Unless Barb) (SET TO NULL/OFF TO NOT USE)
     var ALTWEAPON1 club
     var ALTWEAPON2 bola
     var ALTWEAPON3 NULL
## BRAWLWEAPON (DEFAULT: $charactername - Set to NULL to skip brawling)
     var BRAWLWEAPON $charactername
     #var BRAWLWEAPON $charactername
## Backstab/Ambush Weapon (Thief Only)
     var BSWEAPON mirror blade

# AMMO SETTINGS - DO NOT REMOVE THE { } BRACKETS!!!
     if (!$AMMOSWAP) then
{
     var XbowAmmo crossbow bolt
     var BowAmmo arrow
     var SlingAmmo stone shard
}

## ARMOR CHECK (ON or OFF) - Turn this OFF if you want the script to SKIP checking your armor at the beginning
## If ON - at the beginning, script will remove any armor/fluff you are wearing, and then put on all the armor you have set below. This ensures you have the correct armor on.
     var ARMOR.CHECK ON
## SET YOUR SHIELD - ABSOLUTELY 100% MANDATORY! RECOMMEND AN ARM-WORN SHIELD
     var MyShield diamondwood shield
## ARM WORN SHIELD? (ON OR OFF) - I RECOMMEND ALWAYS USING AN ARM WORN / SMALL SHIELD - MAKES LIFE MUCH EASIER
     var ArmWorn ON
## MAIN ARMOR TO CHECK - PRIMARY COMBAT (Set to NULL to IGNORE a slot)
## YOU MUST SET ALL YOUR ARMOR BELOW - IT DOESN'T MATTER WHICH ARMOR SLOT YOU USE - THE SCRIPT DOESN'T CARE
     var CHEST.ARMOR khiynit robe
     var FACE.ARMOR NULL
     var HEAD.ARMOR leather cowl
     var ABDOMEN.ARMOR NULL
     var BACK.ARMOR NULL
     var ARM.ARMOR assassin's sleeves
     var HAND.ARMOR NULL
     var LEG.ARMOR NULL
     var KNUCKLE telothian knuckle
     var PARRYSTICK parry stick

## PRIORITY WEAPONS - WEAPON SKILLS TO KEEP MOVING ~ALWAYS~ - PRIORITIZE THESE WEAPON SKILLS OVER ALL OTHERS IF THEY ~EVER~ DROP TO 0/34
## MUST BE SET IN AN ARRAY - THE EXACT SAME AS GENIE EXP VARIABLE FORMAT ie: var Priority.Weapons Medium_Edged|Twohanded_Edged
## WARNING!! DO NOT SET PRIORITY WEAPONS UNLESS YOU WANT THOSE SKILL(S) TO TAKE PRIORITY OVER ~ALL~ OTHERS! ~WILL~ CAUSE UNEVEN RANKS OVER TIME!!
## THIS IS MAINLY ONLY USEFUL FOR SHORT PERIODS - FOR POWER LEVELING A SINGLE WEAPON SKILL FOR EXAMPLE - RECOMMEND NULL UNLESS YOU KNOW WHAT YOU ARE DOING
     var Priority.Weapons NULL
     
## TRAIN LOWEST (ON or OFF) - ON WILL ALWAYS TRAIN W/ YOUR LOWEST RANK & LOWEST LEARNINGRATE WEAPON AT EVERY WEAPON SWAP 
## THIS EFFECTIVELY ENSURES THAT ALL YOUR WEAPON SKILLS WILL TRAIN AND STAY AT THE ~EXACT SAME RANKS~ - ESPECIALLY IF USED FROM THE START
## NOTE! TRAINLOWEST ON - WILL ALTER THE DEFAULT WEAPON TRAINING ORDER - BYPASSES THE SET ORDER TO DYNAMICALLY TRAIN WEAPONS 
     var TrainLowest OFF

# MAX LEARNING RATE - FOR EACH WEAPON SKILL (WILL SWITCH WEAPONS ONCE REACHING THIS RATE *MAX 33) *SET TO 35 TO IGNORE LEARNINGRATE 
     var MAX.LEARNINGRATE 12
# LEARNING RATE INCREASE - AFTER FULL WEAPON LOOP *OF ALL WEAPONS* - INCREASE THE MAX.LEARNINGRATE BY THIS MUCH
     var LEARNING.INCREASE 4
# MAX TIME PER WEAPON - SET THE MAXIMUM TIME (IN SECONDS) TO TRAIN EACH WEAPON SKILL - BEFORE SWITCHING WEAPONS
# SETTING THIS TOO HIGH MAY CAUSE SUBOPTIMAL TRAINING - RECOMMEND AROUND ~300-500 (~5-8 minutes per weapon)
     var MAX.TIME 250
# MAXIMUM TOTAL COMBAT TRAINING TIME - SET THE MAX TIME (IN SECONDS) TO STAY IN ~COMBAT~ BEFORE ESCAPING TO TOWN ( 3600 SECONDS = 1 HOUR )
# SET VAR MAX.TRAIN 0 - TO LOOP COMBAT FOREVER ( *UNTIL IT ESCAPES DUE TO BEING TOO HURT / BAGS TOO FULL / BURDEN TOO HIGH )
     var MAX.TRAIN 4500
     
# STANCE PER WEAPON (Set NULL to use default - Or SHIELD/PARRY/EVASION/CUSTOM TO USE THAT PARTICULAR STANCE FOR A PARTICULAR WEAPON)
## NOTE SCRIPT IS ALREADY ADVANCED IN CHANGING STANCES DEPENDING ON WEAPON BEING TRAINED - NULL IS FINE FOR MOST PURPOSES
     var SE.STANCE NULL
     var LE.STANCE NULL
     var THE.STANCE NULL
     var SB.STANCE NULL
     var LB.STANCE NULL
     var THB.STANCE NULL
     var POLEARMS.STANCE NULL
     var STAVES.STANCE NULL
     var BOW.STANCE NULL
     var CROSSBOW.STANCE NULL
     var SLINGS.STANCE NULL
     var LT.STANCE NULL
     var HT.STANCE NULL
     var OH.STANCE NULL
     var BRAWL.STANCE NULL

## BACKTRAIN (ON or OFF) - ON FOR SETTING A SEPARATE BACKTRAIN ROUTINE
     var BACKTRAIN OFF
## BACKTRAIN AUTO PROGRESS (ON or OFF) - Turning this ON will automatically set the creature to hunt, based on your BACKTRAIN WEAPON SKILLS
## TURN THIS ~OFF~ TO SET THE BACKTRAIN CREATURE MANUALLY (BELOW)
     var BACKTRAIN.AUTOPROGRESS ON
### BACKTRAIN AUTOPROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var BACKTRAIN.PROGRESS.TYPE NORMAL
## BACKTRAIN CREATURE - Must specify the creature to hunt if BACKTRAIN.AUTOPROGRESS is OFF
     var BACKTRAIN.CRITTER ICE ARCHON
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var BACKTRAIN.PRIORITY.ROOMS NULL
## BACKTRAIN TIME (in SECONDS - Total time to Backtrain)
     var BACKTRAIN.TIME 1200
## BACKTRAIN MAGIC (ON or OFF) IF OFF - WILL SKIP USING ANY OFFENSIVE SPELLS PERIOD WHILE BACKTRAINING - WILL ONLY DO BUFFS
     var BACKTRAIN.MAGIC OFF
## BACKTRAIN TM/DEBIL SPELLS (ON or OFF) IF OFF - WILL SKIP USING ANY TM / DEBIL SPELL DURING BACKTRANING (UNLESS ITS A TATTOO)
     var BACKTRAIN.TM OFF
## BACKTRAIN WEAPONS - Set every weapon you wish to backtrain (NULL to turn off)
     var BACKTRAIN.SE NULL
     var BACKTRAIN.LE NULL
     var BACKTRAIN.THE NULL
     var BACKTRAIN.SB NULL
     var BACKTRAIN.LB NULL
     var BACKTRAIN.THB NULL
     var BACKTRAIN.STAVES NULL
     var BACKTRAIN.POLEARMS NULL
     var BACKTRAIN.BOW NULL
     var BACKTRAIN.CROSSBOW NULL
     var BACKTRAIN.SLING NULL
     var BACKTRAIN.LT NULL
     var BACKTRAIN.HT NULL
     var BACKTRAIN.BRAWL NULL
     var BACKTRAIN.OH NULL
     var BACKTRAIN.BS NULL
## BACKTRAIN STEALTH (OFF or ON)
     var BACKTRAIN.STEALTH ON
## BACKTRAINING LOOTING OPTIONS (ON or OFF)
     var B.Loot.Gems ON
     var B.Loot.Boxes OFF
     var B.Loot.Metals ON
     var B.Loot.Scrolls ON
     var B.Loot.Collectibles OFF
     var B.Loot.SpiderParts OFF
## BACKTRAIN LOOTING MODE ( treasure / boxes / goods / equipment )
     var B.Loot.Option goods
## BACKTRAIN ARMOR (ARMOR ONLY FOR BACKTRAIN ROUTINE) (Set to NULL to not check a piece)
     var B.CHEST.ARMOR NULL
     var B.FACE.ARMOR NULL
     var B.HEAD.ARMOR NULL
     var B.ABDOMEN.ARMOR NULL
     var B.BACK.ARMOR NULL
     var B.ARM.ARMOR NULL
     var B.HAND.ARMOR NULL
     var B.LEG.ARMOR NULL

##############################################################
### COMBAT GENERAL SETTINGS
##############################################################

## GEM POUCH DESCRIPTION - DR IS TRICKY WITH GEM POUCHES!! BE SPECIFIC - use "<color> pouch" only! 
## **RECOMMEND DUMPING ALL POUCHES AND GET NEW ONES FROM GEM SHOP ON FIRST SETUP**
## WHEN ASKING FOR NEW GEM POUCHES, "ASK NPC FOR <COLOR> POUCH" - ~DO NOT 'ASK FOR GEM POUCH' OR just 'POUCH'~ - JUST 'ASK <NPC> FOR BLACK POUCH'
## Then Set the var to the 'color' pouch you have. ie var gemPouch black pouch
     var gemPouch black pouch
# TIE GEM POUCHES? (ON or OFF) 
# TIE POUCHES FOR MORE STORAGE/LESS INVENTORY SPACE USE - but have to sell the FULL TIED POUCHES AT SPECIAL SHOPS or get TRADER to sell them!
# IF HUNTING IN SHARD OR ROSSMAN - NO WORRY AS SCRIPT SELLS TIED POUCHES IN THOSE GEM SHOPS. IF hunting in XING/ISLANDS will have to get Trader to sell pouches.
     var TiePouch OFF
# WORN GEM POUCH? (ON or OFF) (OFF will STOW your gem pouch / ON will wear it )
     var Gempouch.Worn OFF

## RESTOCK AMMO? (ON or OFF) *SCRIPT WILL AUTOMATICALLY CHECK IF YOU RUN OUT OF AMMO AND ATTEMPT TO RESTOCK
     var AmmoStock ON
# Skinning Knife Name (Mandatory if not a worn knife)
     var Skinning.Knife knife
# BELT/WRIST/ANKLE ~WORN~ SKINNING KNIFE? (ON or OFF)
     var BeltKnife ON
#### COMBAT OPTIONS ####
# OFFHAND THROWING - (ON or OFF) SET TO ON IF YOU WANT TO ROTATE RIGHT/LEFT HANDS WHILE THROWING LT/HT
     var OffhandThrow ON
# THROWING TYPE (LOB, THROW or HURL) *LOB will NEVER stick / less damage - HURL ALWAYS STICKS/ max damage. THROW is inbetween
## IF YOU USE A SHARP THROWING WEAPON (LIKE SPEAR) ALWAYS USE LOB! THROW WILL STICK WITH A POINTY WEAPON!
## LOB IS THE SAFEST - LOB NEVER STICKS! - THROW IS SAFE ~IF USING A BLUNT THROWN WEAPON~ - HURL ALWAYS STICKS - AVOID HURL 
     var ThrowType throw
# BONDED THROWING WEAPONS? (ON or OFF) - Will use INVOKE to retrieve thrown weapon
     var Bonded OFF
# ROAMING (ON or OFF) - Will ROAM around to different critter rooms if it doesn't find a creature during bored routine
     var Roaming ON
# USE WEAK ATTACKS (ON or OFF) - Will use WEAK attacks for melee training (good for backtraining or preserving fatigue/balance)
     var WeakAttack OFF
# AIM ACTIONS (Set an array of actions) - ACTIONS TO PERFORM WHILE WAITING FOR FULL AIM (WITH RANGED/SPELLS) Separate with |
     var AimActions bob|attack|attack left
# TRAIN STEALTH? TRAIN STEALTH DURING MELEE / THROWN / BRAWLING ROUTINES
     var TrainStealth ON
## LOOT MONSTERS? (ON or OFF) - LOOT MONSTERS?
## OFF WILL SKIP LOOTING ALL MONSTERS ~PERIOD~ AND LET THEM ROT
     var Loot.Monsters ON
## LOOT OPTION TO USE - TREASURE / BOXES / EQUIPMENT/ GOODS or ALL
     var Loot.Option GOODS
## LOOTING OPTIONS (ON or OFF) - LOOT OPTIONS FOR MAIN COMBAT
     var Loot.Gems ON
     var Loot.Boxes ON
     var Loot.Metals ON
     var Loot.Scrolls ON
     var Loot.Collectibles OFF
     var Loot.SpiderParts OFF
# MAX BOXES (Set a number) - MAX number of BOXES to pick up before turning Box looting off for that run
     var Max.Boxes 25
# DISSECT (ON or OFF) - DISSECT mobs for First Aid training in Combat (Alternates with SKINNING depending on Learning Rates)
     var Dissect ON
# SKINNING OPTIONS (ON or OFF)
# SKIN ON but BUNDLE OFF will skin but DROP all skins. SKIN collecting only supported with bundles ON!
     var Skin ON
     var Bundle ON
# TIE BUNDLES (ON or OFF) (Turns on automatically when F2P is ON) - LOWER ITEM COUNT BY TYING UP YOUR BUNDLES
     var TieBundle ON
# BUNDLE LOCATION (SET to NULL to use ANY open location or set a preferred location (shoulder / waist / back / belt / around shoulder / over shoulder)
     var BundleLocation NULL
# ArrangeTarget (SET TO SKIN, BONE or PART - or NULL to skip arrange)
## Set ArrangeTarget to SKIN/BONE/PART to Arrange one time
## Set ArrangeALL to ON to arrange max times
     var ArrangeTarget SKIN
     var ArrangeAll OFF
## ArrangeAlways (ON or OFF) - Set ON to ALWAYS arrange regardless of skinning learningrate. OFF will SKIP ARRANGING when Skinning learning is locked
     var ArrangeAlways OFF
# MAX BUNDLE SIZE - Max amount of skins to keep in bundle before creating a new bundle (DEFAULT: 30  MAX: 200)
     var MaxBundle 40
# Set SNIPE to ON to use SNIPE (THIEF/RANGER/NECRO ONLY)
     var Snipe ON
# Set POACH to ON to use POACH instead of SNIPE (SNIPE overrides this setting if SNIPE is ON - TURN SNIPE OFF TO USE THIS)
     var Poach OFF
# RANGED AIM PAUSE. Set to 0 for a Full Aim. Set number of seconds to pause that many seconds before firing
     var SNAP.FIRE 6
# RETREAT WHILE USING RANGED WEAPONS/BUFFING? (ON or OFF) - Will RETREAT to stay at ranged when using ranged weapons
     var Retreat OFF
## DANCE / COUNT Critters - Set min number of critters to "dance" with before you start killing. 
## Leave Dance.Count 0 to kill EVERYTHING. Set 1 to dance with 1 creature until a 2nd comes in, etc. If set to 1 will ALWAYS leave 1 creature in your room.
     var Dance.Count 0
## TACTICS TRAINING (ON OR OFF) - Train TACTICS in Combat
     var Tactics ON
# APPRAISE CREATURES - (ON or OFF) to APPRAISE ALL CREATURES
     var APPRAISE ON
# HUNT OPTION (HUNT every ~75 seconds unless perception locked)
     var HUNT ON
## APPRAISE ITEMS WHEN NO CRITTERS IN ROOM? (ON or OFF)
     var APP.ITEMS OFF
## ITEMS TO APPRAISE (Set to NULL to not use) SET YOUR WORN ITEMS TO QUICK APPRAISE 
     var app1 NULL
     var app2 NULL
     var app3 NULL
## SANOWRET CRYSTAL? (ON or OFF) - ON will exhale crystal every ~100 seconds *IF CONCENTRATION ALLOWS
     var Crystal OFF
## USE SANORWRET CRYSTALS IN COMBAT? (ON or OFF) - ON will use Sanowrets in combat (Turning ON WILL effect concentration and hinder spell casting - not recommended for most)
     var SanowretCombat OFF
## ZILLS? (ON or OFF) - FOR WORN INSTRUMENTS - ON will play Zills during certain times (Repairing armor, collecting, etc)
     var Zills ON
## Zill name ( zills / cowbell / etc )
     var Zill.Name zills
# F2P CHARACTER (ON or OFF) - If set to ON - Script will escape combat and go to town run when you get an inventory count warning
     var F2P OFF
# BIOMECHANICAL TARANTULA? (ON or OFF) - IF ON - Will pick a (semi-)random near locked skill to drain every 10 minutes while in combat
     var Tarantula OFF
     var Tarantula.Name tarantula
## TARANTULA SKILLS TO CHECK - SET AN ARRAY OF SKILLS TO CHECK AGAINST FOR TARANTULA DRAIN
## MUST EXACTLY MATCH THE GENIE VARIABLE NAMES! THESE ARE THE SKILLS TARANTULA WILL CHECK FOR EACH SCHOOL
     var Magic.skills Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Arcana
     var Armor.skills Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor
     var Survival.skills Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing
     var Weapons.skills Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow
     var Lore.skills Appraisal|Tactics|Performance
# WARHORN? (ON or OFF) - For Barbarians and Bards only.
     var WarHorn OFF
## WAND SUPPORT (NULL to NOT use) (MEF wand / WoW wand / WoTP wand etc.) Set up to 2 sets of wands to use! Must use actual verb of wand!
## CAN SET AN ARRAY OF WANDS FOR EACH VAR ex- var Wand1 bloodwood branch|oaken staff|crystal
     var Wand1 NULL
     var Wand2 NULL
## WAND CONTAINERS *Must use 2 different containers to store Wands if using 2 identical named wands)
     var Wand1.Container belt
     var Wand2.Container cloak
## Wand Weapon - (NULL or WEAPON NAME) SET A MELEE WEAPON TO BUFF WHEN USING WANDS WITH A WEAPON BUFF
     var WandWeapon NULL
## EGG SUPPORT (ON or OFF)*Uses the HE Gift Egg in Combat every ~15 minutes to invoke more mobs
     var EGG OFF
## ASTROLABE (ON or OFF) - Uses an Astrolabe every 30 mins if ON (Will rotate if you use 2)
     var ASTROLABE OFF
## Set the name of the astrolabes - (2 words ONLY i.e - ornate astrolabe, twisted astrolabe)
     var ASTROLABE1 NULL
     var ASTROLABE2 NULL
     var Astro1.Container NULL
     var Astro2.Container NULL
## ORB RUB IN COMBAT (var Orb.Rub ON or OFF) - TURN ON TO RUB FAVOR ORB IN COMBAT EVERY ~40 MINUTES
## *NOTE THAT SCRIPT AUTOMATICALLY RUBS ORB ~ONE TIME~ EVERY FULL LOOP OF SCRIPT REGARDLESS OF THIS VARIABLE
     var Orb.Rub OFF
####################################################################################################
# ARMOR SWAP - (ON or OFF) - SPECIAL ARMOR SWAPPING ROUTINE FOR HELMS ONLY
# WILL SWAP OUT A SINGLE PIECE OF PLATE/BRIG/CHAIN/LIGHT HELM EVERY ~5 MINUTES IN COMBAT
     var Armor.Swap OFF
# IF Armor.Swap is ON - THEN ALL THE ARMORS BELOW MUST BE SET CORRECTLY!
# SET EVERY PIECE OF ARMOR TO SWAP BELOW, MUST SET AN ARMOR PIECE FOR ALL FOUR TYPES - TWO WORDS ONLY!
# ONE PIECE SHOULD MATCH YOUR MAIN ARMOR HELM
     var Light_Armor.Helm steelsilk balaclava
     var Chain_Armor.Helm chain balaclava
     var Brigandine.Helm brigandine balaclava
     var Plate_Armor.Helm NULL
####################################################################################################
# HEAVY ARMOR REMOVAL - (ON or OFF) - ON will take off plate/brig/chain armor before backstab/stealth routines
# Generally only needed for noobs with less then ~200 ranks in armors
     var Armor.Noob OFF
# Set Plate/Brig/Chain pieces here (USE EXACT SYNTAX) (If no armor to remove set to NULL)
     var PLATE1 gauntlet
     var PLATE2 greaves
     var PLATE3 NULL
     var PLATE4 NULL
# Set Light Armor Pieces to Swap in place of the Heavy armor pieces above - if any (set to NULL to not use)
     var LIGHTARMOR1 rugged gloves
     var LIGHTARMOR2 rugged greaves
     var LIGHTARMOR3 NULL
     var LIGHTARMOR4 NULL
####################################################################################################

##############################################################
# TOWN RUN / SPECIAL MODULES - SETTINGS FOR TOWN 
# AUTO HEALER / SELL GEMS/SKINS, BANK, OPTIONAL MODULES
##############################################################

# RETURN TO COMBAT MODULE (ON or OFF) - RESTARTS SCRIPT AND RETURNS TO COMBAT WHEN TOWN RUN IS FINISHED
# IF OFF - SCRIPT WILL ~ABORT~ ONCE TOWN RUN IS COMPLETE - LEAVE THIS ON FOR INFINITE AFK SCRIPTING
     var RETURN.TO.COMBAT ON
# AUTOHEAL (ON or OFF) - ON - LET SCRIPT HANDLE AUTO-HEALING AFTER COMBAT (DEPENDING ON YOUR GUILD/SETTINGS) 
# LEAVE THIS ON UNLESS YOU WANT TO HANDLE HEALING YOURSELF MANUALLY! (OR WITH ANOTHER SCRIPT) 
# TURNING THIS OFF WILL ~ABORT SCRIPT AFTER ESCAPING FROM COMBAT~! AND WILL PARSE: HELP ESCAPE PLZ!
     var AUTOHEAL ON
# HEAL ALL (ON or OFF ) - HEAL.ALL ON = FULLY HEAL IF YOU HAVE ~ANY~ WOUNDS AT ALL (even minor scars) 
# HEAL.ALL OFF = WILL SKIP HEALING IF INSIGNIFICANT WOUNDS (minor scratches etc)
     var HEAL.ALL ON
# SELL SKINS (ON or OFF) - VISIT FURRIER - SELL SKINS/BUNDLES 
     var SELLSKINS ON
# SELL GEMS (ON or OFF) - VISIT GEM SHOP - SELL ALL GEMS/POUCHES
     var SELLGEMS ON
# SELL METALS (ON or OFF) - VISIT GEM SHOP - SELL ALL LOOSE METALS/NUGGETS/BARS (except those in your Crafting Container) 
     var SELLMETALS ON
# BUY HERBS? (ON or OFF) - VISIT HERB SHOP - AUTO RESTOCK ON HEALING HERB SUPPLIES (IF in city with Herbalist)
     var HERBS ON
# USE HERBS IN COMBAT? (ON or OFF) - If ON - Script will eat herbs during combat every ~5 minutes if needed
     var HERBS.COMBAT ON
## Container.Herb - SET CONTAINER TO STORE YOUR HERBS IN (Can be a stackable herb container)
     var Container.Herb %Container
# BANK RUN (ON or OFF) - VISIT BANKS - DEPOSIT MONEY AFTER TOWN RUN 
     var BANKRUN ON
# INVENTORY CHECK (ON or OFF) - TURNS ON INVENTORY CHECKS FOR DUMPING ANY COMMON TRASH ITEMS IN INVENTORY (OR EXCESS GEM POUCHES / BUNDLING ROPE )
     var INVCHECK ON
# TRASH DUMP (ON or OFF) - IF ON WILL DUMP ANY ITEM IN YOUR TRASH VARIABLE (GLOBAL VARIABLE AT VERY TOP OF VARIABLE FILE)
     var TRASH.DUMP ON
# POUCH DUMP (ON of OFF) - IF ON - DUMPS ANY GEM POUCHES IN YOUR INVENTORY THAT ~DO NOT MATCH~ THE COLOR/DESCRIPTION OF YOUR PRIMARY GEMPOUCH ( var gemPouch )
# WILL ALSO DUMP YOUR NORMAL GEM POUCHES IF YOU HAVE MORE THAN 10 OF THEM until you only have 10 MAX (Prevent buildup of ~50 rogue pouches) 
     var POUCH.DUMP ON

## SHARD CITIZEN (ON or OFF) - Must be a citizen of shard
     var Shard.Citizen ON
# GET FAVORS? (ON or OFF) - (ONLY WORKS IN CROSSING / SHARD / HAVEN )
     var GET.FAVORS ON
     var FAVOR.GOD damaris
# REPAIR ARMOR? (ON or OFF) - REPAIR ALL ARMOR / WEAPONS DURING TOWN RUN (MUST HAVE MONEY IN LOCAL BANK)
     var REPAIR.ARMOR ON
## USE MAGIC REPAIR KITS? (SET NULL/OFF TO NOT USE)
## REPAIR.KIT and REPAIT.KIT.2 ARE FOR FULL REPAIR KITS THAT REPAIR ALL ARMOR ~AND~ WEAPONS
## REPAIR.KIT.WEAPON and REPAIR.KIT.ARMOR ARE ONLY FOR KITS THAT ONLY REPAIR ARMOR OR WEAPONS!
## YOU MUST SET THE CONTAINER THAT EACH SPECIFIC KIT IS FOUND IN! IT TREATS THIS CONTAINER LIKE GEMPOUCH.CONTAINER AND KEEPS CLOSED! *CAN BE SHARED WITH GEMPOUCH.CONTAINER!
     var REPAIR.KIT NULL
     var REPAIR.KIT.2 NULL
     var REPAIR.KIT.WEAPON NULL
     var REPAIR.KIT.ARMOR NULL
     var REPAIR.KIT.CONTAINER NULL
     var REPAIR.KIT.2.CONTAINER NULL
     var REPAIR.KIT.3.CONTAINER NULL
# CLIMBING/SWIMMING RUN (ON or OFF) - ATHLETICS TRAINING 
     var CLIMBING ON
## MAGIC CLIMBING ROPE (ON or OFF) - CHECK FOR MAGIC CLIMBING ROPE - USES THAT INSTEAD OF DEFAULT CLIMBING RUN
     var MAGIC.ROPE OFF
     var ROPE.NAME climbing rope
     var Rope.Container NULL
## WINDBOARD (ON or OFF) - TRAIN ATHLETICS WITH A WINDBOARD INSTEAD
     var WINDBOARD OFF
# COLLECTING - (ON or OFF) - OUTDOORSMANSHIP TRAINING - COLLECT ROCKS/COINS
     var COLLECTING ON
# BRAIDING - (ON or OFF) - TRAINS BRAIDING (ENGINEERING) - ONLY TRAINS TO ~70 RANKS!
     var BRAIDING ON
# RAVEN'S COURT SCHOLARSHIP STUDY (ON or OFF) - ONLY IN CROSSING !
     var RAVEN ON
# TEXTBOOK / COMPENDIUM? (ON or OFF) - TRAIN SCHOLARSHIP/FIRST AID W/ ANATOMY TEXTBOOK
     var TEXTBOOK OFF
# TEXTBOOK TYPE - Textbook or Compendium
     var TEXTBOOK.TYPE textbook
     var Textbook.Container cloak
# SKINNING/FA TRAINER - (ON or OFF) ONLY WORKS FOR THE MAGIC SKINNING / FA TRAINERS
## The ones with 105 uses per day or infinite ( https://elanthipedia.play.net/Item:Small_blue-belly_crocodile_with_prominently_stitched_seams )
     var SKINTRAINER OFF
     var SKINTRAIN.NOUN crocodile
     var SKINTRAIN.CONTAINER goldenweave belt
# EPISTEMIC JOURNAL - For Epistemic Journals ONLY - Writes to Journal every 24 hours
# Set JOURNAL.TYPE ( NULL to NOT USE ) - Set NOUN of item to use ( traveler's diary / explorer's log / soldier journal / etc)
     var JOURNAL.TYPE NULL
# DISARM BOXES? (USES DISARM SCRIPT - MAKE SURE YOU SET THE VARIABLES UP IN disarm-vars)
     var DISARM ON
# BURGLE RUN (ON or OFF) - BURGLE RUN USING THE BURGLE SCRIPT (BURGLE.PAWN ON will Pawn all Burgle items)
     var BURGLE ON
     var BURGLE.PAWN ON
# BURGLE DUMP (ON or OFF) - Burgle Dump ON will DUMP/TRASH any Burgle item that does not sell at pawn shop
     var BURGLE.DUMP ON
# STEALING RUN (ON or OFF) - Does STEALING Run with the Ultimate Stealing Script
     var STEAL OFF
# PERFORMANCE RUN (ON or OFF) - DEDICATED PERFORMANCE TRAINING RUN DURING TOWN RUN (Uses your Zill.Name variable to train)
     var PERFORMANCE ON
# MAGICAL RESEARCH TRAINING (ON or OFF) - DEDICATED MAGICAL RESEARCH TRAINING DURING END OF TOWN RUN - TAKES A BIT OF TIME! 
     var MAGICAL.RESEARCH OFF
# PRIMARY MAGICAL RESEARCH TYPE ( SET TO NULL TO CHOOSE AUTOMATICALLY BASED ON LEARNING )
# OPTIONS ARE: FUNDAMENTAL, STREAM, AUGMENTATION, UTILITY, WARDING, SORCERY, FIELD, SPELL
     var RESEARCH.TYPE NULL
# TEACHING? (ON or OFF) - If ON, will attempt to teach your other characters/people in the Friends variable
     var TEACH OFF
     var TEACH.SKILL hiding
     var TEACH.SKILL.2 evasion
## SUPPORT FOR MASTERCRAFT TRAINING
## IF YOU USE MASTERCRAFT - SET EACH SKILL ON THAT YOU WANT TO TRAIN
## *YOU MUST SET UP MASTERCRAFT - TOOLS ETC SEPARATELY
     var ALCHEMY OFF
     var ENGINEERING OFF
     var FORGING OFF
     var OUTFITTING OFF
     var ENCHANTING OFF
## VAULT SWAP (ON or OFF) - ON WILL TEMPORARILY SWAP YOUR 'var CONTAINER' FOR A SPECIAL BAG IN YOUR VAULT FOR MASTERCRAFT PURPOSES ONLY!
## AFTER MASTERCRAFT IS OVER, GOES BACK TO VAULT AND SWAPS BACK TO ORIGINAL BAG - PUTS YOUR CRAFTING BAG BACK IN THE VAULT!
## MAKE SURE YOU HAVE ENOUGH ROOM IN YOUR VAULT! THE SWAP CONTAINER SHOULD FIT ON THE SAME BODY SLOT AS THE BAG YOU ARE SWAPPING OUT!
     var VAULT.SWAP OFF
## VAULT CITY - SET THIS TO THE CITY NAME WHERE YOU HAVE YOUR VAULT - IF VAULT.SWAP IS ~ON~ IT WILL RUN TO THIS CITY FIRST
     var VAULT.CITY FC
## SET THE NAME OF YOUR CRAFTING BAG IN YOUR VAULT - MUST HAVE ~ALL YOUR CRAFTING TOOLS~ IN THIS BAG!!
## MAKE SURE TO BE SPECIFIC WITH YOUR CONTAINER VARIABLES SO THEY DONT GET MIXED UP! THIS CONTAINER SHOULD USE THE SAME BODY SLOT AS YOUR VAR CONTAINER!
     var CRAFTING.BAG dreamweave lootsack

# ALMANAC (ON or OFF) - USE ALMANACS (That trains random skill OR pick-a-skill every 10 minutes)
     var ALMANAC OFF
## ALMANAC VERB - if using the special encyclopedic almanac, MUST be set to 'encyclopedic almanac' to use the pick a skill function
     var ALMANAC.TYPE almanac
     var Almanac.Container goldenweave belt
## ALMANAC SKILLS to check/pick for encyclopedic almanac i.e. Sorcery|Forging|Engineering
## The default list has ALL skills listed - You can remove skills you don't want to boost
     var ALMANAC.LEARN Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor|Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing|Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow|Appraisal|Tactics|Performance|Enchanting|Forging|Engineering|Alchemy|Outfitting|Arcana
# LOCKPICK TRAINING ITEM? (Set to NULL to not use) - Must match EXACTLY with item name in hands (2 words only)
# For MAGIC LOCKPICK TRAINING ITEMS - * Assumes you use a WORN lockpick ring/case 
     var LOCKPICK.ITEM NULL
## SET A SECONDARY LOCKPICK ITEM HERE IF YOU HAVE A SECONDARY (OR SET TO NULL)
     var LOCKPICK.ITEM.2 NULL
## Lockpick.Container is where the MAGIC LOCKPICK ITEMS should be stored (NULL to try wear them)
     var Lockpick.Container NULL
# PILGRIM BADGES (ON or OFF) *CLERIC/PALADINS ONLY! - VISIT UNVISITED BADGE LOCATIONS - PRAY TO BADGE
     var PILGRIM ON
# POWERWALKING (ON or OFF) - FOR MAGIC USERS - DO A POWERWALK DURING TOWN RUN 
     var POWERWALK ON
## SCRIPT CHECK LOGIC - TURN SCRIPT CHECK LOGIC (ON OR OFF) - WARNING - THERE ~WILL~ BE FALSE POSITIVES!! UNAVOIDABLE!!
## IF IT DETECTS ANY GM SCRIPT CHECKS - WILL ~ATTEMPT~ TO AUTOMATICALLY HANDLE IT AND/OR RUN AWAY (Not Log Out)
     var SCRIPTCHECK OFF
## Setting NO.CONTACT to "ON" will log out for 5 minutes if someone tries to drag you or hold your hand (DEFAULT: OFF)
## WARNING! IT WILL ALSO ESCAPE COMBAT IF ANYONE TALKS IN YOUR COMBAT ROOM! INCLUDING CRITTERS! SO IT CAN FALSE POSITIVE ON TALKING CRITTERS
     var NO.CONTACT OFF
## LOG.ON.STUN (ON or OFF) Set to "ON" to log out if you are too hurt/stunned and are unsuccessful running away (DEFAULT: ON)
     var LOG.ON.STUN OFF
## LOG.ON.DEATH (ON or OFF) Set OFF to stay logged in even if you die (DEFAULT: ON)
     var LOG.ON.DEATH ON
## TOTAL TIME ONLINE - MAX TIME TO STAY ONLINE (IN SECONDS) After this time has passed will idle and logout to avoid AFK checks (Set to 0 to always stay online)
     var ONLINE.TIME 0
## FANG COVE? (ON or OFF) - Do you want to go to FANG COVE for healing/town stuff (Only works in Prime if Premium)
     var FANGCOVE ON
## USE PREMIUM JUMP JEWELRY? (ON or OFF) - Will use Premie JJ to teleport to Fang Cove for healing/bundles/gems/etc
     var JumpJewelry OFF
     var JewerlyVerb ironwood ring
## PERSONAL EMPATH HEAL (Put EMPATH'S NAME HERE to use. NULL to turn off) - If you use a personal empath to heal
## Setting this to anything OTHER than NULL/OFF will turn OFF the triggers to nod to someone when they ask if you want healing
     var PocketEmpath NULL
## EmpathRoom is ROOM NUMBER where you can find your PERSONAL EMPATH. (MUST be in the CITY you go to for TOWN RUN)
     var EmpathRoom NULL
## BankBot - Used for F2P characters to tip a bankbot any remaining coin at end of town run
## Set Tipping to 1, Bankbot name and Tiproom = room number bankbot is at, in your home town
     var Tipping 0
     var BankBot morph
     var TipRoom 753
## CLAN ITEM (TF USE ONLY)
     var CLAN OFF
     var CLAN.ITEM sphere
## LIGHTER ITEM (For using a Lighter to start fires instead of flint and blade)
## USAGE - var LIGHTER (ON or OFF) - Lighter.Name = verb of the item
     var Lighter OFF
     var Lighter.Name world dragon
## CUSTOM TOWN SCRIPT - (Must be the exact name of the script (IGNORE .CMD - JUST USE NAME)
## Set your own script to run during the town run
## YOU MUST HAVE A PARSE AT THE END OF YOUR SCRIPT: put #parse SCRIPT FINISHED!
## IF YOU DO NOT HAVE THIS PARSE THEN UBER WILL NOT RECOVER PROPERLY!
     var Custom.Script NULL
## RPA BESTOW? (ON or OFF) - MUST BE IN THE PIRP SYSTEM TO BESTOW RPAS! https://elanthipedia.play.net/RPA_command
     var RPA ON
## LIST THE PEOPLE YOU WANT TO BESTOW RP POINTS TO BELOW IN AN ARRAY!!
## ie. var PirpList Name1|Name2|Name3|Name4|Name5
     var PirpList Raidboss|Healbitch|Illuminati|Breckin|Ryhs|Rhoat|Shepherd|Kohen|Worril|Odium|Morvetan|Orcher|Amroth|Mephos|Yew|Lorak|Wryll|Rellie|Beerfest|Bayndayd|Xana|Crivic|Blaakwulf|Wong|Findal|Regnar|Lakshmi|Vivica|Phucker|Jimdickens|Kiroq|Bleed|Rutinger|Nekhet|Leecya|Arazenya|Kithkani


######################################################################################################################
######################################################################################################################
# GENERAL MAGIC VARS - ALL MAGIC USERS MUST SET THESE VARIABLES
# GENERIC MAGIC VARIABLES FOR ALL MAGIC USERS
######################################################################################################################
######################################################################################################################
# SMART MANA FOR SPELLS? AUTO-DETERMINES OPTIMAL MANA FOR SPELLS AFTER A NEW SETUP (OR EVERY ~2 WEEKS IN GAME)
# SMART MANA WILL AUTOMATICALLY ADJUST YOUR MANA LEVELS UP AND DOWN AS YOU GAIN IN RANKS FOR OPTIMAL LEARNING
# (ON or OFF) - RECOMMEND LEAVING ON - SETTING THIS ON WILL OVERRIDE ALL MANUAL MANA SETTINGS 
# TURNING SMART.SPELLS OFF MEANS YOU WILL ~HAVE~ TO SET MANA MANALLY AND DO MUCH MORE FINE TUNING 
     var SMART.SPELLS ON
# CAMB HEAVY (ON or OFF) (OFF by default) - ON WILL MAKE SMART MANA PUT MORE MANA INTO CAMBRINTH THEN MAIN PREP
     var Camb.Heavy OFF
# MAGIC RATE - (NULL is RECOMMENDED) Set the MIN Magic Rate to reach before switching to a different spell school. 
# SETTING TO A NUMBER WILL SPAM THE SAME SPELL UNTIL YOU REACH DESIRED LEARNINGRATE. Set to NULL to cycle through spells normally 
     var Magic.Rate NULL
# MAGIC SNAP CAST. Set to 0 for Full Aim. Set to desired number of seconds to pause for that many seconds before casting
     var MAGIC.SNAP 0
# CAMBRINTH CHARGES - Number of Times to Charge your cambrinth (or harness if Cambrinth is NULL) each time!
# RECOMMEND LEAVING THIS AT 1 - 2 AT MAX - THIS VARIABLE TIES INTO HOW SMART MANA CALCULATES MANA
     var CambrinthCharge 1
# OFFENSIVE SPELL MANA AMOUNTS - Set BASE MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Mana 15
     var Debilitation.Mana 15
     var Utility.Mana 15
     var Augmentation.Mana 15
     var Warding.Mana 15
     var Sorcery.Mana 15
# OFFENSIVE SPELL CAMBRINTH AMOUNTS - Set CAMBRINTH MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Camb 20
     var Debilitation.Camb 20
     var Utility.Camb 20
     var Augmentation.Camb 20
     var Warding.Camb 20
     var Sorcery.Camb 20
# USE HARNESS / CAMBRINTH FOR OFFENSE SPELLS (ON or OFF)
# TURN OFF TO SKIP HARNESS/CAMBRINTH COMPLETELY
     var Use.Cambrinth ON
# USE HARNESS / CAMBRINTH FOR BUFFS (ON or OFF)
     var Use.Cambrinth.Buffs ON
# CAMBRINTH ITEM for charging BUFFS/SPELLS (Set to NULL to not use)
     var Cambrinth cambrinth ring
     var Cyclic.Cambrinth NULL
# CAMBRINTH MANA AMOUNT FOR SPELLS - Amount of Mana to put in CAMBRINTH for Magic Tattoos / Harness for Cyclics when No Raw Chanelling feat
     var CambrinthMana 5
# CAMBRINTH MANA FOR Cylics - Amount of Mana to put in cambrinth for Cylics ONLY
     var CyclicCharge 10
# SLOW.CAST (ON or OFF) - OFF IS DEFAULT - Slow Cast ON will cast offensive spells about half as often as normal
# SLOW.CAST OFF (Default) will spam spells in between attacks as much as possible (mana permitting)
     var Slow.Cast OFF
# NO CAMBRINTH USE DURING TM / DEBIL SPELLS (ON or OFF)
# IF YOU SET THIS ON, SCRIPT WILL SKIP USING A CAMBRINTH FOR TM OR DEBIL SPELLS
     var NoCambTM OFF
# POWER PERCEIVE (Perceives every ~5 minutes)
     var POWERP ON

# RITUAL FOCUS ITEM (REQUIRED for RITUAL SPELLS - set Ritual to NULL to not use)
# Ritual.Container can be set to any Container - or set to NULL to wear it first
     var Ritual staff
     var Ritual.Container %Container
# SORCERY RITUAL FOCUS (Separate ritual focus for Sorcery IF NEEDED)
     var Sorcery.Focus NULL
# TM DAMAGE FOCUS ITEM - IF SET WILL USE TM FOCI MODE EVERY ~HOUR (set to NULL to not use)
     var TMFoci NULL
     var TMFoci.Container %Container
# USE SYMBIOSIS ON ATTACK SPELLS? (ON or OFF)
# ONLY USEFUL AT ~HIGHER RANKS~ OF MAGIC - ~NOT~ FOR NOOBS!!
     var Target.Symbiosis OFF
     var Utility.Symbiosis OFF
     var Augmentation.Symbiosis OFF
     var Warding.Symbiosis OFF
     var Sorcery.Symbiosis OFF
     var Debilitation.Symbiosis OFF
# USE SYMBIOSIS ON BUFFS? (ON or OFF) - FOR HIGHER RANKS ONLY
     var Symbiosis.Buffs OFF

# MAGIC TATTOO (Set to NULL or the FULL SPELLTIMER NAME i.e - IronConstitution / MajorPhysicalProtection) - Will use a Magic Tattoo every ~5-10 minutes
# FULL SPELLTIMER NAME MUST ALSO BE SET IN YOUR BUFFS OR SPELLS - USE SORCERY.CAMB (ABOVE) TO SET CAMB MANA FOR MAGIC TATTOO
     var Magic.Tattoo NULL
# MAGIC TATTOO CAMBRINTH/HARNESS MANA - Set the amount of Camb Mana you want to boost your tattoo with
     var Tattoo.Camb 30
# HEROIC TATTOO (ON or OFF) - ONLY FOR HEROIC TATTOOS! (Normal tattoos use Magic.Tattoo)
# VERY BASIC - WILL JUST INVOKE TATTOO / CAST ON A 1 HOUR COOLDOWN
     var Runic.Tattoo OFF

#########################################################################################
# GUILD SPECIFIC OPTIONS BELOW
# SET THE GUILD OPTIONS FOR THE CURRENT CHARACTER YOU ARE EDITING 
########################################################################################
########################################################################################
# NECROMANCER SETTINGS
# SET NECRO.HEAL ON TO USE NECRO HEALING - (Consume Flesh / Devour depending on skills)
     var Necro.Heal ON
## NECROHEAL CREATURE (SET A ~LOW LEVEL~ CREATURE TO KILL ~ONLY FOR DEDICATED HEALING PURPOSES~)
## IDEALLY SET THIS TO A CREATURE NEAR YOUR "HOME CITY" SO YOU DON'T HAVE FAR TO RUN FOR HEALING
     var NecroHeal.Critter GOBLIN SHARD
# SET NECRORITUAL ON TO PERFORM RITUALS IN COMBAT (Preserve/Harvest/Dissect/Butchery/etc)
     var NecroRitual ON
## FORSAKEN? (ON or OFF) - IS NECRO FORSAKEN?? IF ON - WILL AVOID TOWNS/SERVICES AS MUCH AS POSSIBLE!! 
## *Not fully tested/implemented-may not be perfect- but should avoid towns. May have issues REPAIRING ARMOR Unless USING FC* 
     var Forsaken OFF
## RISEN? (ON or OFF) - CREATES RISEN MINIONS IN COMBAT (CAREFUL - GENERATES DIVINE OUTRAGE!) 
     var Risen OFF
## QUICKEN EARTH - ON TO CHECK FOR AND SUMMON DIRT CONSTRUCTS EVERY ~5 MINUTES
     var QuickenEarth OFF
     var QE.Mana 10
     var CFB.Mana 10
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Necro.Cyclics |USOL|ROC
     var Necro.Cyclics.mana |5|4
## Necromancer ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Necro.Target.Spell ACS|VS
     var Necro.Debilitation.Spell HP
     var Necro.Utility.Spell GAF
     var Necro.Augmentation.Spell Obfuscation
     var Necro.Warding.Spell MAF
     var Necro.Sorcery.Spell MPP
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Necro.Buffs IVM|REI|ROC|CH
########################################################################################
########################################################################################
### BARD SETTINGS
# Cyclic Spell Setup
# YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST be set for each individual cyclics!
# YOU MUST SET cyclic.mana in an array to match!! 6 cyclic - 6 mana numbers
  # SET TO NULL/OFF IF NOT TRAINING CYCLICS - THERE ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Bard.Cyclics |AEWO|HODI|FAE|CARE|PYRE|GJ
     var Bard.Cyclics.mana |5|4|5|5|5|6
## Bard ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Bard.Target.Spell BOS
     var Bard.Debilitation.Spell DMRS
     var Bard.Utility.Spell AOT
     var Bard.Augmentation.Spell WILL
     var Bard.Warding.Spell REPR
     var Bard.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Bard.Buffs |MIS|HARM|RAGE|REPR
## BARD SCREAMS? ( Screams in combat every ~60 seconds) (ON or OFF)
     var Bard.Scream ON
## BARD WHISTLE (ON or OFF)
     var Bard.Whistle ON
########################################################################################
########################################################################################
# WARRIOR MAGE SETTINGS
## USE SUMMONING? (Will train Summoning every ~3 minutes)
     var Summoning ON
## ELEMENTAL ALIGNMENT - Element can be FIRE, WATER, ELECTRIC, AETHER, AIR or EARTH
     var element FIRE
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var WM.Cyclics |EE|AC|FR
     var WM.Cyclics.mana |5|4|5
## Warrior Mage ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var WM.Target.Spell FS|FB
     var WM.Debilitation.Spell EE|ALA
     var WM.Utility.Spell ETF
     var WM.Augmentation.Spell YS
     var WM.Warding.Spell ES
     var WM.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var WM.Buffs Ease|TW|SW|Zephyr|SUF|Ignite
## ~WEAPON SUMMONING LOGIC~
# SUMMON WEAPONS (ON or OFF)
     var SummonWeapons OFF
# SUMMON ELEMENT - Must set your WEAPON SUMMON ELEMENT ( Stone/Earth (Default) - Fiery/Fire (Fiery Infusions) - Icy/Ice (Icy Infusions) - or Electric (Shocking Infusions)
     var SummonElement FIRE
# ELEMENTAL CHARGE SPELL Must be *a spammable spell* of your chosen element. Will prep at minimum mana - if you want to prep at something else put a number after
     var ChargeSpell MOA
# SUMMON WEAPON TEMPLATE (0 or 1) - 0 = Default weapon, 1 = Turn weapon to other template
     var SummonTemplate 1
# SUMMON WEIGHT/DENSITY (0 - 2 to set weapon density - Must know QUICK INFUSIONS spell)
# 0 = Lightest Weight, 1 = DEFAULT, 2 = Heavier Weight
     var SummonWeight 1
# Set weapons you want to summon (ON or OFF) - Setting to ON will override your default weapon variables at top of script
     var SummonHT OFF
     var SummonLT OFF
     var SummonSE OFF
     var SummonLE OFF
     var SummonTHE ON
     var SummonSB OFF
     var SummonLB OFF
     var SummonTHB ON
     var SummonPolearms ON
     var SummonStaves ON
## INGOT (ON or OFF) Bump up tier of weapons - Must know REINFORCED INFUSIONS spell and have a rare metal ingot
     var WMIngot OFF
## SET INGOT STORAGE CONTAINER (Set to either a sigil ring or a specific container)
     var Ingot.Container sigil ring
########################################################################################
########################################################################################
# MOON MAGE SETTINGS
## MOON MAGE ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var MM.Target.Spell DO|Burn
     var MM.Debilitation.Spell Dazzle|MB
     var MM.Utility.Spell PG
     var MM.Augmentation.Spell AUS|ART
     var MM.Warding.Spell PSY
     var MM.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var MM.Cyclics |SHW
     var MM.Cyclics.mana |5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var MM.Buffs CV|Shadows|TS|COL|Shadowling|PSY
## OBSERVATION TRAINING - PREDICT TOOL IS ONLY USED FOR PREDICTION OUTSIDE OF COMBAT! TOOL MUST ALREADY BE BONDED!!
## Predict.tool can be - BONES, CHART, MIRROR, PRISM, BOWL, DECK or NULL to turn off.
     var Predict.Tool DECK
## Read The Ripples (RTR ON or OFF) - Will Perform a RTR routine (observe spam) during town run **MUST HAVE TELESCOPE!
     var RTR OFF
## Where you store your telescope * If any - defaults to your main Container if not set
     var Telescope.Container NULL
## OBSERVE IN COMBAT (ON or OFF) - If ON will do Astrology observations in Combat every couple minutes
     var Combat.Observe ON
########################################################################################
########################################################################################
# CLERIC SETTINGS
## CLERIC ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Cleric.Target.Spell FOU|FF
     var Cleric.Debilitation.Spell PS|Malediction
     var Cleric.Utility.Spell DR|BLESS
     var Cleric.Augmentation.Spell Benediction
     var Cleric.Warding.Spell MPP|SL
     var Cleric.Sorcery.Spell dazzle
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Cleric.Cyclics |HYH|GHS|REV|SA
     var Cleric.Cyclics.mana |15|15|15|15
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Cleric.Buffs OM|Auspice|SOS|POM|MAPP|PFE|YS
## ARE YOU USING OM ORB? (MUST BE SET IN BUFFS ABOVE!) SET MANA AMOUNT TO CAST OM / CHARGE ORB WITH EACH TIME
     var OM.Mana 25
## TYPE OF ORB YOU USE FOR OM - OPTIONS:( FIRULF, MERAUD or KEREN)
     var FavorOrb meraud
## BUFF SPELLS YOU WANT TO ALWAYS KEEP ACTIVE IN YOUR OM ORB (You can just set this to var OM.Buffs %Cleric.Buffs ) 
     var OM.Buffs PFE|POM|MPP|MAPP|SAP|SOL
## CLERIC RITUALS? (Perform CLERIC RITUALS during Town Runs/in Combat)
     var ClericRituals ON
### Prayer Mat - Set to NULL to not use or the noun of the mat/rug
     var PrayerMat mat
## HOLY WATER VESSEL - Set your container you use to store/collect holy water
     var HolyWater chalice
### COMBAT COMMUNES - (ON or OFF) - Set the COMMUNES you wish to perform while IN COMBAT 
     var Commune.Meraud ON
     var Commune.Truffenyi ON
     var Commune.Tamsine OFF
### FLINT KNIFE - Set a DEDICATED WEAPON/KNIFE to STRIKE FLINT for MAKING FIRE for RITUALS
### MUST be a METAL weapon you can use to STRIKE FLINT for fire
     var FlintKnife knife
## CLERIC ALIGNMENT GOD - Set a God to align to ( https://elanthipedia.play.net/Cleric_3.0#Alignment )
## CHOOSE A LIGHT/DARK/NEUTRAL GOD ONLY - Each Type will buff 2 magic skills and penalize 3 others
## BY DEFAULT SCRIPT WILL USE ~CHADATRU~ (Which buffs AUG/WARDING - Generally the most lacking magics for Clerics)
## Set a different god if you wish to buff other magics but BE CAREFUL!!! 
     var Alignment.God CHADATRU
########################################################################################
########################################################################################
# RANGER SETTINGS
## RANGER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Ranger.Target.Spell DEVI|STAMPEDE
     var Ranger.Debilitation.Spell DEADFALL|SWARM
     var Ranger.Utility.Spell EM|BLEND
     var Ranger.Augmentation.Spell SOTT
     var Ranger.Warding.Spell EY
     var Ranger.Sorcery.Spell ECRY
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Ranger.Cyclics |CS|BES
     var Ranger.Cyclics.mana |5|5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Ranger.Buffs Athleticism|STW|EY|WOTP|OATH|ETC|Bloodthorns
########################################################################################
########################################################################################
## PALADIN SETTINGS
## PALADIN ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Paladin.Target.Spell FST
     var Paladin.Debilitation.Spell Shatter
     var Paladin.Utility.Spell AS
     var Paladin.Augmentation.Spell RW
     var Paladin.Warding.Spell SP
     var Paladin.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Paladin.Cyclics |HOW|TR
     var Paladin.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Paladin.Buffs AA|Courage|HES|RW|SR|Clarity
## SET your HOLY WEAPON here (NULL to ignore) - Holy Weapon Name
     var HolyWeapon NULL
## Holy Icon (NULL TO NOT USE/IGNORE) - Set to the noun of your icon
     var HolyIcon NULL
########################################################################################
########################################################################################
## TRADER SETTINGS
## TRADER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Trader.Target.Spell CRD|STARCRASH
     var Trader.Debilitation.Spell FLUORESCE|AVA
     var Trader.Utility.Spell NOUMENA
     var Trader.Augmentation.Spell BLUR
     var Trader.Warding.Spell IR
     var Trader.Sorcery.Spell MPP
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Trader.Cyclics |ARS|SOV
     var Trader.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Trader.Buffs |TRC|Blur|LGV|NONCHALANCE
########################################################################################
########################################################################################
# EMPATH SETTINGS
## EMPATH ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Empath.Target.Spell PARALYSIS
     var Empath.Debilitation.Spell LETHARGY|NB
     var Empath.Utility.Spell GS|HEAL
     var Empath.Augmentation.Spell REFRESH
     var Empath.Warding.Spell IC|POP
     var Empath.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Empath.Cyclics |AD|REGEN
     var Empath.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Empath.Buffs  |AGS|BS|IC|GOL|MEF|TRANQUILITY
## GAURDIAN SPIRIT? (ON or OFF) - ON will keep up Guardian Spirit while in Combat
     var Guardian.Spirit ON
## CUSTOM GUARDIAN SPIRIT (ON or OFF) - If ON - will "cast custom" instead of casting normal
     var Guardian.Custom OFF
## ATTACK CONSTRUCTS ONLY? (ON or OFF) - ON will ONLY attack constructs (unless using Absolution vs unded). OFF will attack everything
## WARNING - SETTING TO OFF WILL CAUSE EMPATHIC SHOCK!!!!
     var Construct.Only ON
## USE MANIPULATE FRIENDSHIP (ON or OFF) - ON will attempt to manipulate non-construct creatures
     var Manipulate ON
## ESCAPE COMBAT WHEN EMPATHY REACHES 0? (ON or OFF) - If Empathy LearningRate reaches 0 during combat, will go on town run
     var Empathy.Escape OFF
## EMPATH PERCEIVE HEALTH WALKS (ON or OFF) - If ON - Will go on perceive health walks around town during town run
     var Empath.Walk ON
## EMPATH UNITY LINK (ON or OFF) - FOR EMPATH HEALBOT MODE - DO YOU KNOW UNITY LINK? MUST BE 70+ CIRCLE AND 380+ EMPATHY
     var Unity ON
## TEACH CLASS (FOR HEALBOT MODE) - SET THE SKILL OF THE CLASS YOU WANT TO TEACH
     var TeachClass TM
## BLACKLIST! (FOR HEALBOT MODE) - SET THE NAMES OF THE PEOPLE TO BLACKLIST FROM HEALING SERVICES!
## MUST BE IN AN ARRAY - var Blacklist Bob|Frank|Dave
     var Blacklist NULL
########################################################################################
########################################################################################
# THIEF SETTINGS
# AMBUSH TRAINING (Use AMBUSH MOVES in COMBAT - STUN/CLOUT/SLASH)
     var Ambush ON
# SELECT KHRI TO USE (Set as many ON / OFF as you want )
# IT WILL ONLY USE AS MANY KHRI AS YOU CAN HANDLE AT ONCE, PRIORITIZING THE MOST IMPORTANT DEPENDING ON SCENARIO)
     var khriSAGACITY ON
     var khriSTEADY ON
     var khriSTRIKE ON
     var khriFOCUS ON
     var khriELUSION ON
     var khriENDURE ON
     var khriAVOIDANCE ON
     var khriADAPTATION ON
     var khriPROWESS ON
     var khriHASTEN ON
     var khriHARRIER OFF
     var khriSERENITY OFF
     var khriSIGHT ON
     var khriFLIGHT ON
     var khriCALM OFF
     var khriGUILE OFF
     var khriDARKEN ON
     var khriDAMPEN ON
     var khriSHADOWSTEP ON
     var khriELIMINATE OFF
     var khriTERRIFY OFF
     var khriFRIGHT OFF
     var khriINTIMIDATE OFF
     var khriPLUNDER ON
     var khriSAFE OFF
     var khriEVANESCENCE OFF
     var khriCREDENCE OFF
     var khriCUNNING OFF
# USE KHRI DURING TOWN RUN? (ON or OFF) - Turn OFF to Skip using Khri during town run - for Sanowret use
     var Khri.Town ON
########################################################################################
########################################################################################
# BARBARIAN SETTINGS
# USE WHIRLWIND?
     var Whirlwind ON
# USE DUAL WIELD? (ON or OFF) - Dual wield requires 450+ in the weapon
     var DualWield ON
# EXPERTISE COMBOS? (ON or OFF) - Does Barb Expertise Combos (and helps generate IR)
     var Expertise ON
# Set which Forms you want to use (ON or OFF)
# Auto-turns some forms on/off depending on what skills you are training
     var barbEagle ON
     var barbBadger ON
     var barbPanther ON
     var barbPiranha ON
     var barbDragon ON
     var barbMonkey ON
     var barbTurtle OFF
     var barbOwl OFF
     var barbBear ON
     var barbBuffalo OFF
     var barbPython ON
     var barbSwan ON
     var barbToad OFF
     var barbWolverine OFF
# ROARS to use (will only use one)
     var roarEmbrace OFF
     var roarEverild ON
     var roarWail OFF
     var roarScreech OFF
     var roarShriek OFF
     var roarAnger ON
     var roarKuniyo ON
# BERSERKS to use
     var zerkHurricane OFF
     var zerkBlizzard ON
     var zerkFamine ON
     var zerkAvalanche ON
     var zerkTsunami OFF
     var zerkWildfire OFF
     var zerkEarthquake OFF
     var zerkTornado OFF
     var zerkFlashflood ON
     var zerkLandslide ON
     var zerkCyclone OFF
     var zerkDrought OFF
# MEDITATIONS to use (ON or OFF) - WILL ONLY WORK FOR HIGHER LEVEL BARBS
     var medContemplation ON
     var medTenacity ON
     var medSerenity ON
### END OF CHARACTER 12 VARIABLES
### STOP EDITING HERE ~~~ END OF CHARACTER 12 VARIABLES ##########
####################################################################################
####################################################################################
echo **** LOADED %CHARACTER12 VARIABLES
goto END.OF.VARS
}

CHARACTER13:
#########################################################################################################
#########################################################################################################
## CHARACTER 13 VARIABLES
## *CHARACTER13 VARIABLES BLOCK BELOW
if matchre("$charactername", "(?i)%CHARACTER13") then
#########################################################################################################
{
### GENIE LAYOUT - SET THE GENIE LAYOUT YOU WANT THIS CHARACTER TO USE - MUST EXACTLY MATCH THE LAYOUT NAME IN GENIE!
### Example: var GENIE.LAYOUT Shroom.layout - TO SAVE A LAYOUT IN GENIE SET IT UP HOW YOU LIKE AND CLICK LAYOUT > SAVE LAYOUT AS > NAME IT HOW YOU WANT
### IF YOU LEAVE THIS SET TO NULL THEN IT WILL JUST USE THE DEFAULT LAYOUT THAT IS SET (default.layout) 
     var GENIE.LAYOUT default.layout
### HEAL.CITY ( NULL or CITY NAME (CROSS/LETH/HIB/RIVER/THEREN/SHARD) - Will run to this town for HEALING no matter where you are
     var HEAL.CITY NULL
### HOME CITY (NULL or CITY NAME) - Will attempt to return to your home city after a heal run (if not already in that city) ONLY SUPPORTS MAINLAND CITIES
     var HOME.CITY NULL
### SAFE ROOM (set to NULL to ignore) ~MUST~ TIE INTO HOME.CITY ABOVE! THE ROOM ID YOU WANT TO SCRIPT IN DURING TOWN RUN - MUST BE VALID ROOMID IN YOUR HOME CITY!
### WARNING!: IF YOU DO NOT SET BOTH HOME.CITY AND SAFE.ROOM CORRECTLY YOU ~WILL~ RUN INTO ERRORS - LEAVE BOTH AT NULL TO LET SCRIPT LOGIC HANDLE IT
     var SAFE.ROOM NULL
### AUTO-PROGRESS? (ON or OFF) - ON WILL CHOOSE YOUR COMBAT CREATURE AUTOMATICALLY BASED ON YOUR RANKS - YOU DO NOT NEED TO SET IT! OVERRIDES COMBAT.CRITTER VARIABLE
     var AUTO.PROGRESS ON
### AUTO-PROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var PROGRESS.TYPE NORMAL
### COMBAT CRITTER - ONLY USED WITH AUTO.PROGRESS OFF - MUST BE A VALID CREATURE NAME! USE FULL NAME OR 1/2/3 TO SPECIFY TIERS ie SNOW GOBLIN 2
     var COMBAT.CRITTER GOBLIN
### ALTERNATE CRITTER - PICK A ALTERNATE CRITTER TO HUNT - IF YOUR MAIN HUNTING GROUND IS FULL!
     var ALTERNATE.CRITTER MUSK HOG
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var PRIORITY.ROOMS NULL
### XP TRACKER RESET ON SCRIPT STARTUP - (ON or OFF) - RESETS EXP TRACKER TRACKING TIME ON INITIAL LAUNCH OF SCRIPT ONLY
     var XP.RESET ON

### GUI OPTIONS ARE RECOMMENDED TO LEAVE OFF COMPLETELY - THESE OPTIONS ONLY HERE BY SPECIAL REQUEST - WILL BE ANNOYING IF YOU TURN IT ON
### CRITTER.GUI (ON or OFF) - OFF by default - CREATES CRITTER GUI WINDOW - MUST MANUALLY CLICK TO CHOOSE YOUR COMBAT CRITTER BASED ON PROVINCE / SKILL / PREFERENCE
     var CRITTER.GUI OFF
### WEAPON.GUI (ON or OFF) - OFF by default - CREATES WEAPON GUI WINDOW - CHOOSE YOUR WEAPONS FOR THAT RUN *IF YOU HAVE AN ARRAY OF WEAPONS SET IN A SINGLE WEAPON VARIABLE
     var WEAPON.GUI OFF

# FRIEND LIST (People you will hunt with) Put your friends names in place of these. Ex. Bob|Fred|George
# Can just put your name in here or make it blank and it will only find empty rooms.
     var FRIENDS %ALLCHARACTERS|%GLOBALFRIENDS

##############################################################
# WEAPON / CONTAINERS / AMMO SETTINGS - BE VERY SPECIFIC! 
##############################################################

# CONTAINERS - MANDATORY! - SET YOUR MAIN ~3-4~ LARGEST CONTAINERS!
# BE SPECIFIC WITH CONTAINER NAMES - USE 2 WORDS WHENEVER POSSIBLE!
     var Container backpack
     var Container.Boxes haversack
     var Container.Backup duffel bag
     var Container.Crafting carryall
# SHEATH CONTAINER IS FOR SUPER LONG ITEMS - CAN BE ANY LARGE CONTAINER - NOT NECCESARY TO SET 
     var Container.Sheath NULL
# AMMO CONTAINER FOR STORING AMMO - ARROWS/BOLTS/ROCKS - BACKUP CONTAINER IS "OVERFLOW" FOR EXTRA AMMO
     var Container.Ammo quiver
     var Container.Ammo.Backup NULL
## CONTAINER.GEMPOUCH - VERY IMPORTANT! - ~MUST BE A SEPARATE CONTAINER~ FROM OTHER BAGS! SMALL/MEDIUM-SIZE CONTAINER IS FINE
## SPECIAL CONTAINER! SCRIPT WILL KEEP THIS CLOSED AT ALL TIMES AND ~ONLY USE IT FOR STORING FULL GEM POUCHES!~
## CONTAINER.GEMPOUCH MUST BE A ~CLOSABLE~ CONTAINER TO STORE ~FULL~ GEM POUCHES IN 
## AGAIN - DO NOT SHARE THIS CONTAINER WITH ~ANY OTHER CONTAINERS~ (except Repair Pouch Container) 
     var Container.GemPouch thigh pouch
# Container.EmptyPouch is for storing EMPTY GEM POUCHES (This can be ANY container EXCEPT for Container.GemPouch )
     var Container.EmptyPouch backpack
# DIRT CONTAINER - For storing dirt for various use (ONLY used by Thieves/Clerics/Necros)
     var Container.Dirt backpack
## MISC SHEATH OPTIONS (Storing specific weapons in specific containers - toolstraps/bandoliers/harnesses etc) - SET TO NULL/OFF TO NOT USE
## SET THE SHEATH NAME UNDER SHEATH.1 - SET THE WEAPONS YOU WANT TO USE ON EACH SHEATH UNDERNEATH IN AN ARRAY ex:
## var Sheath.1 toolbelt
## var Sheath.1.Weapons sabre|axe|broadsword
     var Sheath.1 NULL
     var Sheath.1.Weapons machete|crossbow|club|flail|slingshot|assassin's blade|steppe bow|katana|nightstick|thrusting blade|shortbow|mace|ngalio|sling|maul|quarterstaff|zweihander|spear|flamberge|mirror ava|throwing (mallet|hammer|club)
     var Sheath.2 NULL
     var Sheath.2.Weapons stonebow|slingshot|blowgun|boomerang
     var Sheath.3 NULL
     var Sheath.3.Weapons mirror blade
     var Sheath.4 NULL
     var Sheath.4.Weapons mirror knife
     var Sheath.5 NULL
     var Sheath.5.Weapons throwing blade|icicles|icicle
     var Sheath.6 NULL
     var Sheath.6.Weapons kertig dart
     
## WEAR WEAPONS (Set an array of weapons/shields you want the script to try and wear first before stowing)
     var Wear.Weapons NULL

## SMART.WEAPONS - ON TO TRAIN WEAPONS FROM LOWEST SKILL TO HIGHEST. "OFF" WILL GO IN A LINEAR ORDER (DEFAULT: ON)
## ON WILL DYNAMICALLY TRAIN TO ALWAYS MAKE SURE THE LOWEST SKILLED WEAPON IS TRAINED FIRST 
     var SMART.WEAPONS ON
     
## WEAPON SETTINGS - BE VERY SPECIFIC SETTING WEAPONS ! USE TWO WORDS WHENEVER POSSIBLE!
## SET ALL YOUR WEAPONS BELOW - MUST ~EXACTLY MATCH THE ITEM DESCRIPTION WHEN IN HANDS~! (GLANCE at it in your hands to get correct description) 
## BE SPECIFIC WHEN SETTING WEAPONS!! USE 2 WORDS WHEN POSSIBLE! TO TURN A WEAPON SKILL ~OFF~ SET IT TO - NULL
     var SEWEAPON assassin's blade
     var LEWEAPON damaris falchion
     var THEWEAPON zweihander
     var SBWEAPON damaris bola
     var LBWEAPON horseman's flail
     var THBWEAPON damaris akabo
     var STAVES damaris quarterstaff
     var POLEARMS damaris pike
     var RANGED.BOW lirisan shortbow
     var RANGED.CROSSBOW cloudbark crossbow
     var RANGED.SLING damaris sling
     var LTWEAPON icicles
     var HTWEAPON damaris mallet
# MAIN OFFHAND WEAPON TRAINING - MELEE ONLY (MUST BE A LIGHT/MEDIUM WEAPON - HEAVY or 2HANDED WEAPONS WONT WORK!!)
     var OHWEAPON club
# ALTERNATE OFFHAND WEAPONS (For Backtraining/Dual Training weapons while training other Weapons)
# ~MUST~ BE LIGHT/MEDIUM WEIGHT WEAPON! CANNOT USE HEAVY or 2Handed Weapons! (Unless Barb) (SET TO NULL/OFF TO NOT USE)
     var ALTWEAPON1 club
     var ALTWEAPON2 bola
     var ALTWEAPON3 NULL
## BRAWLWEAPON (DEFAULT: $charactername - Set to NULL to skip brawling)
     var BRAWLWEAPON $charactername
     #var BRAWLWEAPON $charactername
## Backstab/Ambush Weapon (Thief Only)
     var BSWEAPON mirror blade

# AMMO SETTINGS - DO NOT REMOVE THE { } BRACKETS!!!
     if (!$AMMOSWAP) then
{
     var XbowAmmo crossbow bolt
     var BowAmmo arrow
     var SlingAmmo stone shard
}

## ARMOR CHECK (ON or OFF) - Turn this OFF if you want the script to SKIP checking your armor at the beginning
## If ON - at the beginning, script will remove any armor/fluff you are wearing, and then put on all the armor you have set below. This ensures you have the correct armor on.
     var ARMOR.CHECK ON
## SET YOUR SHIELD - ABSOLUTELY 100% MANDATORY! RECOMMEND AN ARM-WORN SHIELD
     var MyShield diamondwood shield
## ARM WORN SHIELD? (ON OR OFF) - I RECOMMEND ALWAYS USING AN ARM WORN / SMALL SHIELD - MAKES LIFE MUCH EASIER
     var ArmWorn ON
## MAIN ARMOR TO CHECK - PRIMARY COMBAT (Set to NULL to IGNORE a slot)
## YOU MUST SET ALL YOUR ARMOR BELOW - IT DOESN'T MATTER WHICH ARMOR SLOT YOU USE - THE SCRIPT DOESN'T CARE
     var CHEST.ARMOR khiynit robe
     var FACE.ARMOR NULL
     var HEAD.ARMOR leather cowl
     var ABDOMEN.ARMOR NULL
     var BACK.ARMOR NULL
     var ARM.ARMOR assassin's sleeves
     var HAND.ARMOR NULL
     var LEG.ARMOR NULL
     var KNUCKLE telothian knuckle
     var PARRYSTICK parry stick

## PRIORITY WEAPONS - WEAPON SKILLS TO KEEP MOVING ~ALWAYS~ - PRIORITIZE THESE WEAPON SKILLS OVER ALL OTHERS IF THEY ~EVER~ DROP TO 0/34
## MUST BE SET IN AN ARRAY - THE EXACT SAME AS GENIE EXP VARIABLE FORMAT ie: var Priority.Weapons Medium_Edged|Twohanded_Edged
## WARNING!! DO NOT SET PRIORITY WEAPONS UNLESS YOU WANT THOSE SKILL(S) TO TAKE PRIORITY OVER ~ALL~ OTHERS! ~WILL~ CAUSE UNEVEN RANKS OVER TIME!!
## THIS IS MAINLY ONLY USEFUL FOR SHORT PERIODS - FOR POWER LEVELING A SINGLE WEAPON SKILL FOR EXAMPLE - RECOMMEND NULL UNLESS YOU KNOW WHAT YOU ARE DOING
     var Priority.Weapons NULL
     
## TRAIN LOWEST (ON or OFF) - ON WILL ALWAYS TRAIN W/ YOUR LOWEST RANK & LOWEST LEARNINGRATE WEAPON AT EVERY WEAPON SWAP 
## THIS EFFECTIVELY ENSURES THAT ALL YOUR WEAPON SKILLS WILL TRAIN AND STAY AT THE ~EXACT SAME RANKS~ - ESPECIALLY IF USED FROM THE START
## NOTE! TRAINLOWEST ON - WILL ALTER THE DEFAULT WEAPON TRAINING ORDER - BYPASSES THE SET ORDER TO DYNAMICALLY TRAIN WEAPONS 
     var TrainLowest OFF

# MAX LEARNING RATE - FOR EACH WEAPON SKILL (WILL SWITCH WEAPONS ONCE REACHING THIS RATE *MAX 33) *SET TO 35 TO IGNORE LEARNINGRATE 
     var MAX.LEARNINGRATE 12
# LEARNING RATE INCREASE - AFTER FULL WEAPON LOOP *OF ALL WEAPONS* - INCREASE THE MAX.LEARNINGRATE BY THIS MUCH
     var LEARNING.INCREASE 4
# MAX TIME PER WEAPON - SET THE MAXIMUM TIME (IN SECONDS) TO TRAIN EACH WEAPON SKILL - BEFORE SWITCHING WEAPONS
# SETTING THIS TOO HIGH MAY CAUSE SUBOPTIMAL TRAINING - RECOMMEND AROUND ~300-500 (~5-8 minutes per weapon)
     var MAX.TIME 250
# MAXIMUM TOTAL COMBAT TRAINING TIME - SET THE MAX TIME (IN SECONDS) TO STAY IN ~COMBAT~ BEFORE ESCAPING TO TOWN ( 3600 SECONDS = 1 HOUR )
# SET VAR MAX.TRAIN 0 - TO LOOP COMBAT FOREVER ( *UNTIL IT ESCAPES DUE TO BEING TOO HURT / BAGS TOO FULL / BURDEN TOO HIGH )
     var MAX.TRAIN 4500
     
# STANCE PER WEAPON (Set NULL to use default - Or SHIELD/PARRY/EVASION/CUSTOM TO USE THAT PARTICULAR STANCE FOR A PARTICULAR WEAPON)
## NOTE SCRIPT IS ALREADY ADVANCED IN CHANGING STANCES DEPENDING ON WEAPON BEING TRAINED - NULL IS FINE FOR MOST PURPOSES
     var SE.STANCE NULL
     var LE.STANCE NULL
     var THE.STANCE NULL
     var SB.STANCE NULL
     var LB.STANCE NULL
     var THB.STANCE NULL
     var POLEARMS.STANCE NULL
     var STAVES.STANCE NULL
     var BOW.STANCE NULL
     var CROSSBOW.STANCE NULL
     var SLINGS.STANCE NULL
     var LT.STANCE NULL
     var HT.STANCE NULL
     var OH.STANCE NULL
     var BRAWL.STANCE NULL

## BACKTRAIN (ON or OFF) - ON FOR SETTING A SEPARATE BACKTRAIN ROUTINE
     var BACKTRAIN OFF
## BACKTRAIN AUTO PROGRESS (ON or OFF) - Turning this ON will automatically set the creature to hunt, based on your BACKTRAIN WEAPON SKILLS
## TURN THIS ~OFF~ TO SET THE BACKTRAIN CREATURE MANUALLY (BELOW)
     var BACKTRAIN.AUTOPROGRESS ON
### BACKTRAIN AUTOPROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var BACKTRAIN.PROGRESS.TYPE NORMAL
## BACKTRAIN CREATURE - Must specify the creature to hunt if BACKTRAIN.AUTOPROGRESS is OFF
     var BACKTRAIN.CRITTER ICE ARCHON
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var BACKTRAIN.PRIORITY.ROOMS NULL
## BACKTRAIN TIME (in SECONDS - Total time to Backtrain)
     var BACKTRAIN.TIME 1200
## BACKTRAIN MAGIC (ON or OFF) IF OFF - WILL SKIP USING ANY OFFENSIVE SPELLS PERIOD WHILE BACKTRAINING - WILL ONLY DO BUFFS
     var BACKTRAIN.MAGIC OFF
## BACKTRAIN TM/DEBIL SPELLS (ON or OFF) IF OFF - WILL SKIP USING ANY TM / DEBIL SPELL DURING BACKTRANING (UNLESS ITS A TATTOO)
     var BACKTRAIN.TM OFF
## BACKTRAIN WEAPONS - Set every weapon you wish to backtrain (NULL to turn off)
     var BACKTRAIN.SE NULL
     var BACKTRAIN.LE NULL
     var BACKTRAIN.THE NULL
     var BACKTRAIN.SB NULL
     var BACKTRAIN.LB NULL
     var BACKTRAIN.THB NULL
     var BACKTRAIN.STAVES NULL
     var BACKTRAIN.POLEARMS NULL
     var BACKTRAIN.BOW NULL
     var BACKTRAIN.CROSSBOW NULL
     var BACKTRAIN.SLING NULL
     var BACKTRAIN.LT NULL
     var BACKTRAIN.HT NULL
     var BACKTRAIN.BRAWL NULL
     var BACKTRAIN.OH NULL
     var BACKTRAIN.BS NULL
## BACKTRAIN STEALTH (OFF or ON)
     var BACKTRAIN.STEALTH ON
## BACKTRAINING LOOTING OPTIONS (ON or OFF)
     var B.Loot.Gems ON
     var B.Loot.Boxes OFF
     var B.Loot.Metals ON
     var B.Loot.Scrolls ON
     var B.Loot.Collectibles OFF
     var B.Loot.SpiderParts OFF
## BACKTRAIN LOOTING MODE ( treasure / boxes / goods / equipment )
     var B.Loot.Option goods
## BACKTRAIN ARMOR (ARMOR ONLY FOR BACKTRAIN ROUTINE) (Set to NULL to not check a piece)
     var B.CHEST.ARMOR NULL
     var B.FACE.ARMOR NULL
     var B.HEAD.ARMOR NULL
     var B.ABDOMEN.ARMOR NULL
     var B.BACK.ARMOR NULL
     var B.ARM.ARMOR NULL
     var B.HAND.ARMOR NULL
     var B.LEG.ARMOR NULL

##############################################################
### COMBAT GENERAL SETTINGS
##############################################################

## GEM POUCH DESCRIPTION - DR IS TRICKY WITH GEM POUCHES!! BE SPECIFIC - use "<color> pouch" only! 
## **RECOMMEND DUMPING ALL POUCHES AND GET NEW ONES FROM GEM SHOP ON FIRST SETUP**
## WHEN ASKING FOR NEW GEM POUCHES, "ASK NPC FOR <COLOR> POUCH" - ~DO NOT 'ASK FOR GEM POUCH' OR just 'POUCH'~ - JUST 'ASK <NPC> FOR BLACK POUCH'
## Then Set the var to the 'color' pouch you have. ie var gemPouch black pouch
     var gemPouch black pouch
# TIE GEM POUCHES? (ON or OFF) 
# TIE POUCHES FOR MORE STORAGE/LESS INVENTORY SPACE USE - but have to sell the FULL TIED POUCHES AT SPECIAL SHOPS or get TRADER to sell them!
# IF HUNTING IN SHARD OR ROSSMAN - NO WORRY AS SCRIPT SELLS TIED POUCHES IN THOSE GEM SHOPS. IF hunting in XING/ISLANDS will have to get Trader to sell pouches.
     var TiePouch OFF
# WORN GEM POUCH? (ON or OFF) (OFF will STOW your gem pouch / ON will wear it )
     var Gempouch.Worn OFF

## RESTOCK AMMO? (ON or OFF) *SCRIPT WILL AUTOMATICALLY CHECK IF YOU RUN OUT OF AMMO AND ATTEMPT TO RESTOCK
     var AmmoStock ON
# Skinning Knife Name (Mandatory if not a worn knife)
     var Skinning.Knife knife
# BELT/WRIST/ANKLE ~WORN~ SKINNING KNIFE? (ON or OFF)
     var BeltKnife ON
#### COMBAT OPTIONS ####
# OFFHAND THROWING - (ON or OFF) SET TO ON IF YOU WANT TO ROTATE RIGHT/LEFT HANDS WHILE THROWING LT/HT
     var OffhandThrow ON
# THROWING TYPE (LOB, THROW or HURL) *LOB will NEVER stick / less damage - HURL ALWAYS STICKS/ max damage. THROW is inbetween
## IF YOU USE A SHARP THROWING WEAPON (LIKE SPEAR) ALWAYS USE LOB! THROW WILL STICK WITH A POINTY WEAPON!
## LOB IS THE SAFEST - LOB NEVER STICKS! - THROW IS SAFE ~IF USING A BLUNT THROWN WEAPON~ - HURL ALWAYS STICKS - AVOID HURL 
     var ThrowType throw
# BONDED THROWING WEAPONS? (ON or OFF) - Will use INVOKE to retrieve thrown weapon
     var Bonded OFF
# ROAMING (ON or OFF) - Will ROAM around to different critter rooms if it doesn't find a creature during bored routine
     var Roaming ON
# USE WEAK ATTACKS (ON or OFF) - Will use WEAK attacks for melee training (good for backtraining or preserving fatigue/balance)
     var WeakAttack OFF
# AIM ACTIONS (Set an array of actions) - ACTIONS TO PERFORM WHILE WAITING FOR FULL AIM (WITH RANGED/SPELLS) Separate with |
     var AimActions bob|attack|attack left
# TRAIN STEALTH? TRAIN STEALTH DURING MELEE / THROWN / BRAWLING ROUTINES
     var TrainStealth ON
## LOOT MONSTERS? (ON or OFF) - LOOT MONSTERS?
## OFF WILL SKIP LOOTING ALL MONSTERS ~PERIOD~ AND LET THEM ROT
     var Loot.Monsters ON
## LOOT OPTION TO USE - TREASURE / BOXES / EQUIPMENT/ GOODS or ALL
     var Loot.Option GOODS
## LOOTING OPTIONS (ON or OFF) - LOOT OPTIONS FOR MAIN COMBAT
     var Loot.Gems ON
     var Loot.Boxes ON
     var Loot.Metals ON
     var Loot.Scrolls ON
     var Loot.Collectibles OFF
     var Loot.SpiderParts OFF
# MAX BOXES (Set a number) - MAX number of BOXES to pick up before turning Box looting off for that run
     var Max.Boxes 25
# DISSECT (ON or OFF) - DISSECT mobs for First Aid training in Combat (Alternates with SKINNING depending on Learning Rates)
     var Dissect ON
# SKINNING OPTIONS (ON or OFF)
# SKIN ON but BUNDLE OFF will skin but DROP all skins. SKIN collecting only supported with bundles ON!
     var Skin ON
     var Bundle ON
# TIE BUNDLES (ON or OFF) (Turns on automatically when F2P is ON) - LOWER ITEM COUNT BY TYING UP YOUR BUNDLES
     var TieBundle ON
# BUNDLE LOCATION (SET to NULL to use ANY open location or set a preferred location (shoulder / waist / back / belt / around shoulder / over shoulder)
     var BundleLocation NULL
# ArrangeTarget (SET TO SKIN, BONE or PART - or NULL to skip arrange)
## Set ArrangeTarget to SKIN/BONE/PART to Arrange one time
## Set ArrangeALL to ON to arrange max times
     var ArrangeTarget SKIN
     var ArrangeAll OFF
## ArrangeAlways (ON or OFF) - Set ON to ALWAYS arrange regardless of skinning learningrate. OFF will SKIP ARRANGING when Skinning learning is locked
     var ArrangeAlways OFF
# MAX BUNDLE SIZE - Max amount of skins to keep in bundle before creating a new bundle (DEFAULT: 30  MAX: 200)
     var MaxBundle 40
# Set SNIPE to ON to use SNIPE (THIEF/RANGER/NECRO ONLY)
     var Snipe ON
# Set POACH to ON to use POACH instead of SNIPE (SNIPE overrides this setting if SNIPE is ON - TURN SNIPE OFF TO USE THIS)
     var Poach OFF
# RANGED AIM PAUSE. Set to 0 for a Full Aim. Set number of seconds to pause that many seconds before firing
     var SNAP.FIRE 6
# RETREAT WHILE USING RANGED WEAPONS/BUFFING? (ON or OFF) - Will RETREAT to stay at ranged when using ranged weapons
     var Retreat OFF
## DANCE / COUNT Critters - Set min number of critters to "dance" with before you start killing. 
## Leave Dance.Count 0 to kill EVERYTHING. Set 1 to dance with 1 creature until a 2nd comes in, etc. If set to 1 will ALWAYS leave 1 creature in your room.
     var Dance.Count 0
## TACTICS TRAINING (ON OR OFF) - Train TACTICS in Combat
     var Tactics ON
# APPRAISE CREATURES - (ON or OFF) to APPRAISE ALL CREATURES
     var APPRAISE ON
# HUNT OPTION (HUNT every ~75 seconds unless perception locked)
     var HUNT ON
## APPRAISE ITEMS WHEN NO CRITTERS IN ROOM? (ON or OFF)
     var APP.ITEMS OFF
## ITEMS TO APPRAISE (Set to NULL to not use) SET YOUR WORN ITEMS TO QUICK APPRAISE 
     var app1 NULL
     var app2 NULL
     var app3 NULL
## SANOWRET CRYSTAL? (ON or OFF) - ON will exhale crystal every ~100 seconds *IF CONCENTRATION ALLOWS
     var Crystal OFF
## USE SANORWRET CRYSTALS IN COMBAT? (ON or OFF) - ON will use Sanowrets in combat (Turning ON WILL effect concentration and hinder spell casting - not recommended for most)
     var SanowretCombat OFF
## ZILLS? (ON or OFF) - FOR WORN INSTRUMENTS - ON will play Zills during certain times (Repairing armor, collecting, etc)
     var Zills ON
## Zill name ( zills / cowbell / etc )
     var Zill.Name zills
# F2P CHARACTER (ON or OFF) - If set to ON - Script will escape combat and go to town run when you get an inventory count warning
     var F2P OFF
# BIOMECHANICAL TARANTULA? (ON or OFF) - IF ON - Will pick a (semi-)random near locked skill to drain every 10 minutes while in combat
     var Tarantula OFF
     var Tarantula.Name tarantula
## TARANTULA SKILLS TO CHECK - SET AN ARRAY OF SKILLS TO CHECK AGAINST FOR TARANTULA DRAIN
## MUST EXACTLY MATCH THE GENIE VARIABLE NAMES! THESE ARE THE SKILLS TARANTULA WILL CHECK FOR EACH SCHOOL
     var Magic.skills Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Arcana
     var Armor.skills Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor
     var Survival.skills Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing
     var Weapons.skills Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow
     var Lore.skills Appraisal|Tactics|Performance
# WARHORN? (ON or OFF) - For Barbarians and Bards only.
     var WarHorn OFF
## WAND SUPPORT (NULL to NOT use) (MEF wand / WoW wand / WoTP wand etc.) Set up to 2 sets of wands to use! Must use actual verb of wand!
## CAN SET AN ARRAY OF WANDS FOR EACH VAR ex- var Wand1 bloodwood branch|oaken staff|crystal
     var Wand1 NULL
     var Wand2 NULL
## WAND CONTAINERS *Must use 2 different containers to store Wands if using 2 identical named wands)
     var Wand1.Container belt
     var Wand2.Container cloak
## Wand Weapon - (NULL or WEAPON NAME) SET A MELEE WEAPON TO BUFF WHEN USING WANDS WITH A WEAPON BUFF
     var WandWeapon NULL
## EGG SUPPORT (ON or OFF)*Uses the HE Gift Egg in Combat every ~15 minutes to invoke more mobs
     var EGG OFF
## ASTROLABE (ON or OFF) - Uses an Astrolabe every 30 mins if ON (Will rotate if you use 2)
     var ASTROLABE OFF
## Set the name of the astrolabes - (2 words ONLY i.e - ornate astrolabe, twisted astrolabe)
     var ASTROLABE1 NULL
     var ASTROLABE2 NULL
     var Astro1.Container NULL
     var Astro2.Container NULL
## ORB RUB IN COMBAT (var Orb.Rub ON or OFF) - TURN ON TO RUB FAVOR ORB IN COMBAT EVERY ~40 MINUTES
## *NOTE THAT SCRIPT AUTOMATICALLY RUBS ORB ~ONE TIME~ EVERY FULL LOOP OF SCRIPT REGARDLESS OF THIS VARIABLE
     var Orb.Rub OFF
####################################################################################################
# ARMOR SWAP - (ON or OFF) - SPECIAL ARMOR SWAPPING ROUTINE FOR HELMS ONLY
# WILL SWAP OUT A SINGLE PIECE OF PLATE/BRIG/CHAIN/LIGHT HELM EVERY ~5 MINUTES IN COMBAT
     var Armor.Swap OFF
# IF Armor.Swap is ON - THEN ALL THE ARMORS BELOW MUST BE SET CORRECTLY!
# SET EVERY PIECE OF ARMOR TO SWAP BELOW, MUST SET AN ARMOR PIECE FOR ALL FOUR TYPES - TWO WORDS ONLY!
# ONE PIECE SHOULD MATCH YOUR MAIN ARMOR HELM
     var Light_Armor.Helm steelsilk balaclava
     var Chain_Armor.Helm chain balaclava
     var Brigandine.Helm brigandine balaclava
     var Plate_Armor.Helm NULL
####################################################################################################
# HEAVY ARMOR REMOVAL - (ON or OFF) - ON will take off plate/brig/chain armor before backstab/stealth routines
# Generally only needed for noobs with less then ~200 ranks in armors
     var Armor.Noob OFF
# Set Plate/Brig/Chain pieces here (USE EXACT SYNTAX) (If no armor to remove set to NULL)
     var PLATE1 gauntlet
     var PLATE2 greaves
     var PLATE3 NULL
     var PLATE4 NULL
# Set Light Armor Pieces to Swap in place of the Heavy armor pieces above - if any (set to NULL to not use)
     var LIGHTARMOR1 rugged gloves
     var LIGHTARMOR2 rugged greaves
     var LIGHTARMOR3 NULL
     var LIGHTARMOR4 NULL
####################################################################################################

##############################################################
# TOWN RUN / SPECIAL MODULES - SETTINGS FOR TOWN 
# AUTO HEALER / SELL GEMS/SKINS, BANK, OPTIONAL MODULES
##############################################################

# RETURN TO COMBAT MODULE (ON or OFF) - RESTARTS SCRIPT AND RETURNS TO COMBAT WHEN TOWN RUN IS FINISHED
# IF OFF - SCRIPT WILL ~ABORT~ ONCE TOWN RUN IS COMPLETE - LEAVE THIS ON FOR INFINITE AFK SCRIPTING
     var RETURN.TO.COMBAT ON
# AUTOHEAL (ON or OFF) - ON - LET SCRIPT HANDLE AUTO-HEALING AFTER COMBAT (DEPENDING ON YOUR GUILD/SETTINGS) 
# LEAVE THIS ON UNLESS YOU WANT TO HANDLE HEALING YOURSELF MANUALLY! (OR WITH ANOTHER SCRIPT) 
# TURNING THIS OFF WILL ~ABORT SCRIPT AFTER ESCAPING FROM COMBAT~! AND WILL PARSE: HELP ESCAPE PLZ!
     var AUTOHEAL ON
# HEAL ALL (ON or OFF ) - HEAL.ALL ON = FULLY HEAL IF YOU HAVE ~ANY~ WOUNDS AT ALL (even minor scars) 
# HEAL.ALL OFF = WILL SKIP HEALING IF INSIGNIFICANT WOUNDS (minor scratches etc)
     var HEAL.ALL ON
# SELL SKINS (ON or OFF) - VISIT FURRIER - SELL SKINS/BUNDLES 
     var SELLSKINS ON
# SELL GEMS (ON or OFF) - VISIT GEM SHOP - SELL ALL GEMS/POUCHES
     var SELLGEMS ON
# SELL METALS (ON or OFF) - VISIT GEM SHOP - SELL ALL LOOSE METALS/NUGGETS/BARS (except those in your Crafting Container) 
     var SELLMETALS ON
# BUY HERBS? (ON or OFF) - VISIT HERB SHOP - AUTO RESTOCK ON HEALING HERB SUPPLIES (IF in city with Herbalist)
     var HERBS ON
# USE HERBS IN COMBAT? (ON or OFF) - If ON - Script will eat herbs during combat every ~5 minutes if needed
     var HERBS.COMBAT ON
## Container.Herb - SET CONTAINER TO STORE YOUR HERBS IN (Can be a stackable herb container)
     var Container.Herb %Container
# BANK RUN (ON or OFF) - VISIT BANKS - DEPOSIT MONEY AFTER TOWN RUN 
     var BANKRUN ON
# INVENTORY CHECK (ON or OFF) - TURNS ON INVENTORY CHECKS FOR DUMPING ANY COMMON TRASH ITEMS IN INVENTORY (OR EXCESS GEM POUCHES / BUNDLING ROPE )
     var INVCHECK ON
# TRASH DUMP (ON or OFF) - IF ON WILL DUMP ANY ITEM IN YOUR TRASH VARIABLE (GLOBAL VARIABLE AT VERY TOP OF VARIABLE FILE)
     var TRASH.DUMP ON
# POUCH DUMP (ON of OFF) - IF ON - DUMPS ANY GEM POUCHES IN YOUR INVENTORY THAT ~DO NOT MATCH~ THE COLOR/DESCRIPTION OF YOUR PRIMARY GEMPOUCH ( var gemPouch )
# WILL ALSO DUMP YOUR NORMAL GEM POUCHES IF YOU HAVE MORE THAN 10 OF THEM until you only have 10 MAX (Prevent buildup of ~50 rogue pouches) 
     var POUCH.DUMP ON

## SHARD CITIZEN (ON or OFF) - Must be a citizen of shard
     var Shard.Citizen ON
# GET FAVORS? (ON or OFF) - (ONLY WORKS IN CROSSING / SHARD / HAVEN )
     var GET.FAVORS ON
     var FAVOR.GOD damaris
# REPAIR ARMOR? (ON or OFF) - REPAIR ALL ARMOR / WEAPONS DURING TOWN RUN (MUST HAVE MONEY IN LOCAL BANK)
     var REPAIR.ARMOR ON
## USE MAGIC REPAIR KITS? (SET NULL/OFF TO NOT USE)
## REPAIR.KIT and REPAIT.KIT.2 ARE FOR FULL REPAIR KITS THAT REPAIR ALL ARMOR ~AND~ WEAPONS
## REPAIR.KIT.WEAPON and REPAIR.KIT.ARMOR ARE ONLY FOR KITS THAT ONLY REPAIR ARMOR OR WEAPONS!
## YOU MUST SET THE CONTAINER THAT EACH SPECIFIC KIT IS FOUND IN! IT TREATS THIS CONTAINER LIKE GEMPOUCH.CONTAINER AND KEEPS CLOSED! *CAN BE SHARED WITH GEMPOUCH.CONTAINER!
     var REPAIR.KIT NULL
     var REPAIR.KIT.2 NULL
     var REPAIR.KIT.WEAPON NULL
     var REPAIR.KIT.ARMOR NULL
     var REPAIR.KIT.CONTAINER NULL
     var REPAIR.KIT.2.CONTAINER NULL
     var REPAIR.KIT.3.CONTAINER NULL
# CLIMBING/SWIMMING RUN (ON or OFF) - ATHLETICS TRAINING 
     var CLIMBING ON
## MAGIC CLIMBING ROPE (ON or OFF) - CHECK FOR MAGIC CLIMBING ROPE - USES THAT INSTEAD OF DEFAULT CLIMBING RUN
     var MAGIC.ROPE OFF
     var ROPE.NAME climbing rope
     var Rope.Container NULL
## WINDBOARD (ON or OFF) - TRAIN ATHLETICS WITH A WINDBOARD INSTEAD
     var WINDBOARD OFF
# COLLECTING - (ON or OFF) - OUTDOORSMANSHIP TRAINING - COLLECT ROCKS/COINS
     var COLLECTING ON
# BRAIDING - (ON or OFF) - TRAINS BRAIDING (ENGINEERING) - ONLY TRAINS TO ~70 RANKS!
     var BRAIDING ON
# RAVEN'S COURT SCHOLARSHIP STUDY (ON or OFF) - ONLY IN CROSSING !
     var RAVEN ON
# TEXTBOOK / COMPENDIUM? (ON or OFF) - TRAIN SCHOLARSHIP/FIRST AID W/ ANATOMY TEXTBOOK
     var TEXTBOOK OFF
# TEXTBOOK TYPE - Textbook or Compendium
     var TEXTBOOK.TYPE textbook
     var Textbook.Container cloak
# SKINNING/FA TRAINER - (ON or OFF) ONLY WORKS FOR THE MAGIC SKINNING / FA TRAINERS
## The ones with 105 uses per day or infinite ( https://elanthipedia.play.net/Item:Small_blue-belly_crocodile_with_prominently_stitched_seams )
     var SKINTRAINER OFF
     var SKINTRAIN.NOUN crocodile
     var SKINTRAIN.CONTAINER goldenweave belt
# EPISTEMIC JOURNAL - For Epistemic Journals ONLY - Writes to Journal every 24 hours
# Set JOURNAL.TYPE ( NULL to NOT USE ) - Set NOUN of item to use ( traveler's diary / explorer's log / soldier journal / etc)
     var JOURNAL.TYPE NULL
# DISARM BOXES? (USES DISARM SCRIPT - MAKE SURE YOU SET THE VARIABLES UP IN disarm-vars)
     var DISARM ON
# BURGLE RUN (ON or OFF) - BURGLE RUN USING THE BURGLE SCRIPT (BURGLE.PAWN ON will Pawn all Burgle items)
     var BURGLE ON
     var BURGLE.PAWN ON
# BURGLE DUMP (ON or OFF) - Burgle Dump ON will DUMP/TRASH any Burgle item that does not sell at pawn shop
     var BURGLE.DUMP ON
# STEALING RUN (ON or OFF) - Does STEALING Run with the Ultimate Stealing Script
     var STEAL OFF
# PERFORMANCE RUN (ON or OFF) - DEDICATED PERFORMANCE TRAINING RUN DURING TOWN RUN (Uses your Zill.Name variable to train)
     var PERFORMANCE ON
# MAGICAL RESEARCH TRAINING (ON or OFF) - DEDICATED MAGICAL RESEARCH TRAINING DURING END OF TOWN RUN - TAKES A BIT OF TIME! 
     var MAGICAL.RESEARCH OFF
# PRIMARY MAGICAL RESEARCH TYPE ( SET TO NULL TO CHOOSE AUTOMATICALLY BASED ON LEARNING )
# OPTIONS ARE: FUNDAMENTAL, STREAM, AUGMENTATION, UTILITY, WARDING, SORCERY, FIELD, SPELL
     var RESEARCH.TYPE NULL
# TEACHING? (ON or OFF) - If ON, will attempt to teach your other characters/people in the Friends variable
     var TEACH OFF
     var TEACH.SKILL hiding
     var TEACH.SKILL.2 evasion
## SUPPORT FOR MASTERCRAFT TRAINING
## IF YOU USE MASTERCRAFT - SET EACH SKILL ON THAT YOU WANT TO TRAIN
## *YOU MUST SET UP MASTERCRAFT - TOOLS ETC SEPARATELY
     var ALCHEMY OFF
     var ENGINEERING OFF
     var FORGING OFF
     var OUTFITTING OFF
     var ENCHANTING OFF
## VAULT SWAP (ON or OFF) - ON WILL TEMPORARILY SWAP YOUR 'var CONTAINER' FOR A SPECIAL BAG IN YOUR VAULT FOR MASTERCRAFT PURPOSES ONLY!
## AFTER MASTERCRAFT IS OVER, GOES BACK TO VAULT AND SWAPS BACK TO ORIGINAL BAG - PUTS YOUR CRAFTING BAG BACK IN THE VAULT!
## MAKE SURE YOU HAVE ENOUGH ROOM IN YOUR VAULT! THE SWAP CONTAINER SHOULD FIT ON THE SAME BODY SLOT AS THE BAG YOU ARE SWAPPING OUT!
     var VAULT.SWAP OFF
## VAULT CITY - SET THIS TO THE CITY NAME WHERE YOU HAVE YOUR VAULT - IF VAULT.SWAP IS ~ON~ IT WILL RUN TO THIS CITY FIRST
     var VAULT.CITY FC
## SET THE NAME OF YOUR CRAFTING BAG IN YOUR VAULT - MUST HAVE ~ALL YOUR CRAFTING TOOLS~ IN THIS BAG!!
## MAKE SURE TO BE SPECIFIC WITH YOUR CONTAINER VARIABLES SO THEY DONT GET MIXED UP! THIS CONTAINER SHOULD USE THE SAME BODY SLOT AS YOUR VAR CONTAINER!
     var CRAFTING.BAG dreamweave lootsack

# ALMANAC (ON or OFF) - USE ALMANACS (That trains random skill OR pick-a-skill every 10 minutes)
     var ALMANAC OFF
## ALMANAC VERB - if using the special encyclopedic almanac, MUST be set to 'encyclopedic almanac' to use the pick a skill function
     var ALMANAC.TYPE almanac
     var Almanac.Container goldenweave belt
## ALMANAC SKILLS to check/pick for encyclopedic almanac i.e. Sorcery|Forging|Engineering
## The default list has ALL skills listed - You can remove skills you don't want to boost
     var ALMANAC.LEARN Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor|Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing|Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow|Appraisal|Tactics|Performance|Enchanting|Forging|Engineering|Alchemy|Outfitting|Arcana
# LOCKPICK TRAINING ITEM? (Set to NULL to not use) - Must match EXACTLY with item name in hands (2 words only)
# For MAGIC LOCKPICK TRAINING ITEMS - * Assumes you use a WORN lockpick ring/case 
     var LOCKPICK.ITEM NULL
## SET A SECONDARY LOCKPICK ITEM HERE IF YOU HAVE A SECONDARY (OR SET TO NULL)
     var LOCKPICK.ITEM.2 NULL
## Lockpick.Container is where the MAGIC LOCKPICK ITEMS should be stored (NULL to try wear them)
     var Lockpick.Container NULL
# PILGRIM BADGES (ON or OFF) *CLERIC/PALADINS ONLY! - VISIT UNVISITED BADGE LOCATIONS - PRAY TO BADGE
     var PILGRIM ON
# POWERWALKING (ON or OFF) - FOR MAGIC USERS - DO A POWERWALK DURING TOWN RUN 
     var POWERWALK ON
## SCRIPT CHECK LOGIC - TURN SCRIPT CHECK LOGIC (ON OR OFF) - WARNING - THERE ~WILL~ BE FALSE POSITIVES!! UNAVOIDABLE!!
## IF IT DETECTS ANY GM SCRIPT CHECKS - WILL ~ATTEMPT~ TO AUTOMATICALLY HANDLE IT AND/OR RUN AWAY (Not Log Out)
     var SCRIPTCHECK OFF
## Setting NO.CONTACT to "ON" will log out for 5 minutes if someone tries to drag you or hold your hand (DEFAULT: OFF)
## WARNING! IT WILL ALSO ESCAPE COMBAT IF ANYONE TALKS IN YOUR COMBAT ROOM! INCLUDING CRITTERS! SO IT CAN FALSE POSITIVE ON TALKING CRITTERS
     var NO.CONTACT OFF
## LOG.ON.STUN (ON or OFF) Set to "ON" to log out if you are too hurt/stunned and are unsuccessful running away (DEFAULT: ON)
     var LOG.ON.STUN OFF
## LOG.ON.DEATH (ON or OFF) Set OFF to stay logged in even if you die (DEFAULT: ON)
     var LOG.ON.DEATH ON
## TOTAL TIME ONLINE - MAX TIME TO STAY ONLINE (IN SECONDS) After this time has passed will idle and logout to avoid AFK checks (Set to 0 to always stay online)
     var ONLINE.TIME 0
## FANG COVE? (ON or OFF) - Do you want to go to FANG COVE for healing/town stuff (Only works in Prime if Premium)
     var FANGCOVE ON
## USE PREMIUM JUMP JEWELRY? (ON or OFF) - Will use Premie JJ to teleport to Fang Cove for healing/bundles/gems/etc
     var JumpJewelry OFF
     var JewerlyVerb ironwood ring
## PERSONAL EMPATH HEAL (Put EMPATH'S NAME HERE to use. NULL to turn off) - If you use a personal empath to heal
## Setting this to anything OTHER than NULL/OFF will turn OFF the triggers to nod to someone when they ask if you want healing
     var PocketEmpath NULL
## EmpathRoom is ROOM NUMBER where you can find your PERSONAL EMPATH. (MUST be in the CITY you go to for TOWN RUN)
     var EmpathRoom NULL
## BankBot - Used for F2P characters to tip a bankbot any remaining coin at end of town run
## Set Tipping to 1, Bankbot name and Tiproom = room number bankbot is at, in your home town
     var Tipping 0
     var BankBot morph
     var TipRoom 753
## CLAN ITEM (TF USE ONLY)
     var CLAN OFF
     var CLAN.ITEM sphere
## LIGHTER ITEM (For using a Lighter to start fires instead of flint and blade)
## USAGE - var LIGHTER (ON or OFF) - Lighter.Name = verb of the item
     var Lighter OFF
     var Lighter.Name world dragon
## CUSTOM TOWN SCRIPT - (Must be the exact name of the script (IGNORE .CMD - JUST USE NAME)
## Set your own script to run during the town run
## YOU MUST HAVE A PARSE AT THE END OF YOUR SCRIPT: put #parse SCRIPT FINISHED!
## IF YOU DO NOT HAVE THIS PARSE THEN UBER WILL NOT RECOVER PROPERLY!
     var Custom.Script NULL
## RPA BESTOW? (ON or OFF) - MUST BE IN THE PIRP SYSTEM TO BESTOW RPAS! https://elanthipedia.play.net/RPA_command
     var RPA ON
## LIST THE PEOPLE YOU WANT TO BESTOW RP POINTS TO BELOW IN AN ARRAY!!
## ie. var PirpList Name1|Name2|Name3|Name4|Name5
     var PirpList Raidboss|Healbitch|Illuminati|Breckin|Ryhs|Rhoat|Shepherd|Kohen|Worril|Odium|Morvetan|Orcher|Amroth|Mephos|Yew|Lorak|Wryll|Rellie|Beerfest|Bayndayd|Xana|Crivic|Blaakwulf|Wong|Findal|Regnar|Lakshmi|Vivica|Phucker|Jimdickens|Kiroq|Bleed|Rutinger|Nekhet|Leecya|Arazenya|Kithkani


######################################################################################################################
######################################################################################################################
# GENERAL MAGIC VARS - ALL MAGIC USERS MUST SET THESE VARIABLES
# GENERIC MAGIC VARIABLES FOR ALL MAGIC USERS
######################################################################################################################
######################################################################################################################
# SMART MANA FOR SPELLS? AUTO-DETERMINES OPTIMAL MANA FOR SPELLS AFTER A NEW SETUP (OR EVERY ~2 WEEKS IN GAME)
# SMART MANA WILL AUTOMATICALLY ADJUST YOUR MANA LEVELS UP AND DOWN AS YOU GAIN IN RANKS FOR OPTIMAL LEARNING
# (ON or OFF) - RECOMMEND LEAVING ON - SETTING THIS ON WILL OVERRIDE ALL MANUAL MANA SETTINGS 
# TURNING SMART.SPELLS OFF MEANS YOU WILL ~HAVE~ TO SET MANA MANALLY AND DO MUCH MORE FINE TUNING 
     var SMART.SPELLS ON
# CAMB HEAVY (ON or OFF) (OFF by default) - ON WILL MAKE SMART MANA PUT MORE MANA INTO CAMBRINTH THEN MAIN PREP
     var Camb.Heavy OFF
# MAGIC RATE - (NULL is RECOMMENDED) Set the MIN Magic Rate to reach before switching to a different spell school. 
# SETTING TO A NUMBER WILL SPAM THE SAME SPELL UNTIL YOU REACH DESIRED LEARNINGRATE. Set to NULL to cycle through spells normally 
     var Magic.Rate NULL
# MAGIC SNAP CAST. Set to 0 for Full Aim. Set to desired number of seconds to pause for that many seconds before casting
     var MAGIC.SNAP 0
# CAMBRINTH CHARGES - Number of Times to Charge your cambrinth (or harness if Cambrinth is NULL) each time!
# RECOMMEND LEAVING THIS AT 1 - 2 AT MAX - THIS VARIABLE TIES INTO HOW SMART MANA CALCULATES MANA
     var CambrinthCharge 1
# OFFENSIVE SPELL MANA AMOUNTS - Set BASE MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Mana 15
     var Debilitation.Mana 15
     var Utility.Mana 15
     var Augmentation.Mana 15
     var Warding.Mana 15
     var Sorcery.Mana 15
# OFFENSIVE SPELL CAMBRINTH AMOUNTS - Set CAMBRINTH MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Camb 20
     var Debilitation.Camb 20
     var Utility.Camb 20
     var Augmentation.Camb 20
     var Warding.Camb 20
     var Sorcery.Camb 20
# USE HARNESS / CAMBRINTH FOR OFFENSE SPELLS (ON or OFF)
# TURN OFF TO SKIP HARNESS/CAMBRINTH COMPLETELY
     var Use.Cambrinth ON
# USE HARNESS / CAMBRINTH FOR BUFFS (ON or OFF)
     var Use.Cambrinth.Buffs ON
# CAMBRINTH ITEM for charging BUFFS/SPELLS (Set to NULL to not use)
     var Cambrinth cambrinth ring
     var Cyclic.Cambrinth NULL
# CAMBRINTH MANA AMOUNT FOR SPELLS - Amount of Mana to put in CAMBRINTH for Magic Tattoos / Harness for Cyclics when No Raw Chanelling feat
     var CambrinthMana 5
# CAMBRINTH MANA FOR Cylics - Amount of Mana to put in cambrinth for Cylics ONLY
     var CyclicCharge 10
# SLOW.CAST (ON or OFF) - OFF IS DEFAULT - Slow Cast ON will cast offensive spells about half as often as normal
# SLOW.CAST OFF (Default) will spam spells in between attacks as much as possible (mana permitting)
     var Slow.Cast OFF
# NO CAMBRINTH USE DURING TM / DEBIL SPELLS (ON or OFF)
# IF YOU SET THIS ON, SCRIPT WILL SKIP USING A CAMBRINTH FOR TM OR DEBIL SPELLS
     var NoCambTM OFF
# POWER PERCEIVE (Perceives every ~5 minutes)
     var POWERP ON

# RITUAL FOCUS ITEM (REQUIRED for RITUAL SPELLS - set Ritual to NULL to not use)
# Ritual.Container can be set to any Container - or set to NULL to wear it first
     var Ritual staff
     var Ritual.Container %Container
# SORCERY RITUAL FOCUS (Separate ritual focus for Sorcery IF NEEDED)
     var Sorcery.Focus NULL
# TM DAMAGE FOCUS ITEM - IF SET WILL USE TM FOCI MODE EVERY ~HOUR (set to NULL to not use)
     var TMFoci NULL
     var TMFoci.Container %Container
# USE SYMBIOSIS ON ATTACK SPELLS? (ON or OFF)
# ONLY USEFUL AT ~HIGHER RANKS~ OF MAGIC - ~NOT~ FOR NOOBS!!
     var Target.Symbiosis OFF
     var Utility.Symbiosis OFF
     var Augmentation.Symbiosis OFF
     var Warding.Symbiosis OFF
     var Sorcery.Symbiosis OFF
     var Debilitation.Symbiosis OFF
# USE SYMBIOSIS ON BUFFS? (ON or OFF) - FOR HIGHER RANKS ONLY
     var Symbiosis.Buffs OFF

# MAGIC TATTOO (Set to NULL or the FULL SPELLTIMER NAME i.e - IronConstitution / MajorPhysicalProtection) - Will use a Magic Tattoo every ~5-10 minutes
# FULL SPELLTIMER NAME MUST ALSO BE SET IN YOUR BUFFS OR SPELLS - USE SORCERY.CAMB (ABOVE) TO SET CAMB MANA FOR MAGIC TATTOO
     var Magic.Tattoo NULL
# MAGIC TATTOO CAMBRINTH/HARNESS MANA - Set the amount of Camb Mana you want to boost your tattoo with
     var Tattoo.Camb 30
# HEROIC TATTOO (ON or OFF) - ONLY FOR HEROIC TATTOOS! (Normal tattoos use Magic.Tattoo)
# VERY BASIC - WILL JUST INVOKE TATTOO / CAST ON A 1 HOUR COOLDOWN
     var Runic.Tattoo OFF

#########################################################################################
# GUILD SPECIFIC OPTIONS BELOW
# SET THE GUILD OPTIONS FOR THE CURRENT CHARACTER YOU ARE EDITING 
########################################################################################
########################################################################################
# NECROMANCER SETTINGS
# SET NECRO.HEAL ON TO USE NECRO HEALING - (Consume Flesh / Devour depending on skills)
     var Necro.Heal ON
## NECROHEAL CREATURE (SET A ~LOW LEVEL~ CREATURE TO KILL ~ONLY FOR DEDICATED HEALING PURPOSES~)
## IDEALLY SET THIS TO A CREATURE NEAR YOUR "HOME CITY" SO YOU DON'T HAVE FAR TO RUN FOR HEALING
     var NecroHeal.Critter GOBLIN SHARD
# SET NECRORITUAL ON TO PERFORM RITUALS IN COMBAT (Preserve/Harvest/Dissect/Butchery/etc)
     var NecroRitual ON
## FORSAKEN? (ON or OFF) - IS NECRO FORSAKEN?? IF ON - WILL AVOID TOWNS/SERVICES AS MUCH AS POSSIBLE!! 
## *Not fully tested/implemented-may not be perfect- but should avoid towns. May have issues REPAIRING ARMOR Unless USING FC* 
     var Forsaken OFF
## RISEN? (ON or OFF) - CREATES RISEN MINIONS IN COMBAT (CAREFUL - GENERATES DIVINE OUTRAGE!) 
     var Risen OFF
## QUICKEN EARTH - ON TO CHECK FOR AND SUMMON DIRT CONSTRUCTS EVERY ~5 MINUTES
     var QuickenEarth OFF
     var QE.Mana 10
     var CFB.Mana 10
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Necro.Cyclics |USOL|ROC
     var Necro.Cyclics.mana |5|4
## Necromancer ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Necro.Target.Spell ACS|VS
     var Necro.Debilitation.Spell HP
     var Necro.Utility.Spell GAF
     var Necro.Augmentation.Spell Obfuscation
     var Necro.Warding.Spell MAF
     var Necro.Sorcery.Spell MPP
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Necro.Buffs IVM|REI|ROC|CH
########################################################################################
########################################################################################
### BARD SETTINGS
# Cyclic Spell Setup
# YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST be set for each individual cyclics!
# YOU MUST SET cyclic.mana in an array to match!! 6 cyclic - 6 mana numbers
  # SET TO NULL/OFF IF NOT TRAINING CYCLICS - THERE ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Bard.Cyclics |AEWO|HODI|FAE|CARE|PYRE|GJ
     var Bard.Cyclics.mana |5|4|5|5|5|6
## Bard ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Bard.Target.Spell BOS
     var Bard.Debilitation.Spell DMRS
     var Bard.Utility.Spell AOT
     var Bard.Augmentation.Spell WILL
     var Bard.Warding.Spell REPR
     var Bard.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Bard.Buffs |MIS|HARM|RAGE|REPR
## BARD SCREAMS? ( Screams in combat every ~60 seconds) (ON or OFF)
     var Bard.Scream ON
## BARD WHISTLE (ON or OFF)
     var Bard.Whistle ON
########################################################################################
########################################################################################
# WARRIOR MAGE SETTINGS
## USE SUMMONING? (Will train Summoning every ~3 minutes)
     var Summoning ON
## ELEMENTAL ALIGNMENT - Element can be FIRE, WATER, ELECTRIC, AETHER, AIR or EARTH
     var element FIRE
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var WM.Cyclics |EE|AC|FR
     var WM.Cyclics.mana |5|4|5
## Warrior Mage ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var WM.Target.Spell FS|FB
     var WM.Debilitation.Spell EE|ALA
     var WM.Utility.Spell ETF
     var WM.Augmentation.Spell YS
     var WM.Warding.Spell ES
     var WM.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var WM.Buffs Ease|TW|SW|Zephyr|SUF|Ignite
## ~WEAPON SUMMONING LOGIC~
# SUMMON WEAPONS (ON or OFF)
     var SummonWeapons OFF
# SUMMON ELEMENT - Must set your WEAPON SUMMON ELEMENT ( Stone/Earth (Default) - Fiery/Fire (Fiery Infusions) - Icy/Ice (Icy Infusions) - or Electric (Shocking Infusions)
     var SummonElement FIRE
# ELEMENTAL CHARGE SPELL Must be *a spammable spell* of your chosen element. Will prep at minimum mana - if you want to prep at something else put a number after
     var ChargeSpell MOA
# SUMMON WEAPON TEMPLATE (0 or 1) - 0 = Default weapon, 1 = Turn weapon to other template
     var SummonTemplate 1
# SUMMON WEIGHT/DENSITY (0 - 2 to set weapon density - Must know QUICK INFUSIONS spell)
# 0 = Lightest Weight, 1 = DEFAULT, 2 = Heavier Weight
     var SummonWeight 1
# Set weapons you want to summon (ON or OFF) - Setting to ON will override your default weapon variables at top of script
     var SummonHT OFF
     var SummonLT OFF
     var SummonSE OFF
     var SummonLE OFF
     var SummonTHE ON
     var SummonSB OFF
     var SummonLB OFF
     var SummonTHB ON
     var SummonPolearms ON
     var SummonStaves ON
## INGOT (ON or OFF) Bump up tier of weapons - Must know REINFORCED INFUSIONS spell and have a rare metal ingot
     var WMIngot OFF
## SET INGOT STORAGE CONTAINER (Set to either a sigil ring or a specific container)
     var Ingot.Container sigil ring
########################################################################################
########################################################################################
# MOON MAGE SETTINGS
## MOON MAGE ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var MM.Target.Spell DO|Burn
     var MM.Debilitation.Spell Dazzle|MB
     var MM.Utility.Spell PG
     var MM.Augmentation.Spell AUS|ART
     var MM.Warding.Spell PSY
     var MM.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var MM.Cyclics |SHW
     var MM.Cyclics.mana |5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var MM.Buffs CV|Shadows|TS|COL|Shadowling|PSY
## OBSERVATION TRAINING - PREDICT TOOL IS ONLY USED FOR PREDICTION OUTSIDE OF COMBAT! TOOL MUST ALREADY BE BONDED!!
## Predict.tool can be - BONES, CHART, MIRROR, PRISM, BOWL, DECK or NULL to turn off.
     var Predict.Tool DECK
## Read The Ripples (RTR ON or OFF) - Will Perform a RTR routine (observe spam) during town run **MUST HAVE TELESCOPE!
     var RTR OFF
## Where you store your telescope * If any - defaults to your main Container if not set
     var Telescope.Container NULL
## OBSERVE IN COMBAT (ON or OFF) - If ON will do Astrology observations in Combat every couple minutes
     var Combat.Observe ON
########################################################################################
########################################################################################
# CLERIC SETTINGS
## CLERIC ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Cleric.Target.Spell FOU|FF
     var Cleric.Debilitation.Spell PS|Malediction
     var Cleric.Utility.Spell DR|BLESS
     var Cleric.Augmentation.Spell Benediction
     var Cleric.Warding.Spell MPP|SL
     var Cleric.Sorcery.Spell dazzle
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Cleric.Cyclics |HYH|GHS|REV|SA
     var Cleric.Cyclics.mana |15|15|15|15
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Cleric.Buffs OM|Auspice|SOS|POM|MAPP|PFE|YS
## ARE YOU USING OM ORB? (MUST BE SET IN BUFFS ABOVE!) SET MANA AMOUNT TO CAST OM / CHARGE ORB WITH EACH TIME
     var OM.Mana 25
## TYPE OF ORB YOU USE FOR OM - OPTIONS:( FIRULF, MERAUD or KEREN)
     var FavorOrb meraud
## BUFF SPELLS YOU WANT TO ALWAYS KEEP ACTIVE IN YOUR OM ORB (You can just set this to var OM.Buffs %Cleric.Buffs ) 
     var OM.Buffs PFE|POM|MPP|MAPP|SAP|SOL
## CLERIC RITUALS? (Perform CLERIC RITUALS during Town Runs/in Combat)
     var ClericRituals ON
### Prayer Mat - Set to NULL to not use or the noun of the mat/rug
     var PrayerMat mat
## HOLY WATER VESSEL - Set your container you use to store/collect holy water
     var HolyWater chalice
### COMBAT COMMUNES - (ON or OFF) - Set the COMMUNES you wish to perform while IN COMBAT 
     var Commune.Meraud ON
     var Commune.Truffenyi ON
     var Commune.Tamsine OFF
### FLINT KNIFE - Set a DEDICATED WEAPON/KNIFE to STRIKE FLINT for MAKING FIRE for RITUALS
### MUST be a METAL weapon you can use to STRIKE FLINT for fire
     var FlintKnife knife
## CLERIC ALIGNMENT GOD - Set a God to align to ( https://elanthipedia.play.net/Cleric_3.0#Alignment )
## CHOOSE A LIGHT/DARK/NEUTRAL GOD ONLY - Each Type will buff 2 magic skills and penalize 3 others
## BY DEFAULT SCRIPT WILL USE ~CHADATRU~ (Which buffs AUG/WARDING - Generally the most lacking magics for Clerics)
## Set a different god if you wish to buff other magics but BE CAREFUL!!! 
     var Alignment.God CHADATRU
########################################################################################
########################################################################################
# RANGER SETTINGS
## RANGER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Ranger.Target.Spell DEVI|STAMPEDE
     var Ranger.Debilitation.Spell DEADFALL|SWARM
     var Ranger.Utility.Spell EM|BLEND
     var Ranger.Augmentation.Spell SOTT
     var Ranger.Warding.Spell EY
     var Ranger.Sorcery.Spell ECRY
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Ranger.Cyclics |CS|BES
     var Ranger.Cyclics.mana |5|5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Ranger.Buffs Athleticism|STW|EY|WOTP|OATH|ETC|Bloodthorns
########################################################################################
########################################################################################
## PALADIN SETTINGS
## PALADIN ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Paladin.Target.Spell FST
     var Paladin.Debilitation.Spell Shatter
     var Paladin.Utility.Spell AS
     var Paladin.Augmentation.Spell RW
     var Paladin.Warding.Spell SP
     var Paladin.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Paladin.Cyclics |HOW|TR
     var Paladin.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Paladin.Buffs AA|Courage|HES|RW|SR|Clarity
## SET your HOLY WEAPON here (NULL to ignore) - Holy Weapon Name
     var HolyWeapon NULL
## Holy Icon (NULL TO NOT USE/IGNORE) - Set to the noun of your icon
     var HolyIcon NULL
########################################################################################
########################################################################################
## TRADER SETTINGS
## TRADER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Trader.Target.Spell CRD|STARCRASH
     var Trader.Debilitation.Spell FLUORESCE|AVA
     var Trader.Utility.Spell NOUMENA
     var Trader.Augmentation.Spell BLUR
     var Trader.Warding.Spell IR
     var Trader.Sorcery.Spell MPP
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Trader.Cyclics |ARS|SOV
     var Trader.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Trader.Buffs |TRC|Blur|LGV|NONCHALANCE
########################################################################################
########################################################################################
# EMPATH SETTINGS
## EMPATH ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Empath.Target.Spell PARALYSIS
     var Empath.Debilitation.Spell LETHARGY|NB
     var Empath.Utility.Spell GS|HEAL
     var Empath.Augmentation.Spell REFRESH
     var Empath.Warding.Spell IC|POP
     var Empath.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Empath.Cyclics |AD|REGEN
     var Empath.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Empath.Buffs  |AGS|BS|IC|GOL|MEF|TRANQUILITY
## GAURDIAN SPIRIT? (ON or OFF) - ON will keep up Guardian Spirit while in Combat
     var Guardian.Spirit ON
## CUSTOM GUARDIAN SPIRIT (ON or OFF) - If ON - will "cast custom" instead of casting normal
     var Guardian.Custom OFF
## ATTACK CONSTRUCTS ONLY? (ON or OFF) - ON will ONLY attack constructs (unless using Absolution vs unded). OFF will attack everything
## WARNING - SETTING TO OFF WILL CAUSE EMPATHIC SHOCK!!!!
     var Construct.Only ON
## USE MANIPULATE FRIENDSHIP (ON or OFF) - ON will attempt to manipulate non-construct creatures
     var Manipulate ON
## ESCAPE COMBAT WHEN EMPATHY REACHES 0? (ON or OFF) - If Empathy LearningRate reaches 0 during combat, will go on town run
     var Empathy.Escape OFF
## EMPATH PERCEIVE HEALTH WALKS (ON or OFF) - If ON - Will go on perceive health walks around town during town run
     var Empath.Walk ON
## EMPATH UNITY LINK (ON or OFF) - FOR EMPATH HEALBOT MODE - DO YOU KNOW UNITY LINK? MUST BE 70+ CIRCLE AND 380+ EMPATHY
     var Unity ON
## TEACH CLASS (FOR HEALBOT MODE) - SET THE SKILL OF THE CLASS YOU WANT TO TEACH
     var TeachClass TM
## BLACKLIST! (FOR HEALBOT MODE) - SET THE NAMES OF THE PEOPLE TO BLACKLIST FROM HEALING SERVICES!
## MUST BE IN AN ARRAY - var Blacklist Bob|Frank|Dave
     var Blacklist NULL
########################################################################################
########################################################################################
# THIEF SETTINGS
# AMBUSH TRAINING (Use AMBUSH MOVES in COMBAT - STUN/CLOUT/SLASH)
     var Ambush ON
# SELECT KHRI TO USE (Set as many ON / OFF as you want )
# IT WILL ONLY USE AS MANY KHRI AS YOU CAN HANDLE AT ONCE, PRIORITIZING THE MOST IMPORTANT DEPENDING ON SCENARIO)
     var khriSAGACITY ON
     var khriSTEADY ON
     var khriSTRIKE ON
     var khriFOCUS ON
     var khriELUSION ON
     var khriENDURE ON
     var khriAVOIDANCE ON
     var khriADAPTATION ON
     var khriPROWESS ON
     var khriHASTEN ON
     var khriHARRIER OFF
     var khriSERENITY OFF
     var khriSIGHT ON
     var khriFLIGHT ON
     var khriCALM OFF
     var khriGUILE OFF
     var khriDARKEN ON
     var khriDAMPEN ON
     var khriSHADOWSTEP ON
     var khriELIMINATE OFF
     var khriTERRIFY OFF
     var khriFRIGHT OFF
     var khriINTIMIDATE OFF
     var khriPLUNDER ON
     var khriSAFE OFF
     var khriEVANESCENCE OFF
     var khriCREDENCE OFF
     var khriCUNNING OFF
# USE KHRI DURING TOWN RUN? (ON or OFF) - Turn OFF to Skip using Khri during town run - for Sanowret use
     var Khri.Town ON
########################################################################################
########################################################################################
# BARBARIAN SETTINGS
# USE WHIRLWIND?
     var Whirlwind ON
# USE DUAL WIELD? (ON or OFF) - Dual wield requires 450+ in the weapon
     var DualWield ON
# EXPERTISE COMBOS? (ON or OFF) - Does Barb Expertise Combos (and helps generate IR)
     var Expertise ON
# Set which Forms you want to use (ON or OFF)
# Auto-turns some forms on/off depending on what skills you are training
     var barbEagle ON
     var barbBadger ON
     var barbPanther ON
     var barbPiranha ON
     var barbDragon ON
     var barbMonkey ON
     var barbTurtle OFF
     var barbOwl OFF
     var barbBear ON
     var barbBuffalo OFF
     var barbPython ON
     var barbSwan ON
     var barbToad OFF
     var barbWolverine OFF
# ROARS to use (will only use one)
     var roarEmbrace OFF
     var roarEverild ON
     var roarWail OFF
     var roarScreech OFF
     var roarShriek OFF
     var roarAnger ON
     var roarKuniyo ON
# BERSERKS to use
     var zerkHurricane OFF
     var zerkBlizzard ON
     var zerkFamine ON
     var zerkAvalanche ON
     var zerkTsunami OFF
     var zerkWildfire OFF
     var zerkEarthquake OFF
     var zerkTornado OFF
     var zerkFlashflood ON
     var zerkLandslide ON
     var zerkCyclone OFF
     var zerkDrought OFF
# MEDITATIONS to use (ON or OFF) - WILL ONLY WORK FOR HIGHER LEVEL BARBS
     var medContemplation ON
     var medTenacity ON
     var medSerenity ON
### END OF CHARACTER 13 VARIABLES
### STOP EDITING HERE ~~~ END OF CHARACTER 13 VARIABLES ##########
####################################################################################
####################################################################################
echo **** LOADED %CHARACTER13 VARIABLES
goto END.OF.VARS
}

CHARACTER14:
#########################################################################################################
#########################################################################################################
## CHARACTER 14 VARIABLES
## *CHARACTER14 VARIABLES BLOCK BELOW
if matchre("$charactername", "(?i)%CHARACTER14") then
#########################################################################################################
{
### GENIE LAYOUT - SET THE GENIE LAYOUT YOU WANT THIS CHARACTER TO USE - MUST EXACTLY MATCH THE LAYOUT NAME IN GENIE!
### Example: var GENIE.LAYOUT Shroom.layout - TO SAVE A LAYOUT IN GENIE SET IT UP HOW YOU LIKE AND CLICK LAYOUT > SAVE LAYOUT AS > NAME IT HOW YOU WANT
### IF YOU LEAVE THIS SET TO NULL THEN IT WILL JUST USE THE DEFAULT LAYOUT THAT IS SET (default.layout) 
     var GENIE.LAYOUT default.layout
### HEAL.CITY ( NULL or CITY NAME (CROSS/LETH/HIB/RIVER/THEREN/SHARD) - Will run to this town for HEALING no matter where you are
     var HEAL.CITY NULL
### HOME CITY (NULL or CITY NAME) - Will attempt to return to your home city after a heal run (if not already in that city) ONLY SUPPORTS MAINLAND CITIES
     var HOME.CITY NULL
### SAFE ROOM (set to NULL to ignore) ~MUST~ TIE INTO HOME.CITY ABOVE! THE ROOM ID YOU WANT TO SCRIPT IN DURING TOWN RUN - MUST BE VALID ROOMID IN YOUR HOME CITY!
### WARNING!: IF YOU DO NOT SET BOTH HOME.CITY AND SAFE.ROOM CORRECTLY YOU ~WILL~ RUN INTO ERRORS - LEAVE BOTH AT NULL TO LET SCRIPT LOGIC HANDLE IT
     var SAFE.ROOM NULL
### AUTO-PROGRESS? (ON or OFF) - ON WILL CHOOSE YOUR COMBAT CREATURE AUTOMATICALLY BASED ON YOUR RANKS - YOU DO NOT NEED TO SET IT! OVERRIDES COMBAT.CRITTER VARIABLE
     var AUTO.PROGRESS ON
### AUTO-PROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var PROGRESS.TYPE NORMAL
### COMBAT CRITTER - ONLY USED WITH AUTO.PROGRESS OFF - MUST BE A VALID CREATURE NAME! USE FULL NAME OR 1/2/3 TO SPECIFY TIERS ie SNOW GOBLIN 2
     var COMBAT.CRITTER GOBLIN
### ALTERNATE CRITTER - PICK A ALTERNATE CRITTER TO HUNT - IF YOUR MAIN HUNTING GROUND IS FULL!
     var ALTERNATE.CRITTER MUSK HOG
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var PRIORITY.ROOMS NULL
### XP TRACKER RESET ON SCRIPT STARTUP - (ON or OFF) - RESETS EXP TRACKER TRACKING TIME ON INITIAL LAUNCH OF SCRIPT ONLY
     var XP.RESET ON

### GUI OPTIONS ARE RECOMMENDED TO LEAVE OFF COMPLETELY - THESE OPTIONS ONLY HERE BY SPECIAL REQUEST - WILL BE ANNOYING IF YOU TURN IT ON
### CRITTER.GUI (ON or OFF) - OFF by default - CREATES CRITTER GUI WINDOW - MUST MANUALLY CLICK TO CHOOSE YOUR COMBAT CRITTER BASED ON PROVINCE / SKILL / PREFERENCE
     var CRITTER.GUI OFF
### WEAPON.GUI (ON or OFF) - OFF by default - CREATES WEAPON GUI WINDOW - CHOOSE YOUR WEAPONS FOR THAT RUN *IF YOU HAVE AN ARRAY OF WEAPONS SET IN A SINGLE WEAPON VARIABLE
     var WEAPON.GUI OFF

# FRIEND LIST (People you will hunt with) Put your friends names in place of these. Ex. Bob|Fred|George
# Can just put your name in here or make it blank and it will only find empty rooms.
     var FRIENDS %ALLCHARACTERS|%GLOBALFRIENDS

##############################################################
# WEAPON / CONTAINERS / AMMO SETTINGS - BE VERY SPECIFIC! 
##############################################################

# CONTAINERS - MANDATORY! - SET YOUR MAIN ~3-4~ LARGEST CONTAINERS!
# BE SPECIFIC WITH CONTAINER NAMES - USE 2 WORDS WHENEVER POSSIBLE!
     var Container backpack
     var Container.Boxes haversack
     var Container.Backup duffel bag
     var Container.Crafting carryall
# SHEATH CONTAINER IS FOR SUPER LONG ITEMS - CAN BE ANY LARGE CONTAINER - NOT NECCESARY TO SET 
     var Container.Sheath NULL
# AMMO CONTAINER FOR STORING AMMO - ARROWS/BOLTS/ROCKS - BACKUP CONTAINER IS "OVERFLOW" FOR EXTRA AMMO
     var Container.Ammo quiver
     var Container.Ammo.Backup NULL
## CONTAINER.GEMPOUCH - VERY IMPORTANT! - ~MUST BE A SEPARATE CONTAINER~ FROM OTHER BAGS! SMALL/MEDIUM-SIZE CONTAINER IS FINE
## SPECIAL CONTAINER! SCRIPT WILL KEEP THIS CLOSED AT ALL TIMES AND ~ONLY USE IT FOR STORING FULL GEM POUCHES!~
## CONTAINER.GEMPOUCH MUST BE A ~CLOSABLE~ CONTAINER TO STORE ~FULL~ GEM POUCHES IN 
## AGAIN - DO NOT SHARE THIS CONTAINER WITH ~ANY OTHER CONTAINERS~ (except Repair Pouch Container) 
     var Container.GemPouch thigh pouch
# Container.EmptyPouch is for storing EMPTY GEM POUCHES (This can be ANY container EXCEPT for Container.GemPouch )
     var Container.EmptyPouch backpack
# DIRT CONTAINER - For storing dirt for various use (ONLY used by Thieves/Clerics/Necros)
     var Container.Dirt backpack
## MISC SHEATH OPTIONS (Storing specific weapons in specific containers - toolstraps/bandoliers/harnesses etc) - SET TO NULL/OFF TO NOT USE
## SET THE SHEATH NAME UNDER SHEATH.1 - SET THE WEAPONS YOU WANT TO USE ON EACH SHEATH UNDERNEATH IN AN ARRAY ex:
## var Sheath.1 toolbelt
## var Sheath.1.Weapons sabre|axe|broadsword
     var Sheath.1 NULL
     var Sheath.1.Weapons machete|crossbow|club|flail|slingshot|assassin's blade|steppe bow|katana|nightstick|thrusting blade|shortbow|mace|ngalio|sling|maul|quarterstaff|zweihander|spear|flamberge|mirror ava|throwing (mallet|hammer|club)
     var Sheath.2 NULL
     var Sheath.2.Weapons stonebow|slingshot|blowgun|boomerang
     var Sheath.3 NULL
     var Sheath.3.Weapons mirror blade
     var Sheath.4 NULL
     var Sheath.4.Weapons mirror knife
     var Sheath.5 NULL
     var Sheath.5.Weapons throwing blade|icicles|icicle
     var Sheath.6 NULL
     var Sheath.6.Weapons kertig dart
     
## WEAR WEAPONS (Set an array of weapons/shields you want the script to try and wear first before stowing)
     var Wear.Weapons NULL

## SMART.WEAPONS - ON TO TRAIN WEAPONS FROM LOWEST SKILL TO HIGHEST. "OFF" WILL GO IN A LINEAR ORDER (DEFAULT: ON)
## ON WILL DYNAMICALLY TRAIN TO ALWAYS MAKE SURE THE LOWEST SKILLED WEAPON IS TRAINED FIRST 
     var SMART.WEAPONS ON
     
## WEAPON SETTINGS - BE VERY SPECIFIC SETTING WEAPONS ! USE TWO WORDS WHENEVER POSSIBLE!
## SET ALL YOUR WEAPONS BELOW - MUST ~EXACTLY MATCH THE ITEM DESCRIPTION WHEN IN HANDS~! (GLANCE at it in your hands to get correct description) 
## BE SPECIFIC WHEN SETTING WEAPONS!! USE 2 WORDS WHEN POSSIBLE! TO TURN A WEAPON SKILL ~OFF~ SET IT TO - NULL
     var SEWEAPON assassin's blade
     var LEWEAPON damaris falchion
     var THEWEAPON zweihander
     var SBWEAPON damaris bola
     var LBWEAPON horseman's flail
     var THBWEAPON damaris akabo
     var STAVES damaris quarterstaff
     var POLEARMS damaris pike
     var RANGED.BOW lirisan shortbow
     var RANGED.CROSSBOW cloudbark crossbow
     var RANGED.SLING damaris sling
     var LTWEAPON icicles
     var HTWEAPON damaris mallet
# MAIN OFFHAND WEAPON TRAINING - MELEE ONLY (MUST BE A LIGHT/MEDIUM WEAPON - HEAVY or 2HANDED WEAPONS WONT WORK!!)
     var OHWEAPON club
# ALTERNATE OFFHAND WEAPONS (For Backtraining/Dual Training weapons while training other Weapons)
# ~MUST~ BE LIGHT/MEDIUM WEIGHT WEAPON! CANNOT USE HEAVY or 2Handed Weapons! (Unless Barb) (SET TO NULL/OFF TO NOT USE)
     var ALTWEAPON1 club
     var ALTWEAPON2 bola
     var ALTWEAPON3 NULL
## BRAWLWEAPON (DEFAULT: $charactername - Set to NULL to skip brawling)
     var BRAWLWEAPON $charactername
     #var BRAWLWEAPON $charactername
## Backstab/Ambush Weapon (Thief Only)
     var BSWEAPON mirror blade

# AMMO SETTINGS - DO NOT REMOVE THE { } BRACKETS!!!
     if (!$AMMOSWAP) then
{
     var XbowAmmo crossbow bolt
     var BowAmmo arrow
     var SlingAmmo stone shard
}

## ARMOR CHECK (ON or OFF) - Turn this OFF if you want the script to SKIP checking your armor at the beginning
## If ON - at the beginning, script will remove any armor/fluff you are wearing, and then put on all the armor you have set below. This ensures you have the correct armor on.
     var ARMOR.CHECK ON
## SET YOUR SHIELD - ABSOLUTELY 100% MANDATORY! RECOMMEND AN ARM-WORN SHIELD
     var MyShield diamondwood shield
## ARM WORN SHIELD? (ON OR OFF) - I RECOMMEND ALWAYS USING AN ARM WORN / SMALL SHIELD - MAKES LIFE MUCH EASIER
     var ArmWorn ON
## MAIN ARMOR TO CHECK - PRIMARY COMBAT (Set to NULL to IGNORE a slot)
## YOU MUST SET ALL YOUR ARMOR BELOW - IT DOESN'T MATTER WHICH ARMOR SLOT YOU USE - THE SCRIPT DOESN'T CARE
     var CHEST.ARMOR khiynit robe
     var FACE.ARMOR NULL
     var HEAD.ARMOR leather cowl
     var ABDOMEN.ARMOR NULL
     var BACK.ARMOR NULL
     var ARM.ARMOR assassin's sleeves
     var HAND.ARMOR NULL
     var LEG.ARMOR NULL
     var KNUCKLE telothian knuckle
     var PARRYSTICK parry stick

## PRIORITY WEAPONS - WEAPON SKILLS TO KEEP MOVING ~ALWAYS~ - PRIORITIZE THESE WEAPON SKILLS OVER ALL OTHERS IF THEY ~EVER~ DROP TO 0/34
## MUST BE SET IN AN ARRAY - THE EXACT SAME AS GENIE EXP VARIABLE FORMAT ie: var Priority.Weapons Medium_Edged|Twohanded_Edged
## WARNING!! DO NOT SET PRIORITY WEAPONS UNLESS YOU WANT THOSE SKILL(S) TO TAKE PRIORITY OVER ~ALL~ OTHERS! ~WILL~ CAUSE UNEVEN RANKS OVER TIME!!
## THIS IS MAINLY ONLY USEFUL FOR SHORT PERIODS - FOR POWER LEVELING A SINGLE WEAPON SKILL FOR EXAMPLE - RECOMMEND NULL UNLESS YOU KNOW WHAT YOU ARE DOING
     var Priority.Weapons NULL
     
## TRAIN LOWEST (ON or OFF) - ON WILL ALWAYS TRAIN W/ YOUR LOWEST RANK & LOWEST LEARNINGRATE WEAPON AT EVERY WEAPON SWAP 
## THIS EFFECTIVELY ENSURES THAT ALL YOUR WEAPON SKILLS WILL TRAIN AND STAY AT THE ~EXACT SAME RANKS~ - ESPECIALLY IF USED FROM THE START
## NOTE! TRAINLOWEST ON - WILL ALTER THE DEFAULT WEAPON TRAINING ORDER - BYPASSES THE SET ORDER TO DYNAMICALLY TRAIN WEAPONS 
     var TrainLowest OFF

# MAX LEARNING RATE - FOR EACH WEAPON SKILL (WILL SWITCH WEAPONS ONCE REACHING THIS RATE *MAX 33) *SET TO 35 TO IGNORE LEARNINGRATE 
     var MAX.LEARNINGRATE 12
# LEARNING RATE INCREASE - AFTER FULL WEAPON LOOP *OF ALL WEAPONS* - INCREASE THE MAX.LEARNINGRATE BY THIS MUCH
     var LEARNING.INCREASE 4
# MAX TIME PER WEAPON - SET THE MAXIMUM TIME (IN SECONDS) TO TRAIN EACH WEAPON SKILL - BEFORE SWITCHING WEAPONS
# SETTING THIS TOO HIGH MAY CAUSE SUBOPTIMAL TRAINING - RECOMMEND AROUND ~300-500 (~5-8 minutes per weapon)
     var MAX.TIME 250
# MAXIMUM TOTAL COMBAT TRAINING TIME - SET THE MAX TIME (IN SECONDS) TO STAY IN ~COMBAT~ BEFORE ESCAPING TO TOWN ( 3600 SECONDS = 1 HOUR )
# SET VAR MAX.TRAIN 0 - TO LOOP COMBAT FOREVER ( *UNTIL IT ESCAPES DUE TO BEING TOO HURT / BAGS TOO FULL / BURDEN TOO HIGH )
     var MAX.TRAIN 4500
     
# STANCE PER WEAPON (Set NULL to use default - Or SHIELD/PARRY/EVASION/CUSTOM TO USE THAT PARTICULAR STANCE FOR A PARTICULAR WEAPON)
## NOTE SCRIPT IS ALREADY ADVANCED IN CHANGING STANCES DEPENDING ON WEAPON BEING TRAINED - NULL IS FINE FOR MOST PURPOSES
     var SE.STANCE NULL
     var LE.STANCE NULL
     var THE.STANCE NULL
     var SB.STANCE NULL
     var LB.STANCE NULL
     var THB.STANCE NULL
     var POLEARMS.STANCE NULL
     var STAVES.STANCE NULL
     var BOW.STANCE NULL
     var CROSSBOW.STANCE NULL
     var SLINGS.STANCE NULL
     var LT.STANCE NULL
     var HT.STANCE NULL
     var OH.STANCE NULL
     var BRAWL.STANCE NULL

## BACKTRAIN (ON or OFF) - ON FOR SETTING A SEPARATE BACKTRAIN ROUTINE
     var BACKTRAIN OFF
## BACKTRAIN AUTO PROGRESS (ON or OFF) - Turning this ON will automatically set the creature to hunt, based on your BACKTRAIN WEAPON SKILLS
## TURN THIS ~OFF~ TO SET THE BACKTRAIN CREATURE MANUALLY (BELOW)
     var BACKTRAIN.AUTOPROGRESS ON
### BACKTRAIN AUTOPROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var BACKTRAIN.PROGRESS.TYPE NORMAL
## BACKTRAIN CREATURE - Must specify the creature to hunt if BACKTRAIN.AUTOPROGRESS is OFF
     var BACKTRAIN.CRITTER ICE ARCHON
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var BACKTRAIN.PRIORITY.ROOMS NULL
## BACKTRAIN TIME (in SECONDS - Total time to Backtrain)
     var BACKTRAIN.TIME 1200
## BACKTRAIN MAGIC (ON or OFF) IF OFF - WILL SKIP USING ANY OFFENSIVE SPELLS PERIOD WHILE BACKTRAINING - WILL ONLY DO BUFFS
     var BACKTRAIN.MAGIC OFF
## BACKTRAIN TM/DEBIL SPELLS (ON or OFF) IF OFF - WILL SKIP USING ANY TM / DEBIL SPELL DURING BACKTRANING (UNLESS ITS A TATTOO)
     var BACKTRAIN.TM OFF
## BACKTRAIN WEAPONS - Set every weapon you wish to backtrain (NULL to turn off)
     var BACKTRAIN.SE NULL
     var BACKTRAIN.LE NULL
     var BACKTRAIN.THE NULL
     var BACKTRAIN.SB NULL
     var BACKTRAIN.LB NULL
     var BACKTRAIN.THB NULL
     var BACKTRAIN.STAVES NULL
     var BACKTRAIN.POLEARMS NULL
     var BACKTRAIN.BOW NULL
     var BACKTRAIN.CROSSBOW NULL
     var BACKTRAIN.SLING NULL
     var BACKTRAIN.LT NULL
     var BACKTRAIN.HT NULL
     var BACKTRAIN.BRAWL NULL
     var BACKTRAIN.OH NULL
     var BACKTRAIN.BS NULL
## BACKTRAIN STEALTH (OFF or ON)
     var BACKTRAIN.STEALTH ON
## BACKTRAINING LOOTING OPTIONS (ON or OFF)
     var B.Loot.Gems ON
     var B.Loot.Boxes OFF
     var B.Loot.Metals ON
     var B.Loot.Scrolls ON
     var B.Loot.Collectibles OFF
     var B.Loot.SpiderParts OFF
## BACKTRAIN LOOTING MODE ( treasure / boxes / goods / equipment )
     var B.Loot.Option goods
## BACKTRAIN ARMOR (ARMOR ONLY FOR BACKTRAIN ROUTINE) (Set to NULL to not check a piece)
     var B.CHEST.ARMOR NULL
     var B.FACE.ARMOR NULL
     var B.HEAD.ARMOR NULL
     var B.ABDOMEN.ARMOR NULL
     var B.BACK.ARMOR NULL
     var B.ARM.ARMOR NULL
     var B.HAND.ARMOR NULL
     var B.LEG.ARMOR NULL

##############################################################
### COMBAT GENERAL SETTINGS
##############################################################

## GEM POUCH DESCRIPTION - DR IS TRICKY WITH GEM POUCHES!! BE SPECIFIC - use "<color> pouch" only! 
## **RECOMMEND DUMPING ALL POUCHES AND GET NEW ONES FROM GEM SHOP ON FIRST SETUP**
## WHEN ASKING FOR NEW GEM POUCHES, "ASK NPC FOR <COLOR> POUCH" - ~DO NOT 'ASK FOR GEM POUCH' OR just 'POUCH'~ - JUST 'ASK <NPC> FOR BLACK POUCH'
## Then Set the var to the 'color' pouch you have. ie var gemPouch black pouch
     var gemPouch black pouch
# TIE GEM POUCHES? (ON or OFF) 
# TIE POUCHES FOR MORE STORAGE/LESS INVENTORY SPACE USE - but have to sell the FULL TIED POUCHES AT SPECIAL SHOPS or get TRADER to sell them!
# IF HUNTING IN SHARD OR ROSSMAN - NO WORRY AS SCRIPT SELLS TIED POUCHES IN THOSE GEM SHOPS. IF hunting in XING/ISLANDS will have to get Trader to sell pouches.
     var TiePouch OFF
# WORN GEM POUCH? (ON or OFF) (OFF will STOW your gem pouch / ON will wear it )
     var Gempouch.Worn OFF

## RESTOCK AMMO? (ON or OFF) *SCRIPT WILL AUTOMATICALLY CHECK IF YOU RUN OUT OF AMMO AND ATTEMPT TO RESTOCK
     var AmmoStock ON
# Skinning Knife Name (Mandatory if not a worn knife)
     var Skinning.Knife knife
# BELT/WRIST/ANKLE ~WORN~ SKINNING KNIFE? (ON or OFF)
     var BeltKnife ON
#### COMBAT OPTIONS ####
# OFFHAND THROWING - (ON or OFF) SET TO ON IF YOU WANT TO ROTATE RIGHT/LEFT HANDS WHILE THROWING LT/HT
     var OffhandThrow ON
# THROWING TYPE (LOB, THROW or HURL) *LOB will NEVER stick / less damage - HURL ALWAYS STICKS/ max damage. THROW is inbetween
## IF YOU USE A SHARP THROWING WEAPON (LIKE SPEAR) ALWAYS USE LOB! THROW WILL STICK WITH A POINTY WEAPON!
## LOB IS THE SAFEST - LOB NEVER STICKS! - THROW IS SAFE ~IF USING A BLUNT THROWN WEAPON~ - HURL ALWAYS STICKS - AVOID HURL 
     var ThrowType throw
# BONDED THROWING WEAPONS? (ON or OFF) - Will use INVOKE to retrieve thrown weapon
     var Bonded OFF
# ROAMING (ON or OFF) - Will ROAM around to different critter rooms if it doesn't find a creature during bored routine
     var Roaming ON
# USE WEAK ATTACKS (ON or OFF) - Will use WEAK attacks for melee training (good for backtraining or preserving fatigue/balance)
     var WeakAttack OFF
# AIM ACTIONS (Set an array of actions) - ACTIONS TO PERFORM WHILE WAITING FOR FULL AIM (WITH RANGED/SPELLS) Separate with |
     var AimActions bob|attack|attack left
# TRAIN STEALTH? TRAIN STEALTH DURING MELEE / THROWN / BRAWLING ROUTINES
     var TrainStealth ON
## LOOT MONSTERS? (ON or OFF) - LOOT MONSTERS?
## OFF WILL SKIP LOOTING ALL MONSTERS ~PERIOD~ AND LET THEM ROT
     var Loot.Monsters ON
## LOOT OPTION TO USE - TREASURE / BOXES / EQUIPMENT/ GOODS or ALL
     var Loot.Option GOODS
## LOOTING OPTIONS (ON or OFF) - LOOT OPTIONS FOR MAIN COMBAT
     var Loot.Gems ON
     var Loot.Boxes ON
     var Loot.Metals ON
     var Loot.Scrolls ON
     var Loot.Collectibles OFF
     var Loot.SpiderParts OFF
# MAX BOXES (Set a number) - MAX number of BOXES to pick up before turning Box looting off for that run
     var Max.Boxes 25
# DISSECT (ON or OFF) - DISSECT mobs for First Aid training in Combat (Alternates with SKINNING depending on Learning Rates)
     var Dissect ON
# SKINNING OPTIONS (ON or OFF)
# SKIN ON but BUNDLE OFF will skin but DROP all skins. SKIN collecting only supported with bundles ON!
     var Skin ON
     var Bundle ON
# TIE BUNDLES (ON or OFF) (Turns on automatically when F2P is ON) - LOWER ITEM COUNT BY TYING UP YOUR BUNDLES
     var TieBundle ON
# BUNDLE LOCATION (SET to NULL to use ANY open location or set a preferred location (shoulder / waist / back / belt / around shoulder / over shoulder)
     var BundleLocation NULL
# ArrangeTarget (SET TO SKIN, BONE or PART - or NULL to skip arrange)
## Set ArrangeTarget to SKIN/BONE/PART to Arrange one time
## Set ArrangeALL to ON to arrange max times
     var ArrangeTarget SKIN
     var ArrangeAll OFF
## ArrangeAlways (ON or OFF) - Set ON to ALWAYS arrange regardless of skinning learningrate. OFF will SKIP ARRANGING when Skinning learning is locked
     var ArrangeAlways OFF
# MAX BUNDLE SIZE - Max amount of skins to keep in bundle before creating a new bundle (DEFAULT: 30  MAX: 200)
     var MaxBundle 40
# Set SNIPE to ON to use SNIPE (THIEF/RANGER/NECRO ONLY)
     var Snipe ON
# Set POACH to ON to use POACH instead of SNIPE (SNIPE overrides this setting if SNIPE is ON - TURN SNIPE OFF TO USE THIS)
     var Poach OFF
# RANGED AIM PAUSE. Set to 0 for a Full Aim. Set number of seconds to pause that many seconds before firing
     var SNAP.FIRE 6
# RETREAT WHILE USING RANGED WEAPONS/BUFFING? (ON or OFF) - Will RETREAT to stay at ranged when using ranged weapons
     var Retreat OFF
## DANCE / COUNT Critters - Set min number of critters to "dance" with before you start killing. 
## Leave Dance.Count 0 to kill EVERYTHING. Set 1 to dance with 1 creature until a 2nd comes in, etc. If set to 1 will ALWAYS leave 1 creature in your room.
     var Dance.Count 0
## TACTICS TRAINING (ON OR OFF) - Train TACTICS in Combat
     var Tactics ON
# APPRAISE CREATURES - (ON or OFF) to APPRAISE ALL CREATURES
     var APPRAISE ON
# HUNT OPTION (HUNT every ~75 seconds unless perception locked)
     var HUNT ON
## APPRAISE ITEMS WHEN NO CRITTERS IN ROOM? (ON or OFF)
     var APP.ITEMS OFF
## ITEMS TO APPRAISE (Set to NULL to not use) SET YOUR WORN ITEMS TO QUICK APPRAISE 
     var app1 NULL
     var app2 NULL
     var app3 NULL
## SANOWRET CRYSTAL? (ON or OFF) - ON will exhale crystal every ~100 seconds *IF CONCENTRATION ALLOWS
     var Crystal OFF
## USE SANORWRET CRYSTALS IN COMBAT? (ON or OFF) - ON will use Sanowrets in combat (Turning ON WILL effect concentration and hinder spell casting - not recommended for most)
     var SanowretCombat OFF
## ZILLS? (ON or OFF) - FOR WORN INSTRUMENTS - ON will play Zills during certain times (Repairing armor, collecting, etc)
     var Zills ON
## Zill name ( zills / cowbell / etc )
     var Zill.Name zills
# F2P CHARACTER (ON or OFF) - If set to ON - Script will escape combat and go to town run when you get an inventory count warning
     var F2P OFF
# BIOMECHANICAL TARANTULA? (ON or OFF) - IF ON - Will pick a (semi-)random near locked skill to drain every 10 minutes while in combat
     var Tarantula OFF
     var Tarantula.Name tarantula
## TARANTULA SKILLS TO CHECK - SET AN ARRAY OF SKILLS TO CHECK AGAINST FOR TARANTULA DRAIN
## MUST EXACTLY MATCH THE GENIE VARIABLE NAMES! THESE ARE THE SKILLS TARANTULA WILL CHECK FOR EACH SCHOOL
     var Magic.skills Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Arcana
     var Armor.skills Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor
     var Survival.skills Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing
     var Weapons.skills Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow
     var Lore.skills Appraisal|Tactics|Performance
# WARHORN? (ON or OFF) - For Barbarians and Bards only.
     var WarHorn OFF
## WAND SUPPORT (NULL to NOT use) (MEF wand / WoW wand / WoTP wand etc.) Set up to 2 sets of wands to use! Must use actual verb of wand!
## CAN SET AN ARRAY OF WANDS FOR EACH VAR ex- var Wand1 bloodwood branch|oaken staff|crystal
     var Wand1 NULL
     var Wand2 NULL
## WAND CONTAINERS *Must use 2 different containers to store Wands if using 2 identical named wands)
     var Wand1.Container belt
     var Wand2.Container cloak
## Wand Weapon - (NULL or WEAPON NAME) SET A MELEE WEAPON TO BUFF WHEN USING WANDS WITH A WEAPON BUFF
     var WandWeapon NULL
## EGG SUPPORT (ON or OFF)*Uses the HE Gift Egg in Combat every ~15 minutes to invoke more mobs
     var EGG OFF
## ASTROLABE (ON or OFF) - Uses an Astrolabe every 30 mins if ON (Will rotate if you use 2)
     var ASTROLABE OFF
## Set the name of the astrolabes - (2 words ONLY i.e - ornate astrolabe, twisted astrolabe)
     var ASTROLABE1 NULL
     var ASTROLABE2 NULL
     var Astro1.Container NULL
     var Astro2.Container NULL
## ORB RUB IN COMBAT (var Orb.Rub ON or OFF) - TURN ON TO RUB FAVOR ORB IN COMBAT EVERY ~40 MINUTES
## *NOTE THAT SCRIPT AUTOMATICALLY RUBS ORB ~ONE TIME~ EVERY FULL LOOP OF SCRIPT REGARDLESS OF THIS VARIABLE
     var Orb.Rub OFF
####################################################################################################
# ARMOR SWAP - (ON or OFF) - SPECIAL ARMOR SWAPPING ROUTINE FOR HELMS ONLY
# WILL SWAP OUT A SINGLE PIECE OF PLATE/BRIG/CHAIN/LIGHT HELM EVERY ~5 MINUTES IN COMBAT
     var Armor.Swap OFF
# IF Armor.Swap is ON - THEN ALL THE ARMORS BELOW MUST BE SET CORRECTLY!
# SET EVERY PIECE OF ARMOR TO SWAP BELOW, MUST SET AN ARMOR PIECE FOR ALL FOUR TYPES - TWO WORDS ONLY!
# ONE PIECE SHOULD MATCH YOUR MAIN ARMOR HELM
     var Light_Armor.Helm steelsilk balaclava
     var Chain_Armor.Helm chain balaclava
     var Brigandine.Helm brigandine balaclava
     var Plate_Armor.Helm NULL
####################################################################################################
# HEAVY ARMOR REMOVAL - (ON or OFF) - ON will take off plate/brig/chain armor before backstab/stealth routines
# Generally only needed for noobs with less then ~200 ranks in armors
     var Armor.Noob OFF
# Set Plate/Brig/Chain pieces here (USE EXACT SYNTAX) (If no armor to remove set to NULL)
     var PLATE1 gauntlet
     var PLATE2 greaves
     var PLATE3 NULL
     var PLATE4 NULL
# Set Light Armor Pieces to Swap in place of the Heavy armor pieces above - if any (set to NULL to not use)
     var LIGHTARMOR1 rugged gloves
     var LIGHTARMOR2 rugged greaves
     var LIGHTARMOR3 NULL
     var LIGHTARMOR4 NULL
####################################################################################################

##############################################################
# TOWN RUN / SPECIAL MODULES - SETTINGS FOR TOWN 
# AUTO HEALER / SELL GEMS/SKINS, BANK, OPTIONAL MODULES
##############################################################

# RETURN TO COMBAT MODULE (ON or OFF) - RESTARTS SCRIPT AND RETURNS TO COMBAT WHEN TOWN RUN IS FINISHED
# IF OFF - SCRIPT WILL ~ABORT~ ONCE TOWN RUN IS COMPLETE - LEAVE THIS ON FOR INFINITE AFK SCRIPTING
     var RETURN.TO.COMBAT ON
# AUTOHEAL (ON or OFF) - ON - LET SCRIPT HANDLE AUTO-HEALING AFTER COMBAT (DEPENDING ON YOUR GUILD/SETTINGS) 
# LEAVE THIS ON UNLESS YOU WANT TO HANDLE HEALING YOURSELF MANUALLY! (OR WITH ANOTHER SCRIPT) 
# TURNING THIS OFF WILL ~ABORT SCRIPT AFTER ESCAPING FROM COMBAT~! AND WILL PARSE: HELP ESCAPE PLZ!
     var AUTOHEAL ON
# HEAL ALL (ON or OFF ) - HEAL.ALL ON = FULLY HEAL IF YOU HAVE ~ANY~ WOUNDS AT ALL (even minor scars) 
# HEAL.ALL OFF = WILL SKIP HEALING IF INSIGNIFICANT WOUNDS (minor scratches etc)
     var HEAL.ALL ON
# SELL SKINS (ON or OFF) - VISIT FURRIER - SELL SKINS/BUNDLES 
     var SELLSKINS ON
# SELL GEMS (ON or OFF) - VISIT GEM SHOP - SELL ALL GEMS/POUCHES
     var SELLGEMS ON
# SELL METALS (ON or OFF) - VISIT GEM SHOP - SELL ALL LOOSE METALS/NUGGETS/BARS (except those in your Crafting Container) 
     var SELLMETALS ON
# BUY HERBS? (ON or OFF) - VISIT HERB SHOP - AUTO RESTOCK ON HEALING HERB SUPPLIES (IF in city with Herbalist)
     var HERBS ON
# USE HERBS IN COMBAT? (ON or OFF) - If ON - Script will eat herbs during combat every ~5 minutes if needed
     var HERBS.COMBAT ON
## Container.Herb - SET CONTAINER TO STORE YOUR HERBS IN (Can be a stackable herb container)
     var Container.Herb %Container
# BANK RUN (ON or OFF) - VISIT BANKS - DEPOSIT MONEY AFTER TOWN RUN 
     var BANKRUN ON
# INVENTORY CHECK (ON or OFF) - TURNS ON INVENTORY CHECKS FOR DUMPING ANY COMMON TRASH ITEMS IN INVENTORY (OR EXCESS GEM POUCHES / BUNDLING ROPE )
     var INVCHECK ON
# TRASH DUMP (ON or OFF) - IF ON WILL DUMP ANY ITEM IN YOUR TRASH VARIABLE (GLOBAL VARIABLE AT VERY TOP OF VARIABLE FILE)
     var TRASH.DUMP ON
# POUCH DUMP (ON of OFF) - IF ON - DUMPS ANY GEM POUCHES IN YOUR INVENTORY THAT ~DO NOT MATCH~ THE COLOR/DESCRIPTION OF YOUR PRIMARY GEMPOUCH ( var gemPouch )
# WILL ALSO DUMP YOUR NORMAL GEM POUCHES IF YOU HAVE MORE THAN 10 OF THEM until you only have 10 MAX (Prevent buildup of ~50 rogue pouches) 
     var POUCH.DUMP ON

## SHARD CITIZEN (ON or OFF) - Must be a citizen of shard
     var Shard.Citizen ON
# GET FAVORS? (ON or OFF) - (ONLY WORKS IN CROSSING / SHARD / HAVEN )
     var GET.FAVORS ON
     var FAVOR.GOD damaris
# REPAIR ARMOR? (ON or OFF) - REPAIR ALL ARMOR / WEAPONS DURING TOWN RUN (MUST HAVE MONEY IN LOCAL BANK)
     var REPAIR.ARMOR ON
## USE MAGIC REPAIR KITS? (SET NULL/OFF TO NOT USE)
## REPAIR.KIT and REPAIT.KIT.2 ARE FOR FULL REPAIR KITS THAT REPAIR ALL ARMOR ~AND~ WEAPONS
## REPAIR.KIT.WEAPON and REPAIR.KIT.ARMOR ARE ONLY FOR KITS THAT ONLY REPAIR ARMOR OR WEAPONS!
## YOU MUST SET THE CONTAINER THAT EACH SPECIFIC KIT IS FOUND IN! IT TREATS THIS CONTAINER LIKE GEMPOUCH.CONTAINER AND KEEPS CLOSED! *CAN BE SHARED WITH GEMPOUCH.CONTAINER!
     var REPAIR.KIT NULL
     var REPAIR.KIT.2 NULL
     var REPAIR.KIT.WEAPON NULL
     var REPAIR.KIT.ARMOR NULL
     var REPAIR.KIT.CONTAINER NULL
     var REPAIR.KIT.2.CONTAINER NULL
     var REPAIR.KIT.3.CONTAINER NULL
# CLIMBING/SWIMMING RUN (ON or OFF) - ATHLETICS TRAINING 
     var CLIMBING ON
## MAGIC CLIMBING ROPE (ON or OFF) - CHECK FOR MAGIC CLIMBING ROPE - USES THAT INSTEAD OF DEFAULT CLIMBING RUN
     var MAGIC.ROPE OFF
     var ROPE.NAME climbing rope
     var Rope.Container NULL
## WINDBOARD (ON or OFF) - TRAIN ATHLETICS WITH A WINDBOARD INSTEAD
     var WINDBOARD OFF
# COLLECTING - (ON or OFF) - OUTDOORSMANSHIP TRAINING - COLLECT ROCKS/COINS
     var COLLECTING ON
# BRAIDING - (ON or OFF) - TRAINS BRAIDING (ENGINEERING) - ONLY TRAINS TO ~70 RANKS!
     var BRAIDING ON
# RAVEN'S COURT SCHOLARSHIP STUDY (ON or OFF) - ONLY IN CROSSING !
     var RAVEN ON
# TEXTBOOK / COMPENDIUM? (ON or OFF) - TRAIN SCHOLARSHIP/FIRST AID W/ ANATOMY TEXTBOOK
     var TEXTBOOK OFF
# TEXTBOOK TYPE - Textbook or Compendium
     var TEXTBOOK.TYPE textbook
     var Textbook.Container cloak
# SKINNING/FA TRAINER - (ON or OFF) ONLY WORKS FOR THE MAGIC SKINNING / FA TRAINERS
## The ones with 105 uses per day or infinite ( https://elanthipedia.play.net/Item:Small_blue-belly_crocodile_with_prominently_stitched_seams )
     var SKINTRAINER OFF
     var SKINTRAIN.NOUN crocodile
     var SKINTRAIN.CONTAINER goldenweave belt
# EPISTEMIC JOURNAL - For Epistemic Journals ONLY - Writes to Journal every 24 hours
# Set JOURNAL.TYPE ( NULL to NOT USE ) - Set NOUN of item to use ( traveler's diary / explorer's log / soldier journal / etc)
     var JOURNAL.TYPE NULL
# DISARM BOXES? (USES DISARM SCRIPT - MAKE SURE YOU SET THE VARIABLES UP IN disarm-vars)
     var DISARM ON
# BURGLE RUN (ON or OFF) - BURGLE RUN USING THE BURGLE SCRIPT (BURGLE.PAWN ON will Pawn all Burgle items)
     var BURGLE ON
     var BURGLE.PAWN ON
# BURGLE DUMP (ON or OFF) - Burgle Dump ON will DUMP/TRASH any Burgle item that does not sell at pawn shop
     var BURGLE.DUMP ON
# STEALING RUN (ON or OFF) - Does STEALING Run with the Ultimate Stealing Script
     var STEAL OFF
# PERFORMANCE RUN (ON or OFF) - DEDICATED PERFORMANCE TRAINING RUN DURING TOWN RUN (Uses your Zill.Name variable to train)
     var PERFORMANCE ON
# MAGICAL RESEARCH TRAINING (ON or OFF) - DEDICATED MAGICAL RESEARCH TRAINING DURING END OF TOWN RUN - TAKES A BIT OF TIME! 
     var MAGICAL.RESEARCH OFF
# PRIMARY MAGICAL RESEARCH TYPE ( SET TO NULL TO CHOOSE AUTOMATICALLY BASED ON LEARNING )
# OPTIONS ARE: FUNDAMENTAL, STREAM, AUGMENTATION, UTILITY, WARDING, SORCERY, FIELD, SPELL
     var RESEARCH.TYPE NULL
# TEACHING? (ON or OFF) - If ON, will attempt to teach your other characters/people in the Friends variable
     var TEACH OFF
     var TEACH.SKILL hiding
     var TEACH.SKILL.2 evasion
## SUPPORT FOR MASTERCRAFT TRAINING
## IF YOU USE MASTERCRAFT - SET EACH SKILL ON THAT YOU WANT TO TRAIN
## *YOU MUST SET UP MASTERCRAFT - TOOLS ETC SEPARATELY
     var ALCHEMY OFF
     var ENGINEERING OFF
     var FORGING OFF
     var OUTFITTING OFF
     var ENCHANTING OFF
## VAULT SWAP (ON or OFF) - ON WILL TEMPORARILY SWAP YOUR 'var CONTAINER' FOR A SPECIAL BAG IN YOUR VAULT FOR MASTERCRAFT PURPOSES ONLY!
## AFTER MASTERCRAFT IS OVER, GOES BACK TO VAULT AND SWAPS BACK TO ORIGINAL BAG - PUTS YOUR CRAFTING BAG BACK IN THE VAULT!
## MAKE SURE YOU HAVE ENOUGH ROOM IN YOUR VAULT! THE SWAP CONTAINER SHOULD FIT ON THE SAME BODY SLOT AS THE BAG YOU ARE SWAPPING OUT!
     var VAULT.SWAP OFF
## VAULT CITY - SET THIS TO THE CITY NAME WHERE YOU HAVE YOUR VAULT - IF VAULT.SWAP IS ~ON~ IT WILL RUN TO THIS CITY FIRST
     var VAULT.CITY FC
## SET THE NAME OF YOUR CRAFTING BAG IN YOUR VAULT - MUST HAVE ~ALL YOUR CRAFTING TOOLS~ IN THIS BAG!!
## MAKE SURE TO BE SPECIFIC WITH YOUR CONTAINER VARIABLES SO THEY DONT GET MIXED UP! THIS CONTAINER SHOULD USE THE SAME BODY SLOT AS YOUR VAR CONTAINER!
     var CRAFTING.BAG dreamweave lootsack

# ALMANAC (ON or OFF) - USE ALMANACS (That trains random skill OR pick-a-skill every 10 minutes)
     var ALMANAC OFF
## ALMANAC VERB - if using the special encyclopedic almanac, MUST be set to 'encyclopedic almanac' to use the pick a skill function
     var ALMANAC.TYPE almanac
     var Almanac.Container goldenweave belt
## ALMANAC SKILLS to check/pick for encyclopedic almanac i.e. Sorcery|Forging|Engineering
## The default list has ALL skills listed - You can remove skills you don't want to boost
     var ALMANAC.LEARN Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor|Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing|Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow|Appraisal|Tactics|Performance|Enchanting|Forging|Engineering|Alchemy|Outfitting|Arcana
# LOCKPICK TRAINING ITEM? (Set to NULL to not use) - Must match EXACTLY with item name in hands (2 words only)
# For MAGIC LOCKPICK TRAINING ITEMS - * Assumes you use a WORN lockpick ring/case 
     var LOCKPICK.ITEM NULL
## SET A SECONDARY LOCKPICK ITEM HERE IF YOU HAVE A SECONDARY (OR SET TO NULL)
     var LOCKPICK.ITEM.2 NULL
## Lockpick.Container is where the MAGIC LOCKPICK ITEMS should be stored (NULL to try wear them)
     var Lockpick.Container NULL
# PILGRIM BADGES (ON or OFF) *CLERIC/PALADINS ONLY! - VISIT UNVISITED BADGE LOCATIONS - PRAY TO BADGE
     var PILGRIM ON
# POWERWALKING (ON or OFF) - FOR MAGIC USERS - DO A POWERWALK DURING TOWN RUN 
     var POWERWALK ON
## SCRIPT CHECK LOGIC - TURN SCRIPT CHECK LOGIC (ON OR OFF) - WARNING - THERE ~WILL~ BE FALSE POSITIVES!! UNAVOIDABLE!!
## IF IT DETECTS ANY GM SCRIPT CHECKS - WILL ~ATTEMPT~ TO AUTOMATICALLY HANDLE IT AND/OR RUN AWAY (Not Log Out)
     var SCRIPTCHECK OFF
## Setting NO.CONTACT to "ON" will log out for 5 minutes if someone tries to drag you or hold your hand (DEFAULT: OFF)
## WARNING! IT WILL ALSO ESCAPE COMBAT IF ANYONE TALKS IN YOUR COMBAT ROOM! INCLUDING CRITTERS! SO IT CAN FALSE POSITIVE ON TALKING CRITTERS
     var NO.CONTACT OFF
## LOG.ON.STUN (ON or OFF) Set to "ON" to log out if you are too hurt/stunned and are unsuccessful running away (DEFAULT: ON)
     var LOG.ON.STUN OFF
## LOG.ON.DEATH (ON or OFF) Set OFF to stay logged in even if you die (DEFAULT: ON)
     var LOG.ON.DEATH ON
## TOTAL TIME ONLINE - MAX TIME TO STAY ONLINE (IN SECONDS) After this time has passed will idle and logout to avoid AFK checks (Set to 0 to always stay online)
     var ONLINE.TIME 0
## FANG COVE? (ON or OFF) - Do you want to go to FANG COVE for healing/town stuff (Only works in Prime if Premium)
     var FANGCOVE ON
## USE PREMIUM JUMP JEWELRY? (ON or OFF) - Will use Premie JJ to teleport to Fang Cove for healing/bundles/gems/etc
     var JumpJewelry OFF
     var JewerlyVerb ironwood ring
## PERSONAL EMPATH HEAL (Put EMPATH'S NAME HERE to use. NULL to turn off) - If you use a personal empath to heal
## Setting this to anything OTHER than NULL/OFF will turn OFF the triggers to nod to someone when they ask if you want healing
     var PocketEmpath NULL
## EmpathRoom is ROOM NUMBER where you can find your PERSONAL EMPATH. (MUST be in the CITY you go to for TOWN RUN)
     var EmpathRoom NULL
## BankBot - Used for F2P characters to tip a bankbot any remaining coin at end of town run
## Set Tipping to 1, Bankbot name and Tiproom = room number bankbot is at, in your home town
     var Tipping 0
     var BankBot morph
     var TipRoom 753
## CLAN ITEM (TF USE ONLY)
     var CLAN OFF
     var CLAN.ITEM sphere
## LIGHTER ITEM (For using a Lighter to start fires instead of flint and blade)
## USAGE - var LIGHTER (ON or OFF) - Lighter.Name = verb of the item
     var Lighter OFF
     var Lighter.Name world dragon
## CUSTOM TOWN SCRIPT - (Must be the exact name of the script (IGNORE .CMD - JUST USE NAME)
## Set your own script to run during the town run
## YOU MUST HAVE A PARSE AT THE END OF YOUR SCRIPT: put #parse SCRIPT FINISHED!
## IF YOU DO NOT HAVE THIS PARSE THEN UBER WILL NOT RECOVER PROPERLY!
     var Custom.Script NULL
## RPA BESTOW? (ON or OFF) - MUST BE IN THE PIRP SYSTEM TO BESTOW RPAS! https://elanthipedia.play.net/RPA_command
     var RPA ON
## LIST THE PEOPLE YOU WANT TO BESTOW RP POINTS TO BELOW IN AN ARRAY!!
## ie. var PirpList Name1|Name2|Name3|Name4|Name5
     var PirpList Raidboss|Healbitch|Illuminati|Breckin|Ryhs|Rhoat|Shepherd|Kohen|Worril|Odium|Morvetan|Orcher|Amroth|Mephos|Yew|Lorak|Wryll|Rellie|Beerfest|Bayndayd|Xana|Crivic|Blaakwulf|Wong|Findal|Regnar|Lakshmi|Vivica|Phucker|Jimdickens|Kiroq|Bleed|Rutinger|Nekhet|Leecya|Arazenya|Kithkani


######################################################################################################################
######################################################################################################################
# GENERAL MAGIC VARS - ALL MAGIC USERS MUST SET THESE VARIABLES
# GENERIC MAGIC VARIABLES FOR ALL MAGIC USERS
######################################################################################################################
######################################################################################################################
# SMART MANA FOR SPELLS? AUTO-DETERMINES OPTIMAL MANA FOR SPELLS AFTER A NEW SETUP (OR EVERY ~2 WEEKS IN GAME)
# SMART MANA WILL AUTOMATICALLY ADJUST YOUR MANA LEVELS UP AND DOWN AS YOU GAIN IN RANKS FOR OPTIMAL LEARNING
# (ON or OFF) - RECOMMEND LEAVING ON - SETTING THIS ON WILL OVERRIDE ALL MANUAL MANA SETTINGS 
# TURNING SMART.SPELLS OFF MEANS YOU WILL ~HAVE~ TO SET MANA MANALLY AND DO MUCH MORE FINE TUNING 
     var SMART.SPELLS ON
# CAMB HEAVY (ON or OFF) (OFF by default) - ON WILL MAKE SMART MANA PUT MORE MANA INTO CAMBRINTH THEN MAIN PREP
     var Camb.Heavy OFF
# MAGIC RATE - (NULL is RECOMMENDED) Set the MIN Magic Rate to reach before switching to a different spell school. 
# SETTING TO A NUMBER WILL SPAM THE SAME SPELL UNTIL YOU REACH DESIRED LEARNINGRATE. Set to NULL to cycle through spells normally 
     var Magic.Rate NULL
# MAGIC SNAP CAST. Set to 0 for Full Aim. Set to desired number of seconds to pause for that many seconds before casting
     var MAGIC.SNAP 0
# CAMBRINTH CHARGES - Number of Times to Charge your cambrinth (or harness if Cambrinth is NULL) each time!
# RECOMMEND LEAVING THIS AT 1 - 2 AT MAX - THIS VARIABLE TIES INTO HOW SMART MANA CALCULATES MANA
     var CambrinthCharge 1
# OFFENSIVE SPELL MANA AMOUNTS - Set BASE MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Mana 15
     var Debilitation.Mana 15
     var Utility.Mana 15
     var Augmentation.Mana 15
     var Warding.Mana 15
     var Sorcery.Mana 15
# OFFENSIVE SPELL CAMBRINTH AMOUNTS - Set CAMBRINTH MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Camb 20
     var Debilitation.Camb 20
     var Utility.Camb 20
     var Augmentation.Camb 20
     var Warding.Camb 20
     var Sorcery.Camb 20
# USE HARNESS / CAMBRINTH FOR OFFENSE SPELLS (ON or OFF)
# TURN OFF TO SKIP HARNESS/CAMBRINTH COMPLETELY
     var Use.Cambrinth ON
# USE HARNESS / CAMBRINTH FOR BUFFS (ON or OFF)
     var Use.Cambrinth.Buffs ON
# CAMBRINTH ITEM for charging BUFFS/SPELLS (Set to NULL to not use)
     var Cambrinth cambrinth ring
     var Cyclic.Cambrinth NULL
# CAMBRINTH MANA AMOUNT FOR SPELLS - Amount of Mana to put in CAMBRINTH for Magic Tattoos / Harness for Cyclics when No Raw Chanelling feat
     var CambrinthMana 5
# CAMBRINTH MANA FOR Cylics - Amount of Mana to put in cambrinth for Cylics ONLY
     var CyclicCharge 10
# SLOW.CAST (ON or OFF) - OFF IS DEFAULT - Slow Cast ON will cast offensive spells about half as often as normal
# SLOW.CAST OFF (Default) will spam spells in between attacks as much as possible (mana permitting)
     var Slow.Cast OFF
# NO CAMBRINTH USE DURING TM / DEBIL SPELLS (ON or OFF)
# IF YOU SET THIS ON, SCRIPT WILL SKIP USING A CAMBRINTH FOR TM OR DEBIL SPELLS
     var NoCambTM OFF
# POWER PERCEIVE (Perceives every ~5 minutes)
     var POWERP ON

# RITUAL FOCUS ITEM (REQUIRED for RITUAL SPELLS - set Ritual to NULL to not use)
# Ritual.Container can be set to any Container - or set to NULL to wear it first
     var Ritual staff
     var Ritual.Container %Container
# SORCERY RITUAL FOCUS (Separate ritual focus for Sorcery IF NEEDED)
     var Sorcery.Focus NULL
# TM DAMAGE FOCUS ITEM - IF SET WILL USE TM FOCI MODE EVERY ~HOUR (set to NULL to not use)
     var TMFoci NULL
     var TMFoci.Container %Container
# USE SYMBIOSIS ON ATTACK SPELLS? (ON or OFF)
# ONLY USEFUL AT ~HIGHER RANKS~ OF MAGIC - ~NOT~ FOR NOOBS!!
     var Target.Symbiosis OFF
     var Utility.Symbiosis OFF
     var Augmentation.Symbiosis OFF
     var Warding.Symbiosis OFF
     var Sorcery.Symbiosis OFF
     var Debilitation.Symbiosis OFF
# USE SYMBIOSIS ON BUFFS? (ON or OFF) - FOR HIGHER RANKS ONLY
     var Symbiosis.Buffs OFF

# MAGIC TATTOO (Set to NULL or the FULL SPELLTIMER NAME i.e - IronConstitution / MajorPhysicalProtection) - Will use a Magic Tattoo every ~5-10 minutes
# FULL SPELLTIMER NAME MUST ALSO BE SET IN YOUR BUFFS OR SPELLS - USE SORCERY.CAMB (ABOVE) TO SET CAMB MANA FOR MAGIC TATTOO
     var Magic.Tattoo NULL
# MAGIC TATTOO CAMBRINTH/HARNESS MANA - Set the amount of Camb Mana you want to boost your tattoo with
     var Tattoo.Camb 30
# HEROIC TATTOO (ON or OFF) - ONLY FOR HEROIC TATTOOS! (Normal tattoos use Magic.Tattoo)
# VERY BASIC - WILL JUST INVOKE TATTOO / CAST ON A 1 HOUR COOLDOWN
     var Runic.Tattoo OFF

#########################################################################################
# GUILD SPECIFIC OPTIONS BELOW
# SET THE GUILD OPTIONS FOR THE CURRENT CHARACTER YOU ARE EDITING 
########################################################################################
########################################################################################
# NECROMANCER SETTINGS
# SET NECRO.HEAL ON TO USE NECRO HEALING - (Consume Flesh / Devour depending on skills)
     var Necro.Heal ON
## NECROHEAL CREATURE (SET A ~LOW LEVEL~ CREATURE TO KILL ~ONLY FOR DEDICATED HEALING PURPOSES~)
## IDEALLY SET THIS TO A CREATURE NEAR YOUR "HOME CITY" SO YOU DON'T HAVE FAR TO RUN FOR HEALING
     var NecroHeal.Critter GOBLIN SHARD
# SET NECRORITUAL ON TO PERFORM RITUALS IN COMBAT (Preserve/Harvest/Dissect/Butchery/etc)
     var NecroRitual ON
## FORSAKEN? (ON or OFF) - IS NECRO FORSAKEN?? IF ON - WILL AVOID TOWNS/SERVICES AS MUCH AS POSSIBLE!! 
## *Not fully tested/implemented-may not be perfect- but should avoid towns. May have issues REPAIRING ARMOR Unless USING FC* 
     var Forsaken OFF
## RISEN? (ON or OFF) - CREATES RISEN MINIONS IN COMBAT (CAREFUL - GENERATES DIVINE OUTRAGE!) 
     var Risen OFF
## QUICKEN EARTH - ON TO CHECK FOR AND SUMMON DIRT CONSTRUCTS EVERY ~5 MINUTES
     var QuickenEarth OFF
     var QE.Mana 10
     var CFB.Mana 10
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Necro.Cyclics |USOL|ROC
     var Necro.Cyclics.mana |5|4
## Necromancer ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Necro.Target.Spell ACS|VS
     var Necro.Debilitation.Spell HP
     var Necro.Utility.Spell GAF
     var Necro.Augmentation.Spell Obfuscation
     var Necro.Warding.Spell MAF
     var Necro.Sorcery.Spell MPP
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Necro.Buffs IVM|REI|ROC|CH
########################################################################################
########################################################################################
### BARD SETTINGS
# Cyclic Spell Setup
# YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST be set for each individual cyclics!
# YOU MUST SET cyclic.mana in an array to match!! 6 cyclic - 6 mana numbers
  # SET TO NULL/OFF IF NOT TRAINING CYCLICS - THERE ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Bard.Cyclics |AEWO|HODI|FAE|CARE|PYRE|GJ
     var Bard.Cyclics.mana |5|4|5|5|5|6
## Bard ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Bard.Target.Spell BOS
     var Bard.Debilitation.Spell DMRS
     var Bard.Utility.Spell AOT
     var Bard.Augmentation.Spell WILL
     var Bard.Warding.Spell REPR
     var Bard.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Bard.Buffs |MIS|HARM|RAGE|REPR
## BARD SCREAMS? ( Screams in combat every ~60 seconds) (ON or OFF)
     var Bard.Scream ON
## BARD WHISTLE (ON or OFF)
     var Bard.Whistle ON
########################################################################################
########################################################################################
# WARRIOR MAGE SETTINGS
## USE SUMMONING? (Will train Summoning every ~3 minutes)
     var Summoning ON
## ELEMENTAL ALIGNMENT - Element can be FIRE, WATER, ELECTRIC, AETHER, AIR or EARTH
     var element FIRE
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var WM.Cyclics |EE|AC|FR
     var WM.Cyclics.mana |5|4|5
## Warrior Mage ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var WM.Target.Spell FS|FB
     var WM.Debilitation.Spell EE|ALA
     var WM.Utility.Spell ETF
     var WM.Augmentation.Spell YS
     var WM.Warding.Spell ES
     var WM.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var WM.Buffs Ease|TW|SW|Zephyr|SUF|Ignite
## ~WEAPON SUMMONING LOGIC~
# SUMMON WEAPONS (ON or OFF)
     var SummonWeapons OFF
# SUMMON ELEMENT - Must set your WEAPON SUMMON ELEMENT ( Stone/Earth (Default) - Fiery/Fire (Fiery Infusions) - Icy/Ice (Icy Infusions) - or Electric (Shocking Infusions)
     var SummonElement FIRE
# ELEMENTAL CHARGE SPELL Must be *a spammable spell* of your chosen element. Will prep at minimum mana - if you want to prep at something else put a number after
     var ChargeSpell MOA
# SUMMON WEAPON TEMPLATE (0 or 1) - 0 = Default weapon, 1 = Turn weapon to other template
     var SummonTemplate 1
# SUMMON WEIGHT/DENSITY (0 - 2 to set weapon density - Must know QUICK INFUSIONS spell)
# 0 = Lightest Weight, 1 = DEFAULT, 2 = Heavier Weight
     var SummonWeight 1
# Set weapons you want to summon (ON or OFF) - Setting to ON will override your default weapon variables at top of script
     var SummonHT OFF
     var SummonLT OFF
     var SummonSE OFF
     var SummonLE OFF
     var SummonTHE ON
     var SummonSB OFF
     var SummonLB OFF
     var SummonTHB ON
     var SummonPolearms ON
     var SummonStaves ON
## INGOT (ON or OFF) Bump up tier of weapons - Must know REINFORCED INFUSIONS spell and have a rare metal ingot
     var WMIngot OFF
## SET INGOT STORAGE CONTAINER (Set to either a sigil ring or a specific container)
     var Ingot.Container sigil ring
########################################################################################
########################################################################################
# MOON MAGE SETTINGS
## MOON MAGE ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var MM.Target.Spell DO|Burn
     var MM.Debilitation.Spell Dazzle|MB
     var MM.Utility.Spell PG
     var MM.Augmentation.Spell AUS|ART
     var MM.Warding.Spell PSY
     var MM.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var MM.Cyclics |SHW
     var MM.Cyclics.mana |5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var MM.Buffs CV|Shadows|TS|COL|Shadowling|PSY
## OBSERVATION TRAINING - PREDICT TOOL IS ONLY USED FOR PREDICTION OUTSIDE OF COMBAT! TOOL MUST ALREADY BE BONDED!!
## Predict.tool can be - BONES, CHART, MIRROR, PRISM, BOWL, DECK or NULL to turn off.
     var Predict.Tool DECK
## Read The Ripples (RTR ON or OFF) - Will Perform a RTR routine (observe spam) during town run **MUST HAVE TELESCOPE!
     var RTR OFF
## Where you store your telescope * If any - defaults to your main Container if not set
     var Telescope.Container NULL
## OBSERVE IN COMBAT (ON or OFF) - If ON will do Astrology observations in Combat every couple minutes
     var Combat.Observe ON
########################################################################################
########################################################################################
# CLERIC SETTINGS
## CLERIC ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Cleric.Target.Spell FOU|FF
     var Cleric.Debilitation.Spell PS|Malediction
     var Cleric.Utility.Spell DR|BLESS
     var Cleric.Augmentation.Spell Benediction
     var Cleric.Warding.Spell MPP|SL
     var Cleric.Sorcery.Spell dazzle
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Cleric.Cyclics |HYH|GHS|REV|SA
     var Cleric.Cyclics.mana |15|15|15|15
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Cleric.Buffs OM|Auspice|SOS|POM|MAPP|PFE|YS
## ARE YOU USING OM ORB? (MUST BE SET IN BUFFS ABOVE!) SET MANA AMOUNT TO CAST OM / CHARGE ORB WITH EACH TIME
     var OM.Mana 25
## TYPE OF ORB YOU USE FOR OM - OPTIONS:( FIRULF, MERAUD or KEREN)
     var FavorOrb meraud
## BUFF SPELLS YOU WANT TO ALWAYS KEEP ACTIVE IN YOUR OM ORB (You can just set this to var OM.Buffs %Cleric.Buffs ) 
     var OM.Buffs PFE|POM|MPP|MAPP|SAP|SOL
## CLERIC RITUALS? (Perform CLERIC RITUALS during Town Runs/in Combat)
     var ClericRituals ON
### Prayer Mat - Set to NULL to not use or the noun of the mat/rug
     var PrayerMat mat
## HOLY WATER VESSEL - Set your container you use to store/collect holy water
     var HolyWater chalice
### COMBAT COMMUNES - (ON or OFF) - Set the COMMUNES you wish to perform while IN COMBAT 
     var Commune.Meraud ON
     var Commune.Truffenyi ON
     var Commune.Tamsine OFF
### FLINT KNIFE - Set a DEDICATED WEAPON/KNIFE to STRIKE FLINT for MAKING FIRE for RITUALS
### MUST be a METAL weapon you can use to STRIKE FLINT for fire
     var FlintKnife knife
## CLERIC ALIGNMENT GOD - Set a God to align to ( https://elanthipedia.play.net/Cleric_3.0#Alignment )
## CHOOSE A LIGHT/DARK/NEUTRAL GOD ONLY - Each Type will buff 2 magic skills and penalize 3 others
## BY DEFAULT SCRIPT WILL USE ~CHADATRU~ (Which buffs AUG/WARDING - Generally the most lacking magics for Clerics)
## Set a different god if you wish to buff other magics but BE CAREFUL!!! 
     var Alignment.God CHADATRU
########################################################################################
########################################################################################
# RANGER SETTINGS
## RANGER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Ranger.Target.Spell DEVI|STAMPEDE
     var Ranger.Debilitation.Spell DEADFALL|SWARM
     var Ranger.Utility.Spell EM|BLEND
     var Ranger.Augmentation.Spell SOTT
     var Ranger.Warding.Spell EY
     var Ranger.Sorcery.Spell ECRY
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Ranger.Cyclics |CS|BES
     var Ranger.Cyclics.mana |5|5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Ranger.Buffs Athleticism|STW|EY|WOTP|OATH|ETC|Bloodthorns
########################################################################################
########################################################################################
## PALADIN SETTINGS
## PALADIN ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Paladin.Target.Spell FST
     var Paladin.Debilitation.Spell Shatter
     var Paladin.Utility.Spell AS
     var Paladin.Augmentation.Spell RW
     var Paladin.Warding.Spell SP
     var Paladin.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Paladin.Cyclics |HOW|TR
     var Paladin.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Paladin.Buffs AA|Courage|HES|RW|SR|Clarity
## SET your HOLY WEAPON here (NULL to ignore) - Holy Weapon Name
     var HolyWeapon NULL
## Holy Icon (NULL TO NOT USE/IGNORE) - Set to the noun of your icon
     var HolyIcon NULL
########################################################################################
########################################################################################
## TRADER SETTINGS
## TRADER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Trader.Target.Spell CRD|STARCRASH
     var Trader.Debilitation.Spell FLUORESCE|AVA
     var Trader.Utility.Spell NOUMENA
     var Trader.Augmentation.Spell BLUR
     var Trader.Warding.Spell IR
     var Trader.Sorcery.Spell MPP
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Trader.Cyclics |ARS|SOV
     var Trader.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Trader.Buffs |TRC|Blur|LGV|NONCHALANCE
########################################################################################
########################################################################################
# EMPATH SETTINGS
## EMPATH ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Empath.Target.Spell PARALYSIS
     var Empath.Debilitation.Spell LETHARGY|NB
     var Empath.Utility.Spell GS|HEAL
     var Empath.Augmentation.Spell REFRESH
     var Empath.Warding.Spell IC|POP
     var Empath.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Empath.Cyclics |AD|REGEN
     var Empath.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Empath.Buffs  |AGS|BS|IC|GOL|MEF|TRANQUILITY
## GAURDIAN SPIRIT? (ON or OFF) - ON will keep up Guardian Spirit while in Combat
     var Guardian.Spirit ON
## CUSTOM GUARDIAN SPIRIT (ON or OFF) - If ON - will "cast custom" instead of casting normal
     var Guardian.Custom OFF
## ATTACK CONSTRUCTS ONLY? (ON or OFF) - ON will ONLY attack constructs (unless using Absolution vs unded). OFF will attack everything
## WARNING - SETTING TO OFF WILL CAUSE EMPATHIC SHOCK!!!!
     var Construct.Only ON
## USE MANIPULATE FRIENDSHIP (ON or OFF) - ON will attempt to manipulate non-construct creatures
     var Manipulate ON
## ESCAPE COMBAT WHEN EMPATHY REACHES 0? (ON or OFF) - If Empathy LearningRate reaches 0 during combat, will go on town run
     var Empathy.Escape OFF
## EMPATH PERCEIVE HEALTH WALKS (ON or OFF) - If ON - Will go on perceive health walks around town during town run
     var Empath.Walk ON
## EMPATH UNITY LINK (ON or OFF) - FOR EMPATH HEALBOT MODE - DO YOU KNOW UNITY LINK? MUST BE 70+ CIRCLE AND 380+ EMPATHY
     var Unity ON
## TEACH CLASS (FOR HEALBOT MODE) - SET THE SKILL OF THE CLASS YOU WANT TO TEACH
     var TeachClass TM
## BLACKLIST! (FOR HEALBOT MODE) - SET THE NAMES OF THE PEOPLE TO BLACKLIST FROM HEALING SERVICES!
## MUST BE IN AN ARRAY - var Blacklist Bob|Frank|Dave
     var Blacklist NULL
########################################################################################
########################################################################################
# THIEF SETTINGS
# AMBUSH TRAINING (Use AMBUSH MOVES in COMBAT - STUN/CLOUT/SLASH)
     var Ambush ON
# SELECT KHRI TO USE (Set as many ON / OFF as you want )
# IT WILL ONLY USE AS MANY KHRI AS YOU CAN HANDLE AT ONCE, PRIORITIZING THE MOST IMPORTANT DEPENDING ON SCENARIO)
     var khriSAGACITY ON
     var khriSTEADY ON
     var khriSTRIKE ON
     var khriFOCUS ON
     var khriELUSION ON
     var khriENDURE ON
     var khriAVOIDANCE ON
     var khriADAPTATION ON
     var khriPROWESS ON
     var khriHASTEN ON
     var khriHARRIER OFF
     var khriSERENITY OFF
     var khriSIGHT ON
     var khriFLIGHT ON
     var khriCALM OFF
     var khriGUILE OFF
     var khriDARKEN ON
     var khriDAMPEN ON
     var khriSHADOWSTEP ON
     var khriELIMINATE OFF
     var khriTERRIFY OFF
     var khriFRIGHT OFF
     var khriINTIMIDATE OFF
     var khriPLUNDER ON
     var khriSAFE OFF
     var khriEVANESCENCE OFF
     var khriCREDENCE OFF
     var khriCUNNING OFF
# USE KHRI DURING TOWN RUN? (ON or OFF) - Turn OFF to Skip using Khri during town run - for Sanowret use
     var Khri.Town ON
########################################################################################
########################################################################################
# BARBARIAN SETTINGS
# USE WHIRLWIND?
     var Whirlwind ON
# USE DUAL WIELD? (ON or OFF) - Dual wield requires 450+ in the weapon
     var DualWield ON
# EXPERTISE COMBOS? (ON or OFF) - Does Barb Expertise Combos (and helps generate IR)
     var Expertise ON
# Set which Forms you want to use (ON or OFF)
# Auto-turns some forms on/off depending on what skills you are training
     var barbEagle ON
     var barbBadger ON
     var barbPanther ON
     var barbPiranha ON
     var barbDragon ON
     var barbMonkey ON
     var barbTurtle OFF
     var barbOwl OFF
     var barbBear ON
     var barbBuffalo OFF
     var barbPython ON
     var barbSwan ON
     var barbToad OFF
     var barbWolverine OFF
# ROARS to use (will only use one)
     var roarEmbrace OFF
     var roarEverild ON
     var roarWail OFF
     var roarScreech OFF
     var roarShriek OFF
     var roarAnger ON
     var roarKuniyo ON
# BERSERKS to use
     var zerkHurricane OFF
     var zerkBlizzard ON
     var zerkFamine ON
     var zerkAvalanche ON
     var zerkTsunami OFF
     var zerkWildfire OFF
     var zerkEarthquake OFF
     var zerkTornado OFF
     var zerkFlashflood ON
     var zerkLandslide ON
     var zerkCyclone OFF
     var zerkDrought OFF
# MEDITATIONS to use (ON or OFF) - WILL ONLY WORK FOR HIGHER LEVEL BARBS
     var medContemplation ON
     var medTenacity ON
     var medSerenity ON
### END OF CHARACTER 14 VARIABLES
### STOP EDITING HERE ~~~ END OF CHARACTER 14 VARIABLES ##########
####################################################################################
####################################################################################
echo **** LOADED %CHARACTER14 VARIABLES
goto END.OF.VARS
}

CHARACTER15:
#########################################################################################################
#########################################################################################################
## CHARACTER 15 VARIABLES
## *CHARACTER15 VARIABLES BLOCK BELOW
if matchre("$charactername", "(?i)%CHARACTER15") then
#########################################################################################################
{
### GENIE LAYOUT - SET THE GENIE LAYOUT YOU WANT THIS CHARACTER TO USE - MUST EXACTLY MATCH THE LAYOUT NAME IN GENIE!
### Example: var GENIE.LAYOUT Shroom.layout - TO SAVE A LAYOUT IN GENIE SET IT UP HOW YOU LIKE AND CLICK LAYOUT > SAVE LAYOUT AS > NAME IT HOW YOU WANT
### IF YOU LEAVE THIS SET TO NULL THEN IT WILL JUST USE THE DEFAULT LAYOUT THAT IS SET (default.layout) 
     var GENIE.LAYOUT default.layout
### HEAL.CITY ( NULL or CITY NAME (CROSS/LETH/HIB/RIVER/THEREN/SHARD) - Will run to this town for HEALING no matter where you are
     var HEAL.CITY NULL
### HOME CITY (NULL or CITY NAME) - Will attempt to return to your home city after a heal run (if not already in that city) ONLY SUPPORTS MAINLAND CITIES
     var HOME.CITY NULL
### SAFE ROOM (set to NULL to ignore) ~MUST~ TIE INTO HOME.CITY ABOVE! THE ROOM ID YOU WANT TO SCRIPT IN DURING TOWN RUN - MUST BE VALID ROOMID IN YOUR HOME CITY!
### WARNING!: IF YOU DO NOT SET BOTH HOME.CITY AND SAFE.ROOM CORRECTLY YOU ~WILL~ RUN INTO ERRORS - LEAVE BOTH AT NULL TO LET SCRIPT LOGIC HANDLE IT
     var SAFE.ROOM NULL
### AUTO-PROGRESS? (ON or OFF) - ON WILL CHOOSE YOUR COMBAT CREATURE AUTOMATICALLY BASED ON YOUR RANKS - YOU DO NOT NEED TO SET IT! OVERRIDES COMBAT.CRITTER VARIABLE
     var AUTO.PROGRESS ON
### AUTO-PROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var PROGRESS.TYPE NORMAL
### COMBAT CRITTER - ONLY USED WITH AUTO.PROGRESS OFF - MUST BE A VALID CREATURE NAME! USE FULL NAME OR 1/2/3 TO SPECIFY TIERS ie SNOW GOBLIN 2
     var COMBAT.CRITTER GOBLIN
### ALTERNATE CRITTER - PICK A ALTERNATE CRITTER TO HUNT - IF YOUR MAIN HUNTING GROUND IS FULL!
     var ALTERNATE.CRITTER MUSK HOG
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var PRIORITY.ROOMS NULL
### XP TRACKER RESET ON SCRIPT STARTUP - (ON or OFF) - RESETS EXP TRACKER TRACKING TIME ON INITIAL LAUNCH OF SCRIPT ONLY
     var XP.RESET ON

### GUI OPTIONS ARE RECOMMENDED TO LEAVE OFF COMPLETELY - THESE OPTIONS ONLY HERE BY SPECIAL REQUEST - WILL BE ANNOYING IF YOU TURN IT ON
### CRITTER.GUI (ON or OFF) - OFF by default - CREATES CRITTER GUI WINDOW - MUST MANUALLY CLICK TO CHOOSE YOUR COMBAT CRITTER BASED ON PROVINCE / SKILL / PREFERENCE
     var CRITTER.GUI OFF
### WEAPON.GUI (ON or OFF) - OFF by default - CREATES WEAPON GUI WINDOW - CHOOSE YOUR WEAPONS FOR THAT RUN *IF YOU HAVE AN ARRAY OF WEAPONS SET IN A SINGLE WEAPON VARIABLE
     var WEAPON.GUI OFF

# FRIEND LIST (People you will hunt with) Put your friends names in place of these. Ex. Bob|Fred|George
# Can just put your name in here or make it blank and it will only find empty rooms.
     var FRIENDS %ALLCHARACTERS|%GLOBALFRIENDS

##############################################################
# WEAPON / CONTAINERS / AMMO SETTINGS - BE VERY SPECIFIC! 
##############################################################

# CONTAINERS - MANDATORY! - SET YOUR MAIN ~3-4~ LARGEST CONTAINERS!
# BE SPECIFIC WITH CONTAINER NAMES - USE 2 WORDS WHENEVER POSSIBLE!
     var Container backpack
     var Container.Boxes haversack
     var Container.Backup duffel bag
     var Container.Crafting carryall
# SHEATH CONTAINER IS FOR SUPER LONG ITEMS - CAN BE ANY LARGE CONTAINER - NOT NECCESARY TO SET 
     var Container.Sheath NULL
# AMMO CONTAINER FOR STORING AMMO - ARROWS/BOLTS/ROCKS - BACKUP CONTAINER IS "OVERFLOW" FOR EXTRA AMMO
     var Container.Ammo quiver
     var Container.Ammo.Backup NULL
## CONTAINER.GEMPOUCH - VERY IMPORTANT! - ~MUST BE A SEPARATE CONTAINER~ FROM OTHER BAGS! SMALL/MEDIUM-SIZE CONTAINER IS FINE
## SPECIAL CONTAINER! SCRIPT WILL KEEP THIS CLOSED AT ALL TIMES AND ~ONLY USE IT FOR STORING FULL GEM POUCHES!~
## CONTAINER.GEMPOUCH MUST BE A ~CLOSABLE~ CONTAINER TO STORE ~FULL~ GEM POUCHES IN 
## AGAIN - DO NOT SHARE THIS CONTAINER WITH ~ANY OTHER CONTAINERS~ (except Repair Pouch Container) 
     var Container.GemPouch thigh pouch
# Container.EmptyPouch is for storing EMPTY GEM POUCHES (This can be ANY container EXCEPT for Container.GemPouch )
     var Container.EmptyPouch backpack
# DIRT CONTAINER - For storing dirt for various use (ONLY used by Thieves/Clerics/Necros)
     var Container.Dirt backpack
## MISC SHEATH OPTIONS (Storing specific weapons in specific containers - toolstraps/bandoliers/harnesses etc) - SET TO NULL/OFF TO NOT USE
## SET THE SHEATH NAME UNDER SHEATH.1 - SET THE WEAPONS YOU WANT TO USE ON EACH SHEATH UNDERNEATH IN AN ARRAY ex:
## var Sheath.1 toolbelt
## var Sheath.1.Weapons sabre|axe|broadsword
     var Sheath.1 NULL
     var Sheath.1.Weapons machete|crossbow|club|flail|slingshot|assassin's blade|steppe bow|katana|nightstick|thrusting blade|shortbow|mace|ngalio|sling|maul|quarterstaff|zweihander|spear|flamberge|mirror ava|throwing (mallet|hammer|club)
     var Sheath.2 NULL
     var Sheath.2.Weapons stonebow|slingshot|blowgun|boomerang
     var Sheath.3 NULL
     var Sheath.3.Weapons mirror blade
     var Sheath.4 NULL
     var Sheath.4.Weapons mirror knife
     var Sheath.5 NULL
     var Sheath.5.Weapons throwing blade|icicles|icicle
     var Sheath.6 NULL
     var Sheath.6.Weapons kertig dart
     
## WEAR WEAPONS (Set an array of weapons/shields you want the script to try and wear first before stowing)
     var Wear.Weapons NULL

## SMART.WEAPONS - ON TO TRAIN WEAPONS FROM LOWEST SKILL TO HIGHEST. "OFF" WILL GO IN A LINEAR ORDER (DEFAULT: ON)
## ON WILL DYNAMICALLY TRAIN TO ALWAYS MAKE SURE THE LOWEST SKILLED WEAPON IS TRAINED FIRST 
     var SMART.WEAPONS ON
     
## WEAPON SETTINGS - BE VERY SPECIFIC SETTING WEAPONS ! USE TWO WORDS WHENEVER POSSIBLE!
## SET ALL YOUR WEAPONS BELOW - MUST ~EXACTLY MATCH THE ITEM DESCRIPTION WHEN IN HANDS~! (GLANCE at it in your hands to get correct description) 
## BE SPECIFIC WHEN SETTING WEAPONS!! USE 2 WORDS WHEN POSSIBLE! TO TURN A WEAPON SKILL ~OFF~ SET IT TO - NULL
     var SEWEAPON assassin's blade
     var LEWEAPON damaris falchion
     var THEWEAPON zweihander
     var SBWEAPON damaris bola
     var LBWEAPON horseman's flail
     var THBWEAPON damaris akabo
     var STAVES damaris quarterstaff
     var POLEARMS damaris pike
     var RANGED.BOW lirisan shortbow
     var RANGED.CROSSBOW cloudbark crossbow
     var RANGED.SLING damaris sling
     var LTWEAPON icicles
     var HTWEAPON damaris mallet
# MAIN OFFHAND WEAPON TRAINING - MELEE ONLY (MUST BE A LIGHT/MEDIUM WEAPON - HEAVY or 2HANDED WEAPONS WONT WORK!!)
     var OHWEAPON club
# ALTERNATE OFFHAND WEAPONS (For Backtraining/Dual Training weapons while training other Weapons)
# ~MUST~ BE LIGHT/MEDIUM WEIGHT WEAPON! CANNOT USE HEAVY or 2Handed Weapons! (Unless Barb) (SET TO NULL/OFF TO NOT USE)
     var ALTWEAPON1 club
     var ALTWEAPON2 bola
     var ALTWEAPON3 NULL
## BRAWLWEAPON (DEFAULT: $charactername - Set to NULL to skip brawling)
     var BRAWLWEAPON $charactername
     #var BRAWLWEAPON $charactername
## Backstab/Ambush Weapon (Thief Only)
     var BSWEAPON mirror blade

# AMMO SETTINGS - DO NOT REMOVE THE { } BRACKETS!!!
     if (!$AMMOSWAP) then
{
     var XbowAmmo crossbow bolt
     var BowAmmo arrow
     var SlingAmmo stone shard
}

## ARMOR CHECK (ON or OFF) - Turn this OFF if you want the script to SKIP checking your armor at the beginning
## If ON - at the beginning, script will remove any armor/fluff you are wearing, and then put on all the armor you have set below. This ensures you have the correct armor on.
     var ARMOR.CHECK ON
## SET YOUR SHIELD - ABSOLUTELY 100% MANDATORY! RECOMMEND AN ARM-WORN SHIELD
     var MyShield diamondwood shield
## ARM WORN SHIELD? (ON OR OFF) - I RECOMMEND ALWAYS USING AN ARM WORN / SMALL SHIELD - MAKES LIFE MUCH EASIER
     var ArmWorn ON
## MAIN ARMOR TO CHECK - PRIMARY COMBAT (Set to NULL to IGNORE a slot)
## YOU MUST SET ALL YOUR ARMOR BELOW - IT DOESN'T MATTER WHICH ARMOR SLOT YOU USE - THE SCRIPT DOESN'T CARE
     var CHEST.ARMOR khiynit robe
     var FACE.ARMOR NULL
     var HEAD.ARMOR leather cowl
     var ABDOMEN.ARMOR NULL
     var BACK.ARMOR NULL
     var ARM.ARMOR assassin's sleeves
     var HAND.ARMOR NULL
     var LEG.ARMOR NULL
     var KNUCKLE telothian knuckle
     var PARRYSTICK parry stick

## PRIORITY WEAPONS - WEAPON SKILLS TO KEEP MOVING ~ALWAYS~ - PRIORITIZE THESE WEAPON SKILLS OVER ALL OTHERS IF THEY ~EVER~ DROP TO 0/34
## MUST BE SET IN AN ARRAY - THE EXACT SAME AS GENIE EXP VARIABLE FORMAT ie: var Priority.Weapons Medium_Edged|Twohanded_Edged
## WARNING!! DO NOT SET PRIORITY WEAPONS UNLESS YOU WANT THOSE SKILL(S) TO TAKE PRIORITY OVER ~ALL~ OTHERS! ~WILL~ CAUSE UNEVEN RANKS OVER TIME!!
## THIS IS MAINLY ONLY USEFUL FOR SHORT PERIODS - FOR POWER LEVELING A SINGLE WEAPON SKILL FOR EXAMPLE - RECOMMEND NULL UNLESS YOU KNOW WHAT YOU ARE DOING
     var Priority.Weapons NULL
     
## TRAIN LOWEST (ON or OFF) - ON WILL ALWAYS TRAIN W/ YOUR LOWEST RANK & LOWEST LEARNINGRATE WEAPON AT EVERY WEAPON SWAP 
## THIS EFFECTIVELY ENSURES THAT ALL YOUR WEAPON SKILLS WILL TRAIN AND STAY AT THE ~EXACT SAME RANKS~ - ESPECIALLY IF USED FROM THE START
## NOTE! TRAINLOWEST ON - WILL ALTER THE DEFAULT WEAPON TRAINING ORDER - BYPASSES THE SET ORDER TO DYNAMICALLY TRAIN WEAPONS 
     var TrainLowest OFF

# MAX LEARNING RATE - FOR EACH WEAPON SKILL (WILL SWITCH WEAPONS ONCE REACHING THIS RATE *MAX 33) *SET TO 35 TO IGNORE LEARNINGRATE 
     var MAX.LEARNINGRATE 12
# LEARNING RATE INCREASE - AFTER FULL WEAPON LOOP *OF ALL WEAPONS* - INCREASE THE MAX.LEARNINGRATE BY THIS MUCH
     var LEARNING.INCREASE 4
# MAX TIME PER WEAPON - SET THE MAXIMUM TIME (IN SECONDS) TO TRAIN EACH WEAPON SKILL - BEFORE SWITCHING WEAPONS
# SETTING THIS TOO HIGH MAY CAUSE SUBOPTIMAL TRAINING - RECOMMEND AROUND ~300-500 (~5-8 minutes per weapon)
     var MAX.TIME 250
# MAXIMUM TOTAL COMBAT TRAINING TIME - SET THE MAX TIME (IN SECONDS) TO STAY IN ~COMBAT~ BEFORE ESCAPING TO TOWN ( 3600 SECONDS = 1 HOUR )
# SET VAR MAX.TRAIN 0 - TO LOOP COMBAT FOREVER ( *UNTIL IT ESCAPES DUE TO BEING TOO HURT / BAGS TOO FULL / BURDEN TOO HIGH )
     var MAX.TRAIN 4500
     
# STANCE PER WEAPON (Set NULL to use default - Or SHIELD/PARRY/EVASION/CUSTOM TO USE THAT PARTICULAR STANCE FOR A PARTICULAR WEAPON)
## NOTE SCRIPT IS ALREADY ADVANCED IN CHANGING STANCES DEPENDING ON WEAPON BEING TRAINED - NULL IS FINE FOR MOST PURPOSES
     var SE.STANCE NULL
     var LE.STANCE NULL
     var THE.STANCE NULL
     var SB.STANCE NULL
     var LB.STANCE NULL
     var THB.STANCE NULL
     var POLEARMS.STANCE NULL
     var STAVES.STANCE NULL
     var BOW.STANCE NULL
     var CROSSBOW.STANCE NULL
     var SLINGS.STANCE NULL
     var LT.STANCE NULL
     var HT.STANCE NULL
     var OH.STANCE NULL
     var BRAWL.STANCE NULL

## BACKTRAIN (ON or OFF) - ON FOR SETTING A SEPARATE BACKTRAIN ROUTINE
     var BACKTRAIN OFF
## BACKTRAIN AUTO PROGRESS (ON or OFF) - Turning this ON will automatically set the creature to hunt, based on your BACKTRAIN WEAPON SKILLS
## TURN THIS ~OFF~ TO SET THE BACKTRAIN CREATURE MANUALLY (BELOW)
     var BACKTRAIN.AUTOPROGRESS ON
### BACKTRAIN AUTOPROGRESS TYPE - CHOOSE ONE: ( NORMAL / LOCKPICK / SKIN / F2P / F2PLOCK / EMPATH / NECRO / MM / CLERIC / UNDEAD / SHARD / THEREN )
     var BACKTRAIN.PROGRESS.TYPE NORMAL
## BACKTRAIN CREATURE - Must specify the creature to hunt if BACKTRAIN.AUTOPROGRESS is OFF
     var BACKTRAIN.CRITTER ICE ARCHON
## PRIORITY.ROOMS IS TO MOVE YOUR FAVORITE HUNTING ROOMS TO THE TOP OF THE ROOM LIST (Will hunt there first) MUST BE VALID TO YOUR HUNTING GROUND
## THE ROOMS WILL BE IGNORED IF NOT VALID TO THE HUNTING GROUND -- MUST BE IN ARRAY i.e - 410|411|412|413|414|415
     var BACKTRAIN.PRIORITY.ROOMS NULL
## BACKTRAIN TIME (in SECONDS - Total time to Backtrain)
     var BACKTRAIN.TIME 1200
## BACKTRAIN MAGIC (ON or OFF) IF OFF - WILL SKIP USING ANY OFFENSIVE SPELLS PERIOD WHILE BACKTRAINING - WILL ONLY DO BUFFS
     var BACKTRAIN.MAGIC OFF
## BACKTRAIN TM/DEBIL SPELLS (ON or OFF) IF OFF - WILL SKIP USING ANY TM / DEBIL SPELL DURING BACKTRANING (UNLESS ITS A TATTOO)
     var BACKTRAIN.TM OFF
## BACKTRAIN WEAPONS - Set every weapon you wish to backtrain (NULL to turn off)
     var BACKTRAIN.SE NULL
     var BACKTRAIN.LE NULL
     var BACKTRAIN.THE NULL
     var BACKTRAIN.SB NULL
     var BACKTRAIN.LB NULL
     var BACKTRAIN.THB NULL
     var BACKTRAIN.STAVES NULL
     var BACKTRAIN.POLEARMS NULL
     var BACKTRAIN.BOW NULL
     var BACKTRAIN.CROSSBOW NULL
     var BACKTRAIN.SLING NULL
     var BACKTRAIN.LT NULL
     var BACKTRAIN.HT NULL
     var BACKTRAIN.BRAWL NULL
     var BACKTRAIN.OH NULL
     var BACKTRAIN.BS NULL
## BACKTRAIN STEALTH (OFF or ON)
     var BACKTRAIN.STEALTH ON
## BACKTRAINING LOOTING OPTIONS (ON or OFF)
     var B.Loot.Gems ON
     var B.Loot.Boxes OFF
     var B.Loot.Metals ON
     var B.Loot.Scrolls ON
     var B.Loot.Collectibles OFF
     var B.Loot.SpiderParts OFF
## BACKTRAIN LOOTING MODE ( treasure / boxes / goods / equipment )
     var B.Loot.Option goods
## BACKTRAIN ARMOR (ARMOR ONLY FOR BACKTRAIN ROUTINE) (Set to NULL to not check a piece)
     var B.CHEST.ARMOR NULL
     var B.FACE.ARMOR NULL
     var B.HEAD.ARMOR NULL
     var B.ABDOMEN.ARMOR NULL
     var B.BACK.ARMOR NULL
     var B.ARM.ARMOR NULL
     var B.HAND.ARMOR NULL
     var B.LEG.ARMOR NULL

##############################################################
### COMBAT GENERAL SETTINGS
##############################################################

## GEM POUCH DESCRIPTION - DR IS TRICKY WITH GEM POUCHES!! BE SPECIFIC - use "<color> pouch" only! 
## **RECOMMEND DUMPING ALL POUCHES AND GET NEW ONES FROM GEM SHOP ON FIRST SETUP**
## WHEN ASKING FOR NEW GEM POUCHES, "ASK NPC FOR <COLOR> POUCH" - ~DO NOT 'ASK FOR GEM POUCH' OR just 'POUCH'~ - JUST 'ASK <NPC> FOR BLACK POUCH'
## Then Set the var to the 'color' pouch you have. ie var gemPouch black pouch
     var gemPouch black pouch
# TIE GEM POUCHES? (ON or OFF) 
# TIE POUCHES FOR MORE STORAGE/LESS INVENTORY SPACE USE - but have to sell the FULL TIED POUCHES AT SPECIAL SHOPS or get TRADER to sell them!
# IF HUNTING IN SHARD OR ROSSMAN - NO WORRY AS SCRIPT SELLS TIED POUCHES IN THOSE GEM SHOPS. IF hunting in XING/ISLANDS will have to get Trader to sell pouches.
     var TiePouch OFF
# WORN GEM POUCH? (ON or OFF) (OFF will STOW your gem pouch / ON will wear it )
     var Gempouch.Worn OFF

## RESTOCK AMMO? (ON or OFF) *SCRIPT WILL AUTOMATICALLY CHECK IF YOU RUN OUT OF AMMO AND ATTEMPT TO RESTOCK
     var AmmoStock ON
# Skinning Knife Name (Mandatory if not a worn knife)
     var Skinning.Knife knife
# BELT/WRIST/ANKLE ~WORN~ SKINNING KNIFE? (ON or OFF)
     var BeltKnife ON
#### COMBAT OPTIONS ####
# OFFHAND THROWING - (ON or OFF) SET TO ON IF YOU WANT TO ROTATE RIGHT/LEFT HANDS WHILE THROWING LT/HT
     var OffhandThrow ON
# THROWING TYPE (LOB, THROW or HURL) *LOB will NEVER stick / less damage - HURL ALWAYS STICKS/ max damage. THROW is inbetween
## IF YOU USE A SHARP THROWING WEAPON (LIKE SPEAR) ALWAYS USE LOB! THROW WILL STICK WITH A POINTY WEAPON!
## LOB IS THE SAFEST - LOB NEVER STICKS! - THROW IS SAFE ~IF USING A BLUNT THROWN WEAPON~ - HURL ALWAYS STICKS - AVOID HURL 
     var ThrowType throw
# BONDED THROWING WEAPONS? (ON or OFF) - Will use INVOKE to retrieve thrown weapon
     var Bonded OFF
# ROAMING (ON or OFF) - Will ROAM around to different critter rooms if it doesn't find a creature during bored routine
     var Roaming ON
# USE WEAK ATTACKS (ON or OFF) - Will use WEAK attacks for melee training (good for backtraining or preserving fatigue/balance)
     var WeakAttack OFF
# AIM ACTIONS (Set an array of actions) - ACTIONS TO PERFORM WHILE WAITING FOR FULL AIM (WITH RANGED/SPELLS) Separate with |
     var AimActions bob|attack|attack left
# TRAIN STEALTH? TRAIN STEALTH DURING MELEE / THROWN / BRAWLING ROUTINES
     var TrainStealth ON
## LOOT MONSTERS? (ON or OFF) - LOOT MONSTERS?
## OFF WILL SKIP LOOTING ALL MONSTERS ~PERIOD~ AND LET THEM ROT
     var Loot.Monsters ON
## LOOT OPTION TO USE - TREASURE / BOXES / EQUIPMENT/ GOODS or ALL
     var Loot.Option GOODS
## LOOTING OPTIONS (ON or OFF) - LOOT OPTIONS FOR MAIN COMBAT
     var Loot.Gems ON
     var Loot.Boxes ON
     var Loot.Metals ON
     var Loot.Scrolls ON
     var Loot.Collectibles OFF
     var Loot.SpiderParts OFF
# MAX BOXES (Set a number) - MAX number of BOXES to pick up before turning Box looting off for that run
     var Max.Boxes 25
# DISSECT (ON or OFF) - DISSECT mobs for First Aid training in Combat (Alternates with SKINNING depending on Learning Rates)
     var Dissect ON
# SKINNING OPTIONS (ON or OFF)
# SKIN ON but BUNDLE OFF will skin but DROP all skins. SKIN collecting only supported with bundles ON!
     var Skin ON
     var Bundle ON
# TIE BUNDLES (ON or OFF) (Turns on automatically when F2P is ON) - LOWER ITEM COUNT BY TYING UP YOUR BUNDLES
     var TieBundle ON
# BUNDLE LOCATION (SET to NULL to use ANY open location or set a preferred location (shoulder / waist / back / belt / around shoulder / over shoulder)
     var BundleLocation NULL
# ArrangeTarget (SET TO SKIN, BONE or PART - or NULL to skip arrange)
## Set ArrangeTarget to SKIN/BONE/PART to Arrange one time
## Set ArrangeALL to ON to arrange max times
     var ArrangeTarget SKIN
     var ArrangeAll OFF
## ArrangeAlways (ON or OFF) - Set ON to ALWAYS arrange regardless of skinning learningrate. OFF will SKIP ARRANGING when Skinning learning is locked
     var ArrangeAlways OFF
# MAX BUNDLE SIZE - Max amount of skins to keep in bundle before creating a new bundle (DEFAULT: 30  MAX: 200)
     var MaxBundle 40
# Set SNIPE to ON to use SNIPE (THIEF/RANGER/NECRO ONLY)
     var Snipe ON
# Set POACH to ON to use POACH instead of SNIPE (SNIPE overrides this setting if SNIPE is ON - TURN SNIPE OFF TO USE THIS)
     var Poach OFF
# RANGED AIM PAUSE. Set to 0 for a Full Aim. Set number of seconds to pause that many seconds before firing
     var SNAP.FIRE 6
# RETREAT WHILE USING RANGED WEAPONS/BUFFING? (ON or OFF) - Will RETREAT to stay at ranged when using ranged weapons
     var Retreat OFF
## DANCE / COUNT Critters - Set min number of critters to "dance" with before you start killing. 
## Leave Dance.Count 0 to kill EVERYTHING. Set 1 to dance with 1 creature until a 2nd comes in, etc. If set to 1 will ALWAYS leave 1 creature in your room.
     var Dance.Count 0
## TACTICS TRAINING (ON OR OFF) - Train TACTICS in Combat
     var Tactics ON
# APPRAISE CREATURES - (ON or OFF) to APPRAISE ALL CREATURES
     var APPRAISE ON
# HUNT OPTION (HUNT every ~75 seconds unless perception locked)
     var HUNT ON
## APPRAISE ITEMS WHEN NO CRITTERS IN ROOM? (ON or OFF)
     var APP.ITEMS OFF
## ITEMS TO APPRAISE (Set to NULL to not use) SET YOUR WORN ITEMS TO QUICK APPRAISE 
     var app1 NULL
     var app2 NULL
     var app3 NULL
## SANOWRET CRYSTAL? (ON or OFF) - ON will exhale crystal every ~100 seconds *IF CONCENTRATION ALLOWS
     var Crystal OFF
## USE SANORWRET CRYSTALS IN COMBAT? (ON or OFF) - ON will use Sanowrets in combat (Turning ON WILL effect concentration and hinder spell casting - not recommended for most)
     var SanowretCombat OFF
## ZILLS? (ON or OFF) - FOR WORN INSTRUMENTS - ON will play Zills during certain times (Repairing armor, collecting, etc)
     var Zills ON
## Zill name ( zills / cowbell / etc )
     var Zill.Name zills
# F2P CHARACTER (ON or OFF) - If set to ON - Script will escape combat and go to town run when you get an inventory count warning
     var F2P OFF
# BIOMECHANICAL TARANTULA? (ON or OFF) - IF ON - Will pick a (semi-)random near locked skill to drain every 10 minutes while in combat
     var Tarantula OFF
     var Tarantula.Name tarantula
## TARANTULA SKILLS TO CHECK - SET AN ARRAY OF SKILLS TO CHECK AGAINST FOR TARANTULA DRAIN
## MUST EXACTLY MATCH THE GENIE VARIABLE NAMES! THESE ARE THE SKILLS TARANTULA WILL CHECK FOR EACH SCHOOL
     var Magic.skills Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Arcana
     var Armor.skills Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor
     var Survival.skills Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing
     var Weapons.skills Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow
     var Lore.skills Appraisal|Tactics|Performance
# WARHORN? (ON or OFF) - For Barbarians and Bards only.
     var WarHorn OFF
## WAND SUPPORT (NULL to NOT use) (MEF wand / WoW wand / WoTP wand etc.) Set up to 2 sets of wands to use! Must use actual verb of wand!
## CAN SET AN ARRAY OF WANDS FOR EACH VAR ex- var Wand1 bloodwood branch|oaken staff|crystal
     var Wand1 NULL
     var Wand2 NULL
## WAND CONTAINERS *Must use 2 different containers to store Wands if using 2 identical named wands)
     var Wand1.Container belt
     var Wand2.Container cloak
## Wand Weapon - (NULL or WEAPON NAME) SET A MELEE WEAPON TO BUFF WHEN USING WANDS WITH A WEAPON BUFF
     var WandWeapon NULL
## EGG SUPPORT (ON or OFF)*Uses the HE Gift Egg in Combat every ~15 minutes to invoke more mobs
     var EGG OFF
## ASTROLABE (ON or OFF) - Uses an Astrolabe every 30 mins if ON (Will rotate if you use 2)
     var ASTROLABE OFF
## Set the name of the astrolabes - (2 words ONLY i.e - ornate astrolabe, twisted astrolabe)
     var ASTROLABE1 NULL
     var ASTROLABE2 NULL
     var Astro1.Container NULL
     var Astro2.Container NULL
## ORB RUB IN COMBAT (var Orb.Rub ON or OFF) - TURN ON TO RUB FAVOR ORB IN COMBAT EVERY ~40 MINUTES
## *NOTE THAT SCRIPT AUTOMATICALLY RUBS ORB ~ONE TIME~ EVERY FULL LOOP OF SCRIPT REGARDLESS OF THIS VARIABLE
     var Orb.Rub OFF
####################################################################################################
# ARMOR SWAP - (ON or OFF) - SPECIAL ARMOR SWAPPING ROUTINE FOR HELMS ONLY
# WILL SWAP OUT A SINGLE PIECE OF PLATE/BRIG/CHAIN/LIGHT HELM EVERY ~5 MINUTES IN COMBAT
     var Armor.Swap OFF
# IF Armor.Swap is ON - THEN ALL THE ARMORS BELOW MUST BE SET CORRECTLY!
# SET EVERY PIECE OF ARMOR TO SWAP BELOW, MUST SET AN ARMOR PIECE FOR ALL FOUR TYPES - TWO WORDS ONLY!
# ONE PIECE SHOULD MATCH YOUR MAIN ARMOR HELM
     var Light_Armor.Helm steelsilk balaclava
     var Chain_Armor.Helm chain balaclava
     var Brigandine.Helm brigandine balaclava
     var Plate_Armor.Helm NULL
####################################################################################################
# HEAVY ARMOR REMOVAL - (ON or OFF) - ON will take off plate/brig/chain armor before backstab/stealth routines
# Generally only needed for noobs with less then ~200 ranks in armors
     var Armor.Noob OFF
# Set Plate/Brig/Chain pieces here (USE EXACT SYNTAX) (If no armor to remove set to NULL)
     var PLATE1 gauntlet
     var PLATE2 greaves
     var PLATE3 NULL
     var PLATE4 NULL
# Set Light Armor Pieces to Swap in place of the Heavy armor pieces above - if any (set to NULL to not use)
     var LIGHTARMOR1 rugged gloves
     var LIGHTARMOR2 rugged greaves
     var LIGHTARMOR3 NULL
     var LIGHTARMOR4 NULL
####################################################################################################

##############################################################
# TOWN RUN / SPECIAL MODULES - SETTINGS FOR TOWN 
# AUTO HEALER / SELL GEMS/SKINS, BANK, OPTIONAL MODULES
##############################################################

# RETURN TO COMBAT MODULE (ON or OFF) - RESTARTS SCRIPT AND RETURNS TO COMBAT WHEN TOWN RUN IS FINISHED
# IF OFF - SCRIPT WILL ~ABORT~ ONCE TOWN RUN IS COMPLETE - LEAVE THIS ON FOR INFINITE AFK SCRIPTING
     var RETURN.TO.COMBAT ON
# AUTOHEAL (ON or OFF) - ON - LET SCRIPT HANDLE AUTO-HEALING AFTER COMBAT (DEPENDING ON YOUR GUILD/SETTINGS) 
# LEAVE THIS ON UNLESS YOU WANT TO HANDLE HEALING YOURSELF MANUALLY! (OR WITH ANOTHER SCRIPT) 
# TURNING THIS OFF WILL ~ABORT SCRIPT AFTER ESCAPING FROM COMBAT~! AND WILL PARSE: HELP ESCAPE PLZ!
     var AUTOHEAL ON
# HEAL ALL (ON or OFF ) - HEAL.ALL ON = FULLY HEAL IF YOU HAVE ~ANY~ WOUNDS AT ALL (even minor scars) 
# HEAL.ALL OFF = WILL SKIP HEALING IF INSIGNIFICANT WOUNDS (minor scratches etc)
     var HEAL.ALL ON
# SELL SKINS (ON or OFF) - VISIT FURRIER - SELL SKINS/BUNDLES 
     var SELLSKINS ON
# SELL GEMS (ON or OFF) - VISIT GEM SHOP - SELL ALL GEMS/POUCHES
     var SELLGEMS ON
# SELL METALS (ON or OFF) - VISIT GEM SHOP - SELL ALL LOOSE METALS/NUGGETS/BARS (except those in your Crafting Container) 
     var SELLMETALS ON
# BUY HERBS? (ON or OFF) - VISIT HERB SHOP - AUTO RESTOCK ON HEALING HERB SUPPLIES (IF in city with Herbalist)
     var HERBS ON
# USE HERBS IN COMBAT? (ON or OFF) - If ON - Script will eat herbs during combat every ~5 minutes if needed
     var HERBS.COMBAT ON
## Container.Herb - SET CONTAINER TO STORE YOUR HERBS IN (Can be a stackable herb container)
     var Container.Herb %Container
# BANK RUN (ON or OFF) - VISIT BANKS - DEPOSIT MONEY AFTER TOWN RUN 
     var BANKRUN ON
# INVENTORY CHECK (ON or OFF) - TURNS ON INVENTORY CHECKS FOR DUMPING ANY COMMON TRASH ITEMS IN INVENTORY (OR EXCESS GEM POUCHES / BUNDLING ROPE )
     var INVCHECK ON
# TRASH DUMP (ON or OFF) - IF ON WILL DUMP ANY ITEM IN YOUR TRASH VARIABLE (GLOBAL VARIABLE AT VERY TOP OF VARIABLE FILE)
     var TRASH.DUMP ON
# POUCH DUMP (ON of OFF) - IF ON - DUMPS ANY GEM POUCHES IN YOUR INVENTORY THAT ~DO NOT MATCH~ THE COLOR/DESCRIPTION OF YOUR PRIMARY GEMPOUCH ( var gemPouch )
# WILL ALSO DUMP YOUR NORMAL GEM POUCHES IF YOU HAVE MORE THAN 10 OF THEM until you only have 10 MAX (Prevent buildup of ~50 rogue pouches) 
     var POUCH.DUMP ON

## SHARD CITIZEN (ON or OFF) - Must be a citizen of shard
     var Shard.Citizen ON
# GET FAVORS? (ON or OFF) - (ONLY WORKS IN CROSSING / SHARD / HAVEN )
     var GET.FAVORS ON
     var FAVOR.GOD damaris
# REPAIR ARMOR? (ON or OFF) - REPAIR ALL ARMOR / WEAPONS DURING TOWN RUN (MUST HAVE MONEY IN LOCAL BANK)
     var REPAIR.ARMOR ON
## USE MAGIC REPAIR KITS? (SET NULL/OFF TO NOT USE)
## REPAIR.KIT and REPAIT.KIT.2 ARE FOR FULL REPAIR KITS THAT REPAIR ALL ARMOR ~AND~ WEAPONS
## REPAIR.KIT.WEAPON and REPAIR.KIT.ARMOR ARE ONLY FOR KITS THAT ONLY REPAIR ARMOR OR WEAPONS!
## YOU MUST SET THE CONTAINER THAT EACH SPECIFIC KIT IS FOUND IN! IT TREATS THIS CONTAINER LIKE GEMPOUCH.CONTAINER AND KEEPS CLOSED! *CAN BE SHARED WITH GEMPOUCH.CONTAINER!
     var REPAIR.KIT NULL
     var REPAIR.KIT.2 NULL
     var REPAIR.KIT.WEAPON NULL
     var REPAIR.KIT.ARMOR NULL
     var REPAIR.KIT.CONTAINER NULL
     var REPAIR.KIT.2.CONTAINER NULL
     var REPAIR.KIT.3.CONTAINER NULL
# CLIMBING/SWIMMING RUN (ON or OFF) - ATHLETICS TRAINING 
     var CLIMBING ON
## MAGIC CLIMBING ROPE (ON or OFF) - CHECK FOR MAGIC CLIMBING ROPE - USES THAT INSTEAD OF DEFAULT CLIMBING RUN
     var MAGIC.ROPE OFF
     var ROPE.NAME climbing rope
     var Rope.Container NULL
## WINDBOARD (ON or OFF) - TRAIN ATHLETICS WITH A WINDBOARD INSTEAD
     var WINDBOARD OFF
# COLLECTING - (ON or OFF) - OUTDOORSMANSHIP TRAINING - COLLECT ROCKS/COINS
     var COLLECTING ON
# BRAIDING - (ON or OFF) - TRAINS BRAIDING (ENGINEERING) - ONLY TRAINS TO ~70 RANKS!
     var BRAIDING ON
# RAVEN'S COURT SCHOLARSHIP STUDY (ON or OFF) - ONLY IN CROSSING !
     var RAVEN ON
# TEXTBOOK / COMPENDIUM? (ON or OFF) - TRAIN SCHOLARSHIP/FIRST AID W/ ANATOMY TEXTBOOK
     var TEXTBOOK OFF
# TEXTBOOK TYPE - Textbook or Compendium
     var TEXTBOOK.TYPE textbook
     var Textbook.Container cloak
# SKINNING/FA TRAINER - (ON or OFF) ONLY WORKS FOR THE MAGIC SKINNING / FA TRAINERS
## The ones with 105 uses per day or infinite ( https://elanthipedia.play.net/Item:Small_blue-belly_crocodile_with_prominently_stitched_seams )
     var SKINTRAINER OFF
     var SKINTRAIN.NOUN crocodile
     var SKINTRAIN.CONTAINER goldenweave belt
# EPISTEMIC JOURNAL - For Epistemic Journals ONLY - Writes to Journal every 24 hours
# Set JOURNAL.TYPE ( NULL to NOT USE ) - Set NOUN of item to use ( traveler's diary / explorer's log / soldier journal / etc)
     var JOURNAL.TYPE NULL
# DISARM BOXES? (USES DISARM SCRIPT - MAKE SURE YOU SET THE VARIABLES UP IN disarm-vars)
     var DISARM ON
# BURGLE RUN (ON or OFF) - BURGLE RUN USING THE BURGLE SCRIPT (BURGLE.PAWN ON will Pawn all Burgle items)
     var BURGLE ON
     var BURGLE.PAWN ON
# BURGLE DUMP (ON or OFF) - Burgle Dump ON will DUMP/TRASH any Burgle item that does not sell at pawn shop
     var BURGLE.DUMP ON
# STEALING RUN (ON or OFF) - Does STEALING Run with the Ultimate Stealing Script
     var STEAL OFF
# PERFORMANCE RUN (ON or OFF) - DEDICATED PERFORMANCE TRAINING RUN DURING TOWN RUN (Uses your Zill.Name variable to train)
     var PERFORMANCE ON
# MAGICAL RESEARCH TRAINING (ON or OFF) - DEDICATED MAGICAL RESEARCH TRAINING DURING END OF TOWN RUN - TAKES A BIT OF TIME! 
     var MAGICAL.RESEARCH OFF
# PRIMARY MAGICAL RESEARCH TYPE ( SET TO NULL TO CHOOSE AUTOMATICALLY BASED ON LEARNING )
# OPTIONS ARE: FUNDAMENTAL, STREAM, AUGMENTATION, UTILITY, WARDING, SORCERY, FIELD, SPELL
     var RESEARCH.TYPE NULL
# TEACHING? (ON or OFF) - If ON, will attempt to teach your other characters/people in the Friends variable
     var TEACH OFF
     var TEACH.SKILL hiding
     var TEACH.SKILL.2 evasion
## SUPPORT FOR MASTERCRAFT TRAINING
## IF YOU USE MASTERCRAFT - SET EACH SKILL ON THAT YOU WANT TO TRAIN
## *YOU MUST SET UP MASTERCRAFT - TOOLS ETC SEPARATELY
     var ALCHEMY OFF
     var ENGINEERING OFF
     var FORGING OFF
     var OUTFITTING OFF
     var ENCHANTING OFF
## VAULT SWAP (ON or OFF) - ON WILL TEMPORARILY SWAP YOUR 'var CONTAINER' FOR A SPECIAL BAG IN YOUR VAULT FOR MASTERCRAFT PURPOSES ONLY!
## AFTER MASTERCRAFT IS OVER, GOES BACK TO VAULT AND SWAPS BACK TO ORIGINAL BAG - PUTS YOUR CRAFTING BAG BACK IN THE VAULT!
## MAKE SURE YOU HAVE ENOUGH ROOM IN YOUR VAULT! THE SWAP CONTAINER SHOULD FIT ON THE SAME BODY SLOT AS THE BAG YOU ARE SWAPPING OUT!
     var VAULT.SWAP OFF
## VAULT CITY - SET THIS TO THE CITY NAME WHERE YOU HAVE YOUR VAULT - IF VAULT.SWAP IS ~ON~ IT WILL RUN TO THIS CITY FIRST
     var VAULT.CITY FC
## SET THE NAME OF YOUR CRAFTING BAG IN YOUR VAULT - MUST HAVE ~ALL YOUR CRAFTING TOOLS~ IN THIS BAG!!
## MAKE SURE TO BE SPECIFIC WITH YOUR CONTAINER VARIABLES SO THEY DONT GET MIXED UP! THIS CONTAINER SHOULD USE THE SAME BODY SLOT AS YOUR VAR CONTAINER!
     var CRAFTING.BAG dreamweave lootsack

# ALMANAC (ON or OFF) - USE ALMANACS (That trains random skill OR pick-a-skill every 10 minutes)
     var ALMANAC OFF
## ALMANAC VERB - if using the special encyclopedic almanac, MUST be set to 'encyclopedic almanac' to use the pick a skill function
     var ALMANAC.TYPE almanac
     var Almanac.Container NULL
## ALMANAC SKILLS to check/pick for encyclopedic almanac i.e. Sorcery|Forging|Engineering
## The default list has ALL skills listed - You can remove skills you don't want to boost
     var ALMANAC.LEARN Primary_Magic|Augmentation|Utility|Warding|Debilitation|Targeted_Magic|Defending|Shield_Usage|Plate_Armor|Brigandine|Chain_Armor|Light_Armor|Evasion|Skinning|Perception|Stealth|Athletics|First_Aid|Locksmithing|Parry_Ability|Melee_Mastery|Missile_Mastery|Brawling|Twohanded_Edged|Small_Edged|Large_Edged|Twohanded_Blunt|Large_Blunt|Small_Blunt|Polearms|Staves|Bow|Appraisal|Tactics|Performance|Enchanting|Forging|Engineering|Alchemy|Outfitting|Arcana
# LOCKPICK TRAINING ITEM? (Set to NULL to not use) - Must match EXACTLY with item name in hands (2 words only)
# For MAGIC LOCKPICK TRAINING ITEMS - * Assumes you use a WORN lockpick ring/case 
     var LOCKPICK.ITEM NULL
## SET A SECONDARY LOCKPICK ITEM HERE IF YOU HAVE A SECONDARY (OR SET TO NULL)
     var LOCKPICK.ITEM.2 NULL
## Lockpick.Container is where the MAGIC LOCKPICK ITEMS should be stored (NULL to try wear them)
     var Lockpick.Container NULL
# PILGRIM BADGES (ON or OFF) *CLERIC/PALADINS ONLY! - VISIT UNVISITED BADGE LOCATIONS - PRAY TO BADGE
     var PILGRIM ON
# POWERWALKING (ON or OFF) - FOR MAGIC USERS - DO A POWERWALK DURING TOWN RUN 
     var POWERWALK ON
## SCRIPT CHECK LOGIC - TURN SCRIPT CHECK LOGIC (ON OR OFF) - WARNING - THERE ~WILL~ BE FALSE POSITIVES!! UNAVOIDABLE!!
## IF IT DETECTS ANY GM SCRIPT CHECKS - WILL ~ATTEMPT~ TO AUTOMATICALLY HANDLE IT AND/OR RUN AWAY (Not Log Out)
     var SCRIPTCHECK OFF
## Setting NO.CONTACT to "ON" will log out for 5 minutes if someone tries to drag you or hold your hand (DEFAULT: OFF)
## WARNING! IT WILL ALSO ESCAPE COMBAT IF ANYONE TALKS IN YOUR COMBAT ROOM! INCLUDING CRITTERS! SO IT CAN FALSE POSITIVE ON TALKING CRITTERS
     var NO.CONTACT OFF
## LOG.ON.STUN (ON or OFF) Set to "ON" to log out if you are too hurt/stunned and are unsuccessful running away (DEFAULT: ON)
     var LOG.ON.STUN OFF
## LOG.ON.DEATH (ON or OFF) Set OFF to stay logged in even if you die (DEFAULT: ON)
     var LOG.ON.DEATH ON
## TOTAL TIME ONLINE - MAX TIME TO STAY ONLINE (IN SECONDS) After this time has passed will idle and logout to avoid AFK checks (Set to 0 to always stay online)
     var ONLINE.TIME 0
## FANG COVE? (ON or OFF) - Do you want to go to FANG COVE for healing/town stuff (Only works in Prime if Premium)
     var FANGCOVE ON
## USE PREMIUM JUMP JEWELRY? (ON or OFF) - Will use Premie JJ to teleport to Fang Cove for healing/bundles/gems/etc
     var JumpJewelry OFF
     var JewerlyVerb ironwood ring
## PERSONAL EMPATH HEAL (Put EMPATH'S NAME HERE to use. NULL to turn off) - If you use a personal empath to heal
## Setting this to anything OTHER than NULL/OFF will turn OFF the triggers to nod to someone when they ask if you want healing
     var PocketEmpath NULL
## EmpathRoom is ROOM NUMBER where you can find your PERSONAL EMPATH. (MUST be in the CITY you go to for TOWN RUN)
     var EmpathRoom NULL
## BankBot - Used for F2P characters to tip a bankbot any remaining coin at end of town run
## Set Tipping to 1, Bankbot name and Tiproom = room number bankbot is at, in your home town
     var Tipping 0
     var BankBot morph
     var TipRoom 753
## CLAN ITEM (TF USE ONLY)
     var CLAN OFF
     var CLAN.ITEM sphere
## LIGHTER ITEM (For using a Lighter to start fires instead of flint and blade)
## USAGE - var LIGHTER (ON or OFF) - Lighter.Name = verb of the item
     var Lighter OFF
     var Lighter.Name world dragon
## CUSTOM TOWN SCRIPT - (Must be the exact name of the script (IGNORE .CMD - JUST USE NAME)
## Set your own script to run during the town run
## YOU MUST HAVE A PARSE AT THE END OF YOUR SCRIPT: put #parse SCRIPT FINISHED!
## IF YOU DO NOT HAVE THIS PARSE THEN UBER WILL NOT RECOVER PROPERLY!
     var Custom.Script NULL
## RPA BESTOW? (ON or OFF) - MUST BE IN THE PIRP SYSTEM TO BESTOW RPAS! https://elanthipedia.play.net/RPA_command
     var RPA ON
## LIST THE PEOPLE YOU WANT TO BESTOW RP POINTS TO BELOW IN AN ARRAY!!
## ie. var PirpList Name1|Name2|Name3|Name4|Name5
     var PirpList Raidboss|Healbitch|Illuminati|Breckin|Ryhs|Rhoat|Shepherd|Kohen|Worril|Odium|Morvetan|Orcher|Amroth|Mephos|Yew|Lorak|Wryll|Rellie|Beerfest|Bayndayd|Xana|Crivic|Blaakwulf|Wong|Findal|Regnar|Lakshmi|Vivica|Phucker|Jimdickens|Kiroq|Bleed|Rutinger|Nekhet|Leecya|Arazenya|Kithkani


######################################################################################################################
######################################################################################################################
# GENERAL MAGIC VARS - ALL MAGIC USERS MUST SET THESE VARIABLES
# GENERIC MAGIC VARIABLES FOR ALL MAGIC USERS
######################################################################################################################
######################################################################################################################
# SMART MANA FOR SPELLS? AUTO-DETERMINES OPTIMAL MANA FOR SPELLS AFTER A NEW SETUP (OR EVERY ~2 WEEKS IN GAME)
# SMART MANA WILL AUTOMATICALLY ADJUST YOUR MANA LEVELS UP AND DOWN AS YOU GAIN IN RANKS FOR OPTIMAL LEARNING
# (ON or OFF) - RECOMMEND LEAVING ON - SETTING THIS ON WILL OVERRIDE ALL MANUAL MANA SETTINGS 
# TURNING SMART.SPELLS OFF MEANS YOU WILL ~HAVE~ TO SET MANA MANALLY AND DO MUCH MORE FINE TUNING 
     var SMART.SPELLS ON
# CAMB HEAVY (ON or OFF) (OFF by default) - ON WILL MAKE SMART MANA PUT MORE MANA INTO CAMBRINTH THEN MAIN PREP
     var Camb.Heavy OFF
# MAGIC RATE - (NULL is RECOMMENDED) Set the MIN Magic Rate to reach before switching to a different spell school. 
# SETTING TO A NUMBER WILL SPAM THE SAME SPELL UNTIL YOU REACH DESIRED LEARNINGRATE. Set to NULL to cycle through spells normally 
     var Magic.Rate NULL
# MAGIC SNAP CAST. Set to 0 for Full Aim. Set to desired number of seconds to pause for that many seconds before casting
     var MAGIC.SNAP 0
# CAMBRINTH CHARGES - Number of Times to Charge your cambrinth (or harness if Cambrinth is NULL) each time!
# RECOMMEND LEAVING THIS AT 1 - 2 AT MAX - THIS VARIABLE TIES INTO HOW SMART MANA CALCULATES MANA
     var CambrinthCharge 1
# OFFENSIVE SPELL MANA AMOUNTS - Set BASE MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Mana 15
     var Debilitation.Mana 15
     var Utility.Mana 15
     var Augmentation.Mana 15
     var Warding.Mana 15
     var Sorcery.Mana 15
# OFFENSIVE SPELL CAMBRINTH AMOUNTS - Set CAMBRINTH MANA to put into each MAGIC TYPE
# THESE SETTINGS ONLY USED WITH SMART.SPELLS ~OFF~
     var Target.Camb 20
     var Debilitation.Camb 20
     var Utility.Camb 20
     var Augmentation.Camb 20
     var Warding.Camb 20
     var Sorcery.Camb 20
# USE HARNESS / CAMBRINTH FOR OFFENSE SPELLS (ON or OFF)
# TURN OFF TO SKIP HARNESS/CAMBRINTH COMPLETELY
     var Use.Cambrinth ON
# USE HARNESS / CAMBRINTH FOR BUFFS (ON or OFF)
     var Use.Cambrinth.Buffs ON
# CAMBRINTH ITEM for charging BUFFS/SPELLS (Set to NULL to not use)
     var Cambrinth cambrinth ring
     var Cyclic.Cambrinth NULL
# CAMBRINTH MANA AMOUNT FOR SPELLS - Amount of Mana to put in CAMBRINTH for Magic Tattoos / Harness for Cyclics when No Raw Chanelling feat
     var CambrinthMana 5
# CAMBRINTH MANA FOR Cylics - Amount of Mana to put in cambrinth for Cylics ONLY
     var CyclicCharge 10
# SLOW.CAST (ON or OFF) - OFF IS DEFAULT - Slow Cast ON will cast offensive spells about half as often as normal
# SLOW.CAST OFF (Default) will spam spells in between attacks as much as possible (mana permitting)
     var Slow.Cast OFF
# NO CAMBRINTH USE DURING TM / DEBIL SPELLS (ON or OFF)
# IF YOU SET THIS ON, SCRIPT WILL SKIP USING A CAMBRINTH FOR TM OR DEBIL SPELLS
     var NoCambTM OFF
# POWER PERCEIVE (Perceives every ~5 minutes)
     var POWERP ON

# RITUAL FOCUS ITEM (REQUIRED for RITUAL SPELLS - set Ritual to NULL to not use)
# Ritual.Container can be set to any Container - or set to NULL to wear it first
     var Ritual staff
     var Ritual.Container %Container
# SORCERY RITUAL FOCUS (Separate ritual focus for Sorcery IF NEEDED)
     var Sorcery.Focus NULL
# TM DAMAGE FOCUS ITEM - IF SET WILL USE TM FOCI MODE EVERY ~HOUR (set to NULL to not use)
     var TMFoci NULL
     var TMFoci.Container %Container
# USE SYMBIOSIS ON ATTACK SPELLS? (ON or OFF)
# ONLY USEFUL AT ~HIGHER RANKS~ OF MAGIC - ~NOT~ FOR NOOBS!!
     var Target.Symbiosis OFF
     var Utility.Symbiosis OFF
     var Augmentation.Symbiosis OFF
     var Warding.Symbiosis OFF
     var Sorcery.Symbiosis OFF
     var Debilitation.Symbiosis OFF
# USE SYMBIOSIS ON BUFFS? (ON or OFF) - FOR HIGHER RANKS ONLY
     var Symbiosis.Buffs OFF

# MAGIC TATTOO (Set to NULL or the FULL SPELLTIMER NAME i.e - IronConstitution / MajorPhysicalProtection) - Will use a Magic Tattoo every ~5-10 minutes
# FULL SPELLTIMER NAME MUST ALSO BE SET IN YOUR BUFFS OR SPELLS - USE SORCERY.CAMB (ABOVE) TO SET CAMB MANA FOR MAGIC TATTOO
     var Magic.Tattoo NULL
# MAGIC TATTOO CAMBRINTH/HARNESS MANA - Set the amount of Camb Mana you want to boost your tattoo with
     var Tattoo.Camb 30
# HEROIC TATTOO (ON or OFF) - ONLY FOR HEROIC TATTOOS! (Normal tattoos use Magic.Tattoo)
# VERY BASIC - WILL JUST INVOKE TATTOO / CAST ON A 1 HOUR COOLDOWN
     var Runic.Tattoo OFF

#########################################################################################
# GUILD SPECIFIC OPTIONS BELOW
# SET THE GUILD OPTIONS FOR THE CURRENT CHARACTER YOU ARE EDITING 
########################################################################################
########################################################################################
# NECROMANCER SETTINGS
# SET NECRO.HEAL ON TO USE NECRO HEALING - (Consume Flesh / Devour depending on skills)
     var Necro.Heal ON
## NECROHEAL CREATURE (SET A ~LOW LEVEL~ CREATURE TO KILL ~ONLY FOR DEDICATED HEALING PURPOSES~)
## IDEALLY SET THIS TO A CREATURE NEAR YOUR "HOME CITY" SO YOU DON'T HAVE FAR TO RUN FOR HEALING
     var NecroHeal.Critter GOBLIN SHARD
# SET NECRORITUAL ON TO PERFORM RITUALS IN COMBAT (Preserve/Harvest/Dissect/Butchery/etc)
     var NecroRitual ON
## FORSAKEN? (ON or OFF) - IS NECRO FORSAKEN?? IF ON - WILL AVOID TOWNS/SERVICES AS MUCH AS POSSIBLE!! 
## *Not fully tested/implemented-may not be perfect- but should avoid towns. May have issues REPAIRING ARMOR Unless USING FC* 
     var Forsaken OFF
## RISEN? (ON or OFF) - CREATES RISEN MINIONS IN COMBAT (CAREFUL - GENERATES DIVINE OUTRAGE!) 
     var Risen OFF
## QUICKEN EARTH - ON TO CHECK FOR AND SUMMON DIRT CONSTRUCTS EVERY ~5 MINUTES
     var QuickenEarth OFF
     var QE.Mana 10
     var CFB.Mana 10
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Necro.Cyclics |USOL|ROC
     var Necro.Cyclics.mana |5|4
## Necromancer ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Necro.Target.Spell ACS|VS
     var Necro.Debilitation.Spell HP
     var Necro.Utility.Spell GAF
     var Necro.Augmentation.Spell Obfuscation
     var Necro.Warding.Spell MAF
     var Necro.Sorcery.Spell MPP
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Necro.Buffs IVM|REI|ROC|CH
########################################################################################
########################################################################################
### BARD SETTINGS
# Cyclic Spell Setup
# YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST be set for each individual cyclics!
# YOU MUST SET cyclic.mana in an array to match!! 6 cyclic - 6 mana numbers
  # SET TO NULL/OFF IF NOT TRAINING CYCLICS - THERE ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Bard.Cyclics |AEWO|HODI|FAE|CARE|PYRE|GJ
     var Bard.Cyclics.mana |5|4|5|5|5|6
## Bard ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Bard.Target.Spell BOS
     var Bard.Debilitation.Spell DMRS
     var Bard.Utility.Spell AOT
     var Bard.Augmentation.Spell WILL
     var Bard.Warding.Spell REPR
     var Bard.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Bard.Buffs |MIS|HARM|RAGE|REPR
## BARD SCREAMS? ( Screams in combat every ~60 seconds) (ON or OFF)
     var Bard.Scream ON
## BARD WHISTLE (ON or OFF)
     var Bard.Whistle ON
########################################################################################
########################################################################################
# WARRIOR MAGE SETTINGS
## USE SUMMONING? (Will train Summoning every ~3 minutes)
     var Summoning ON
## ELEMENTAL ALIGNMENT - Element can be FIRE, WATER, ELECTRIC, AETHER, AIR or EARTH
     var element FIRE
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var WM.Cyclics |EE|AC|FR
     var WM.Cyclics.mana |5|4|5
## Warrior Mage ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var WM.Target.Spell FS|FB
     var WM.Debilitation.Spell EE|ALA
     var WM.Utility.Spell ETF
     var WM.Augmentation.Spell YS
     var WM.Warding.Spell ES
     var WM.Sorcery.Spell NULL
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var WM.Buffs Ease|TW|SW|Zephyr|SUF|Ignite
## ~WEAPON SUMMONING LOGIC~
# SUMMON WEAPONS (ON or OFF)
     var SummonWeapons OFF
# SUMMON ELEMENT - Must set your WEAPON SUMMON ELEMENT ( Stone/Earth (Default) - Fiery/Fire (Fiery Infusions) - Icy/Ice (Icy Infusions) - or Electric (Shocking Infusions)
     var SummonElement FIRE
# ELEMENTAL CHARGE SPELL Must be *a spammable spell* of your chosen element. Will prep at minimum mana - if you want to prep at something else put a number after
     var ChargeSpell MOA
# SUMMON WEAPON TEMPLATE (0 or 1) - 0 = Default weapon, 1 = Turn weapon to other template
     var SummonTemplate 1
# SUMMON WEIGHT/DENSITY (0 - 2 to set weapon density - Must know QUICK INFUSIONS spell)
# 0 = Lightest Weight, 1 = DEFAULT, 2 = Heavier Weight
     var SummonWeight 1
# Set weapons you want to summon (ON or OFF) - Setting to ON will override your default weapon variables at top of script
     var SummonHT OFF
     var SummonLT OFF
     var SummonSE OFF
     var SummonLE OFF
     var SummonTHE ON
     var SummonSB OFF
     var SummonLB OFF
     var SummonTHB ON
     var SummonPolearms ON
     var SummonStaves ON
## INGOT (ON or OFF) Bump up tier of weapons - Must know REINFORCED INFUSIONS spell and have a rare metal ingot
     var WMIngot OFF
## SET INGOT STORAGE CONTAINER (Set to either a sigil ring or a specific container)
     var Ingot.Container sigil ring
########################################################################################
########################################################################################
# MOON MAGE SETTINGS
## MOON MAGE ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var MM.Target.Spell DO|Burn
     var MM.Debilitation.Spell Dazzle|MB
     var MM.Utility.Spell PG
     var MM.Augmentation.Spell AUS|ART
     var MM.Warding.Spell PSY
     var MM.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var MM.Cyclics |SHW
     var MM.Cyclics.mana |5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var MM.Buffs CV|Shadows|TS|COL|Shadowling|PSY
## OBSERVATION TRAINING - PREDICT TOOL IS ONLY USED FOR PREDICTION OUTSIDE OF COMBAT! TOOL MUST ALREADY BE BONDED!!
## Predict.tool can be - BONES, CHART, MIRROR, PRISM, BOWL, DECK or NULL to turn off.
     var Predict.Tool DECK
## Read The Ripples (RTR ON or OFF) - Will Perform a RTR routine (observe spam) during town run **MUST HAVE TELESCOPE!
     var RTR OFF
## Where you store your telescope * If any - defaults to your main Container if not set
     var Telescope.Container NULL
## OBSERVE IN COMBAT (ON or OFF) - If ON will do Astrology observations in Combat every couple minutes
     var Combat.Observe ON
########################################################################################
########################################################################################
# CLERIC SETTINGS
## CLERIC ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Cleric.Target.Spell FOU|FF
     var Cleric.Debilitation.Spell PS|Malediction
     var Cleric.Utility.Spell DR|BLESS
     var Cleric.Augmentation.Spell Benediction
     var Cleric.Warding.Spell MPP|SL
     var Cleric.Sorcery.Spell dazzle
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Cleric.Cyclics |HYH|GHS|REV|SA
     var Cleric.Cyclics.mana |15|15|15|15
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Cleric.Buffs OM|Auspice|SOS|POM|MAPP|PFE|YS
## ARE YOU USING OM ORB? (MUST BE SET IN BUFFS ABOVE!) SET MANA AMOUNT TO CAST OM / CHARGE ORB WITH EACH TIME
     var OM.Mana 25
## TYPE OF ORB YOU USE FOR OM - OPTIONS:( FIRULF, MERAUD or KEREN)
     var FavorOrb meraud
## BUFF SPELLS YOU WANT TO ALWAYS KEEP ACTIVE IN YOUR OM ORB (You can just set this to var OM.Buffs %Cleric.Buffs ) 
     var OM.Buffs PFE|POM|MPP|MAPP|SAP|SOL
## CLERIC RITUALS? (Perform CLERIC RITUALS during Town Runs/in Combat)
     var ClericRituals ON
### Prayer Mat - Set to NULL to not use or the noun of the mat/rug
     var PrayerMat mat
## HOLY WATER VESSEL - Set your container you use to store/collect holy water
     var HolyWater chalice
### COMBAT COMMUNES - (ON or OFF) - Set the COMMUNES you wish to perform while IN COMBAT 
     var Commune.Meraud ON
     var Commune.Truffenyi ON
     var Commune.Tamsine OFF
### FLINT KNIFE - Set a DEDICATED WEAPON/KNIFE to STRIKE FLINT for MAKING FIRE for RITUALS
### MUST be a METAL weapon you can use to STRIKE FLINT for fire
     var FlintKnife knife
## CLERIC ALIGNMENT GOD - Set a God to align to ( https://elanthipedia.play.net/Cleric_3.0#Alignment )
## CHOOSE A LIGHT/DARK/NEUTRAL GOD ONLY - Each Type will buff 2 magic skills and penalize 3 others
## BY DEFAULT SCRIPT WILL USE ~CHADATRU~ (Which buffs AUG/WARDING - Generally the most lacking magics for Clerics)
## Set a different god if you wish to buff other magics but BE CAREFUL!!! 
     var Alignment.God CHADATRU
########################################################################################
########################################################################################
# RANGER SETTINGS
## RANGER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Ranger.Target.Spell DEVI|STAMPEDE
     var Ranger.Debilitation.Spell DEADFALL|SWARM
     var Ranger.Utility.Spell EM|BLEND
     var Ranger.Augmentation.Spell SOTT
     var Ranger.Warding.Spell EY
     var Ranger.Sorcery.Spell ECRY
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Ranger.Cyclics |CS|BES
     var Ranger.Cyclics.mana |5|5
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Ranger.Buffs Athleticism|STW|EY|WOTP|OATH|ETC|Bloodthorns
########################################################################################
########################################################################################
## PALADIN SETTINGS
## PALADIN ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Paladin.Target.Spell FST
     var Paladin.Debilitation.Spell Shatter
     var Paladin.Utility.Spell AS
     var Paladin.Augmentation.Spell RW
     var Paladin.Warding.Spell SP
     var Paladin.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Paladin.Cyclics |HOW|TR
     var Paladin.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Paladin.Buffs AA|Courage|HES|RW|SR|Clarity
## SET your HOLY WEAPON here (NULL to ignore) - Holy Weapon Name
     var HolyWeapon NULL
## Holy Icon (NULL TO NOT USE/IGNORE) - Set to the noun of your icon
     var HolyIcon NULL
########################################################################################
########################################################################################
## TRADER SETTINGS
## TRADER ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Trader.Target.Spell CRD|STARCRASH
     var Trader.Debilitation.Spell FLUORESCE|AVA
     var Trader.Utility.Spell NOUMENA
     var Trader.Augmentation.Spell BLUR
     var Trader.Warding.Spell IR
     var Trader.Sorcery.Spell MPP
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Trader.Cyclics |ARS|SOV
     var Trader.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Trader.Buffs |TRC|Blur|LGV|NONCHALANCE
########################################################################################
########################################################################################
# EMPATH SETTINGS
## EMPATH ATTACK Spells - Set the OFFENSIVE spells you want to use for each magic type (NULL to not use)
     var Empath.Target.Spell PARALYSIS
     var Empath.Debilitation.Spell LETHARGY|NB
     var Empath.Utility.Spell GS|HEAL
     var Empath.Augmentation.Spell REFRESH
     var Empath.Warding.Spell IC|POP
     var Empath.Sorcery.Spell NULL
# Cyclic Spell Setup - YOU CAN SET ONE OR AN ENTIRE ARRAY OF CYCLICS TO SWITCH THROUGH
# CYCLIC.Mana MUST BE SET FOR EACH INDIVIDUAL CYCLIC!
# MUST SET cyclic.mana in an array to match Cyclics! 6 cyclics - 6 mana numbers
# SET TO NULL/OFF IF NOT TRAINING CYCLICS - ~MUST~ BE A | BEFORE EACH CYCLIC!
     var Empath.Cyclics |AD|REGEN
     var Empath.Cyclics.mana |5|4
## Set your BUFF SPELLS to use in a list. TO ADD A BUFF ADD |BUFFNAME  to the end of the list.
     var Empath.Buffs  |AGS|BS|IC|GOL|MEF|TRANQUILITY
## GAURDIAN SPIRIT? (ON or OFF) - ON will keep up Guardian Spirit while in Combat
     var Guardian.Spirit ON
## CUSTOM GUARDIAN SPIRIT (ON or OFF) - If ON - will "cast custom" instead of casting normal
     var Guardian.Custom OFF
## ATTACK CONSTRUCTS ONLY? (ON or OFF) - ON will ONLY attack constructs (unless using Absolution vs unded). OFF will attack everything
## WARNING - SETTING TO OFF WILL CAUSE EMPATHIC SHOCK!!!!
     var Construct.Only ON
## USE MANIPULATE FRIENDSHIP (ON or OFF) - ON will attempt to manipulate non-construct creatures
     var Manipulate ON
## ESCAPE COMBAT WHEN EMPATHY REACHES 0? (ON or OFF) - If Empathy LearningRate reaches 0 during combat, will go on town run
     var Empathy.Escape OFF
## EMPATH PERCEIVE HEALTH WALKS (ON or OFF) - If ON - Will go on perceive health walks around town during town run
     var Empath.Walk ON
## EMPATH UNITY LINK (ON or OFF) - FOR EMPATH HEALBOT MODE - DO YOU KNOW UNITY LINK? MUST BE 70+ CIRCLE AND 380+ EMPATHY
     var Unity ON
## TEACH CLASS (FOR HEALBOT MODE) - SET THE SKILL OF THE CLASS YOU WANT TO TEACH
     var TeachClass TM
## BLACKLIST! (FOR HEALBOT MODE) - SET THE NAMES OF THE PEOPLE TO BLACKLIST FROM HEALING SERVICES!
## MUST BE IN AN ARRAY - var Blacklist Bob|Frank|Dave
     var Blacklist NULL
########################################################################################
########################################################################################
# THIEF SETTINGS
# AMBUSH TRAINING (Use AMBUSH MOVES in COMBAT - STUN/CLOUT/SLASH)
     var Ambush ON
# SELECT KHRI TO USE (Set as many ON / OFF as you want )
# IT WILL ONLY USE AS MANY KHRI AS YOU CAN HANDLE AT ONCE, PRIORITIZING THE MOST IMPORTANT DEPENDING ON SCENARIO)
     var khriSAGACITY ON
     var khriSTEADY ON
     var khriSTRIKE ON
     var khriFOCUS ON
     var khriELUSION ON
     var khriENDURE ON
     var khriAVOIDANCE ON
     var khriADAPTATION ON
     var khriPROWESS ON
     var khriHASTEN ON
     var khriHARRIER OFF
     var khriSERENITY OFF
     var khriSIGHT ON
     var khriFLIGHT ON
     var khriCALM OFF
     var khriGUILE OFF
     var khriDARKEN ON
     var khriDAMPEN ON
     var khriSHADOWSTEP ON
     var khriELIMINATE OFF
     var khriTERRIFY OFF
     var khriFRIGHT OFF
     var khriINTIMIDATE OFF
     var khriPLUNDER ON
     var khriSAFE OFF
     var khriEVANESCENCE OFF
     var khriCREDENCE OFF
     var khriCUNNING OFF
# USE KHRI DURING TOWN RUN? (ON or OFF) - Turn OFF to Skip using Khri during town run - for Sanowret use
     var Khri.Town ON
########################################################################################
########################################################################################
# BARBARIAN SETTINGS
# USE WHIRLWIND?
     var Whirlwind ON
# USE DUAL WIELD? (ON or OFF) - Dual wield requires 450+ in the weapon
     var DualWield ON
# EXPERTISE COMBOS? (ON or OFF) - Does Barb Expertise Combos (and helps generate IR)
     var Expertise ON
# Set which Forms you want to use (ON or OFF)
# Auto-turns some forms on/off depending on what skills you are training
     var barbEagle ON
     var barbBadger ON
     var barbPanther ON
     var barbPiranha ON
     var barbDragon ON
     var barbMonkey ON
     var barbTurtle OFF
     var barbOwl OFF
     var barbBear ON
     var barbBuffalo OFF
     var barbPython ON
     var barbSwan ON
     var barbToad OFF
     var barbWolverine OFF
# ROARS to use (will only use one)
     var roarEmbrace OFF
     var roarEverild ON
     var roarWail OFF
     var roarScreech OFF
     var roarShriek OFF
     var roarAnger ON
     var roarKuniyo ON
# BERSERKS to use
     var zerkHurricane OFF
     var zerkBlizzard ON
     var zerkFamine ON
     var zerkAvalanche ON
     var zerkTsunami OFF
     var zerkWildfire OFF
     var zerkEarthquake OFF
     var zerkTornado OFF
     var zerkFlashflood ON
     var zerkLandslide ON
     var zerkCyclone OFF
     var zerkDrought OFF
# MEDITATIONS to use (ON or OFF) - WILL ONLY WORK FOR HIGHER LEVEL BARBS
     var medContemplation ON
     var medTenacity ON
     var medSerenity ON
### END OF CHARACTER 15 VARIABLES
### STOP EDITING HERE ~~~ END OF CHARACTER 15 VARIABLES ##########
####################################################################################
####################################################################################
echo **** LOADED %CHARACTER15 VARIABLES
goto END.OF.VARS
}

#############################################################################################################################################################################
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
     endofvars: