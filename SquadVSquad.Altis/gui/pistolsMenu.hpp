class pistols_menu
{
	idd = 56000;
	movingEnabled = false;
	enableSimulation = true;
	
	class controlsBackground
	{
		class Mainbackground : RscText
		{
			colorBackground[] = {0.5,0.5,0.5,0.7};
			idc = -1;
			x = 0.1; y = 0.2 + (11 / 250);
			w = 0.72; h = 0.6 - (22 / 250);
		};
		
		class FilterList : RscCombo
		{
			idc = 56001;
			colorBackground[] = {0,0,0,0.7};
			onLBSelChanged = "_this call life_fnc_weaponShopFilter";
			x = 50; y = 0.64;
			w = 0.3; h = 0.035;
		};
		
		class Title : RscTitle
		{
			colorBackground[] = {0,0,0,0.7};
			idc = 56002;
			text = "Buy Menu";
			x = 0.1; y = 0.2;
			w = 0.72; h = (1 / 25);
		};
	};
	
	class controls
	{
		class backgroundBox : RscListBox
		{
			idc = 56003;
			colorBackground[] = {0,0,0,0.7};
			onLBSelChanged = "_this call life_fnc_weaponShopSelection";
			sizeEx = 0.035;
			x = 0.11; y = 0.25;
			w = 0.3; h = 0.38;
		};
		
		class BuyMenuInfo : RscStructuredText
		{
			idc = 56004;
			colorText[] = {0, 0, 1, 1};
			text = "";
			x = 0.43;
			y = 0.26;
			w = 0.35;
			h = 0.45;
		};
		
		class PistolsButton : RscButtonMenu 
		{
			idc = 56005;
			text = "Pistols";
			colorBackground[] = {0.5,0.5,0.5,0.5};
			onButtonClick = "closeDialog 0;";
			x = 0.11; 
			y = 0.25;
			w = 0.3;
			h = (1 / 25);
		};
		
		class GearButton : RscButtonMenu 
		{
			idc = 56006;
			text = "Gear";
			colorBackground[] = {0.5,0.5,0.5,0.5};
			onButtonClick = "closeDialog 0;";
			x = 0.11; 
			y = 0.30;
			w = 0.3;
			h = (1 / 25);
		};
		
		class SmgButton : RscButtonMenu 
		{
			idc = 56007;
			text = "Smgs";
			colorBackground[] = {0.5,0.5,0.5,0.5};
			onButtonClick = "closeDialog 0;";
			x = 0.11; 
			y = 0.35;
			w = 0.3;
			h = (1 / 25);
		};
		
		class RiflesButton : RscButtonMenu 
		{
			idc = 56008;
			text = "Rifles";
			colorBackground[] = {0.5,0.5,0.5,0.5};
			onButtonClick = "closeDialog 0;";
			x = 0.11; 
			y = 0.40;
			w = 0.3;
			h = (1 / 25);
		};
		
		class GrenadesButton : RscButtonMenu 
		{
			idc = 56009;
			text = "Grenades";
			colorBackground[] = {0.5,0.5,0.5,0.5};
			onButtonClick = "closeDialog 0;";
			x = 0.11; 
			y = 0.45;
			w = 0.3;
			h = (1 / 25);
		};
		
		class ButtonBuy : RscButtonMenu
		{
			idc = 56010;
			text = "Buy";
			onButtonClick = "[] spawn life_fnc_weaponShopBuySell; true";
			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class ButtonClose : RscButtonMenu 
		{
			idc = -1;
			text = "Close";
			onButtonClick = "closeDialog 0;";
			x = 0.1;
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};
