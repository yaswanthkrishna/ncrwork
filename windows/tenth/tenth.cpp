#include<Windows.h>
#include<iostream>
#include<tchar.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[], WCHAR* env[])
{
	SECURITY_ATTRIBUTES file;
	file.nLength = sizeof(file);
	file.bInheritHandle = TRUE;
	file.lpSecurityDescriptor = NULL;
	HANDLE create;
	create = CreateFile(argv[1], GENERIC_READ, 0, &file, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (create == INVALID_HANDLE_VALUE)
	{
		cout << "\ncreation of file is failed:" << GetLastError() << endl;
	}
	else
	{
		STARTUPINFOA start_information;
		PROCESS_INFORMATION process_information;
		ZeroMemory(&start_information, sizeof(start_information));
		ZeroMemory(&process_information, sizeof(process_information));
		start_information.cb = sizeof(start_information);
		BOOL process = 0;
		process = CreateProcessA(NULL, argv[2], &file, NULL, TRUE, 0, NULL, NULL, &start_information, &process_information);
		if (process == 0)
		{
			cout << "\nCreation of process is failed" << GetLastError() << endl;
		}
		else
		{
			cout << "\nprocess creation is success" << endl;
			cout << "handle value is " << process_information.hProcess << endl;
			cout << "handle value of create file handler is " << create << endl;
		}
		WaitForSingleObject(process_information.hProcess, INFINITE);
		CloseHandle(process_information.hProcess);
	}
	getchar();
	return 0;
}
