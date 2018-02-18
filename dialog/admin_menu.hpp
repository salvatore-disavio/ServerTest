//////////////////////////////////////////////
///////// Hud Created By Torecaputo///////////
//////////////////////////////////////////////
class life_admin_menu {
    idd = 2900;
    name= "life_admin_menu";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_adminMenu;";

    class controlsBackground {
        class MainBackground: Life_RscText {
            idc = -1;
            x = 0.203587 * safezoneW + safezoneX;
	        y = 0.100856 * safezoneH + safezoneY;
	        w = 0.587082 * safezoneW;
	        h = 0.748275 * safezoneH;
	        colorBackground[] = {0,0,0,0.7};
        };

        class Life_RscTitleBackground: Life_RscText {
			idc = -1;
		    colorBackground[] = {0.345,0.345,0.345,1};
            text = "$STR_Admin_Title";
	        x = 0.203061 * safezoneW + safezoneX;
            y = 0.0778488 * safezoneH + safezoneY;
	        w = 0.587082 * safezoneW;
	        h = 0.0220081 * safezoneH;
        };
    };

    class controls {
        class RscButtonMenu_2400: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
	        x = 0.21223 * safezoneW + safezoneX;
	        y = 0.795128 * safezoneH + safezoneY;
	        w = 0.114431 * safezoneW;
	        h = 0.0330121 * safezoneH;
        };

        class RscButtonMenu_2402: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Admin_GetID";
            onButtonClick = "[] call life_fnc_admingetID;";
            x = 0.659209 * safezoneW + safezoneX;
	        y = 0.323935 * safezoneH + safezoneY;
	        w = 0.114431 * safezoneW;
            h = 0.0330121 * safezoneH;
        };

        class RscButtonMenu_2403: Life_RscButtonMenu {
            idc = 2904;
            text = "$STR_Admin_Compensate";
            onButtonClick = "createDialog ""Life_Admin_Compensate"";";
            x = 0.659209 * safezoneW + safezoneX;
	        y = 0.654057 * safezoneH + safezoneY;
	        w = 0.114431 * safezoneW;
	        h = 0.0330121 * safezoneH;
        };

        class RscButtonMenu_2404: Life_RscButtonMenu {
            idc = 2905;
            text = "$STR_Admin_Spectate";
            onButtonClick = "[] call life_fnc_adminSpectate;";
            x = 0.659209 * safezoneW + safezoneX;
	        y = 0.488996 * safezoneH + safezoneY;
	        w = 0.114431 * safezoneW;
	        h = 0.0330121 * safezoneH;
        };

        class RscButtonMenu_2405: Life_RscButtonMenu {
            idc = 2906;
            text = "$STR_Admin_Teleport";
            onButtonClick = "[] call life_fnc_adminTeleport; hint 'Select where you would like to teleport';";
            x = 0.659209 * safezoneW + safezoneX;
	        y = 0.709077 * safezoneH + safezoneY;
	        w = 0.114431 * safezoneW;
	        h = 0.0330121 * safezoneH;
        };

        class RscButtonMenu_2401: Life_RscButtonMenu {
            idc = 2907;
            text = "$STR_Admin_TpHere";
            onButtonClick = "[] call life_fnc_adminTpHere;";
            x = 0.659209 * safezoneW + safezoneX;
	        y = 0.268915 * safezoneH + safezoneY;
	        w = 0.114431 * safezoneW;
	        h = 0.0330121 * safezoneH;
        };

        class RscButtonMenu_2406: Life_RscButtonMenu {
            idc = 2908;
            text = "$STR_Admin_God";
            onButtonClick = "[] call life_fnc_adminGodMode;";
            x = 0.659209 * safezoneW + safezoneX;
	        y = 0.378956 * safezoneH + safezoneY;
	        w = 0.114431 * safezoneW;
	        h = 0.0330121 * safezoneH;
        };

        class RscButtonMenu_2407: Life_RscButtonMenu {
            idc = 2909;
            text = "$STR_Admin_Freeze";
            onButtonClick = "[] call life_fnc_adminFreeze;";
            x = 0.659209 * safezoneW + safezoneX;
	        y = 0.433976 * safezoneH + safezoneY;
	        w = 0.114431 * safezoneW;
	        h = 0.0330121 * safezoneH;
        };

        class RscButtonMenu_2408: Life_RscButtonMenu {
            idc = 2910;
            text = "$STR_Admin_Markers";
            onButtonClick = "[] spawn life_fnc_adminMarkers;closeDialog 0;";
            x = 0.659209 * safezoneW + safezoneX;
	        y = 0.599036 * safezoneH + safezoneY;
	        w = 0.114431 * safezoneW;
	        h = 0.0330121 * safezoneH;
        };

        class RscButtonMenu_2409: Life_RscButtonMenu {
            idc = 2911;
            text = "$STR_Admin_Debug";
            onButtonClick = "[] call life_fnc_adminDebugCon;";
            x = 0.659209 * safezoneW + safezoneX;
	        y = 0.544016 * safezoneH + safezoneY;
	        w = 0.114431 * safezoneW;
	        h = 0.0330121 * safezoneH;
        };

        class PlayerList_Admin: Life_RscListBox {
            idc = 2902;
            text = "";
            sizeEx = 0.035;
            onLBSelChanged = "[_this] spawn life_fnc_adminQuery";
            x = 0.211434 * safezoneW + safezoneX;
	        y = 0.125862 * safezoneH + safezoneY;
	        w = 0.199011 * safezoneW;
	        h = 0.649239 * safezoneH;
        };

        class PlayerBInfo: Life_RscStructuredText {
            idc = 2903;
            text = "";
            x = 0.429252 * safezoneW + safezoneX;
	        y = 0.125862 * safezoneH + safezoneY;
	        w = 0.199011 * safezoneW;
	        h = 0.649239 * safezoneH;
	       colorBackground[] = {0,0,0,0.7};
        };
		
		class Lista_Controlli: Life_RscText {
	        idc = 1014;
	        text = "Comandi Admin"; //--- ToDo: Localize;
	        x = 0.659209 * safezoneW + safezoneX;
	        y = 0.158875 * safezoneH + safezoneY;
	        w = 0.114431 * safezoneW;
	        h = 0.0770283 * safezoneH;
	        colorBackground[] = {0,0,0,0.8};
        };
    };
};