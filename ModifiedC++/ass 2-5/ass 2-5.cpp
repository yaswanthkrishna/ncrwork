#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class STRING
{
	int length; //length of a string in class
	char *string; //string in class
public:
	STRING()
	{
		length = 0;
		string = NULL;
	}
	STRING(char *input_string) //constructor
	{
		int count;
		length = strlen(input_string);
		string = new char[length + 1];
		if (string == NULL)
		{
			cout << "Memory allocation failed for constructor" << endl;
			free(string);
			getchar();
			return;
		}
		for (count = 0; count < (length + 1); count++)
		{
			string[count] = input_string[count];
		}
	}
	STRING(const STRING &input_string) //copy constructor
	{
		string = input_string.string;
		length = input_string.length;
	}
	~STRING() //destructor
	{

	}
	STRING operator+(STRING str) //'+' operator overloading
	{
		int count,count2;
		STRING temp_string;
		temp_string.length = length + str.length;
		temp_string.string = new char[(temp_string.length) + 1]; //dynamic memory allocation
		if (temp_string.string == NULL)
		{
			cout << "Memory allocation failed for '+' operator" << endl;
			free(temp_string.string);
			getchar();
			return 0;
		}
		for (count = 0; count < length ; count++) //copying first string into temporary string
		{
			temp_string.string[count] = string[count];
		}
		for(count2=0;count2<str.length;count2++) //copying second string into temporary string
		{
			temp_string.string[count]=str.string[count2];
			count++;
		}
		temp_string.string[count] = '\0';
		return temp_string;
	}
	char &operator[](int num) //'[]' operaor overloading
	{
		return (this->string[num]);
	}
	STRING operator=(STRING input_string) //'=' operaor overloading
	{
		int count;
		length = input_string.length;
		string = new char[length+1];
		if (string == NULL)
		{
			cout << "Memory allocation failed for '=' operator" << endl;
			free(string);
			getchar();
			return 0;
		}
		for (count = 0; count < length + 1; count++)
		{
			string[count] = input_string.string[count];
		}
		string[count] = '\0';
		return(*this);
	}
	friend ostream &operator<<(ostream &cout, STRING input_string);
	friend istream &operator>>(istream &cin, STRING &input_string);

};

ostream &operator<<(ostream &cout, STRING input_string) //friend functions for '<<' operator overloading
{
	cout << input_string.string << endl;
	return cout;
}

istream &operator>>(istream &cin, STRING &input_string) //friend function for '>>' operator overloading
{
	int count,length1;
	char temp[50];
	cin >> temp;
	length1 = strlen(temp);
	input_string.string = new char[length1 + 1];
	if (input_string.string == NULL)
	{
		cout << "Memory allocation for '>>' operaor failed" << endl;
		free(input_string.string);
	}
	for (count = 0; count <= length1 + 1; count++)
	{
		input_string.string[count] = temp[count];
	}
	input_string.length = strlen(temp);
	return cin;

}

int main()
{
	STRING string_input1, string1, string2, string_input2;
	cout << "\n enter first input string" << endl;
	cin >> string_input1;
	string1 = string_input1;
	
	cout << " enter second input string" << endl;
	cin >> string_input2; 

	STRING string3(string_input2);
	string2 = string_input1 + string_input2;
	
	cout << "\nFirst input string is string_input1 = " << string_input1 << endl;
	cout << "Second input string is string_input2 = " << string_input2 << endl;
	cout << "Copying first input string into another string using '='  operator is string1 = " << string1 << endl;
	cout << "copying second string into another string using 'copy constructor' is string3 = " << string3 << endl;
	cout << "Result of string concatenation of first & second input string using '+' operaor is string2 = " << string2 << endl;
	cout << "Third term of string1 using '[]' operator is string1[2] = " << string1[2] << endl;
	
	getchar();
	getchar();
	return 0;
}