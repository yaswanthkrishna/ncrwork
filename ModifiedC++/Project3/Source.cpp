#include<iostream>
#define MAX 100
using namespace std;

template<class T> 
class STACK
{
	T stack[MAX];
	int top;
public:
	STACK()
	{
		top = -1;
	}
	void push(T input_element)
	{
		if (top == MAX - 1)
		{
			cout << "Stack Overflow" << endl;
		}
		else
		{
			stack[++top] = input_element;
			cout << "Pushed the element" << input_element << endl;
		}
	}
	T pop()
	{
		if (top == -1)
		{
			cout << "Stack Underflow" << endl;
		}
		else
		{
			return stack[top--];
		}
	}
	void display()
	{
		int count;
		if (top == -1)
		{
			cout << "Stack is EMPTY" << endl;
		}
		else
		{
			cout << "Stack is :" << endl;
			for (count = 0; count <= top; count++)
			{
				cout << stack[count] << endl;
			}
		}
	}
	~STACK()
	{

	}
};

class COMPLEX
{
	float real;
	float imaginary;
public:
	COMPLEX()
	{
		real = 0;
		imaginary = 0;
	}
	COMPLEX(float input_real, float input_imaginary) //initialising constructor with two parameter
	{
		real = input_real;
		imaginary = input_imaginary;
	}
	void display() //displays the  result constructor
	{
		cout << "real=" << real << endl;
		cout << "imaginary=" << imaginary << endl;
	}
	friend ostream &operator <<(ostream &cout, COMPLEX number);
	~COMPLEX() //destructor
	{

	}
};

ostream &operator <<(ostream &cout, COMPLEX number)// Overloading the << to print the Complex data types
{
	cout << "REAL" << number.real << endl;
	cout << "IMAGINARY" << number.imaginary;
	cout << endl;
	return (cout);
}

int main()
{
	float input_real,input_imaginary;
	STACK<int> stack_int;
	STACK<float> stack_float;
	STACK<COMPLEX> stack_complex;
	STACK<char*> stack_string;
	int choice,choice2;
	do
	{
		cout << "Enter your choice from below options" << endl;
		cout << " 1) STACK type will be integer \n 2) STACK type will be float \n 3) STACK type will be char* \n 4) STACK type will be COMPLEX" << endl;
		cin >> choice;
			if(choice == 1)
			{

				do
				{
					cout << "You selected to work on integer type stack" << endl;
					cout << "Enter the choice to be performed 1.Push \n 2.POP \n 3.Display \n 4.Exit\n";
					cin >> choice2;
					switch (choice2)
					{
						case 1:
						{
							int input_element;
							cout << "Enter the element to be pushed" << endl;
							cin >> input_element;
							stack_int.push(input_element);
							break;
						}
						case 2:
						{
							cout << "Popped the element :" << stack_int.pop() << endl;
							break;
						}
						case 3:
						{
							stack_int.display();
							break;
						}
						case 4:
						{
							break;
						}
					}
				} while (choice2 != 4);
			}
			else if(choice == 2)
			{
				float input_element;

				do
				{
					cout << "You selected to work on float type stack" << endl;
					cout << "Enter the choice to be performed 1.Push \n 2.POP \n 3.Display \n 4.Exit\n";
					cin >> choice2;
					switch (choice2)
					{
						case 1:
						{
							cout << "Enter the element to be pushed" << endl;
							cin >> input_element;
							stack_float.push(input_element);
							break;
						}
						case 2:
						{
							cout << "Popped the element :" << stack_float.pop() << endl;
							break;
						}
						case 3:
						{
							stack_float.display();
							break;
						}
						case 4:
						{
							break;							
						}
					}
				} while (choice2 != 4);
			}
			else if(choice == 3)
			{
				char* string;
				int length_string;
	
				do
				{
					cout << "You selected to work on string type stack" << endl;
					cout << "Enter the choice to be performed 1.Push \n 2.POP \n 3.Display \n 4.Exit\n";
					cin >> choice2;
					switch (choice2)
					{
						case 1:
						{
							cout << "Enter the length of the string to be considered\n";
							cin >> length_string;
							string = new char[length_string + 1];
							cout << "Enter the element to be pushed" << endl;
							cin >> string;
							stack_string.push(string);
							break;
						}
						case 2:
						{
							cout << "Popped the element :" << stack_string.pop() << endl;
							break;
						}
						case 3:
						{
							stack_string.display();
							break;
						}
						case 4:
						{
							break;			
						}
					}
				} while (choice2 != 4);
			}
			else if(choice == 4)
			{
				float input_real, input_imaginary;

				do
				{
					cout << "You selected to work on complex type stack" << endl;
					cout << "Enter the choice to be performed 1.Push  \n 2.Display \n 3.Exit\n";
					cin >> choice2;
					switch (choice2)
					{
						case 1:
						{
							cout << "Enter the real element to be pushed" << endl;
							cin >> input_real;
							cout << "Enter the imaginary element to be pushed" << endl;
							cin >> input_imaginary;
							COMPLEX(input_real, input_imaginary);
							break;
						}
						case 2:
						{
							stack_float.display();
							break;
						}
						case 3:
						{
							break;	
						}
					}
				} while (choice2 != 3);
			}
			else if(choice == 5)
			{
				break;
			}
	} while (choice != 5);
	return 0;
}