#include<iostream>
using namespace std;

struct __stack__
{
	int top;
	int *s;
	int size;
};
class _stack_
{
	struct __stack__ sta;
public:
	_stack_();
	void push(int);
	int pop();
	int peek();
	bool IsEmpty();
	bool IsFull();
	void display();
	void getsize(int);
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
	sta.s = new int[n];
}
bool _stack_::IsFull()
{
	return (sta.top == (sta.size - 1));
}
bool _stack_::IsEmpty()
{
	return (sta.top == -1);
}
void _stack_::push(int ch)
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
int _stack_::pop()
{
	int x = -999;
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
int _stack_::peek()
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
_stack_::~_stack_()
{
	delete sta.s;
}

int main()
{
	_stack_ a;
	int p;
	a.getsize(5);
	a.pop();
	a.push(5);
	a.push(7);
	a.push(8);
	a.push(15);
	a.push(6);
	a.display();
	a.pop();
	p = a.peek();
	cout << "\n peek is:";
	cout << p << endl;
	a.display();
	getchar();
	return 0;
}