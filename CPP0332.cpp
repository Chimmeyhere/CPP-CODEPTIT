//I'm HuyNho or you can call me Chimmey
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

int main() {
	string s, s1;
	getline(cin,s);
	for (int i = s.size() - 1 ; i >= 0 ; i--)
	{
		if ( s[i] == ' ' )
		{
			s[i] = '1';
			break;
		}
		char tmp = tolower(s[i]);
		s1 = tmp + s1;
	}
	s1 = s1 + (char)tolower(s[0]);
	for (int i = 1 ; i < s.size() ; i++)
	{
		if ( s[i-1] == ' ' )
		{
			s1 = s1 + (char)tolower(s[i]);
		}
	}
	s1 = s1 + "@ptit.edu.vn";
	cout << s1;
}

//((((((######((((//////***////(((((((//////((((((####(((((((((((((((((((((///////////((///((((((((((((((//((#######((########((((#(((((//////((///***,,***///*,,.........................................
//((((((((##((//////////////////////////////((#((((((((((((((((((((((((////****/////((##(((((#######(((((((((###((((###################(((((((((((//******////**,.........................................
//##########(///////((((((((((((((/////////////((///////////////////*********//////((######%%%%&&%%##%%%#((((((((((((#((((######((((###############((((((((((//**,,,,,,,,,,,..............................
//%%%%%%%#(/////////((((##########((((/////(//////****////****////***///**////////(##%%%%&&&&&&&&&#%%%#%%##%%%%%#%%%%%##(((####((((((###%%%#############((((((((/////*****,,,,,,,,,,......................
//%%##((///////////(((####((///((((//((((((((((////////////////////////////(((((#%%%&&&&&@@@@@&@%&%#&%&&%%&%%%%&&&&&%%%%%%%%#####((((((##%##############(((((((//************/////***,,,..................
//%%##(((//////////(((####((((((((((/((((((////(((((//(((((((((((((((((((((((#%%%%&&@&@@%%@%#%%&%&%%%&&&&&&&&&&&%%%%%&&&&&&&%%%%##(((((((##########(((/////((#((/***********/////((///**,,................
//&%##((((//////((((#((((##%%%%###%%###(((((((((((######(((((##((((//(#####%%%%&%%&&%%%%&%%&&%&&&%@&&&&&&&&&&&&&&&&&&&&&&@&&@&&&&&%%#((((((((((((///////////((((//////////////*//((((((/*,,,,,,,,,,,,.....
//&%#((((////((((##############%%%&%%%%######((((((##(((((######((((###%%%%%%%&&&&&%%%%%&&&&&%%&&&&&&&&%&&&&&&&&&&&&&&&&&&@@&&&@&&&&&%#(((((((((/////((((((((((((///////((//////////////*******,**,,,,....
//((////////((((((#########%######%%%%%%######((((((((((((###########%%%%&&&&&&&&&&&&%&&&&%&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&&&&&&&&&@&&&&%#######((((((((((((((((((((((//////////********//////*******,,,....
//////////////(((((#((((###############%%%%%%%#(((((((((((########%%%%&&&&&&&&&&@&@%&%&&&&&&&&&&&&&@@@&&&&&&&&@@&@@@&&&@@&&&@&&&&&&&&&&%%######((((((((##((((((/((((///////////***////////////////***,,,,,
////////////((##((((((###########%%###(###%%%%#((/((###########(#%%%%&&&&@&@&&&@&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@&&&@@@@@@&&&@@@&&&&&&%######((((((((###((((((((/////////((((((((((((///////////////***
//((////////((####(((((((((((////(((((###%&&&&%%%##############(##%%&&&&&&&&&@@@&&&&%&&&&&&&@&&@@@@@@@@@@@@&&&&@@@@@@@@@@@@&@&&@&@@&@&&&&%#((((####(((((###((((((///////////(((((((####((/////////////////
//(((((/////((((((((((//////////////((##%%&&&&&&&%%###############%&&&&&&&@@@@&&&&%%%%%&&&&&&&@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&#(((((#######((((((((////////////////(((((#((((//(((////////////
//((((((((//(((((((((////((///(((((#######%%%%%%%%%%%%#############%%&&@@@@@&&&%%%%%%%%%%%%&&&&&&&@@@@@@@@&&&&&&@@@@@@@@&@@@@@@@@@@@@@@@@&&((((((#######((((((((((//(((((((//////((((((((////((//**///((((
//(((#((((((((((((((((((####((####%%%%%%%%%%%%&%%###%%%%%%%%%%####%&&@&@@@@&&%%#######%%%%%%%%%%&&@@&&&@@@&@&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@&##########%########((((((((((//*****//////((/////(((//*////////
//###((####(((((##((((((######%%&&&&@&&&&&&&&&&&%%%%&&%%%%%%%%%%###%&@@@@@@&%%%%######%&&@@@@@@@@@@@@@@&&&&&&&&##%&@@@@@@@@@@@@@@@@@@@@@@&&##((((############(((((((((((((//////***//////////////***//////
//###########((###((((((#(((#%%&&&@@@&&&&&&&&&&%%%%&&&&&%&&&%%%###%&&#&@@&&&&&@@@@&&%&@@@&&&&&&&&%%%%@@&%%##%&&&&&&&&&@@@@@@@@@@@@@@@@@@@@#((((///((((#####(((((((((((((((///////***//(//////**,**/**//(//
//################((((((((((##%%%%%&&&&&&&&&&&&%%%&&&&&&&&&&&&%%%&&@&%%###/#%%%&&@@@&&@&&&&&&@&&&&&&%&@%%%%%%#####%&@@@@@@@@@@@@&@@@@@@@&&##(((((((((((##((((((#####((((///(((((//**///////////***/////((/
//#########((((###(((((((((((((#####%%&&&&&&&&%%%%&&&&&&&&&&&&&%%%%&#%%/###&&&&&&&@@%(&&&&%%&%%%#####&&###((((((((((%&&&&#((((%%%&(%@@@@&%######((((((((((((((((##((//(///(((((//***////////////////((////
//##########(((############((((((#((###%%%%%%%%%%&&&&&&&&&&&&%#(((/%(%%(//*/(####@&*//(&%&%##%%####(#%((/////////(/(#%&%(/((((((*(#(&@@&&(((((((((((((((/(((((((((((/((((((((/////**************/*//((((//
//######(((########(((##(((((((((((((######%%%%%%%%%%%%%#####(////*/#(#(/*,*((((&#,****/%&#((((((((&%(//////////(((((#%(///(%&#(//(##@&&((((////((((((((///////((((////////////(///*****************//////
//################(((((((((((((((((//((#############%%##(/////////*//(((*,*//(%%,,*****//#%%%%%#((/////////////(((((((#////#/#%%//(/@@&#((///*//((##((//////**//////******//////////*************/////////
//#########(((((((((########(((//////(((((((((((##%%%###(((/////////////,,,*/(//(##((((/*/(#((/////////*//////////(((((///((**////*@@%#///**/////(((((((/////*//////////////(((/////*************/////////
//############(((#########((((((((//((((((((//((#######(((/////(////////,,,**//%&@&%%#%%%#(/(((((//////////////////(((((/////***/#@@(///*****//////////(((////(((((//(((((((((((((//**************/****///
//%%%%%%%##########################((((((((((((((((((((((///////////////*,*////***////////////((((((((((///////////(((((((///(#@@@(/*//******////******//////((##(((((//(((((((((///**********************
//%%%%%%%%#%%%%%####%%%%%###%%########(####((((((####(((((///*///(///////**///***/**(#(/////////(((((/////////////(((((((##&@@@/////////****/////***,********//(((((////(((((////*************************
//%%%%%%#####%%%%%%%&&&&&%%%%%%%%#########((##(((####((((((//**////((((((,**///#%%%&%&&&&&&&&&%#(((((/////////((((((((((##(@%**////***//*********/***///****///((///****/////********/******//////////////
//%%%%#########%%%%%%&&&&&&&%%%%%%%%###((((((#####(##((((((////(((###((((/,*/#%%/((//(/////////((((((((////((((((((((##((((/****//*////////****////////////////////////////*********///*******/////(//////
//%%%%##########%%%%%&%%%%%%%%%%%%%%%##(#####(((((/((((((((((((((#((((((#(**((/*/(####(((////////////////((((((((#(##(((((/****///////////////////(((///////////////////********/***////*****/////(((/////
//%######%%%%%%#%%%%%%%%%%%######%%#######((((//////////(((((((########((((*///////**********/**//////(((((((######(((///((//////////////////////(((((((((//////((//////***********/////////////////////**
//########%%&&&%%%%%%%%%%%###(((#####(((((((((///////////(((///((#####%%%%##***,,,,*************////((((########((((//////((///((///*********/////////((((((//////////////////////////////////////********
//###%%%#####%%####%%%%%######(######((((((((((//////////////**///(((##%&%%%#(,,*//////////////((((###%%%%####((((/////////////////////******/////////////(((/////////////(((///((////////////////****////
//#((((##(((####%#%%%%######((((((((####((((((/////////////****//////(######(((/(#%%######%%%%%%%%%%%%#####(((((((////////*///(((/////////////////****////////////////////((((((((((((((////////**////////
//((((((########%%%###(((((((///(((((###(((((((((///////////*,,,,,,,**//((((((////(%&&&&&&&&&&&&%%%###(((((((((((/////////////((//***/(((((////////////////////////////(//////((((((((((((((((//((((((((((
//(((((#############((////((((((((((///////////(((//////**///*****,,,**/((((((#######,//(##%&&&%%%###((((((//////////////(/(/(((///////((((((((((/(((///(((((((((((((#((((((((((((((((((((((##((((((((((((
//(((######%####(###((////((((((((((((((((((((((((((((//***,,,....,,,,,,*//(((((#####**/((##%%%%%###((((((///////////////%&#((//////////(((//((((((((((((((((#########(((#####(((##(((((((((((##((((((((((
//#########(((((//(((((((//(((((((((#((((((((((((((((//**,,.....,,,,,,,,,**/((((((%&@/*/((##%%%%%###((((/////////////////%@@&&(/////////////(((########%%%%%%%%##########%%%%%######((((((((((((((((((####
//######((((##########((((((/((((((((((///((///((((///**,,,,,,,,,,,,,,,**,,*/((((&&@@&*/((##%%%%%%##(((((////////////////(&@@@&&%(((((((((((((((((###%%%%%%%%%%%%%%%%%%%%####%%%%%%%#########(((((((((((((
//((((((((####%%%####((((((((((((//((((((((((((//((///**,,,****/**,,,,**/***/###%&@@@@(/((##%%%%%####((((///////////////*/(#@@@&&&&%#(#########%#########%%%%%%%%%%%%%%%%######%%&&&%############((((/////
//((((((((###%%%%##((//////(((##((((((#(#(((((((((((////////**////******/(%####%&@@@@@%((#######%%####((((//////////*****///(&@@@&&&%%%%%%%##(((((((((((((((##%%##%%%%%%%%###%%%%%%%%%%%#####%###(((((////
//#####%%####(((((((/(///(((((((###################(((//////////***(%&%&%%####%&&@@@@@@@%###########(((((//////////*****/**//(%@@@&&&%%%%%%%%&&#(((((((((#(#############%%%%%%%%%%#####%#######((####(((((
//#(((#################((##############%%%%%####(((((////////#(%%&&%&%%%%#####%&&@@%@@@@@@@@&&######((((/////////**********(&@@&@@&&&&&%%%%%%%%%%%%%##%%%%%##%%%%####%%%###%%%%#############((((((((((((((
//######%%####(((//((((((((#(((((#####%%###((///((((((/(####%%%&@&%#%%%%%%###%&&&@@@&@@@@@@@@@@@@@@@@&&%#(//*******(%&&/&&&&&@&&&&@&&&&%%%%&&&%%%%%%%%%%%%%%%%%%%%%%#####((####(//((((((((((((((((((((((((
//#%#######(((((((((((((((((#########(((/////////#%&&%%%%%%%#&@@%%%%%%%%%%%%%&&&&&&@(&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@&&#%&&&&&&&&&&&&@&&&%%%&&&&%%%&&%%&&%########((((###((((((((((((/////(((((((((((((((((
//%%#################%%%%%%%%%%%%####((((((((##%%%%%%&%%%%%%&@&%%%%%%%%%%%%&&&&&&&&@&(&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#%&&&&&&&&&&@@&&&&%%%%%%&%&%%%%%%%%%%%%####(((####((((((((//(((((/(((###(((((((((((((
//##%%%&&&&&&%##%%%&&&&&&&&&&&&%%#(((###(%##&&#%%%%&&%%%&%%&@%%%%%%%%%%%%&&&&&&&&&&&&%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&(%&&&&&&@&&&&@@@&&&&&&&&&&&@@@@@@@&@@@@&&%%%%####((//(((((((((((((((((((((((((((((((((
//%%%%&&&@&@&&&&&&&&&&&&&&&&&&&&%#(((####%#%&&%&&&&&&&&&%&&&%%%%%%%%%%%%%%%%%%%&%%&&&&(&&&&&&&&&&&&&&&&&&&&&&&&&&&&*&&&&&&&&@&&&&@@&&&&&&&&&&&&&&&&&@@&&&&&&%%%%%%%&#((/((((/////((((((((((((((((((((((###
//%%&&&@@&&&&&&&@&&&&&&&&&&&&&&%%#(#%%#%%%%&&&%&&&&&&&&%&&%%%%%%%%%&@@@@@@@@@%%%%&&&&&&*&&&&&&&&&&&&&&&&&&&&&&&&&&,&&&&&&&&@&&&&&&@&&&&&&&&&&&&&&&&&@@&&%&&%%%%%&&%%%&&#((((((((((((((/((((((((#####(((##%
//#%&&@&&&&&&&&&&&&&@&&&&&&&&&&&%#&#%%%%%%&&&&%&&&&&&&%&@&&@@@@@@@@@@@@@@@%%%%%%%%&&&&&&*&&&&&&&&&&&&&&&&&&&&&&&&,&&&&&&&&&@&&&&&&@@&&&&&&&&&&&&&&&&@@@&&&&&&&&&&&&&&%&&&%#(###((///////(((((##########%%&
//%#####%%%&&&%%%&&&&&@@@@@@&&&&#%&%%%&&%&&&&&&&&&&&&%&@&&&&@@@@&&&@@@@@&&%%%%%%%%&&&&&&&*&&&&&&&&&&&&&&&&&&&&&%*&&&&&&&&&@@&&&&&&&@&&&&&&&&&&&&&&&&@@@&&&&&&&&&&&&&&&&&&&&&####((((((((((((#%%%%%%%####%%
//#######%%&&%%%%%%&&&&&@@@@&&&#%&&%%%%&&&&&&&&&&&&&%&@@@&&&&&&%&&&&&&&&&&@%%%%%%&&&&&&&&&*&&&&&&&&&&&&&&&&&&&%*&&&&&&&&&&@&&&&&&&&@@&&&&&&&&&&&&&&&@@@&&&&&&&&&&&&&&&&&&&&&&%####(((((((((((####%######(#
//#########%%%%%%%####%&&&&&&##&&&&%%&&&&&&&&&&&&&&%&@@@&&&&&%%&&@&&&&&&&@@@@&%%%&&&&&&&&&&*&&&&&&&&&&&&&&&&&%*&&&&&&&&&&&@&&&&&&&&&@@&&&&&&&&&&&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&#((((((((#####((((####%####(
//#(((((((((###%%########%&&##%%&&&%&&&&&&&&@&&&&&%&&@@&%&&%%%&@@&&&&&&&&&@@@@@@%&&&&&&&&&&&*&&&&&&&&&&&&&&&#/&&&&&&&&&&&@&&&&&&&&&&&@@&&&&&&&&&&&&&@@@@&&&&&&&&&&&&&&&&&&&@@&&%(((((((((((////(((#####(((
//##(((((((((####(((((((((###%&@@@@&&&&&&&&&@&&&&%&&@@@&%&%%&&@&&&&&&&&&&&&@@@@@@&&&&&&&&&&&&*&&&&&&&&&&&&&/#&&&&&&&&&&&&@&&&&&&&&&&&&@@&&&&&&&&&&&&@@@@&&@@&&&&&&&&&&&&&&&@@@&&%#((((((/////((((###((((((
//#####((((((((((((((#(((/(%%&&@@@@&&&&&&&&&@&&&%&&@@@@&%%%&&@&&&&&&&&&&&&&&&&@@@@@&&&&&&&&&&&/&&&&&&&&&&&,&&&&&&&&&&&&&&@&&&&&&&&&&&&&&@&&&&&&&&&&&&@@@&&&@&&&&&&&&&&&&&&&@@@&&%%///////////((((########(
//####(((((((((///(((#####%%&&&@@@@&&&&&&&&@@&&&&&&@@@@&&&&@&&&&&&&&&&&&&&&&&&&&&@@@&&&&&&&&&&&(#&&&&&&&%*&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&@@&&&&&&&&&&&@@@@&&@&&&&&&&&&&&&&&&@@@@&&%%///(((///////(((////***
//####(((###((((//((##%%%%%%&&@@@@@&&&&&&&&@@&&&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@&&&&&&&&&&&&*&&&&&#%&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&@&%&&&&&&&&&@@&&&@&&&&&&&&&&&&&&&@@@@&&%%%(((((///////******,,,*
//##########((((((((((##%%%%&&@@@@@@&&&&&&&@@@&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@&&&&&&&&&&&&/##%#/&&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&&@&%&&&&&&&&&@&&&&&&&&&&&&&&&&&&@@@@@@&&%%(/////////////******//
//(##(((((((((////(((((%%%%%&&@@@@@@&&&&&&&&@@&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@&&&&&&&&&&&&&((&&&&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&&&@&%&&&&&&&&&&&&&&&&&&&@&&&&&&&@@@@@@&&&&&(((///**///////////((
//((((/////**/////////%%%%%%&&@@@@@@&&&@@@@&@@&&&@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&&&&&&&&&*,%&&&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&&&&&@@@@@@&&&&&#///((//////////(((((
//(((/****//////((((/(%%&%%%&&@@@@@@&&&&&@@@@@@&&@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%&&&@&&&&&&&&&&&//&&&&&&&&&&&&&&&&&@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&&&&@@@@@@@&&&&&&//((////////*///((((
//((((//////(((((((((%%&&&%%&&&@@@@@@&&&&@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@&&&&&&&&&@#*&&&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@&&&&&&@@@@@@@&&&&&&%//////////////////(
///(((((((((((((((((#%&&&&%%&&&@@@@@@@@&&&&@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&(.%&&&&&&&&&&&&&&&@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@&&@@@&&&&&@@@@@@@@&&&&&&&///////////////////
///(((((((((((((####%&&&&&&%&&&&@@@@@@@&&&&@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@&&&&&@@@@@@@&&&&&&&&&*///////((///(((((
///////(((((((((((#%%&&&&&&&&&&&&@@@@@@@&&&&@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@&&&&&&@@@@@@@&&&&&&&&&(///////////((((((
////((((((((//////%%&&&&&&&&&&&&&&@@@@@@@@&&@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&&&&&&&&@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@&&&&&@@@@@@@@&&&&&&&&&&(((///////(((((((
//((((((((((((((/%%&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&&&&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@&&&&&@@@@@@@&&&&&&&&&&&#//////((((((((((
//(((((((((((((/%%%&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@&&&&&&&&&&&&&&&&&&&&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@&@@@@@@@@&&&&&&&&&&&&////((((((((((((
//(###(((##((((#%%&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@&&&&&&&&&&&&&&&&@&&&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@&&&&&&&&&&&&%(/////(((//////
//#############%%&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&&&&&&&@@&&&&&&&&&&&&&&&&&&&&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@&&&&@&&&&&&&&&(//////////((((
//########%%%&%%%&&&&&&&&&&&&&@@@@&&&&&@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@&&&&&&&&&&&@@&&&&&&&&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&//////////((((
//#%%%%##(###%%%&&&&&&&&&&&&&&@@@@@@&&&&@@@@@@@@@@@@@@&&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&&&&&&@@&&&&&&&&&&&&&&&&&&&&&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&%/////////////
//(#%%%##%%%%%%&&&&&&&&&&&&&&@@@@@@@@&&&@&@@@@@@@@@@@@&&&&&&&&&&&&&@&&&&&(,(&&&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&&&&&&&&&@@@@&&&&&&&%&&&&&&&&&&&&&&@&&&&&&&&&&&&&@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&#/////////(((
////((((((((&%%&&&&&&&&&&&&&@@@&&&&&@&&@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&%**///(&&&%%&&&&&&&@@&&&&&&&&&&&&&&&&&&&&&&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&(//////(((((
//((((((((/%%%&&&&&&&&&&&&&&&%%&&&&&&&@@@@@@@@@@@@@@@@@&&&&&&&&&@&,,***/((((&&&&%&&&&&&&&@&&&&&&&&&&&&&&&&&@&&&&&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&@@&&&&&&&&@&&&&@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&(//////////
/////((((((&%%&&&&&&&&&&&%&&&&&&&&&@@@@@@@@@@@@@@@@@@@@&&&&&&&&%,*////(###%&&&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&@&&&&&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&@@@@&&&&&&&&@&&@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&//////////
//********&%%&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@&&&&&&/,**/(##%%%&&&&&&&&&&&&&&&&@@&&&&&&&&&&&&&&&&&@@&&&&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&@@@@@@@&&&&&&&@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&/////////
//,,***//&%%&&&&&&&&&&&&&&&&&&&&&&&@&@@@@@@@@@@@@@@@@@@&&&&#,*//(#####&&&&&&&&&&&&&&&&&&@@&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@&&&&&&&&&&&&&&&&&&&@@@@@@@@&&&&&@&@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&////(/((
//**/(((%%%&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@&&&&*//((((##(&&&&&&&&&&&&&&#****,%&&&&&&&&&&&&&&&&&@&&&&&&&&@@@@@@&&&&&&&&&&&&&&&&&&&&&&@@@@@@@&&&&@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&#//////(
/////((((#%@&@@@@@@@@@@@@&@@@@@@@@@&%%%&@@@@@@@@@@@@@@@&&&***/////////&&&&&&&#*,,,,****/(&&&&&&&&&&&&&&&&&@@&&&&&&&&@@@@@@@&&&&&&&&&&&&&&&&&&&@@@@@@@@@@&&&@@@@@@@@@@@@@@@@@@&&&@@&&&&&&&&&&&&&&&%%((((/((
//((((((((((#@@&&@@@@@@@@@@@&(//*********///%@@@@@@@@@@&&/**,,,,***//(#/,,,,,,,******//***(&&&&&&&&&&&&&&&@@@&&&&&&&@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@&&@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&%&(((((/
//(((((((((/#@@@@@@&&&@@&(//******************/&@@@@@@@&(**,,,,,,,,,,,**////*****///#&/**,*/&&&&&&&&&&&&&&@@@&&&&&&&@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&@@@@&@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&///((
//((((((((/(%&&&&&@@@@&#//*********************************,,,,,***///(((#((((/(#&&#/*,,,,**%&&&&&&&&&&&&@@@@&&&&&&&@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@&@@&@@&&&&&&&&&&&&&&&%%%((((
///(///((//(%%@@@@@@&&#//////********************,,,,**********/((######%%%%&%#(///*,,,***/(///%&&&&&&&&&@&@@&&&&&&&@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&@@@@@%((##
//(/////(((%@@@@@@@&&%#(((//////////***/////*************///(((######%#####((///////***//((/**/&&&&&&&&&&&@@&&&&&&&&@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@&@@&&&@@@@@@@@@@@@@@@((((((###
//(((((((((((((%@@@&&%##(((((((((/////////////********////(###%##((///////(((((((##((((((/*,,**&&&&&&&&&@@@@&&&&&&&&@@@@@@@@@&&&&&&&&&&&&&@&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&/((#####
//(((((((((((((((//(%%%########((((((((((((/(///////////(((######((////(((########%&&#/*,,,**/#&&&&&&&&&&&&@&&&&&&&&@@@@@@@@@@&&&&&&&&&&&&&@@&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@&&@@@@@@@&@@@@&&&@@&##(#((#((