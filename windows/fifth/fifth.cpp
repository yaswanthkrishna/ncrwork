#include<Windows.h>
#include<iostream>
#include<tchar.h>
#define size 100
using namespace std;
int _tmain(int argc, _TCHAR* argv[], WCHAR* env[])
{
	CHAR Buffer[] = "Thope";
	HANDLE textfile;
	DWORD examplesize = 0;
	bool check;
	textfile = CreateFileA(argv[1], GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (textfile == INVALID_HANDLE_VALUE)
	{
		cout << "\nFile creation error" << endl;
	}
	else
	{
		check = WriteFile(textfile, Buffer,(strlen(Buffer) + 1), &examplesize, NULL);
		if (check == 0)
		{
			cout << "\n Write failed" << endl;
		}
		else
		{
			cout << "\n Success" << endl;
			_tprintf(_T("%s"), argv[1]);
		}
	}
	CloseHandle(textfile);
	getchar();
	return 0;
}