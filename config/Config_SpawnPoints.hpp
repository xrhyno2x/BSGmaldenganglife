/*
*    Format:
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*/
class CfgSpawnPoints {

    class Altis {
        class Civilian {
            class latrinite {
                displayName = "La Trinite";
                spawnMarker = "civ_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
            class chapoi {
                displayName = "Chapoi";
                spawnMarker = "civ_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
        };
        class Rebel {
            class latrinite {
                displayName = "La Trinite";
                spawnMarker = "civ_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
            class chapoi {
                displayName = "Chapoi";
                spawnMarker = "civ_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
            class rebel {
                displayName = "MRF Base";
                spawnMarker = "rebelbase";
                icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                conditions = "";
            };
        };
        class Cop {
            class mrmphq {
                displayName = "MRMP HQ";
                spawnMarker = "cop_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
            class mrmplatrinite {
                displayName = "MRMP La Trinite HQ";
                spawnMarker = "cop_spawn_4";
                icon = "\a3\ui_f\data\map\MapControl\fuelstation_ca.paa";
                conditions = "";
            };
            class mrmpchapoi {
                displayName = "MRMP Chapoi HQ";
                spawnMarker = "cop_spawn_5";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "";
            };
            class mrmphelicopter {
                displayName = "MRMP Helicopter HQ";
                spawnMarker = "cop_spawn_3";
                icon = "\a3\ui_f\data\map\Markers\NATO\b_air.paa";
                conditions = "license_cop_cAir";
            };
            class mrmphighway {
                displayName = "MRMP Highway HQ";
                spawnMarker = "cop_spawn_2";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "license_cop_traffic";
            };
        };
        class Medic {
            class mmmhq {
                displayName = "MMM HQ";
                spawnMarker = "medic_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };
            class mmmhelihq {
                displayName = "MMM Helicopter HQ";
                spawnMarker = "medic_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "license_cop_mAir";
            };
            class mmmairport {
                displayName = "Malden Airport Trauma Center";
                spawnMarker = "medic_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };
            class mmmchapoi {
                displayName = "Chapoi Regional";
                spawnMarker = "medic_spawn_4";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };
            class mmmlapessagne {
                displayName = "La Pessagne Field Hospital";
                spawnMarker = "medic_spawn_5";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };
        };
    };

    class Tanoa {

        class Civilian {
            class Georgetown {
                displayName = "Georgetown";
                spawnMarker = "civ_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "!license_civ_rebel";
            };

            class Balavu {
                displayName = "Balavu";
                spawnMarker = "civ_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Tuvanaka {
                displayName = "Tuvanaka";
                spawnMarker = "civ_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class Lijnhaven {
                displayName = "Lijnhaven";
                spawnMarker = "civ_spawn_4";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class RebelNW {
                displayName = $STR_SP_Reb_NW;
                spawnMarker = "Rebelop";
                icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                conditions = "license_civ_rebel";
            };

            class RebelS {
                displayName = $STR_SP_Reb_S;
                spawnMarker = "Rebelop_1";
                icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                conditions = "license_civ_rebel";
            };

            class RebelNE {
                displayName = $STR_SP_Reb_NE;
                spawnMarker = "Rebelop_2";
                icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                conditions = "license_civ_rebel";
            };
        };

        class Cop {
            class NAirport {
                displayName = $STR_SP_Cop_Air_N;
                spawnMarker = "cop_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class SWAirport {
                displayName = $STR_SP_Cop_Air_SW;
                spawnMarker = "cop_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\fuelstation_ca.paa";
                conditions = "";
            };

            class GeorgetownHQ {
                displayName = "Georgetown HQ";
                spawnMarker = "cop_spawn_2";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "";
            };

            class Air {
                displayName = $STR_MAR_Police_Air_HQ;
                spawnMarker = "cop_spawn_4";
                icon = "\a3\ui_f\data\map\Markers\NATO\b_air.paa";
                conditions = "call life_coplevel >= 2 && {license_cop_cAir}";
            };

            class HW {
                displayName = $STR_MAR_Highway_Patrol;
                spawnMarker = "cop_spawn_5";
                icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
                conditions = "call life_coplevel >= 3";
            };
        };

        class Medic {

            class SEHospital {
                displayName = $STR_SP_EMS_SE;
                spawnMarker = "medic_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };

            class TanoukaHospital {
                displayName = $STR_SP_EMS_Tan;
                spawnMarker = "medic_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };

            class NEAirportHospital {
                displayName = $STR_SP_EMS_NEair;
                spawnMarker = "medic_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };

        };

    };

};
