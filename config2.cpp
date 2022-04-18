
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
            "CanisterGasoline",
            "Back",
            "SparkPlug",
            "CarBattery",
            "CarRadiator",
            "HeadlightH7",
            "HeadlightH7",
            "LANEvoque2016_Driver",
            "LANEvoque2016_CoDriver",
            "LANEvoque2016_Trunk",
            "LANEvoque2016_Hood",
            "CanisterGasoline",
            "AliceBag_Green",
            "LANEvoque2016_Wheel_1",
            "LANEvoque2016_Wheel_1",
            "LANEvoque2016_Wheel_1",
            "LANEvoque2016_Wheel_1",
            "LANEvoque2016_Wheel_2",
            "LANEvoque2016_Wheel_2",
            "LANEvoque2016_Wheel_2",
            "LANEvoque2016_Wheel_2",
            "LANEvoque2016_Wheel_3",
            "LANEvoque2016_Wheel_3",
            "LANEvoque2016_Wheel_3",
            "LANEvoque2016_Wheel_3"

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

{
	class HouseNoDestruct;
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class CarCoverBase;

	class LANEvoque2016_White_Cover: CarCoverBase
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
            "CanisterGasoline",
            "Back",
            "SparkPlug",
            "CarBattery",
            "CarRadiator",
            "HeadlightH7",
            "HeadlightH7",
            "LANEvoque2016_Driver",
            "LANEvoque2016_CoDriver",
            "LANEvoque2016_Trunk",
            "LANEvoque2016_Hood",
            "CanisterGasoline",
            "AliceBag_Green",
            "LANEvoque2016_Wheel_1",
            "LANEvoque2016_Wheel_1",
            "LANEvoque2016_Wheel_1",
            "LANEvoque2016_Wheel_1",
            "LANEvoque2016_Wheel_2",
            "LANEvoque2016_Wheel_2",
            "LANEvoque2016_Wheel_2",
            "LANEvoque2016_Wheel_2",
            "LANEvoque2016_Wheel_3",
            "LANEvoque2016_Wheel_3",
            "LANEvoque2016_Wheel_3",
            "LANEvoque2016_Wheel_3"

		};
	};
	class LANEvoque2016_White_CoverWinter: LANEvoque2016_White_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class LANEvoque2016_White_CoverCivil: LANEvoque2016_White_Cover
	{
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
		hiddenSelectionsMaterials[] = {"CarCover\data\BlueTarp.rvmat"};
	};







};