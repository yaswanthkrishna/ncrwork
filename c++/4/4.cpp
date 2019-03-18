#include<iostream>
using namespace std;
inline int addition(int a, int b)
{
	return (a + b);
}
inline int subtraction(int a, int b)
{
	return (a - b);
}
inline long int multiplication(int a, int b)
{
	return (a*b);
}
inline float divison(int a, int b)
{
	return (float)a / b;
}
class arthimatic
{
	int a;
	int b;
public:
	void get_input(int first, int second)
	{

		a = first;
		b = second;
		get_output();
	}
	void get_output()
	{
		cout << "sum is " << addition(a, b) << endl;
		cout << "subtraction is" << subtraction(a, b) << endl;
		cout << "multiplication is" << multiplication(a, b) << endl;
		cout << "divison is" << divison(a, b) << endl;
	}

};
int main()
{
	int first, second;
	arthimatic d;
	cout << "enter first term";
	cin >> first;
	cout << "\nenter second term" << endl;
	cin >> second;
	d.get_input(first, second);
	getchar();
	getchar();
	return 0;
}
