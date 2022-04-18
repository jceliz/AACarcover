
#define _ARMA_

class CfgPatches
{
	class AriesAwakensCarCover
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","CarCover"};
	};
};
class CfgMods
{
	class AriesAwakensCarCover
	{
		dir = "AriesAwakensCarCover";
		author = "Special thanks to HunterCZ";
		version = "0.1";
		extra = 0;
		type = "mod";
		class defs
		{};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class CarCoverBase;
	
	class LANEvoque_Cover: CarCoverBase
	{
		scope = 2;
		displayName = "#str_cfgvehicles_camonet0";
		model = "CarCover\data\HMVVEEErag_Cover.p3d";
		attachments[] =
		{
			"Shoulder1",
            "Shoulder2",
            "Shoulder3",
            "Shoulder4",
			"CarBattery",
            "CarRadiator",
            "HeadlightH7",
            "SparkPlug"
		};
	};
	class LANEvoque_CoverWinter: LANEvoque_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class LANEvoque_CoverCivil: LANEvoque_Cover
	{
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
		hiddenSelectionsMaterials[] = {"CarCover\data\BlueTarp.rvmat"};
	};







};