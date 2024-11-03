#include <Windows.h>
#include <iostream>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;

int main() 
{
	string zk = fs::current_path().string();
	string steamworks_sdkinc = zk + "\\public\\steam";
	string steamapi_x86 = zk + "\\redistributable_bin";
	string steamapi_x64 = zk + "\\redistributable_bin\\win64";
	string steamworks_public = "set STEAMWORKS_SDK_INCLUDES=" + steamworks_sdkinc;
	string steam_apix86_cmd = "set STEAMAPI_X86LIBRARY=" + steamapi_x86;
	string steam_api64_cmd = "set STEAMAPI_X64LIBRARY=" + steamapi_x64;
	const char* lk = steamworks_public.c_str();
	const char* xz = steam_apix86_cmd.c_str();
	const char* zzk = steam_api64_cmd.c_str();
	SetConsoleTitleA("SteamworksSDK-AutoConfiguration by RiritoXXL");
	cout << "This is Auto Configuration for STEAMWORKS SDK(SOFTWARE DEVELOPMENT KIT)... \nThis Program is Created by RiritoXXL(ME)... So Enjoy to use this!!!" << endl;
	Sleep(3000);
	system(lk);
	system(xz);
	system(zzk);
	Sleep(1200);
	system("taskkill /f /im explorer.exe"); //Killing This Process Because it's Shell :D
	Sleep(2000);
	system("start explorer"); //Start Again Explorer because environment now changed for STEAMWORKS :D
	Sleep(10000);
	return 0;
}
