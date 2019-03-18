#include<iostream>
int result = 0;
int add(int a, int b); //function to link add file
long int multiply(int a, int b); //function to link subtract file
int substract(int a, int b); //function to link multiply file
float division(int a, int b);//function to link division file
using namespace std;
#define SIZE 100
#define MAX 10

class _stack_ //creation of class for conversion of infix to postfix
{
	struct sta
	{
		int top;
		char *elements;
		int size;
	}stack;
public:
	_stack_()
	{
	}
	_stack_(int size)
	{
		stack.size = size;
		stack.elements = new char[size];
		stack.top = -1;
	}
	bool isEmpty() //checking empty condition for class
	{
		if (stack.top == -1)
			return true;
		return false;
	}
	bool isFull() //checking full condition for class
	{
		if (stack.top == stack.size - 1)
		{
			return true;
		}
		return false;
	}
	void Push(char x) //input of values into stack
	{
		if (stack.top == stack.size - 1)
		{
			cout << "stack Full";
			return;
		}
		else
		{
			stack.elements[++stack.top] = x;
		}
	}
	char Pop() //output from stack
	{
		int x = -999;
		if (stack.top == -1)
		{
			//cout<<"stack Empty";
			return x;
		}
		x = stack.elements[stack.top--];
		return x;
	}
	char Peek() //length of stack or highest value of stack
	{
		int x = -999;
		if (stack.top == -1)
		{
			//cout<<"stack Empty";
			return x;
		}
		else
		{
			x = stack.elements[stack.top];
			return x;
		}
	}
	void Display() // to display stack
	{
		for (int i = 0; i <= stack.top; i++)
		{
			cout << stack.elements[i];
		}
	}
	~_stack_() //destructorfor class
	{
		delete (stack.elements);
	}
};
int Precedence(char x) //checking value or priority of each operator 
{
	if (x == '*' || x == '/')
		return  3;
	else if (x == '+' || x == '-')
		return 2;
	else
		return 1;
}
class _stack1_ //Second class for Postfix evaluation//
{
	struct sta
	{
		int top;
		int *elements;
		int size;
	}stack;
public:
	_stack1_()
	{
	}
	_stack1_(int size)
	{
		stack.size = size;
		stack.elements = new int[size];
		stack.top = -1;
	}
	bool isEmpty()
	{
		if (stack.top == -1)
			return true;
		return false;
	}
	bool isFull()
	{
		if (stack.top == stack.size - 1)
		{
			return true;
		}
		return false;
	}
	void Push(int x)
	{
		if (stack.top == stack.size - 1)
		{
			cout << "stack Full";
			return;
		}
		else
		{
			stack.elements[++stack.top] = x;
		}
	}
	int Pop()
	{
		int x = -999;
		if (stack.top == -1)
		{
			cout << "stack Empty";
			return x;
		}
		else
		{
			x = stack.elements[stack.top--];
			return x;
		}
	}
	int Peek()
	{
		int x = -999;
		if (stack.top == -1)
		{
			cout << "stack Empty";
			return x;
		}
		else
		{
			x = stack.elements[stack.top];
			return x;
		}
	}
	void Display()
	{
		for (int i = 0; i <= stack.top; i++)
		{
			cout << stack.elements[i] << endl;
		}
	}

	~_stack1_()
	{
		delete (stack.elements);
	}
};
int main()
{
	int choice;
	char input_string[SIZE];

	do
	{
		cout << "\nDo u want to continue ?" << endl;
		cout << "Type 1 if u want to stop Execution or any integer to continue" << endl;
		cin >> choice;
		if (choice == 1) //condition to check termination
		{
			cout << "\n Calculator stopped" << endl;
			getchar();
			getchar();
			return 0;
		}
		cout << "Enter an expression by following below conditions" << endl;
		cout << "1) Only single digit is acceptable \n2) Positive numbers are only accepted \n3)Only integers are accepted" << endl; //conditions for calculator//
		cin >> input_string;
		int len = strlen(input_string);
		for (int i = 0; i < len; i++)
		{ // loop to check whether input is following or not given conditions//
			if (!((input_string[i] >= '0' && input_string[i] <= '9' )|| input_string[i] == '*' || input_string[i] == '-' || input_string[i] == '+' || input_string[i] == '/' || input_string[i] == '(' || input_string[i] == ')'))
			{
				cout << "\n Error! Your input is not following given instructions please check your input" << endl;
				getchar();
				getchar();
				return 0;
			}
		}
		char result[SIZE];
		_stack_ s(MAX);
		int curr = 0;
		char ch;
		int k = 0;
		for (int i = 0; i < strlen(input_string); i++)
		{
			ch = input_string[i]; 
			if (isdigit(ch) || isalpha(ch)) 
			{
				result[k++] = ch;
			}
			else if (ch == '(') //pushing vlues for prioritising the calculation in parenthesis
			{
				s.Push(ch);
			}
			else if (ch == ')')  //condition to pop values till closing parenthesis appear
			{
				while (s.Peek() != '(')
				{
					result[k++] = s.Pop();
				}
				s.Pop();
			}
			else if (s.isEmpty())
			{
				s.Push(ch);
			}
			else if (Precedence(ch) > Precedence(s.Peek())) //function call to check precedence and comparing each priority
			{
				s.Push(ch);
			}
			else
			{
				while (Precedence(ch) <= Precedence(s.Peek()))
				{
					result[k++] = s.Pop();
				}
				s.Push(ch);
			}
		}
		while (!s.isEmpty()) //this continues till stack is empty
		{
			result[k++] = s.Pop();
		}
		result[k] = '\0';
		_stack1_ s1(MAX);
		for (int i = 0; i < strlen(result); i++)
		{
			char ch;
			ch = result[i];
			if (isdigit(ch) && !s1.isFull())
			{
				s1.Push(ch - '0');
			}
			else
			{
				int a = s1.Pop();
				int b = s1.Pop();
				switch (ch) //switch condition to call file as per the operator
				{
				case '+': s1.Push(add(a, b));
					break;
				case '-': s1.Push(substract(b, a));
					break;
				case '*': s1.Push(multiply(b, a));
					break;
				case '/': s1.Push(division(b, a));
					break;
				}
			}
		}
		cout << "Result is = " << s1.Pop();
	} while (choice != 1);
	getchar();
	getchar();
	return 0;
}