#include<iostream>
using namespace std;

struct __queue__
{
	int front;
	int rear;
	int *s;
	int size;
};
class _queue_
{
	struct __queue__ q;
public:
	_queue_();
	void getsize(int);
	void enqueue(int);
	int dequeue();
	void display();
	bool IsEmpty();
	bool IsFull();
	~_queue_();
};
_queue_::_queue_()
{
	q.front = -1;
	q.rear = -1;
	q.size = 0;
	q.s = NULL;
}
void _queue_::getsize(int n)
{
	q.size = n;
	q.s = new int[n];
}
bool _queue_::IsEmpty()
{
	return(q.rear == -1);
}
bool _queue_::IsFull()
{
	return(q.rear == (q.size - 1));
}
void _queue_::enqueue(int ch)
{
	if (!IsFull())
	{
		if (q.front == -1)
		{
			q.front = 0;
		}
		(q.rear)++;
		q.s[q.rear] = ch;
	}
	else
	{
		cout << "\nQueue is Full" << endl;
	}
}
int _queue_::dequeue()
{
	int x;
	if (!IsEmpty())
	{
		x = q.s[q.front];
		q.front++;
	}
	else
	{
		x = -99;
	}
	return x;
}
void _queue_::display()
{
	int i;
	for (i = q.front; i <= q.rear; i++)
	{
		cout << "\nqueue is" << q.s[i];
	}
}
_queue_::~_queue_()
{
	delete q.s;
}
int main()
{
	_queue_ a;
	a.getsize(5);
	a.enqueue(3);
	a.enqueue(5);
	a.enqueue(8);
	a.enqueue(11);
	a.display();
	a.dequeue();
	a.display();
	getchar();
	return 0;
}