#include<iostream>
using namespace std;

class complex
{
	float real;
	float imaginary;
public:
	complex() //intitalising constructor with no parameters
	{
		real = imaginary = 0;
	}
	complex(float input_real , float input_imaginary) //initialising constructor with two parameter
	{
		real = input_real;
		imaginary = input_imaginary;
	}
	complex(float input) //initialising constructor with single parameter
	{
		real = imaginary = input;
	}
	void display() //displays the  result constructor
	{
		cout << "real=" << real << endl;
		cout << "imaginary=" << imaginary << endl;
	}
	friend void add(complex complex_input1, complex complex_input2);
	friend void multiply(complex complex_input1, complex complex_input2);
	~complex() //destructor
	{

	}
};

void add(complex complex_input1, complex complex_input2) //initialising a add friend function 
{
	complex complex_input_temp;
	complex_input_temp.real = complex_input1.real + complex_input2.real;
	complex_input_temp.imaginary = complex_input1.imaginary + complex_input2.imaginary;
	complex_input_temp.display();
}

void multiply(complex complex_input1, complex complex_input2) //initialising a multiply friend function
{
	complex complex_input_temp;
	complex_input_temp.real = complex_input1.real * complex_input2.real;
	complex_input_temp.imaginary = complex_input1.imaginary * complex_input2.imaginary;
	complex_input_temp.display();
}

int main()
{
	float input, input1, input2;
	cout << "enter an input for constructor with only on parameter" << endl;
	cin >> input;
	cout << "enter input for input1 and input2 for constructor with two parameters" << endl;
	cin >> input1 >> input2;

	complex complex_input1, complex_input2(input1, input2), complex_input3(input); //calling different constructors

	cout << "\nResult when one complex input with two parameters add with complex input with no parameters i.e. with real=imaginary=0" << endl;
	add(complex_input1, complex_input2);

	cout << "\nResult when one complex input with two parameters add with complex input with singe paraameter i.e. real=imaginary=input" << endl;
	add(complex_input3, complex_input2);

	cout << "\nResult when one complex input with two parameters multiply with complex input with no parameters i.e. with real=imaginary=0" << endl;
	multiply(complex_input2, complex_input1);

	cout << "\nResult when one complex input with two parameters multiply with complex input with single parameters i.e. with real=imaginary=input" << endl;
	multiply(complex_input2, complex_input3);

	getchar();
	getchar();
	return 0;
}