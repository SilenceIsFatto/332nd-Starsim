class cfgPatches
{
	class MS_RepublicArmour
	{
		units[] = 
		{
			"332nd_Base",
			"332nd_Medic"
		};
		weapons[] = 
		{
			""
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class cfgVehicles
{
	class B_Soldier_base_F;
	class 332nd_Base : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 1;
		scopeCurator = 2;
		displayName = "332nd Base";
		faction = "BLU_F";
		editorSubcategory = "";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		model = "swlb_clones\swlb_clone_uniform.p3d";
		uniformClass = "332_mainUniform"; //the uniform item
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\SWMod\camo1_co.jpg"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {Chemlight_green, Chemlight_green};				// What ammunition the character has.
		respawnMagazines[] = {Chemlight_green, Chemlight_green};
		linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class 332nd_Medic : 332nd_Base
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 1;
		scopeCurator = 2;
		displayName = "332nd Medic";
		faction = "BLU_F";
		editorSubcategory = "";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		model = "swlb_clones\swlb_clone_uniform.p3d";
		uniformClass = "332_medicUniform"; //the uniform item
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\SWMod\camo1_medic_co.jpg"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {Chemlight_green, Chemlight_green};				// What ammunition the character has.
		respawnMagazines[] = {Chemlight_green, Chemlight_green};
		linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
};

class cfgWeapons
{
	class ls_gar_phase2_helmet;
	class ls_gar_arc_helmet;
	class ls_gar_scout_helmet;
	class SWLB_clone_commander_armor_black;
	class SWLB_clone_ARF_P1_helmet;
	class lsd_gar_airborne_helmet;
	class SWLB_clone_BARC_helmet;
	class ls_gar_barc_helmet;
	class SWLB_clone_arc_armor;
	class ls_gar_desert_helmet;
	class SWLB_clone_pilot_P2_helmet;
	class Uniform_Base;
	class UniformItem;
	class 332_mainUniform : Uniform_Base
	{
		scope = 2;
		displayName = "332nd Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "332nd_Base"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class 332_medicUniform : Uniform_Base
	{
		scope = 2;
		displayName = "332nd Uniform (Medic)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "332nd_Medic"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class republic_helmet_pilot_332 : SWLB_clone_pilot_P2_helmet
	{
		displayName = "Republic Helmet (Pilot/332nd)";
		author = "LS Team/Silence";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"SWMod\helmet_pilot_co.jpg"};
	};
	class republic_armour_arc_332 : SWLB_clone_arc_armor
	{
		displayName = "Republic Armour (ARC/332nd)";
		author = "LS Team/Silence";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"SWMod\arc_accessories_co.jpg", "SWMod\officer_accessories_cyan_co.jpg"};
	};
	class republic_helmet_desert_332 : ls_gar_desert_helmet
	{
		displayName = "Republic Helmet (Hazard/332nd)";
		author = "LS Team/Silence";
		hiddenSelections[] = {"Camo1", "visor"};
		hiddenSelectionsTextures[] = {"SWMod\helmet_desert_co.jpg", "ls_armor_bluefor\helmet\gar\desert\data\visor_co.paa"};
	};
	class republic_helmet_barc_332 : SWLB_clone_BARC_helmet
	{
		displayName = "Republic Helmet (BARC/332nd)";
		author = "LS Team/Silence";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"SWMod\helmet_barc_co.jpg"};
	};
	class republic_helmet_airborne_332 : lsd_gar_airborne_helmet
	{
		displayName = "Republic Helmet (Airborne/332nd)";
		author = "LS Team/Silence";
		hiddenSelections[] = {"camo1", "visor"};
		hiddenSelectionsTextures[] = {"SWMod\helmet_airborne_co.jpg", "ls_armor_bluefor\helmet\gar\airborne\data\visor_co.paa"};
	};
	class republic_helmet_arf_332 : SWLB_clone_ARF_P1_helmet
	{
		displayName = "Republic Helmet (ARF/332nd)";
		author = "LS Team/Silence";
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"SWMod\helmet_arf_co.jpg", "SWMod\helmet_arf_co.jpg", ""};
	};
	class republic_pauldron_332 : SWLB_clone_commander_armor_black
	{
		displayName = "Republic Pauldron (332nd)";
		author = "LS Team/Silence";
		hiddenSelections[] = {"camo1", "rank"};
		hiddenSelectionsTextures[] = {"SWMod\officer_accessories_cyan_co.jpg", ""};
	};
	class republic_helmet_332 : ls_gar_phase2_helmet
	{	
		displayName = "Republic Helmet (332nd)";
		author = "LS Team/Silence";
		hiddenSelections[] = {"camo1", "visor"};
		hiddenSelectionsTextures[] = {"SWMod\helmet_standard_co.jpg","ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"};
	};
	class republic_helmet_arc_332 : ls_gar_arc_helmet
	{
		displayName = "Republic Helmet (ARC/332nd)";
		author = "LS Team/Silence";
		hiddenSelections[] = {"camo1", "visor"};
		hiddenSelectionsTextures[] = {"SWMod\helmet_arc_co.jpg","ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"};
	};
	class republic_helmet_scout_332 : ls_gar_scout_helmet
	{
		displayName = "Republic Helmet (Scout/332nd)";
		author = "LS Team/Silence";
		hiddenSelections[] = {"camo1", "camo2", "visor"};
		hiddenSelectionsTextures[] = {"SWMod\helmet_sniper_co.jpg","SWMod\helmet_sniper_co.jpg","ls_armor_bluefor\helmet\gar\scout\Data\visor_co.paa"};
	};
};