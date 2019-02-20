#include<iostream>
using namespace std;

struct __stack__
{
	int top;
	char *s;
	int size;
};
class _stack_
{
	struct __stack__ sta;
public:
	_stack_();
	void push(char);
	char pop();
	char peek();
	bool IsEmpty();
	bool IsFull();
	void display();
	void getsize(int);
	bool balancing(const char*);
	~_stack_();
};

_stack_::_stack_()
{
	sta.top = -1;
	sta.s = NULL;
	sta.size = 0;
}
void _stack_::getsize(int n)
{
	sta.size = n;
	sta.s = new char[n];
}
bool _stack_::IsFull()
{
	return (sta.top == (sta.size - 1));
}
bool _stack_::IsEmpty()
{
	return (sta.top == -1);
}
void _stack_::push(char ch)
{
	if (!IsFull())
	{
		sta.s[++sta.top] = ch;
	}
	else
	{
		cout << "\n Stack is Full";
	}
}
char _stack_::pop()
{
	char x = -999;
	if (!IsEmpty())
	{
		x = sta.s[sta.top--];
	}
	else
	{
		cout << "\nStack is empty";
	}
	return x;
}
char _stack_::peek()
{
	if (!IsEmpty())
	{
		return (sta.s[sta.top]);
	}
}
void _stack_::display()
{
	int i;
	cout << "\nstack is" << endl;
	for (i = 0; i <= sta.top; i++)
	{
		cout << sta.s[i];
	}
}
bool _stack_::balancing(const char* str)
{
	int i, flag = 0;
	char c;
	for (i = 0; i <= strlen(str); i++)
	{
		c = str[i];
		switch (c)
		{
		case '(':
		case '[':
		case '{':
			push(c);
			break;
		case ')':
		case ']':
		case '}':
			if (c == ')' && peek() == '(' || c == ']' && peek() == '[' || c == '}' && peek() == '{')
			{
				pop();
				break;
			}
			else
			{
				return false;
			}

		default:
			;
		}
	}
	return IsEmpty();
}
_stack_::~_stack_()
{
	delete sta.s;
}

int main()
{
	_stack_ a;
	const char *s;
	a.getsize(15);
	s = { "{[(a+b)+c{d}]}" };

	a.display();

	cout << "the condition is:" << a.balancing(s);
	getchar();
	return 0;
}