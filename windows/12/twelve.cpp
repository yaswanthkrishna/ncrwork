#include<Windows.h>
#include<iostream>
using namespace std;

DWORD WINAPI function(LPVOID str)
{
	cout << "yaswanth" << endl;
	return 0;
}

int main()
{
	HANDLE thread;
	LPVOID str = NULL;
	thread = CreateThread(NULL, 0, function, str, 0, NULL);
	if (thread == NULL)
	{
		cout << "\ncreation of thread is failed : " << GetLastError() << endl;
	}
	WaitForSingleObject(thread, INFINITE);
	CloseHandle(thread);
	getchar();
}
