//I'm HuyNho or you can call me Chimmey
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
const long long big = 1e6;
vector <long long> res;
int n, cnt;
matrix a, check;

int main() {
    faster();
    int t;
    cin >> t;
    while ( t-- )
    {
        int n, somu = 0;
        cin >> n;
        for (int i = 2 ; i <= 10000 ; i++)
        {
            somu = 0;
            while ( n % i == 0 )
            {
                somu++;
                n /= i;
            }
            if ( somu != 0 )
            {
                cout << i << " " << somu << " ";
            }
        }
        if ( t != 0 )
        {
            cout << endl;
        }
    }
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