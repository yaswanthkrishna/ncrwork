#include<Windows.h>
#include<iostream>
#include<tchar.h>
using namespace std;

int _tmain(int argc, TCHAR *argv[], WCHAR *env[])
{
	HANDLE Event;
	Event = CreateEvent(NULL, FALSE, FALSE, TEXT("NEW"));
	if (Event == NULL)
	{
		cout << "Create Event function failed :" << GetLastError() << endl;
	}
	else
	{
		cout<<"Success"<<endl;
	}
	CloseHandle(Event);
	getchar();
	return 0;
}