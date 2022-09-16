//#include <Windows.h>
//#include <stdio.h>
//#include <time.h>
//#include "junk.h"
//#include <TlHelp32.h>
//#include <vector>
//#include <string>
//#include "xor.h"
//
//#define EXIT_BEING_DEBUGGED -10
//
//inline void MyJunk1();
//
//std::vector<std::string> illegalSoftware{ XorStr("x64dbg.exe"), XorStr("x32dbg.exe"), XorStr("ollydbg.exe"), XorStr("ida64.exe"), XorStr("windbg.exe"), XorStr("depends.exe"), XorStr("peview.exe"), XorStr("ghidra.exe") };
//
//void XORCipher(char* str)
//{
//	const char key = 0x53;
//
//	size_t len = strlen(str);
//	size_t j = 0;
//	for (size_t i = 0; i < len - 1; i++, j++)
//	{
//		str[i] ^= key;
//	}
//}
//
//int IllegalSoftwarePresent()
//{
//	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, TH32CS_SNAPALL);
//
//	PROCESSENTRY32 procEntry;
//	procEntry.dwSize = sizeof(procEntry);
//	if (Process32First(hSnap, &procEntry))
//	{
//		do
//		{
//			for (size_t i = 0; i < illegalSoftware.size(); i++)
//			{
//				if (_stricmp(procEntry.szExeFile, illegalSoftware[i].c_str()) == 0)
//				{
//					return 1;
//				}
//			}
//		} while (Process32Next(hSnap, &procEntry));
//		return 0;
//	}
//	else
//		return 0;
//}
//
//typedef BOOL(*queryPerformanceCounter)(LARGE_INTEGER*);
//
//int main()
//{
//	XorStr("MySecretStr");
//	int ret = IllegalSoftwarePresent();
//	if (ret > 0)
//		exit(EXIT_BEING_DEBUGGED);
//
//	DWORD ticks = GetTickCount();
//	srand(time(0));
//	bool debuggerPresent = IsDebuggerPresent();
//
//
//	char input[256];
//	char correctPasswordMsg[] = { 0x10, 0x3c, 0x21, 0x21, 0x36, 0x30, 0x27, 0x73, 0x23, 0x32, 0x20, 0x20, 0x24, 0x3c, 0x21, 0x37, 0xa, 0x00 };
//	char invalidPasswordMsg[] = { 0x1a, 0x3d, 0x25, 0x32, 0x3f, 0x3a, 0x37, 0x73, 0x23, 0x32, 0x20, 0x20, 0x24, 0x3c, 0x21, 0x37, 0xa, 0x00 };
//	char entryInfoText[] = { 0x62, 0x60, 0x60, 0x64, 0x1, 0x36, 0x25, 0x36, 0x21, 0x20, 0x36, 0x16, 0x3d, 0x34, 0x3a, 0x3d, 0x36, 0x36, 0x21, 0x74, 0x20, 0x73, 0x30, 0x21, 0x32, 0x30, 0x38, 0x3e, 0x36, 0x7f, 0x73, 0x21, 0x36, 0x32, 0x37, 0x73, 0x21, 0x36, 0x32, 0x37, 0x3e, 0x36, 0x73, 0x35, 0x3c, 0x21, 0x73, 0x3e, 0x3c, 0x21, 0x36, 0x73, 0x3a, 0x3d, 0x35, 0x3c, 0x21, 0x3e, 0x32, 0x27, 0x3a, 0x3c, 0x3d, 0x7d, 0xa, 0x00 };
//	char queryPerformanceCounterStr[] = { 0x2, 0x26, 0x36, 0x21, 0x2a, 0x3, 0x36, 0x21, 0x35, 0x3c, 0x21, 0x3e, 0x32, 0x3d, 0x30, 0x36, 0x10, 0x3c, 0x26, 0x3d, 0x27, 0x36, 0x72, 0x00 };
//#include "junkdata.h"
//
//	XORCipher(entryInfoText);
//	XORCipher(queryPerformanceCounterStr);
//	XorCompileTime::w_printf(XorStr("1337reverseengineer's crackme, read readme for more information.\n"));
//	HMODULE hMod = GetModuleHandle("kernel32.dll");
//	queryPerformanceCounter queryPerformanceCounterFun = (queryPerformanceCounter)GetProcAddress(hMod, queryPerformanceCounterStr);
//
//	if (GetTickCount() - ticks > 1000)
//	{
//		exit(EXIT_BEING_DEBUGGED);
//	}
//	bool running = true;
//	XORCipher(invalidPasswordMsg);
//	while (running)
//	{
//		ticks = GetTickCount();
//
//		LARGE_INTEGER performanceCount{};
//		queryPerformanceCounterFun(&performanceCount);
//		if (strlen(input) > 0 && performanceCount.QuadPart % 20 == 0 && debuggerPresent)
//		{
//			exit(EXIT_BEING_DEBUGGED);
//			break;
//		}
//
//		if (GetTickCount() - ticks > 1000)
//		{
//			exit(EXIT_BEING_DEBUGGED);
//		}
//
//		fgets(input, sizeof(input), stdin);
//
//		if (strlen(input) > 1)
//			input[strcspn(input, "\n")] = 0;
//		XORCipher(input);
//		if (strcmp(input, password) == 0)
//		{
//			XORCipher(correctPasswordMsg);
//			printf(correctPasswordMsg);
//			break;
//		}
//		else
//		{
//			printf(invalidPasswordMsg);
//		}
//
//
//		if (IsDebuggerPresent())
//		{
//			exit(EXIT_BEING_DEBUGGED);
//		}
//
//		if (IllegalSoftwarePresent() > 0)
//		{
//			exit(EXIT_BEING_DEBUGGED);
//		}
//	}
//
//	system("PAUSE");
//	return 0;
//}