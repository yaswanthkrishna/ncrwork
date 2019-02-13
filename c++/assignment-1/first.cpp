#include<iostream>
using namespace std;

class time
{
	int hours;
	int minutes;
	int seconds;

public:

	time()
	{
		hours = minutes = seconds = 0;
	}
	time(int h, int m, int s)
	{
		hours = h;
		minutes = m;
		seconds = s;
	}
	void display()
	{
		cout << "hours:" << hours << "minutes:" << minutes << "seconds:" << seconds << endl;
	}
	void add_time(time &a, time &b)
	{
		seconds = a.seconds + b.seconds;
		minutes = seconds / 60;
		seconds = seconds % 60;
		minutes = a.minutes + b.minutes+minutes;
		hours = minutes / 60;
		minutes = minutes % 60;
		hours = a.hours + b.hours+minutes;
		hours =hours% 24;
	}
	~time()
	{

	}
};
int main()
{
	time t1(2,25,34), t2(5, 25, 33), t3;
	t3.add_time(t1, t2);
	t1.display();
	t2.display();
	t3.display();
	return 0;
}
