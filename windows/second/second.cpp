#include<Windows.h>
#include<iostream>
using namespace std;
int main()
{
	LPWSTR *size;
	int count;
	int i;
	size = CommandLineToArgvW(GetCommandLineW(), &count);
	if (size == NULL)
	{
		cout << "\nCommandLineToArgW command has failed" << endl;
	}
	else
	{
		cout << "string is";
		for (i = 0; i < count; i++)
		{
			wcout << size[i]<<endl;
		}
	}
	LocalFree(size);
	getchar();
	return 0;
}