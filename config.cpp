
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
	
	class M1114Humvee_Cover: CarCoverBase
	{
		scope = 2;
		displayName = "#str_cfgvehicles_camonet0";
		model = "CarCover\data\HHMVVEEErag_Cover_Cover.p3d";
		attachments[] =
		{
			"CarBattery",
            "CarRadiator",
            "SparkPlug",
            "Reflector_1_1",
            "Reflector_2_1",
            "55galDrum_1",
            "55galDrum_2",
            "CanisterGasoline",
            "M1114Humvee_Driver",
            "M1114Humvee_CoDriver",
            "M1114Humvee_Cargo1",
            "M1114Humvee_Cargo2",
            "M1114Humvee_Hatch",
            "M1114Humvee_Tailgate",
            "M1114Humvee_Trunk",
            "M1114Humvee_Hood",
            "CanisterGasoline",
            "M1114Humvee_Wheel",
            "M1114Humvee_Wheel",
            "M1114Humvee_Wheel",
            "M1114Humvee_Wheel"
		};
	};
	class M1114Humvee_CoverWinter: M1114Humvee_Cover
	{
		hiddenSelections[] = {"Carcover"};
		hiddenSelectionsTextures[] = {"CarCover\data\CarCoverWinter.paa"};
	};
	class M1114Humvee_CoverCivil: M1114Humvee_Cover
	{
		hiddenSelectionsTextures[] = {"CarCover\data\BlueTarp_co.paa"};
		hiddenSelectionsMaterials[] = {"CarCover\data\BlueTarp.rvmat"};
	};







};