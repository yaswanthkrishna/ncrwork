#include<Windows.h> 
#include<iostream>
#include<tchar.h>
using namespace std;

int _tmain(int argc, TCHAR *argv[], WCHAR *env[])
{
	STARTUPINFOA start_information;
	PROCESS_INFORMATION process_information;
	ZeroMemory(&start_information, sizeof(start_information));
	ZeroMemory(&process_information, sizeof(process_information));
	start_information.cb = sizeof(start_information);
	BOOL create_process = 0;
	
	create_process = CreateProcess(NULL, argv[1], NULL, NULL, FALSE, 0, NULL, NULL, &start_information, &process_information);
	if (create_process == 0)
	{
		cout << "\ncreation of process is failed " << GetLastError() << endl;
	}
	WaitForSingleObject(process_information.hProcess, INFINITE);
	cout << "the process id is : " << process_information.dwProcessId << "\nthe thread id is : " << process_information.dwThreadId << endl;
	CloseHandle(process_information.hProcess);
	CloseHandle(process_information.hThread);
	
	STARTUPINFOA start_information1;
	PROCESS_INFORMATION process_information1;
	ZeroMemory(&start_information1, sizeof(start_information1));
	ZeroMemory(&process_information1, sizeof(process_information1));
	start_information1.cb = sizeof(start_information1);
	BOOL create_process1 = 0;


	create_process1 = CreateProcess(NULL, argv[2], NULL, NULL, FALSE, 0, NULL, NULL, &start_information1, &process_information1);
	if (create_process1 == 0)
	{
		cout << "\ncreation of process is failed " << GetLastError() << endl;
	}
	WaitForSingleObject(process_information1.hProcess, INFINITE);
	cout << "the process id is : " << process_information1.dwProcessId << "\nthe thread id is : " << process_information1.dwThreadId << endl;
	CloseHandle(process_information1.hProcess);
	CloseHandle(process_information1.hThread);
	getchar();
	return 0;
}