#include<iostream>
#include<string>
using namespace std;

//function to reverse a string//
string string_reverse(string input, int len)
{
	int counter = 0;
	char temp = 0;
	for (counter = 0; counter <= len / 2; counter++)
	{
		temp = input[counter];
		input[counter] = input[len - counter];
		input[len - counter] = temp;
	}
	return input;
}
//this function concatinates two given string//
char * string_concatenate(string input, string input1, char* result)
{
	int count = 0, count1 = 0;//result count is count1
	while (input[count] != '\0')
	{
		result[count] = input[count];
		count++;
	}
	count1 = count;
	count = 0;
	while (input1[count] != '\0')
	{
		result[count1] = input1[count];
		count++;
		count1++;
	}
	result[count1] = '\0';
	return result;
}

//this function copies string from one location to other//
char * string_copy(string input, char *result)
{
	int count = 0;
	while (input[count] != '\0')
	{
		result[count] = input[count];
		count++;
	}
	result[count] = '\0';
	return result;
}

//this function compares two strings//
int string_compare(string input, string input1)
{
	int flag = 0;
	int i = 0;
	while (input[i] != '\0' || input1[i] != '\0')
	{
		if (input[i] != input1[i])
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (input1[i] == '\0' && input[i] == '\0' && flag == 0)//if both the strings reach the end and all the elements are equal//
		return 1;
	else
		return 0;
}

int main()
{
	int choice;
	char *result = NULL;
	cout << "\n The options are :" << endl;
	cout << "1) String Reverse" << endl << "2) String Copy" << endl << "3) string concatenation" << endl << "4) string compare" << endl;
	do
	{
		cout << "\n Enter a choice to be performed" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			printf("\n Your choice is String Reverse");
			string input;
			int length_string = 0;
			cin.ignore();//ignore the character entered while giving the choice
			cout << "\nenter the string: ";
			getline(cin, input);//function to read string from console
			cout << "\nyou have entered: " << input  << endl;
			for (length_string = 0; input[length_string] != '\0'; length_string++);
			input = string_reverse(input, length_string - 1);
			cout << "\nthe reversed string is: ";
			cout << input;
			break;
		}
		case 2:
		{
			printf("\n Your choice is String Copy");
			cin.ignore();//ignore the character entered while giving the choice
			string input;
			int result_count = 0;
			cout << "\nenter the string : ";
			getline(cin, input);
			for (result_count = 0; input[result_count] != '\0'; result_count++);
			result = new char[result_count];
			result = string_copy(input, result);
			cout << "\nthe string " << input << "with address" << &input << " is copied to address " << &result << "with result string :" << result << endl;
			
			break;
		}
		case 3:
		{
			cout << "\n Your choice is String Concatenation" << endl;
			cin.ignore();//ignore the character entered during giving the choice
			string input, input1;
			int counter = 0, result_count = 0;
			cout << "\nenter the first string : ";
			getline(cin, input);
			cout << "\nenter the second string  : ";
			getline(cin, input1);
			for (counter = 0; input[counter] != '\0'; counter++);
			result_count = counter;
			for (counter = 0; input1[counter] != '\0'; counter++);
			result_count = result_count + counter;
			result = new char[result_count];
			result = string_concatenate(input, input1, result);
			cout << "\nthe new string is" << result << endl;
			
			break;
		}
		case 4:
		{
			cout << "\n Your choiceis String Compare" << endl;
			cin.ignore();//ignore the enter character entered during giving choice
			string input, input1;
			cout << "\nenter the first string : ";
			getline(cin, input);
			cout << "\nenter the second string  : ";
			getline(cin, input1);
			int status;
			status = string_compare(input, input1);
			if (status)
				cout << "\nstrings are equal" << endl;
			else
				cout << "\nstrings are not equal" << endl;
			break;
		}
		case 5:
		{
			cout << "\n EXIT";
			break;
		}
		}
	} while (choice != 5);
	delete(result);//deallocate assigned result memory
	getchar();
	return 0;
}