#include <Windows.h>
#include <iostream>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;

int main() 
{
	wstring zk = fs::current_path();
	wstring steamworks_sdkinc = zk + L"\\public\\steam";
	wstring steamapi_x86 = zk + L"\\redistributable_bin";
	wstring steamapi_x64 = zk + L"\\redistributable_bin\\win64";
	wstring steamworks_public = L"set STEAMWORKS_SDK_INCLUDES=" + steamworks_sdkinc;
	wstring steam_apix86_cmd = L"set STEAMAPI_X86LIBRARY=" + steamapi_x86;
	wstring steam_api64_cmd = L"set STEAMAPI_X64LIBRARY=" + steamapi_x64;
	const char* lk = (const char*)steamworks_public.c_str();
	const char* xz = (const char*)steam_apix86_cmd.c_str();
	const char* zzk = (const char*)steam_api64_cmd.c_str();
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