/*
@	Author: Panda
@	Steam: 76561198145366418
@	FileName: fn_buyMenu.sqf
@	Information: Displays buy menu, creates blur, sets custom text etc.
*/


private["_blur","_display","_text","_cashValue"];

createDialog "buy_menu";

disableSerialization;
waitUntil {!isNull (findDisplay 55000)};
_display = findDisplay 55000;
_text = _display displayCtrl 55004;
//\\\\\\\REMEBER TO CHANGE THIS BELOW |\\\\\\\\\\\\
_cashValue = 10000;

_blur = ppEffectCreate ["DynamicBlur",450];
_blur ppEffectEnable true;
_blur ppEffectAdjust [30];
_blur ppEffectCommit 7;
_text ctrlSetStructuredText parseText format["Buy weapons, armour and grenades using this weapon shop with cash earned in game!<br/><br/> <t color='#00C10D'> Cash: £%1", _cashValue];

waitUntil {!dialog};
ppEffectDestroy _blur;


