#include<windows.h>
#include<iostream>
using namespace std;
int main()
{
	WCHAR string[] = L"yaswanth";
	cout << (IsTextUnicode(string, wcslen(string), NULL));
	int size = WideCharToMultiByte(CP_UTF8, 0, string, wcslen(string), NULL, 0, NULL, NULL);
	PCHAR simple = new char[size + 1];
	WideCharToMultiByte(CP_UTF8, 0, string, wcslen(string), simple, size, NULL, NULL);
	simple[size] = '\0';
	cout << "\nnew string is " << simple << endl;
	cout << "multi byte string is :" << simple << endl;
	cout << (IsTextUnicode(simple, size + 1, NULL));
	int size1=MultiByteToWideChar(CP_UTF8,0,simple,-1,NULL,0);
	PWCHAR output = new WCHAR[size1+1];
	MultiByteToWideChar(CP_UTF8, 0, simple, -1,output,size1);
	wcout << "\n comparing strings:" << output << endl;
	cout << (IsTextUnicode(output, size1 + 1, NULL));
	getchar();
	return 0;
}