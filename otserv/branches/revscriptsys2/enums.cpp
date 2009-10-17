
// This file has been automatically generated by a script.
// Do not make changes to this file manually, as they will be discarded
// as soon as the project is recompiled

#include "otpch.h"
#include "enums.h"

template<> bool RaceType__Base::initialized = false;
template<> std::string RaceType__Base::enum_name = "RaceType";
template<> RaceType__Base::EnumToString RaceType__Base::enum_to_string = RaceType__Base::EnumToString();
template<> RaceType__Base::StringToEnum RaceType__Base::string_to_enum = RaceType__Base::StringToEnum();
template<> RaceType__Base::StringToEnum RaceType__Base::lstring_to_enum= RaceType__Base::StringToEnum();
template<> void RaceType__Base::initialize()
{
	initAddValue(enums::RACE_NONE, "RACE_NONE", true);
	initAddValue(enums::RACE_VENOM , "RACE_VENOM ", true);
	initAddValue(enums::RACE_VENOM , "venom", false);
	initAddValue(enums::RACE_BLOOD, "RACE_BLOOD", true);
	initAddValue(enums::RACE_BLOOD, "blood", false);
	initAddValue(enums::RACE_UNDEAD, "RACE_UNDEAD", true);
	initAddValue(enums::RACE_UNDEAD, "undead", false);
	initAddValue(enums::RACE_FIRE, "RACE_FIRE", true);
	initAddValue(enums::RACE_FIRE, "fire", false);
	initAddValue(enums::RACE_ENERGY, "RACE_ENERGY", true);
	initAddValue(enums::RACE_ENERGY, "energy", false);
}

template<> bool Direction__Base::initialized = false;
template<> std::string Direction__Base::enum_name = "Direction";
template<> Direction__Base::EnumToString Direction__Base::enum_to_string = Direction__Base::EnumToString();
template<> Direction__Base::StringToEnum Direction__Base::string_to_enum = Direction__Base::StringToEnum();
template<> Direction__Base::StringToEnum Direction__Base::lstring_to_enum= Direction__Base::StringToEnum();
template<> void Direction__Base::initialize()
{
	initAddValue(enums::NORTH, "NORTH", true);
	initAddValue(enums::EAST, "EAST", true);
	initAddValue(enums::SOUTH, "SOUTH", true);
	initAddValue(enums::WEST, "WEST", true);
	initAddValue(enums::SOUTHWEST, "SOUTHWEST", true);
	initAddValue(enums::SOUTHEAST, "SOUTHEAST", true);
	initAddValue(enums::NORTHWEST, "NORTHWEST", true);
	initAddValue(enums::NORTHEAST, "NORTHEAST", true);
}

template<> bool CombatType__Base::initialized = false;
template<> std::string CombatType__Base::enum_name = "CombatType";
template<> CombatType__Base::EnumToString CombatType__Base::enum_to_string = CombatType__Base::EnumToString();
template<> CombatType__Base::StringToEnum CombatType__Base::string_to_enum = CombatType__Base::StringToEnum();
template<> CombatType__Base::StringToEnum CombatType__Base::lstring_to_enum= CombatType__Base::StringToEnum();
template<> void CombatType__Base::initialize()
{
	initAddValue(enums::COMBAT_NONE, "COMBAT_NONE", true);
	initAddValue(enums::COMBAT_NONE, "unknown", false);
	initAddValue(enums::COMBAT_PHYSICALDAMAGE, "COMBAT_PHYSICALDAMAGE", true);
	initAddValue(enums::COMBAT_PHYSICALDAMAGE, "physical", false);
	initAddValue(enums::COMBAT_ENERGYDAMAGE, "COMBAT_ENERGYDAMAGE", true);
	initAddValue(enums::COMBAT_ENERGYDAMAGE, "energy", false);
	initAddValue(enums::COMBAT_EARTHDAMAGE, "COMBAT_EARTHDAMAGE", true);
	initAddValue(enums::COMBAT_EARTHDAMAGE, "earth", false);
	initAddValue(enums::COMBAT_FIREDAMAGE, "COMBAT_FIREDAMAGE", true);
	initAddValue(enums::COMBAT_FIREDAMAGE, "fire", false);
	initAddValue(enums::COMBAT_UNDEFINEDDAMAGE, "COMBAT_UNDEFINEDDAMAGE", true);
	initAddValue(enums::COMBAT_UNDEFINEDDAMAGE, "undefined", false);
	initAddValue(enums::COMBAT_LIFEDRAIN, "COMBAT_LIFEDRAIN", true);
	initAddValue(enums::COMBAT_LIFEDRAIN, "life drain", false);
	initAddValue(enums::COMBAT_MANADRAIN, "COMBAT_MANADRAIN", true);
	initAddValue(enums::COMBAT_MANADRAIN, "mana drain", false);
	initAddValue(enums::COMBAT_HEALING, "COMBAT_HEALING", true);
	initAddValue(enums::COMBAT_HEALING, "healing", false);
	initAddValue(enums::COMBAT_DROWNDAMAGE, "COMBAT_DROWNDAMAGE", true);
	initAddValue(enums::COMBAT_DROWNDAMAGE, "drown", false);
	initAddValue(enums::COMBAT_ICEDAMAGE, "COMBAT_ICEDAMAGE", true);
	initAddValue(enums::COMBAT_ICEDAMAGE, "ice", false);
	initAddValue(enums::COMBAT_HOLYDAMAGE, "COMBAT_HOLYDAMAGE", true);
	initAddValue(enums::COMBAT_HOLYDAMAGE, "holy", false);
	initAddValue(enums::COMBAT_DEATHDAMAGE, "COMBAT_DEATHDAMAGE", true);
	initAddValue(enums::COMBAT_DEATHDAMAGE, "death", false);
}

template<> bool CombatParam__Base::initialized = false;
template<> std::string CombatParam__Base::enum_name = "CombatParam";
template<> CombatParam__Base::EnumToString CombatParam__Base::enum_to_string = CombatParam__Base::EnumToString();
template<> CombatParam__Base::StringToEnum CombatParam__Base::string_to_enum = CombatParam__Base::StringToEnum();
template<> CombatParam__Base::StringToEnum CombatParam__Base::lstring_to_enum= CombatParam__Base::StringToEnum();
template<> void CombatParam__Base::initialize()
{
	initAddValue(enums::COMBATPARAM_COMBATTYPE, "COMBATPARAM_COMBATTYPE", true);
	initAddValue(enums::COMBATPARAM_EFFECT, "COMBATPARAM_EFFECT", true);
	initAddValue(enums::COMBATPARAM_DISTANCEEFFECT, "COMBATPARAM_DISTANCEEFFECT", true);
	initAddValue(enums::COMBATPARAM_BLOCKEDBYSHIELD, "COMBATPARAM_BLOCKEDBYSHIELD", true);
	initAddValue(enums::COMBATPARAM_BLOCKEDBYARMOR, "COMBATPARAM_BLOCKEDBYARMOR", true);
	initAddValue(enums::COMBATPARAM_TARGETCASTERORTOPMOST, "COMBATPARAM_TARGETCASTERORTOPMOST", true);
	initAddValue(enums::COMBATPARAM_CREATEITEM, "COMBATPARAM_CREATEITEM", true);
	initAddValue(enums::COMBATPARAM_AGGRESSIVE, "COMBATPARAM_AGGRESSIVE", true);
	initAddValue(enums::COMBATPARAM_DISPEL, "COMBATPARAM_DISPEL", true);
	initAddValue(enums::COMBATPARAM_USECHARGES, "COMBATPARAM_USECHARGES", true);
	initAddValue(enums::COMBATPARAM_HITEFFECT, "COMBATPARAM_HITEFFECT", true);
	initAddValue(enums::COMBATPARAM_HITTEXTCOLOR, "COMBATPARAM_HITTEXTCOLOR", true);
}

template<> bool BlockType__Base::initialized = false;
template<> std::string BlockType__Base::enum_name = "BlockType";
template<> BlockType__Base::EnumToString BlockType__Base::enum_to_string = BlockType__Base::EnumToString();
template<> BlockType__Base::StringToEnum BlockType__Base::string_to_enum = BlockType__Base::StringToEnum();
template<> BlockType__Base::StringToEnum BlockType__Base::lstring_to_enum= BlockType__Base::StringToEnum();
template<> void BlockType__Base::initialize()
{
	initAddValue(enums::BLOCK_NONE, "BLOCK_NONE", true);
	initAddValue(enums::BLOCK_DEFENSE, "BLOCK_DEFENSE", true);
	initAddValue(enums::BLOCK_ARMOR, "BLOCK_ARMOR", true);
	initAddValue(enums::BLOCK_IMMUNITY, "BLOCK_IMMUNITY", true);
}

template<> bool ViolationAction__Base::initialized = false;
template<> std::string ViolationAction__Base::enum_name = "ViolationAction";
template<> ViolationAction__Base::EnumToString ViolationAction__Base::enum_to_string = ViolationAction__Base::EnumToString();
template<> ViolationAction__Base::StringToEnum ViolationAction__Base::string_to_enum = ViolationAction__Base::StringToEnum();
template<> ViolationAction__Base::StringToEnum ViolationAction__Base::lstring_to_enum= ViolationAction__Base::StringToEnum();
template<> void ViolationAction__Base::initialize()
{
	initAddValue(enums::ACTION_NOTATION, "ACTION_NOTATION", true);
	initAddValue(enums::ACTION_NAMEREPORT, "ACTION_NAMEREPORT", true);
	initAddValue(enums::ACTION_BANISHMENT, "ACTION_BANISHMENT", true);
	initAddValue(enums::ACTION_BANREPORT, "ACTION_BANREPORT", true);
	initAddValue(enums::ACTION_BANFINAL, "ACTION_BANFINAL", true);
	initAddValue(enums::ACTION_BANREPORTFINAL, "ACTION_BANREPORTFINAL", true);
	initAddValue(enums::ACTION_STATEMENT, "ACTION_STATEMENT", true);
	initAddValue(enums::ACTION_DELETION, "ACTION_DELETION", true);
}

template<> bool SkillType__Base::initialized = false;
template<> std::string SkillType__Base::enum_name = "SkillType";
template<> SkillType__Base::EnumToString SkillType__Base::enum_to_string = SkillType__Base::EnumToString();
template<> SkillType__Base::StringToEnum SkillType__Base::string_to_enum = SkillType__Base::StringToEnum();
template<> SkillType__Base::StringToEnum SkillType__Base::lstring_to_enum= SkillType__Base::StringToEnum();
template<> void SkillType__Base::initialize()
{
	initAddValue(enums::SKILL_FIST, "SKILL_FIST", true);
	initAddValue(enums::SKILL_FIST, "fist fighting", false);
	initAddValue(enums::SKILL_FIST, "fist", false);
	initAddValue(enums::SKILL_CLUB, "SKILL_CLUB", true);
	initAddValue(enums::SKILL_CLUB, "club fighting", false);
	initAddValue(enums::SKILL_CLUB, "club", false);
	initAddValue(enums::SKILL_SWORD, "SKILL_SWORD", true);
	initAddValue(enums::SKILL_SWORD, "sword fighting", false);
	initAddValue(enums::SKILL_SWORD, "sword", false);
	initAddValue(enums::SKILL_AXE, "SKILL_AXE", true);
	initAddValue(enums::SKILL_AXE, "axe fighting", false);
	initAddValue(enums::SKILL_AXE, "axe", false);
	initAddValue(enums::SKILL_DIST, "SKILL_DIST", true);
	initAddValue(enums::SKILL_DIST, "distance fighting", false);
	initAddValue(enums::SKILL_DIST, "distance", false);
	initAddValue(enums::SKILL_SHIELD, "SKILL_SHIELD", true);
	initAddValue(enums::SKILL_SHIELD, "shielding", false);
	initAddValue(enums::SKILL_FISH, "SKILL_FISH", true);
	initAddValue(enums::SKILL_FISH, "fishing", false);
}

template<> bool LevelType__Base::initialized = false;
template<> std::string LevelType__Base::enum_name = "LevelType";
template<> LevelType__Base::EnumToString LevelType__Base::enum_to_string = LevelType__Base::EnumToString();
template<> LevelType__Base::StringToEnum LevelType__Base::string_to_enum = LevelType__Base::StringToEnum();
template<> LevelType__Base::StringToEnum LevelType__Base::lstring_to_enum= LevelType__Base::StringToEnum();
template<> void LevelType__Base::initialize()
{
	initAddValue(enums::LEVEL_FIST, "LEVEL_FIST", true);
	initAddValue(enums::LEVEL_CLUB, "LEVEL_CLUB", true);
	initAddValue(enums::LEVEL_SWORD, "LEVEL_SWORD", true);
	initAddValue(enums::LEVEL_AXE, "LEVEL_AXE", true);
	initAddValue(enums::LEVEL_DIST, "LEVEL_DIST", true);
	initAddValue(enums::LEVEL_SHIELD, "LEVEL_SHIELD", true);
	initAddValue(enums::LEVEL_FISH, "LEVEL_FISH", true);
	initAddValue(enums::LEVEL_MAGIC, "LEVEL_MAGIC", true);
	initAddValue(enums::LEVEL_EXPERIENCE, "LEVEL_EXPERIENCE", true);
}

template<> bool PlayerStatType__Base::initialized = false;
template<> std::string PlayerStatType__Base::enum_name = "PlayerStatType";
template<> PlayerStatType__Base::EnumToString PlayerStatType__Base::enum_to_string = PlayerStatType__Base::EnumToString();
template<> PlayerStatType__Base::StringToEnum PlayerStatType__Base::string_to_enum = PlayerStatType__Base::StringToEnum();
template<> PlayerStatType__Base::StringToEnum PlayerStatType__Base::lstring_to_enum= PlayerStatType__Base::StringToEnum();
template<> void PlayerStatType__Base::initialize()
{
	initAddValue(enums::STAT_MAXHITPOINTS, "STAT_MAXHITPOINTS", true);
	initAddValue(enums::STAT_MAXMANAPOINTS, "STAT_MAXMANAPOINTS", true);
	initAddValue(enums::STAT_SOULPOINTS, "STAT_SOULPOINTS", true);
	initAddValue(enums::STAT_MAGICPOINTS, "STAT_MAGICPOINTS", true);
}

template<> bool LossType__Base::initialized = false;
template<> std::string LossType__Base::enum_name = "LossType";
template<> LossType__Base::EnumToString LossType__Base::enum_to_string = LossType__Base::EnumToString();
template<> LossType__Base::StringToEnum LossType__Base::string_to_enum = LossType__Base::StringToEnum();
template<> LossType__Base::StringToEnum LossType__Base::lstring_to_enum= LossType__Base::StringToEnum();
template<> void LossType__Base::initialize()
{
	initAddValue(enums::LOSS_EXPERIENCE, "LOSS_EXPERIENCE", true);
	initAddValue(enums::LOSS_MANASPENT, "LOSS_MANASPENT", true);
	initAddValue(enums::LOSS_SKILLTRIES, "LOSS_SKILLTRIES", true);
	initAddValue(enums::LOSS_ITEMS, "LOSS_ITEMS", true);
	initAddValue(enums::LOSS_CONTAINERS, "LOSS_CONTAINERS", true);
}

template<> bool PlayerSex__Base::initialized = false;
template<> std::string PlayerSex__Base::enum_name = "PlayerSex";
template<> PlayerSex__Base::EnumToString PlayerSex__Base::enum_to_string = PlayerSex__Base::EnumToString();
template<> PlayerSex__Base::StringToEnum PlayerSex__Base::string_to_enum = PlayerSex__Base::StringToEnum();
template<> PlayerSex__Base::StringToEnum PlayerSex__Base::lstring_to_enum= PlayerSex__Base::StringToEnum();
template<> void PlayerSex__Base::initialize()
{
	initAddValue(enums::SEX_FEMALE, "SEX_FEMALE", true);
	initAddValue(enums::SEX_FEMALE, "female", false);
	initAddValue(enums::SEX_MALE, "SEX_MALE", true);
	initAddValue(enums::SEX_MALE, "male", false);
	initAddValue(enums::SEX_FEMALE_GAMEMASTER, "SEX_FEMALE_GAMEMASTER", true);
	initAddValue(enums::SEX_FEMALE_GAMEMASTER, "femalegm", false);
	initAddValue(enums::SEX_MALE_GAMEMASTER, "SEX_MALE_GAMEMASTER", true);
	initAddValue(enums::SEX_MALE_GAMEMASTER, "malegm", false);
	initAddValue(enums::SEX_FEMALE_MANAGER, "SEX_FEMALE_MANAGER", true);
	initAddValue(enums::SEX_FEMALE_MANAGER, "femalecm", false);
	initAddValue(enums::SEX_MALE_MANAGER, "SEX_MALE_MANAGER", true);
	initAddValue(enums::SEX_MALE_MANAGER, "malecm", false);
	initAddValue(enums::SEX_FEMALE_GOD, "SEX_FEMALE_GOD", true);
	initAddValue(enums::SEX_FEMALE_GOD, "femalegod", false);
	initAddValue(enums::SEX_MALE_GOD, "SEX_MALE_GOD", true);
	initAddValue(enums::SEX_MALE_GOD, "malegod", false);
}

template<> bool ChaseMode__Base::initialized = false;
template<> std::string ChaseMode__Base::enum_name = "ChaseMode";
template<> ChaseMode__Base::EnumToString ChaseMode__Base::enum_to_string = ChaseMode__Base::EnumToString();
template<> ChaseMode__Base::StringToEnum ChaseMode__Base::string_to_enum = ChaseMode__Base::StringToEnum();
template<> ChaseMode__Base::StringToEnum ChaseMode__Base::lstring_to_enum= ChaseMode__Base::StringToEnum();
template<> void ChaseMode__Base::initialize()
{
	initAddValue(enums::CHASEMODE_STANDSTILL, "CHASEMODE_STANDSTILL", true);
	initAddValue(enums::CHASEMODE_FOLLOW, "CHASEMODE_FOLLOW", true);
}

template<> bool FightMode__Base::initialized = false;
template<> std::string FightMode__Base::enum_name = "FightMode";
template<> FightMode__Base::EnumToString FightMode__Base::enum_to_string = FightMode__Base::EnumToString();
template<> FightMode__Base::StringToEnum FightMode__Base::string_to_enum = FightMode__Base::StringToEnum();
template<> FightMode__Base::StringToEnum FightMode__Base::lstring_to_enum= FightMode__Base::StringToEnum();
template<> void FightMode__Base::initialize()
{
	initAddValue(enums::FIGHTMODE_ATTACK, "FIGHTMODE_ATTACK", true);
	initAddValue(enums::FIGHTMODE_BALANCED, "FIGHTMODE_BALANCED", true);
	initAddValue(enums::FIGHTMODE_DEFENSE, "FIGHTMODE_DEFENSE", true);
}

template<> bool TradeState__Base::initialized = false;
template<> std::string TradeState__Base::enum_name = "TradeState";
template<> TradeState__Base::EnumToString TradeState__Base::enum_to_string = TradeState__Base::EnumToString();
template<> TradeState__Base::StringToEnum TradeState__Base::string_to_enum = TradeState__Base::StringToEnum();
template<> TradeState__Base::StringToEnum TradeState__Base::lstring_to_enum= TradeState__Base::StringToEnum();
template<> void TradeState__Base::initialize()
{
	initAddValue(enums::TRADE_NONE, "TRADE_NONE", true);
	initAddValue(enums::TRADE_INITIATED, "TRADE_INITIATED", true);
	initAddValue(enums::TRADE_ACCEPT, "TRADE_ACCEPT", true);
	initAddValue(enums::TRADE_ACKNOWLEDGE, "TRADE_ACKNOWLEDGE", true);
	initAddValue(enums::TRADE_TRANSFER, "TRADE_TRANSFER", true);
}

template<> bool SlotType__Base::initialized = false;
template<> std::string SlotType__Base::enum_name = "SlotType";
template<> SlotType__Base::EnumToString SlotType__Base::enum_to_string = SlotType__Base::EnumToString();
template<> SlotType__Base::StringToEnum SlotType__Base::string_to_enum = SlotType__Base::StringToEnum();
template<> SlotType__Base::StringToEnum SlotType__Base::lstring_to_enum= SlotType__Base::StringToEnum();
template<> void SlotType__Base::initialize()
{
	initAddValue(enums::SLOT_WHEREEVER, "SLOT_WHEREEVER", true);
	initAddValue(enums::SLOT_HEAD, "SLOT_HEAD", true);
	initAddValue(enums::SLOT_NECKLACE, "SLOT_NECKLACE", true);
	initAddValue(enums::SLOT_BACKPACK, "SLOT_BACKPACK", true);
	initAddValue(enums::SLOT_ARMOR, "SLOT_ARMOR", true);
	initAddValue(enums::SLOT_RIGHT, "SLOT_RIGHT", true);
	initAddValue(enums::SLOT_LEFT, "SLOT_LEFT", true);
	initAddValue(enums::SLOT_LEGS, "SLOT_LEGS", true);
	initAddValue(enums::SLOT_FEET, "SLOT_FEET", true);
	initAddValue(enums::SLOT_RING, "SLOT_RING", true);
	initAddValue(enums::SLOT_AMMO, "SLOT_AMMO", true);
	initAddValue(enums::SLOT_HAND, "SLOT_HAND", true);
	initAddValue(enums::SLOT_TWO_HAND, "SLOT_TWO_HAND", true);
	initAddValue(enums::SLOT_FIRST, "SLOT_FIRST", true);
	initAddValue(enums::SLOT_LAST, "SLOT_LAST", true);
}

template<> bool SlotPosition__Base::initialized = false;
template<> std::string SlotPosition__Base::enum_name = "SlotPosition";
template<> SlotPosition__Base::EnumToString SlotPosition__Base::enum_to_string = SlotPosition__Base::EnumToString();
template<> SlotPosition__Base::StringToEnum SlotPosition__Base::string_to_enum = SlotPosition__Base::StringToEnum();
template<> SlotPosition__Base::StringToEnum SlotPosition__Base::lstring_to_enum= SlotPosition__Base::StringToEnum();
template<> void SlotPosition__Base::initialize()
{
	initAddValue(enums::SLOTPOSITION_NONE, "SLOTPOSITION_NONE", true);
	initAddValue(enums::SLOTPOSITION_NONE, "none", false);
	initAddValue(enums::SLOTPOSITION_HEAD, "SLOTPOSITION_HEAD", true);
	initAddValue(enums::SLOTPOSITION_HEAD, "head", false);
	initAddValue(enums::SLOTPOSITION_NECKLACE, "SLOTPOSITION_NECKLACE", true);
	initAddValue(enums::SLOTPOSITION_NECKLACE, "necklace", false);
	initAddValue(enums::SLOTPOSITION_BACKPACK, "SLOTPOSITION_BACKPACK", true);
	initAddValue(enums::SLOTPOSITION_BACKPACK, "backpack", false);
	initAddValue(enums::SLOTPOSITION_ARMOR, "SLOTPOSITION_ARMOR", true);
	initAddValue(enums::SLOTPOSITION_ARMOR, "armor", false);
	initAddValue(enums::SLOTPOSITION_RIGHT, "SLOTPOSITION_RIGHT", true);
	initAddValue(enums::SLOTPOSITION_RIGHT, "right-hand", false);
	initAddValue(enums::SLOTPOSITION_LEFT, "SLOTPOSITION_LEFT", true);
	initAddValue(enums::SLOTPOSITION_LEFT, "left-hand", false);
	initAddValue(enums::SLOTPOSITION_LEGS, "SLOTPOSITION_LEGS", true);
	initAddValue(enums::SLOTPOSITION_LEGS, "legs", false);
	initAddValue(enums::SLOTPOSITION_FEET, "SLOTPOSITION_FEET", true);
	initAddValue(enums::SLOTPOSITION_FEET, "feet", false);
	initAddValue(enums::SLOTPOSITION_RING, "SLOTPOSITION_RING", true);
	initAddValue(enums::SLOTPOSITION_RING, "ring", false);
	initAddValue(enums::SLOTPOSITION_AMMO, "SLOTPOSITION_AMMO", true);
	initAddValue(enums::SLOTPOSITION_AMMO, "ammo", false);
	initAddValue(enums::SLOTPOSITION_DEPOT, "SLOTPOSITION_DEPOT", true);
	initAddValue(enums::SLOTPOSITION_DEPOT, "depot", false);
	initAddValue(enums::SLOTPOSITION_TWO_HAND, "SLOTPOSITION_TWO_HAND", true);
	initAddValue(enums::SLOTPOSITION_TWO_HAND, "two-hand", false);
	initAddValue(enums::SLOTPOSITION_HAND, "SLOTPOSITION_HAND", true);
	initAddValue(enums::SLOTPOSITION_HAND, "hand", false);
	initAddValue(enums::SLOTPOSITION_WHEREEVER, "SLOTPOSITION_WHEREEVER", true);
	initAddValue(enums::SLOTPOSITION_WHEREEVER, "any", false);
	initAddValue(enums::SLOTPOSITION_WHEREEVER, "anywhere", false);
}

template<> bool TileProp__Base::initialized = false;
template<> std::string TileProp__Base::enum_name = "TileProp";
template<> TileProp__Base::EnumToString TileProp__Base::enum_to_string = TileProp__Base::EnumToString();
template<> TileProp__Base::StringToEnum TileProp__Base::string_to_enum = TileProp__Base::StringToEnum();
template<> TileProp__Base::StringToEnum TileProp__Base::lstring_to_enum= TileProp__Base::StringToEnum();
template<> void TileProp__Base::initialize()
{
	initAddValue(enums::TILEPROP_NONE, "TILEPROP_NONE", true);
	initAddValue(enums::TILEPROP_PROTECTIONZONE, "TILEPROP_PROTECTIONZONE", true);
	initAddValue(enums::TILEPROP_DEPRECATED, "TILEPROP_DEPRECATED", true);
	initAddValue(enums::TILEPROP_NOPVPZONE, "TILEPROP_NOPVPZONE", true);
	initAddValue(enums::TILEPROP_NOLOGOUT, "TILEPROP_NOLOGOUT", true);
	initAddValue(enums::TILEPROP_PVPZONE, "TILEPROP_PVPZONE", true);
	initAddValue(enums::TILEPROP_REFRESH, "TILEPROP_REFRESH", true);
	initAddValue(enums::TILEPROP_POSITIONCHANGE, "TILEPROP_POSITIONCHANGE", true);
	initAddValue(enums::TILEPROP_FLOORCHANGE, "TILEPROP_FLOORCHANGE", true);
	initAddValue(enums::TILEPROP_FLOORCHANGE_DOWN, "TILEPROP_FLOORCHANGE_DOWN", true);
	initAddValue(enums::TILEPROP_FLOORCHANGE_NORTH, "TILEPROP_FLOORCHANGE_NORTH", true);
	initAddValue(enums::TILEPROP_FLOORCHANGE_SOUTH, "TILEPROP_FLOORCHANGE_SOUTH", true);
	initAddValue(enums::TILEPROP_FLOORCHANGE_EAST, "TILEPROP_FLOORCHANGE_EAST", true);
	initAddValue(enums::TILEPROP_FLOORCHANGE_WEST, "TILEPROP_FLOORCHANGE_WEST", true);
	initAddValue(enums::TILEPROP_BLOCKSOLID, "TILEPROP_BLOCKSOLID", true);
	initAddValue(enums::TILEPROP_BLOCKPATH, "TILEPROP_BLOCKPATH", true);
	initAddValue(enums::TILEPROP_VERTICAL, "TILEPROP_VERTICAL", true);
	initAddValue(enums::TILEPROP_HORIZONTAL, "TILEPROP_HORIZONTAL", true);
	initAddValue(enums::TILEPROP_BLOCKPROJECTILE, "TILEPROP_BLOCKPROJECTILE", true);
	initAddValue(enums::TILEPROP_BLOCKSOLIDNOTMOVEABLE, "TILEPROP_BLOCKSOLIDNOTMOVEABLE", true);
	initAddValue(enums::TILEPROP_BLOCKPATHNOTMOVEABLE, "TILEPROP_BLOCKPATHNOTMOVEABLE", true);
	initAddValue(enums::TILEPROP_BLOCKPATHNOTFIELD, "TILEPROP_BLOCKPATHNOTFIELD", true);
	initAddValue(enums::TILEPROP_HOUSE_TILE, "TILEPROP_HOUSE_TILE", true);
	initAddValue(enums::TILEPROP_DYNAMIC_TILE, "TILEPROP_DYNAMIC_TILE", true);
	initAddValue(enums::TILEPROP_INDEXED_TILE, "TILEPROP_INDEXED_TILE", true);
}

template<> bool ZoneType__Base::initialized = false;
template<> std::string ZoneType__Base::enum_name = "ZoneType";
template<> ZoneType__Base::EnumToString ZoneType__Base::enum_to_string = ZoneType__Base::EnumToString();
template<> ZoneType__Base::StringToEnum ZoneType__Base::string_to_enum = ZoneType__Base::StringToEnum();
template<> ZoneType__Base::StringToEnum ZoneType__Base::lstring_to_enum= ZoneType__Base::StringToEnum();
template<> void ZoneType__Base::initialize()
{
	initAddValue(enums::ZONE_PROTECTION, "ZONE_PROTECTION", true);
	initAddValue(enums::ZONE_NOPVP, "ZONE_NOPVP", true);
	initAddValue(enums::ZONE_PVP, "ZONE_PVP", true);
	initAddValue(enums::ZONE_NOLOGOUT, "ZONE_NOLOGOUT", true);
	initAddValue(enums::ZONE_NORMAL, "ZONE_NORMAL", true);
}

template<> bool WorldType__Base::initialized = false;
template<> std::string WorldType__Base::enum_name = "WorldType";
template<> WorldType__Base::EnumToString WorldType__Base::enum_to_string = WorldType__Base::EnumToString();
template<> WorldType__Base::StringToEnum WorldType__Base::string_to_enum = WorldType__Base::StringToEnum();
template<> WorldType__Base::StringToEnum WorldType__Base::lstring_to_enum= WorldType__Base::StringToEnum();
template<> void WorldType__Base::initialize()
{
	initAddValue(enums::WORLD_TYPE_NOPVP, "WORLD_TYPE_NOPVP", true);
	initAddValue(enums::WORLD_TYPE_PVP, "WORLD_TYPE_PVP", true);
	initAddValue(enums::WORLD_TYPE_PVPE, "WORLD_TYPE_PVPE", true);
}

template<> bool Script::ListenerType__Base::initialized = false;
template<> std::string Script::ListenerType__Base::enum_name = "ListenerType";
template<> Script::ListenerType__Base::EnumToString Script::ListenerType__Base::enum_to_string = Script::ListenerType__Base::EnumToString();
template<> Script::ListenerType__Base::StringToEnum Script::ListenerType__Base::string_to_enum = Script::ListenerType__Base::StringToEnum();
template<> Script::ListenerType__Base::StringToEnum Script::ListenerType__Base::lstring_to_enum= Script::ListenerType__Base::StringToEnum();
template<> void Script::ListenerType__Base::initialize()
{
	initAddValue(Script::enums::ON_SAY_LISTENER, "ON_SAY_LISTENER", true);
	initAddValue(Script::enums::ON_USE_ITEM_LISTENER, "ON_USE_ITEM_LISTENER", true);
	initAddValue(Script::enums::ON_EQUIP_ITEM_LISTENER, "ON_EQUIP_ITEM_LISTENER", true);
	initAddValue(Script::enums::ON_MOVE_CREATURE_LISTENER, "ON_MOVE_CREATURE_LISTENER", true);
	initAddValue(Script::enums::ON_MOVE_ITEM_LISTENER, "ON_MOVE_ITEM_LISTENER", true);
	initAddValue(Script::enums::ON_OPEN_CHANNEL_LISTENER, "ON_OPEN_CHANNEL_LISTENER", true);
	initAddValue(Script::enums::ON_CLOSE_CHANNEL_LISTENER, "ON_CLOSE_CHANNEL_LISTENER", true);
	initAddValue(Script::enums::ON_ACCOUNT_LOGIN_LISTENER, "ON_ACCOUNT_LOGIN_LISTENER", true);
	initAddValue(Script::enums::ON_LOGIN_LISTENER, "ON_LOGIN_LISTENER", true);
	initAddValue(Script::enums::ON_LOGOUT_LISTENER, "ON_LOGOUT_LISTENER", true);
	initAddValue(Script::enums::ON_CHANGE_OUTFIT_LISTENER, "ON_CHANGE_OUTFIT_LISTENER", true);
	initAddValue(Script::enums::ON_LOOK_LISTENER, "ON_LOOK_LISTENER", true);
	initAddValue(Script::enums::ON_LOOKED_AT_LISTENER, "ON_LOOKED_AT_LISTENER", true);
	initAddValue(Script::enums::ON_TURN_LISTENER, "ON_TURN_LISTENER", true);
	initAddValue(Script::enums::ON_LOAD_LISTENER, "ON_LOAD_LISTENER", true);
	initAddValue(Script::enums::ON_UNLOAD_LISTENER, "ON_UNLOAD_LISTENER", true);
	initAddValue(Script::enums::ON_SPAWN_LISTENER, "ON_SPAWN_LISTENER", true);
	initAddValue(Script::enums::ON_KILLED_LISTENER, "ON_KILLED_LISTENER", true);
	initAddValue(Script::enums::ON_DEATH_BY_LISTENER, "ON_DEATH_BY_LISTENER", true);
	initAddValue(Script::enums::ON_KILL_LISTENER, "ON_KILL_LISTENER", true);
	initAddValue(Script::enums::ON_DEATH_LISTENER, "ON_DEATH_LISTENER", true);
	initAddValue(Script::enums::ON_ADVANCE_LISTENER, "ON_ADVANCE_LISTENER", true);
	initAddValue(Script::enums::ON_SHOP_PURCHASE_LISTENER, "ON_SHOP_PURCHASE_LISTENER", true);
	initAddValue(Script::enums::ON_SHOP_SELL_LISTENER, "ON_SHOP_SELL_LISTENER", true);
	initAddValue(Script::enums::ON_SHOP_CLOSE_LISTENER, "ON_SHOP_CLOSE_LISTENER", true);
	initAddValue(Script::enums::ON_TRADE_BEGIN_LISTENER, "ON_TRADE_BEGIN_LISTENER", true);
	initAddValue(Script::enums::ON_TRADE_END_LISTENER, "ON_TRADE_END_LISTENER", true);
	initAddValue(Script::enums::ON_ATTACK_LISTENER, "ON_ATTACK_LISTENER", true);
	initAddValue(Script::enums::ON_DAMAGE_LISTENER, "ON_DAMAGE_LISTENER", true);
	initAddValue(Script::enums::ON_CONDITION_LISTENER, "ON_CONDITION_LISTENER", true);
	initAddValue(Script::enums::ON_THINK_LISTENER, "ON_THINK_LISTENER", true);
	initAddValue(Script::enums::ON_HEAR_LISTENER, "ON_HEAR_LISTENER", true);
	initAddValue(Script::enums::ON_SPOT_CREATURE_LISTENER, "ON_SPOT_CREATURE_LISTENER", true);
	initAddValue(Script::enums::ON_LOSE_CREATURE_LISTENER, "ON_LOSE_CREATURE_LISTENER", true);
}

