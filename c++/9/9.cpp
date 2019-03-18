#include<iostream>
using namespace std;

class swapping
{
	int a, b;
public:
	swapping(int i, int j)
	{
		a = i;
		b = j;
	}
	void swap_reference(int *i, int *j)
	{
		*i = *i + *j;
		*j = *i - *j;
		*i = *i - *j;
		a = *i;
		b = *j;
	}
	void swap_value()
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	void display()
	{
		cout << "x is:" << a << "y is: " << b;
	}
	~swapping()
	{

	}
};
int main()
{
	swapping s1(2, 3);
	s1.swap_value();
	s1.display();
	getchar();
	return 0;
}