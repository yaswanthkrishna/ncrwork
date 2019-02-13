#include<iostream>
using namespace std;

class complex
{
	float real;
	float img;
public:
	complex()
	{
		real = img = 0;
	}
	complex(float r, float i)
	{
		real = r;
		img = i;
	}
	complex(float x)
	{
		real = img = x;
	}
	void add_complex(complex c1, complex c2)
	{
		real = c1.real + c2.real;
		img = c1.img + c2.img;
	}
	void display()
	{
		cout << "real=" << real << endl;
		cout << "imaginary=" << img << endl;
	}
	friend void add(complex c1, complex c2);
	friend void multiply(complex c1, complex c2);
	~complex()
	{

	}
};
void add(complex c1, complex c2)
{
	complex c5;
	c5.real = c1.real + c2. real;
	c5.img = c1.img + c2.img;
	c5.display();
}
void multiply(complex c1, complex c2)
{
	complex c6;
	c6.real = c1.real * c2.real;
	c6.img = c1.img * c2.img;
	c6.display();
}
int main()
{
	complex c1, c2(3, 7), c3(4), c4;
	c4.add_complex(c2, c3);
	add(c1, c2);
	multiply(c2, c3);
	c4.display();
	return 0;
}
