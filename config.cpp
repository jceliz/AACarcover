
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
	
	class HMVVEEErag_Cover: CarCoverBase
	{
		scope = 2;
		displayName = "#str_cfgvehicles_camonet0";
		model = "CarCover\data\HMVVEEErag_Cover.p3d";
		attachments[] =
		{
			"CarBattery",
            "CarRadiator",
            "SparkPlug"
		};
	};
	class HMVVEEErag_CoverWinter: HMVVEEErag_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class HMVVEEErag_CoverCivil: HMVVEEErag_Cover
	{
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
		hiddenSelectionsMaterials[] = {"CarCover\data\BlueTarp.rvmat"};
	};







};