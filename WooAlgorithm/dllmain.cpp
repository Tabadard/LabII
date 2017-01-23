// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	//  main proc
	case DLL_PROCESS_ATTACH:
	// new threads 
	case DLL_THREAD_ATTACH:
	// natural stop
	case DLL_THREAD_DETACH:
	// fire stop
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

