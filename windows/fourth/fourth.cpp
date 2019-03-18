#include<Windows.h>
#include<iostream>
#include<tchar.h>
#define size 100
using namespace std;
int _tmain(int argc, _TCHAR* argv[], WCHAR* env[])
{
	WCHAR Buffer[size];
	ZeroMemory(Buffer, size);
	HANDLE textfile;
	DWORD examplesize = 0;
	bool check;
	textfile = CreateFile(argv[1], GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (textfile == INVALID_HANDLE_VALUE)
	{
		cout << "\nFile creation error" << endl;
	}
	else
	{
		check = ReadFile(textfile, Buffer, size, &examplesize, NULL);
		if (check == 0)
		{
			cout << "\n read failed" << endl;
		}
		else
		{
			cout << "\n Success" << endl;
			_tprintf(_T("%s"), Buffer);
		}
	}
	CloseHandle(textfile);
	getchar();
	return 0;
}