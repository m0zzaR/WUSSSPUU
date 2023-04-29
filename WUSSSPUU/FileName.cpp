#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hprevInstance, PWSTR pCmdLine, int CmdShow) {

	/*
	BOOL CreateProcessW(
  [in, optional]      LPCWSTR               lpApplicationName,
  [in, out, optional] LPWSTR                lpCommandLine,
  [in, optional]      LPSECURITY_ATTRIBUTES lpProcessAttributes,
  [in, optional]      LPSECURITY_ATTRIBUTES lpThreadAttributes,
  [in]                BOOL                  bInheritHandles,
  [in]                DWORD                 dwCreationFlags,
  [in, optional]      LPVOID                lpEnvironment,
  [in, optional]      LPCWSTR               lpCurrentDirectory,
  [in]                LPSTARTUPINFOW        lpStartupInfo,
  [out]               LPPROCESS_INFORMATION lpProcessInformation
);



		if (
			!CreateProcessW(
			L"C:\\Windows\\System32\\notepad.exe",
			NULL,
			NULL,
			NULL,
			FALSE,
			BELOW_NORMAL_PRIORITY_CLASS,
			NULL,
			NULL,
			&si,
			&pi
				
		)) {
			MessageBoxW(
				NULL,
				L"u just got hacked lol, bruh moment",
				L"",
				MB_ABORTRETRYIGNORE
			);
		}
	*/
	STARTUPINFO si = { 0 };
	PROCESS_INFORMATION pi = { 0 };

	int bruh = MessageBox(NULL, L"HI i do not want to die....", L"", MB_RETRYCANCEL);


	if (bruh == IDRETRY) {
		CreateProcessW(
			L"C:\\Windows\\System32\\notepad.exe",
			NULL,
			NULL,
			NULL,
			FALSE,
			BELOW_NORMAL_PRIORITY_CLASS,
			NULL,
			NULL,
			&si,
			&pi
		);
	}
	else {
		MessageBox(NULL, L"W-why would you kille meee!... blehhhh--", L"God will punish you", MB_HELP);
	}
	return 0;

}

