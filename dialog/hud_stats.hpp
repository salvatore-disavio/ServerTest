//////////////////////////////////////////
////////HUD CREATED BY TORECAPUTO////////
////////////////////////////////////////
#define INFINITE 1e+1000
#define IDC_LIFE_BARRA_CIBO 2200
#define IDC_LIFE_BARRA_ACQUA 2201
#define IDC_LIFE_BARRA_VITA 2202
#define IDC_LIFE_IMG_CIBO 1200
#define IDC_LIFE_IMG_ACQUA 1201
#define IDC_LIFE_IMG_VITA 1202

class playerHUD {
	idd = -1;
	duration = INFINITE;
	movingEnable = 0;
	fadein = 0;
	fadeout = 0;
	name = "playerHUD";
	onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
	objects[] = {};
	controls[] = {
		LIFE_BARRA_CIBO,
		LIFE_BARRA_ACQUA,
		LIFE_BARRA_VITA,
		LIFE_IMG_CIBO,
		LIFE_IMG_ACQUA,
		LIFE_IMG_VITA,
	};

	class LIFE_BARRA_CIBO: Life_RscProgress
	{
		idc = 2200;
		colorBar[] = {0.043,0.38,0.043,0.9};

	    x = 0.907972 * safezoneW + safezoneX;
	    y = 0.929158 * safezoneH + safezoneY;
	    w = 0.0845796 * safezoneW;
	    h = 0.0220081 * safezoneH;
	};
	class LIFE_BARRA_ACQUA: Life_RscProgress
	{
		idc = 2201;
		colorBar[] = {0.541,0.031,0.031,0.9};
		
	    x = 0.907972 * safezoneW + safezoneX;
	    y = 0.841125 * safezoneH + safezoneY;
	    w = 0.0845796 * safezoneW;
        h = 0.0220081 * safezoneH;
	};
	class LIFE_BARRA_VITA: Life_RscProgress
	{
		idc = 2202;
		colorBar[] = {0.031,0.294,0.541,0.9};

	    x = 0.907972 * safezoneW + safezoneX;
	    y = 0.885142 * safezoneH + safezoneY;
	    w = 0.0845796 * safezoneW;
	    h = 0.0220081 * safezoneH;
	};

	/* Icone */
	class LIFE_IMG_CIBO: life_RscPicture
	{
		idc = 1200;

	    text = "icons\fameicon.paa"; //--- ToDo: Localize;
	    x = 0.888071 * safezoneW + safezoneX;
	    y = 0.929158 * safezoneH + safezoneY;
	    w = 0.0119407 * safezoneW;
	    h = 0.0220081 * safezoneH;
	};
	class LIFE_IMG_ACQUA: life_RscPicture
	{
		idc = 1201;

	    text = "icons\seteicon.paa"; //--- ToDo: Localize;
	    x = 0.888071 * safezoneW + safezoneX;
	    y = 0.885142 * safezoneH + safezoneY;
	    w = 0.0119407 * safezoneW;
	    h = 0.0220081 * safezoneH;
	};
	class LIFE_IMG_VITA: life_RscPicture
	{
		idc = 1202;

	    text = "icons\saluteicon.paa"; //--- ToDo: Localize;
	    x = 0.888071 * safezoneW + safezoneX;
	    y = 0.841125 * safezoneH + safezoneY;
	    w = 0.0119407 * safezoneW;
	    h = 0.0220081 * safezoneH;
	};
};
