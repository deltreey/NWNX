#define _CRT_SECURE_NO_WARNINGS
#include "NWNXAmia.h"

CNWNXAmia amia;

//Export the object
extern "C" __declspec(dllexport) CNWNXBase* GetClassObject(){
	return &amia;
}

BOOL APIENTRY DllMain (HANDLE hModule, DWORD ul_reason_for_call, LPVOID lpReserved){
    return TRUE;
}