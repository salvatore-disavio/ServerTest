class Life_atm_management {
    idd = 2700;
    name= "life_atm_menu";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class Life_RscTitleBackground: Life_RscText {
		   idc = -1;
           x = 0.340791 * safezoneW + safezoneX;
	       y = 0.345943 * safezoneH + safezoneY;
	       w = 0.308467 * safezoneW;
	       h = 0.0220081 * safezoneH;
	       colorBackground[] = {0.345,0.345,0.345,1};
        };

        class MainBackground: Life_RscText {
            idc = -1;
            x = 0.340791 * safezoneW + safezoneX;
	        y = 0.367951 * safezoneH + safezoneY;
	        w = 0.308467 * safezoneW;
	        h = 0.242089 * safezoneH;
	        colorBackground[] = {0,0,0,0.7};
        };
    };

    class controls {
        class CashTitle: Life_RscStructuredText {
            idc = 2701;
            text = "";
            x = 0.440297 * safezoneW + safezoneX;
	        y = 0.38996 * safezoneH + safezoneY;
	        w = 0.109456 * safezoneW;
	        h = 0.0660243 * safezoneH;
        };

        class Title: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
            text = "$STR_ATM_Title";
	        x = 0.460198 * safezoneW + safezoneX;
	        y = 0.345943 * safezoneH + safezoneY;
	        w = 0.238813 * safezoneW;
	        h = 0.0220081 * safezoneH;
	        colorText[] = {0.95,0.95,0.95,1};
        };

        class WithdrawButton: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_ATM_Withdraw";
            onButtonClick = "[] call life_fnc_bankWithdraw";
            x = 0.569654 * safezoneW + safezoneX;
	        y = 0.38996 * safezoneH + safezoneY;
	        w = 0.0696538 * safezoneW;
	        h = 0.0220081 * safezoneH;
	        colorText[] = {1,1,1,1};
	        colorBackground[] = {0.345,0.345,0.345,1};
        };

        class DepositButton: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_ATM_Deposit";
            onButtonClick = "[] call life_fnc_bankDeposit";
            x = 0.569654 * safezoneW + safezoneX;
	        y = 0.433976 * safezoneH + safezoneY;
	        w = 0.0696538 * safezoneW;
	        h = 0.0220081 * safezoneH;
	        colorText[] = {1,1,1,1};
	        colorBackground[] = {0.345,0.345,0.345,1};
        };

        class moneyEdit: Life_RscEdit {
            idc = 2702;
            text = "1";
            sizeEx = 0.030;
            x = 0.460198 * safezoneW + safezoneX;
	        y = 0.488996 * safezoneH + safezoneY;
	        w = 0.0696538 * safezoneW;
	        h = 0.0220081 * safezoneH;
        };

        class PlayerList: Life_RscCombo {
            idc = 2703;
            x = 0.460198 * safezoneW + safezoneX;
	        y = 0.533012 * safezoneH + safezoneY;
	        w = 0.0696538 * safezoneW;
	        h = 0.0220081 * safezoneH;
        };

        class TransferButton: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_ATM_Transfer";
            onButtonClick = "[] call life_fnc_bankTransfer";
            x = 0.569654 * safezoneW + safezoneX;
	        y = 0.533012 * safezoneH + safezoneY;
	        w = 0.0696538 * safezoneW;
	        h = 0.0220081 * safezoneH;
	        colorText[] = {1,1,1,1};
	        colorBackground[] = {0.345,0.345,0.345,1};
        };

        class GangWithdraw : TransferButton {
            idc = 2705;
            text = "$STR_ATM_WithdrawGang";
            onButtonClick = "[] spawn {sleep (random 0.5);[] call life_fnc_gangWithdraw};";
            x = 0.345767 * safezoneW + safezoneX;
	        y = 0.38996 * safezoneH + safezoneY;
	        w = 0.0696538 * safezoneW;
	        h = 0.0220081 * safezoneH;
	        colorText[] = {1,1,1,1};
	        colorBackground[] = {0.345,0.345,0.345,1};
        };

        class GangDeposit : TransferButton {
            idc = 2706;
            text = "$STR_ATM_DepositGang";
            onButtonClick = "[] spawn {sleep (random 0.5);[] call life_fnc_gangDeposit};";
            x = 0.345767 * safezoneW + safezoneX;
	        y = 0.433976 * safezoneH + safezoneY;
	        w = 0.0696538 * safezoneW;
	        h = 0.0220081 * safezoneH;
	        colorText[] = {1,1,1,1};
	        colorBackground[] = {0.345,0.345,0.345,1};
        };

        class CloseButtonKey: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = 0.345767 * safezoneW + safezoneX;
	        y = 0.533012 * safezoneH + safezoneY;
	        w = 0.0696538 * safezoneW;
	        h = 0.0220081 * safezoneH;
	        colorText[] = {1,1,1,1};
	        colorBackground[] = {0.345,0.345,0.345,1};
        };
		
		class Creator_Title: Life_RscText {
	        idc = 1012;
	        text = "Created by Torecaputo"; //--- ToDo: Localize;
	        x = 0.340791 * safezoneW + safezoneX;
	        y = 0.588032 * safezoneH + safezoneY;
	        w = 0.308467 * safezoneW;
	        h = 0.0220081 * safezoneH;
	        colorBackground[] = {0.345,0.345,0.345,1};
        };
    };
};