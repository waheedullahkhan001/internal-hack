#include <iostream>
#include <sstream>
#include <windows.h>
#include "dll.h"


DWORD g_threadID;
HMODULE g_hModule;

DWORD WINAPI MainThread(LPVOID);


INT APIENTRY DllMain(HMODULE hDLL, DWORD Reason, LPVOID Reserved) {
	switch(Reason) {
		case DLL_PROCESS_ATTACH:
            g_hModule = hDLL;
            DisableThreadLibraryCalls(hDLL);
            CreateThread(NULL, 0, &MainThread, NULL, 0, &g_threadID);
			break;
	}
	return TRUE;
}

DWORD WINAPI MainThread(LPVOID) {
	SetHealth(50);
	
	std::ostringstream sstream;
	sstream << "Health: " << GetHealth();
	std::string message = sstream.str();
	
	MessageBox(0, message.c_str(), "Custom Dll", MB_ICONINFORMATION);
	
    return 0;
}
