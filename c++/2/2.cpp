#include<iostream>
#include<cstring>
using namespace std;

class students
{
	char *studentName;
	char *grade;
	int marks1, marks2, marks3;
	int len, len2;

public:
	void set_data(char *s, int m1, int m2, int m3)
	{
		len = strlen(s);
		studentName = new char[len+1];
		strcpy_s(studentName, 100, s);
		marks1 = m1;
		marks2 = m2;
		marks3 = m3;
		ComputeGrade();
	}
	float calculateAverage()
	{
		float average;
		average = (float)(marks1 + marks2 + marks3) / 3;
		return(average);
	}
	void ComputeGrade()
	{
		float avg = calculateAverage();
		grade = (char*)malloc(sizeof(char) * 100);
		if (avg > 60)
		{
			strcpy_s(grade, 100, "first class");
		}
		else if (50 < avg && avg < 60)
		{
			strcpy_s(grade, 100, "second class");
		}
		else if (40 < avg && avg< 50)
		{
			strcpy_s(grade, 100, "fourth class");
		}
		else
		{
			strcpy_s(grade, 100, "fail");
		}
	}
	void display()
	{
		cout << "\n student name" << studentName << endl;
		cout << "student marks in three subjects \n marks1" << marks1 << "\nmarks2" << marks2 << "marks3" << marks3 << endl;
		cout << "grade is" << grade << endl;
	}
	~students()
	{

	}
};
int main()
{
	students s;
	char str[] =  "yaswanth krishna" ;
	s.set_data(str, 85, 89, 90);
	s.display();
	getchar();
	return 0;
}