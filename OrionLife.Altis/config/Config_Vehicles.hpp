class CarShops {
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" }, //Quad Bike	
            { "C_Hatchback_01_F", "" }, //Hatchback
            { "C_Offroad_01_F", "" }, //Offroad
            { "C_SUV_01_F", "" }, //SUV
            { "C_Hatchback_01_sport_F", "" }, //Hatchback Sport
            { "C_Van_01_transport_F", "" }, //Flatbed Truck
            { "C_Offroad_02_unarmed_F", "" }, //MB 4WD	
            { "C_Van_02_transport_F", "" }, //Van Transport	
            { "C_Van_02_vehicle_F", "" }, //Van Cargo
            { "C_Van_02_service_F", "" } //Van Services
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" }, //Blue Kart
            { "C_Kart_01_Fuel_F", "" }, //Green Kart
            { "C_Kart_01_Red_F", "" }, //Redstone Kart
            { "C_Kart_01_Vrana_F", "" } //Vrana Kart
        };
    };
	
	
	class quad_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" } //Quad Bike
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Van_01_box_F", "" }, //Truck Boxer
			{ "C_Van_01_fuel_F", "" }, //Fuel Truck
            { "I_Truck_02_transport_F", "" }, //Zamak Transport
            { "I_Truck_02_covered_F", "" }, //Zamak Transport Covered
			{ "I_Truck_02_fuel_F", "" }, //Zamak Fuel
            { "O_Truck_03_transport_F", "" }, //Tempest Transport
            { "O_Truck_03_covered_F", "" }, //Tempest Transport Covered
			{ "O_Truck_03_device_F", "" }, //Tempest Device
			{ "B_Truck_01_transport_F", "" }, //HEMTT Transport
            { "B_Truck_01_box_F", "" }, //HEMTT Box
            { "B_Truck_01_fuel_F", "" } //HEMTT Fuel
        };
    };

    class civ_air {
        side = "civ";
        conditions = "mav_ttm_var_air == 1;";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" }, //MH-9 Hummingbird
            { "O_Heli_Light_02_unarmed_F", "" }, //PO-30 Orca Unarmed
            { "B_Heli_Transport_03_unarmed_F", "" }, //CH-67 Huron Unarmed
			{ "I_Heli_Transport_02_F", "" }, //CH-49 Mohawk
			{ "O_Heli_Transport_04_F", "" }, //Mi-290 Taru SkyCrane
            { "O_Heli_Transport_04_bench_F", "" }, //Mi-290 Taru Bench
            { "O_Heli_Transport_04_box_F", "" } //Mi-290 Taru Cargo
        };
    };
	
	class civ_plane {
        side = "civ";
        conditions = "mav_ttm_var_air == 1;";
        vehicles[] = {
            { "C_Plane_Civil_01_F", "" }  //Caesar BTT
        };
    };

	class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" }, //Rescue Boat
            { "C_Boat_Civil_01_F", "" }, //Motorboat
            { "B_SDV_01_F", "" }, //SDV
            { "C_Boat_Transport_02_F", "" }, //RHIB
            { "C_Scooter_Transport_01_F", "" } //Water Scooter
        };
    };

    class reb_car {
        side = "civ";
        conditions = "mav_ttm_var_rebel >= 1";
        vehicles[] = {
            { "B_Quadbike_01_F", "" }, //Quad Bike
            { "B_G_Offroad_01_F", "" }, //Offroad
            { "O_MRAP_02_F", "mav_ttm_var_rebel >= 2" }, //Ifrit
            { "O_G_Offroad_01_armed_F", "mav_ttm_var_rebel >= 3" }, //Offroad Armed
            { "O_T_LSV_02_unarmed_F", "" }, //Qilin Unarmed
            { "B_T_LSV_01_unarmed_F", "" }, //Prowler Unarmed
            { "B_G_Van_02_vehicle_F", "" }, //Van Cargo
            { "B_Heli_Light_01_stripped_F", "" }, //MH-9 Hummingbird Stripped
            { "I_Heli_light_03_unarmed_F", "" }, //WY-55 Hellcat Unarmed
            { "B_Heli_Transport_03_unarmed_F", "mav_ttm_var_rebel >= 2" }, //CH-67 Huron Unarmed
			{ "I_Heli_Transport_02_F", "mav_ttm_var_rebel >= 2" }, //CH-49 Mohawk
			{ "Land_Pod_Heli_Transport_04_covered_F", "mav_ttm_var_rebel >= 5" }, //Mi-290 Taru Pod		
			{ "O_Heli_Transport_04_F", "mav_ttm_var_rebel >= 2" }, //Mi-290 Taru SkyCrane
            { "O_Heli_Transport_04_bench_F", "mav_ttm_var_rebel >= 2" }, //Mi-290 Taru Bench
            { "O_Heli_Transport_04_box_F", "mav_ttm_var_rebel >= 2" },  //Mi-290 Taru Cargo
            { "O_Heli_Light_02_unarmed_F", "" } //PO-30 Orca Unarmed
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "C_Offroad_01_F", "call life_mediclevel >= 3" }, //Offroad
            { "C_IDAP_Van_02_medevac_F", "call life_mediclevel >= 3" }, //IDAP Van
            { "C_Van_02_medevac_F", "call life_mediclevel >= 3" }, //Van Ambulance
            { "C_Van_01_box_F", "call life_mediclevel >= 1" }, //Truck Boxer
            { "C_SUV_01_F", "call life_mediclevel >= 1" }, //SUV
            { "Land_Pod_Heli_Transport_04_medevac_black_F", "call life_mediclevel >= 4" }, //Taru Medical Pod Black
            { "I_MRAP_03_F", "call life_mediclevel >= 6" } //Strider
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "mav_ttm_var_air == 1;";
        vehicles[] = {
            { "B_Heli_Light_01_F", "call life_mediclevel >= 3" }, //MH-9 Hummingbird
            { "O_Heli_Light_02_unarmed_F", "call life_mediclevel >= 4" }, //PO-30 Orca Unarmed
            { "I_Heli_light_03_unarmed_F", "call life_mediclevel >= 5" }, //WY-55 Hellcat Unarmed
			{ "O_Heli_Transport_04_medevac_black_F", "call life_mediclevel >= 6" }, //Mi-280 Taru Medical Black
            { "I_Heli_Transport_02_F", "call life_mediclevel >= 7" }, //CH-49 Mohawk
            { "B_Heli_Transport_03_unarmed_F", "call life_mediclevel >= 6" } //CH-67 Huron Unarmed
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "call life_coplevel >= 1" }, //Quad Bike
            { "C_Offroad_01_F", "call life_coplevel >= 1" }, //Offroad
            { "C_SUV_01_F", "call life_coplevel >= 2" }, //SUV
			{ "C_Hatchback_01_F", "call life_coplevel >= 2" }, //Hatchback
            { "C_Hatchback_01_sport_F", "call life_coplevel >= 3" }, //Hatchback Sport
			{ "B_GEN_Van_02_vehicle_F", "call life_coplevel >= 4" }, //Police Van
            { "C_Offroad_02_unarmed_black_F", "call life_coplevel >= 4" } //MB 4WD Black
        };
    };

    class cop_carAdvanced {
        side = "cop";
        conditions = "mav_ttm_var_advCop == 1;";
        vehicles[] = {
            { "O_T_Truck_03_covered_ghex_F", "call life_coplevel >= 5" }, //Tempest Transport
            { "B_MRAP_01_F", "call life_coplevel >= 6" }, //Hunter
            { "B_G_Offroad_01_armed_F", "call life_coplevel >= 6" }, //Offroad Armed
            { "B_T_LSV_01_unarmed_black_F", "call life_coplevel >= 5" } //Prowler
        };
    };

    class cop_air {
        side = "cop";
        conditions = "mav_ttm_var_air == 1;";
        vehicles[] = {
            { "B_Heli_Light_01_F", "call life_coplevel >= 3" }, //MH-9 Hummingbird
			{ "O_Heli_Light_02_unarmed_F", "call life_coplevel >= 4" }, //PO-30 Orca Unarmed
            { "O_T_VTOL_02_infantry_grey_F", "call life_coplevel >= 9" }, //Y-32 Xi'an Infantry Transport
            { "B_Heli_Transport_03_unarmed_F", "call life_coplevel >= 5" }, //CH-67 Huron Unarmed
			{ "I_Heli_light_03_unarmed_F", "call life_coplevel >= 6" } //WY-55 Hellcat Unarmed
        };
    };
	
	class cop_plane {
        side = "cop";
        conditions = "mav_ttm_var_air == 1;";
        vehicles[] = {
            { "C_Plane_Civil_01_F", "call life_coplevel >= 3" } //Caesar BTT
        };
    };
	
/*No Longer in Use
	//Military Police
	class mp_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "I_MRAP_03_F", "" },
			{ "I_MRAP_03_hmg_F", ""},
			{ "C_SUV_01_F", "" } //SUV
        };
    };

	class mp_air {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Transport_01_F", "" },
			{ "I_Heli_light_03_unarmed_F", "" }
        };
    };
	//Military Police
*/

    class cop_boat {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "C_Scooter_Transport_01_F", "" }, //Water Scooter
            { "C_Boat_Civil_01_police_F", "" }, //Motorboat Police
            { "C_Boat_Transport_02_F", "" }, //RHIB
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 3" }, //Speedboat Minigun
            { "B_SDV_01_F", "" } //SDV
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

	class B_MRAP_01_hmg_F {
        vItemSpace = 85;
        conditions = "";
        price = 250000;
        textures[] = {
            { "Special Ops", "cop", {
                "images\Textures\Vehicles\Cop\police_hunterFront.paa",
                "images\Textures\Vehicles\Cop\police_hunterBack.paa"
            }, "" },
        };
    };
		
	class I_MRAP_03_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 300000;
        textures[] = {
            { "Military Police", "cop", {
                "images\textures\Vehicles\mp\mp_strider.paa"
            }, "" },
        };
    };	
		
		
    // Apex DLC
    class C_Boat_Transport_02_F {
        vItemSpace = 150;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 22000;
        textures[] = {
            { "Civilian", "civ", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
            }, "" },
            { "Black", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Offroad_02_unarmed_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 22500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Plane_Civil_01_F {
        vItemSpace = 150;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Racing", "civ", {
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Red Line (Tan Interior)", "civ", {
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Red Line", "civ", {
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Tribal", "civ", {
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Blue Wave (Tan Interior)", "civ", {
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Blue Wave", "civ", {
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Spy Plane", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "\a3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Scooter_Transport_01_F {
        vItemSpace = 30;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 3500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            }, "" },
            { "Police", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }

        };
    };

    // Apex DLC
    class O_T_LSV_02_unarmed_F {
        vItemSpace = 100;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Arid", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
            }, "" },
            { "Green Hex", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
            }, "" }
        };
    };

	//Apex
	class C_Offroad_02_unarmed_black_F {
        vItemSpace = 100;
        conditions = "";
        price = 40000;
        textures[] = {
			{ "Police Jeep", "cop", {
                "images\textures\Vehicles\Cop\policejeep.paa",
                "images\textures\Vehicles\Cop\policejeep2.paa"
            }, "" }
		};
	};
	//Apex

	//Cop Prowler
	class B_T_LSV_01_unarmed_black_F {
        vItemSpace = 100;
        conditions = "";
        price = 30000;
        textures[] = {{ "Police Prowler", "cop", {
                "images\textures\Vehicles\Cop\cop_prowler1.paa"
            }, "" }
		};
	};

	//Prowler
	
	
	// Medical Taru
	class O_Heli_Transport_04_medevac_black_F {
        vItemSpace = 350;
        conditions = "";
        price = 40000;
        textures[] = {};
	};
	// Medical Taru
	
	
	class Land_Pod_Heli_Transport_04_medevac_black_F {
        vItemSpace = 350;
        conditions = "";
        price = 4000;
        textures[] = {};
	};
	
	
    class B_T_LSV_01_unarmed_F {
        vItemSpace = 75;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

	class B_Heli_Light_01_dynamicLoadout_F {
        vItemSpace = 75;
        conditions = "";
        price = 60000000;
        textures[] = {};
    };


    class B_T_LSV_01_armed_F {
        vItemSpace = 70;
        conditions = "";
        price = 1225000;
        textures[] = {};
    };

    class O_T_LSV_02_armed_F {
        vItemSpace = 70;
        conditions = "";
        price = 825000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

	class B_LSV_01_unarmed_black_F {
        vItemSpace = 150;
        conditions = "";
        price = 65000;
        textures[] = {};
    };

    class O_T_VTOL_02_infantry_grey_F {
        vItemSpace = 250;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

	class Land_Pod_Heli_Transport_04_covered_F {
        vItemSpace = 100;
        conditions = "";
        price = 450000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_F {
        vItemSpace = 175;
        conditions = "";
        price = 480250;
        textures[] = {};
    };
	
    class O_Heli_Transport_04_bench_F {
        vItemSpace = 200;
        conditions = "";
        price = 550000;
        textures[] = {};
    };

	class I_Heli_Transport_02_F {
        vItemSpace = 300;
        conditions = "";
        price = 1325000;
        textures[] = {
			{ "Green", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
				"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            }, "" },
			{ "Black", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
				"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            }, "" },
			{ "Medic Mohawk", "med", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa",
				"\a3\air_f_beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa"
            }, "" },
		};
    };
	
    class O_Heli_Transport_04_box_F {
        vItemSpace = 350;
        conditions = "";
        price = 1550000;
        textures[] = {};
    };

    class O_T_MRAP_02_ghex_F {
        vItemSpace = 150;
        conditions = "";
        price = 750000;
        textures[] = {};
    };

    class I_Heli_light_03_unarmed_F {
        vItemSpace = 110;
        conditions = "";
        price = 550000;
        textures[] = {
			{ "Police Hellcat", "cop", {
                "images\textures\Vehicles\Cop\CopHellcat.paa"
            }, "" },
			{ "EMS Hellcat", "med", {
                "images\textures\Vehicles\Medical\emshellcat.paa"
            }, "" },
			{ "Hellcat", "civ", {
                "\a3\air_f_epb\Heli_Light_03\Data\Heli_Light_03_base_CO.paa",
            }, "" }
		};
    };

    class O_T_Truck_03_ammo_ghex_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 6600;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 750000;
        textures[] = {
            { "Police", "cop", {
                "images\textures\Vehicles\Cop\police_ghost1.paa",
                "images\textures\Vehicles\Cop\police_ghost2.paa"
            }, "" }
        };
    };

    class I_MRAP_03_F {
        vItemSpace = 100;
        conditions = "";
        price = 200000;
        textures[] = {
            { "Military Police", "cop", {
                "images\textures\Vehicles\mp\mp_strider.paa"
            }, "" },
			{ "EMS Strider", "med", {
                "images\textures\Vehicles\Medical\ems_strider.paa"
            }, "" },
			{ "EMS Strider Breast Cancer", "med", {
                "images\textures\Vehicles\Medical\BC_medicstrider.paa"
            }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 550;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 670000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Land_TentDome_F {
        vItemSpace = 200;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "";
        price = 90000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };
	
	
	class O_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "";
        price = 900000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 12450;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 700;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 850000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 475000;
        textures[] = { };
    };

	 class O_MRAP_02_F {
        vItemSpace = 150;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        textures[] = {
			{ "Arid", "civ", {
                "\a3\soft_f\MRAP_02\data\MRAP_02_ext_01_co.paa",
				"\a3\soft_f\MRAP_02\data\MRAP_02_ext_02_co.paa"
            }, "" },
			{ "Urban", "civ", {
                "images\Textures\Donator\IfritUrbanBody.paa",
				"images\Textures\Donator\IfritUrbanFront.paa",
				"images\Textures\Donator\IfritUrbanBack.paa"
            }, "call life_donorlevel >= 2" },
			{ "Woodland", "civ", {
                "images\Textures\Donator\IfritBody.paa",
				"images\Textures\Donator\IfritFront.paa",
				"images\Textures\Donator\Ifritback.paa"
            }, "call life_donorlevel >= 2" }
		};
    };

	//Laws of War--------------------------------------------------
	class C_IDAP_Van_02_medevac_F {
        vItemSpace = 150;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 20000;
        textures[] = { };
    };
	
	class B_GEN_Van_02_vehicle_F {
        vItemSpace = 150;
        conditions = "";
        price = 20000;
        textures[] = {
            { "DOC Van", "cop", {
                "images\Textures\Vehicles\Cop\doctransport.paa"
            }, "" }
        };
	}
	
	class C_Van_02_medevac_F {
        vItemSpace = 150;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 20000;
        textures[] = { };
    };

	class C_Van_02_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 35000;
        textures[] = {
			{ "Blue", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_blue_CO.paa"
            }, "" },
			{ "Brown", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_Syndikat_CO.paa"
            }, "" },
			{ "Green", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_green_CO.paa"
            }, "" },
			{ "Masked", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_Masked_CO.paa"
            }, "" },
			{ "Orange", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_Orange_CO.paa"
            }, "" },
			{ "Red", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_Red_CO.paa"
            }, "" },
			{ "White", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_white_CO.paa"
            }, "" }
		};
    };

	class C_Van_02_vehicle_F {
        vItemSpace = 150;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000;
        textures[] = {
			{ "AAN", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_AAN_CO.paa"
            }, "" },
			{ "Swif Delivery", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_Armazon_CO.paa"
            }, "" },
			{ "Blue Pearl", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_BluePearl_CO.paa"
            }, "" },
			{ "Blue", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_blue_CO.paa"
            }, "" },
			{ "Brown", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_Syndikat_CO.paa"
            }, "" },
			{ "Daltgreen", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_Daltgreen_CO.paa"
            }, "" },
			{ "Fuel", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_Fuel_CO.paa"
            }, "" },
			{ "Green", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_green_CO.paa"
            }, "" },
			{ "Masked", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_Masked_CO.paa"
            }, "" },
			{ "Orange", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_Orange_CO.paa"
            }, "" },
			{ "Redstone Racing", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_Redstone_CO.paa"
            }, "" },
			{ "Red", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_Red_CO.paa"
            }, "" },
			{ "Vrana", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_Vrana_CO.paa"
            }, "" },
			{ "White", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_white_CO.paa"
            }, "" }
		};
    };

	class C_Van_02_service_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 35000;
        textures[] = { };
    };

	//Rebel Vans
	class B_G_Van_02_vehicle_F {
        vItemSpace = 150;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000;
        textures[] = {
			{ "Arma III", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_BB_CO.paa"
            }, "" },
			{ "Camo 1", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_FIA_01_CO.paa"
            }, "" },
			{ "Camo 2", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_FIA_02_CO.paa"
            }, "" },
			{ "Camo 2 Unfinished", "civ", {
                "\a3\soft_f_orange\van_02\Data\van_body_FIA_02_unfinished_CO.paa"
            }, "" }
		};
    };
	//Laws of War--------------------------------------------------------

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Police", "cop", {
                "images\Textures\Vehicles\Cop\police_offroad.paa"
            }, "" },
            { "EMS", "med", {
                "images\Textures\Vehicles\Medical\med_offroad.paa"
            }, "" }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
            { "Police", "cop", {
                "images\Textures\Vehicles\Cop\police_hatchback.paa"
            }, "" },
			{ "DTU ONLY", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "DTU ONLY", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "DTU ONLY", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "DTU ONLY", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "DTU ONLY", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "DTU ONLY", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
			{ "Retro", "civ", {
                "images\Textures\Donator\RetroHatchback.paa"
            }, "call life_donorlevel >= 1" },
			{ "Galaxy", "civ", {
                "images\Textures\Donator\CivGalaxy.paa"
            }, "call life_donorlevel >= 2" }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 7500;
        textures[] = {
            { "Police", "cop", {
                "images\Textures\Vehicles\Cop\police_quadbike.paa"
            }, "" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            }, "" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 175000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_T_Truck_03_covered_ghex_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 120000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

	class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };
	
    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9500;
        textures[] = {
			{ "Police", "cop", {
                "images\Textures\Vehicles\Cop\police_hatchback.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = {
            { "Taxi", "civ", {
                "images\Textures\Vehicles\Civ\suv_taxi.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
            { "Police", "cop", {
                "images\Textures\Vehicles\Cop\police_suv.paa"
            }, "" },
			{ "Military Police", "cop", {
                "images\Textures\Vehicles\MP\mp_suv.paa"
            }, "" },
			{ "DTU ONLY", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "DTU ONLY", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "DTU ONLY", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
            { "EMS", "med", {
                "images\Textures\Vehicles\Medical\Msuv.paa"
            }, "" },
			{ "Gold and Black", "civ", {
                "images\Textures\Donator\GoldandBlackSUV.paa"
            }, "call life_donorlevel >= 1" },
			{ "Graffiti", "civ", {
                "images\Textures\Donator\GraffitiSUV.paa"
            }, "call life_donorlevel >= 1" },		
			{ "Rust Bucket", "civ", {
                "images\Textures\Donator\SUV_Rust_Bucket.paa"
            }, "call life_donorlevel >= 1" },
			{ "Pink Digital", "civ", {
                "images\Textures\Donator\SUV_Pink_Digital.paa"
            }, "call life_donorlevel >= 1" },
			{ "Poly", "civ", {
                "images\Textures\Donator\SUV_Poly.paa"
            }, "call life_donorlevel >= 1" },
			{ "Doodle", "civ", {
                "images\Textures\Donator\SUV_Doodle.paa"
            }, "call life_donorlevel >= 1" },
			{ "Washrag", "civ", {
                "images\Textures\Donator\SUV_Washrag.paa"
            }, "call life_donorlevel >= 2" },
			{ "Woodland", "civ", {
                "images\Textures\Donator\SUV_Camo.paa"
            }, "call life_donorlevel >= 2" },
			{ "Red Tiger", "civ", {
                "images\Textures\Donator\SUV_Red_Tiger.paa"
            }, "call life_donorlevel >= 3" },			
			{ "Weeaboo", "civ", {
                "images\Textures\Donator\WEEABOOSUV.paa"
            }, "call life_donorlevel >= 2" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 95000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 120;
        conditions = "";
        price = 60000;
        textures[] = {
            { "Statrack", "civ", {
                "images\Textures\Vehicles\Civ\box_front1.paa",
                "images\Textures\Vehicles\Civ\box_back1.paa"
            }, "" },
            { "Ambulance", "med", {
                "images\Textures\Vehicles\Medical\box_front1.paa",
                "images\Textures\Vehicles\Medical\box_back1.paa"
            }, "" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 85;
        conditions = "";
        price = 50000;
        textures[] = {
            { "Special Ops", "cop", {
                "images\Textures\Vehicles\Cop\police_hunterFront.paa",
                "images\Textures\Vehicles\Cop\police_hunterBack.paa"
            }, "" },
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "";
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 245000;
        textures[] = {
            { "Police", "cop", {
                "images\Textures\Vehicles\Cop\police_heli.paa"
            }, "" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
            { "EMS Red", "med", {
                "images\textures\Vehicles\Medical\medHeli.paa"
            }, "" },
			  { "Art", "civ", {
                "images\Textures\Donator\ArtHummingbird.paa"
            }, "call life_donorlevel >= 3" },
			{ "Galaxy", "civ", {
                "images\Textures\Donator\GalaxyHummingbird.paa"
            }, "call life_donorlevel >= 3" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
        textures[] = {
            { "EMS", "med", {
                "images\textures\Vehicles\Medical\medHeli.paa)"
            }, "" }
        };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 150;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 450000;
        textures[] = {
            { "Police", "cop", {
                "images\textures\Vehicles\Cop\police_orca.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Desert Digi", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
			{ "Black", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "EMS", "med", {
                "images\textures\Vehicles\Medical\EMSOrca.paa"
            }, "" }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg} || {(playerSide isEqualTo independent)}";
        price = 150000;
        textures[] = {};
    };

    class C_Van_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 100;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 150;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };

    class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 325;
        conditions = "";
        price = 1400000;
        textures[] = {
			{ "Default", "med", {
                "images\textures\Vehicles\Medical\Huron_Front.paa",
                "images\textures\Vehicles\Medical\Huron_Back.paa"
            }, "" }
		};
    };
};
