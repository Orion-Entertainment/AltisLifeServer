#include "..\..\script_macros.hpp"
/*
    File: fn_sellHouseGarage.sqf
    Author: BoGuu
    Description:
    Sell functionality for house garages.
*/

private _house = param [0,objNull,[objNull]];
private _uid = getPlayerUID player;

if (isNull _house) exitWith {};
if !(_house getVariable ["garageBought",false]) exitWith {[localize "STR_Garage_NotOwned",true,"slow"] call life_fnc_notificationSystem;};
if ((_house getVariable "house_owner") select 0 != getPlayerUID player) exitWith {[localize "STR_Garage_NotOwner",true,"slow"] call life_fnc_notificationSystem;};
closeDialog 0;

if ((time - life_action_delay) < 30) exitWith {[localize "STR_NOTF_ActionDelay",true,"slow"] call life_fnc_notificationSystem;};
life_action_delay = time;

private _sellPrice = LIFE_SETTINGS(getNumber,"houseGarage_sellPrice");

_action = [
    format [localize "STR_Garage_HouseSellMSG",_price],
    localize "STR_House_GarageSell",
    localize "STR_Global_Sell",
    localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;

if (_action) then {

    if (life_HC_isActive) then {
        [_uid,_house,1] remoteExec ["HC_fnc_houseGarage",HC_Life];
    } else {
        [_uid,_house,1] remoteExec ["TON_fnc_houseGarage",RSERV];
    };

    findLocalVehicle = findLocalVehicle + _sellPrice;
    _houseName = FETCH_CONFIG2(getText,"CfgHousing",(typeOf _house), "displayName");
    ["sell", getPlayerUID player, "garage", _houseName, _sellPrice] remoteExecCall ["DB_fnc_insertData",2];
    [1] call SOCK_fnc_updatePartial;

    _house setVariable ["garageBought",false,true];

};
