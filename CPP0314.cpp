//I'm HuyNho or you can call me Chimmey
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
const long long big = 1e6;

int main() {
    faster();
    int n;
    cin >> n;
    cin.ignore();
    vector <string> a(n);
    for (int i = 0 ; i < n ; i++)
    {
        getline(cin,a[i]);
    }
    sort(a.begin(),a.end());
    int res = 1;
    for (int i = 1 ; i < n ; i++)
    {
        if ( a[i] != a[i-1] )
        {
            res++;
        }
    }
    cout << res;
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
