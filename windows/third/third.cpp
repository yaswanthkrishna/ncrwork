#include<Windows.h>
#include<iostream>
using namespace std;
int main()
{
	LPCTSTR environmentstrings = TEXT("OS = %OS%");
	TCHAR destination[50];
	DWORD size = 50;
	DWORD count;
	count = ExpandEnvironmentStrings(environmentstrings, destination, size);

	wcout << "link is" << destination;
	getchar();
	return 0;
}