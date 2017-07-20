#include "..\..\script_macros.hpp"
/*
	File: fn_seatBelt.sqf
  Author: Snipes mad, Repentz
  Edited: BSG DevTeam (lead Ryanblm)
*/
//playSound "seatbelt"; //--Enable this to play a sound when you put your seatbelt on
if(!life_seatbelt) then {
	life_seatbelt = true;
} else {
	life_seatbelt = false;
};

//[] call life_fnc_hudUpdate; //--Enable this if you are putting a hud option to display when your seatbelt is on.
