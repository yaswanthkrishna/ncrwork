#include<stdio.h>
#include<string.h>
#define MAX 100

void expand(char *string1, char *string2)
{
	int i, temp = 0, temp2, len, n;
	len = strlen(string1);
	for (i = 0; i<len; i++)
	{
		if (string1[i] == '-')
		{
			if ((string1[i - 1] >= 'A' && string1[i - 1] <= 'Z') && !(string1[i + 1] >= 'A' && string1[i + 1] <= 'Z'))
			{
				printf("\n The input you have given is inappropriate at position %d. Plenease follow given instructions", i+1);
				getchar();
				return;
			}
			else if ((string1[i - 1] >= 'a' && string1[i - 1] <= 'z') && !(string1[i + 1] >= 'a' && string1[i + 1] <= 'z'))
			{
				printf("\n The input you have given is inappropriate at position %d. Please follow given instructions", i+1);
				getchar();
				return;
			}
			else if ((string1[i - 1] >= '0' && string1[i - 1] <= '9') && !(string1[i + 1] >= '0' && string1[i + 1] <= '9'))
			{
				printf("\n The input you have given is inappropriate at position %d. Please follow given instructions", i+1);
				getchar();
				return;
			}
			else if (string1[i - 1] == string1[i + 1])
			{
				temp2 = i;
				n = 0;
				break;
			}
			else if(string1[i - 1] > string1[i + 1])
			{
				temp2 = i;
				n = string1[i - 1] - string1[i + 1];
				break;
			}
			else if (string1[i - 1] < string1[i + 1])
			{
				temp2 = i;
				n = string1[i + 1] - string1[i - 1];
				break;
			}
		}
	}
	for (i = 0; i<temp2; i++)
	{
		string2[i] = string1[i];

	}
	temp = temp2;
	if (n > 0)
	{
		if (string1[i - 1] < string1[i + 1])
		{
			for (i = 1; i <= n; i++)
			{
				string2[temp] = string1[temp2 - 1] + i;
				temp++;
			}
		}
		else if (string1[i - 1] > string1[i + 1])
		{
			for (i = 1; i <= n; i++)
			{
				string2[temp] = string1[temp2 - 1] - i;
				temp++;
			}
		}
	}
	temp = temp2 + n - 1;
	for (i = temp2 + 1; i<len; i++)
	{
		string2[temp] = string1[i];
		temp++;
	}
	string2[temp] = '\0';
}
int main()
{
	char string1[MAX], string2[MAX];
	int i, len;
	printf("\n Enter a string to expand");
	printf("\n Please follow the given instructions to get apprpriate result:");
	printf("\n 1) No two '-' should be present together \n 2) Number after '-' should be greater than before '-' \n 3) string should not start or end with '-' \n 4) Characters before and after '-' should be of same type \n 5) Enter only positive integers");
	printf("\n");
	gets_s(string1);
	len = strlen(string1);
	for (i = 0; i < len; i++)
	{
		if (string1[0] == '-' || string1[len - 1] == '-')
		{
			printf("\n ERROR! Please give proper input at position %d", i+1);
			getchar();
			return 0;
		}
		else if (string1[i] == '-')
		{
			if (string1[i + 1] == '-')
			{
				printf("\n Sorry! Two '-' cannot be provided at a time at position %d", i+1);
				getchar();
				return 0;
			}
			expand(string1, string2);
			len = strlen(string2);
			strcpy_s(string1,len+1, string2);
		}

	}
	printf("\n new string is %s", string1);
	getchar();
	return 0;
}