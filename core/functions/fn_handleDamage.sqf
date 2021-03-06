#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine
    Edited: BSG DevTeam (Lead Ryanblm)

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
params [
    ["_unit",objNull,[objNull]],
    ["_part","",[""]],
    ["_damage",0,[0]],
    ["_source",objNull,[objNull]],
    ["_projectile","",[""]],
    ["_index",0,[0]]
];

//Handle the tazer first (Top-Priority).
if (!isNull _source) then {
    if (_source != _unit) then {
        if (currentWeapon _source in ["hgun_P07_snds_F","arifle_SDAR_F"] && _projectile in ["B_9x21_Ball","B_556x45_dual"]) then {
            if (side _source isEqualTo west && playerSide isEqualTo civilian) then {
                _damage = 0;
                if (alive player && !life_istazed && !life_isknocked && !(_unit getVariable ["restrained",false])) then {
                    private ["_distance"];
                    _distance = 35;
                    if (_projectile == "B_556x45_dual") then {_distance = 100;};
                    if (_unit distance _source < _distance) then {
                        if !(isNull objectParent player) then {
                            if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                                player action ["Eject",vehicle player];
                                [_unit,_source] spawn life_fnc_tazed;
                            };
                        } else {
                            [_unit,_source] spawn life_fnc_tazed;
                        };
                    };
                };
            };

            //Temp fix for super tasers on cops.
            if (side _source isEqualTo west && (playerSide isEqualTo west || playerSide isEqualTo independent)) then {
                _damage = 0;
            };
        };
    };
};
if (vehicle _unit == _unit) then {
  if ( _source isKindOf "Air" OR _source isKindOf "Car" OR _source isKindOf "Motorcycle" OR _source isKindOf "Boat" OR _source isKindOf "Tank" ) then {}
    else
      {
        _isVehicle = vehicle _source;
        if (_isVehicle isKindOf "Air" OR _isVehicle isKindOf "Car" OR _isVehicle isKindOf "Boat" OR _isVehicle isKindOf "Motorcycle" OR _isVehicle isKindOf "Tank") then
          {
            _damage = _currdamage;
          };
    };
  };
  if ((vehicle _unit) isKindOf "Car" && (isNull _source || _source isEqualTo _unit)) then
  {
  	_damage = if (life_seatbelt) then { _damage / 2 } else { _damage};
  };
[] spawn life_fnc_hudUpdate;
_damage;
