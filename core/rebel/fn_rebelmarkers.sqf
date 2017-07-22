/*
    File: fn_copMarkers.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Marks cops on the map for other cops. Only initializes when the actual map is open.
*/
private ["_markers","_rebels"];
_markers = [];
_rebels = [];

sleep 0.5;
if (visibleMap) then {
    {if (side _x isEqualTo east) then {_rebels pushBack _x;}} forEach playableUnits; //Fetch list of cops / blufor

    //Create markers
    {
        if !(_x isEqualTo player) then {
            _marker = createMarkerLocal [format ["%1_marker",_x],visiblePosition _x];
            _marker setMarkerColorLocal "ColorOPFOR";
            _marker setMarkerTypeLocal "Mil_dot";
            _marker setMarkerTextLocal format ["%1", _x getVariable ["realname",name _x]];

            _markers pushBack [_marker,_x];
        };
    } forEach _rebels;

    while {visibleMap} do {
        {
            private ["_unit"];
            _unit = _x select 1;
            if (!isNil "_unit" && !isNull _unit) then {
                (_x select 0) setMarkerPosLocal (visiblePosition _unit);
            };
        } forEach _markers;
        if (!visibleMap) exitWith {};
        sleep 0.02;
    };

    {deleteMarkerLocal (_x select 0);} forEach _markers;
    _markers = [];
    _rebels = [];
};