#include<stdio.h>
#include<string.h>
#define MAX 100
void expand(char *s1, char *s2)
{
	int i, j = 0, k, l, n;
	l = strlen(s1);
	for (i = 0; i<l; i++)
	{
		if (s1[i] == '-')
		{
			if ((s1[i - 1] >= 'A' && s1[i - 1] <= 'Z') && !(s1[i + 1] >= 'A' && s1[i + 1] <= 'Z'))
			{
				printf("\n The input you have given is inappropriate at %d. Please follow given instructions", i);
				getchar();
				return;
			}
			else if ((s1[i - 1] >= 'a' && s1[i - 1] <= 'z') && !(s1[i + 1] >= 'a' && s1[i + 1] <= 'z'))
			{
				printf("\n The input you have given is inappropriate at %d. Please follow given instructions", i);
				getchar();
				return;
			}
			else if ((s1[i - 1] >= '0' && s1[i - 1] <= '9') && !(s1[i + 1] >= '0' && s1[i + 1] <= '9'))
			{
				printf("\n The input you have given is inappropriate at %d. Please follow given instructions", i);
				getchar();
				return;
			}
			else if (s1[i - 1] >= s1[i + 1])
			{
				printf("\n ERROR! Make sure that character after '-' should be greater than before '-' at %d", i);
				getchar();
				return;
			}
			k = i;
			n = s1[i + 1] - s1[i - 1];
			break;
		}
	}
	for (i = 0; i<k; i++)
	{
		s2[i] = s1[i];

	}
	j = k;
	for (i = 1; i <= n; i++)
	{
		s2[j] = s1[k - 1] + i;
		j++;
	}
	j = k + n - 1;
	for (i = k + 1; i<l; i++)
	{
		s2[j] = s1[i];
		j++;
	}
	s2[j] = '\0';
}
int main()
{
	char s1[MAX], s2[MAX];
	int i, l;
	printf("\n Enter a string to expand");
	printf("\n Please follow the given instructions to get apprpriate result:");
	printf("\n 1) No two '-' should be present together \n 2) Number after '-' should be greater than before '-' \n 3) string should not start or end with '-' \n 4) Characters before and after '-' should be of same type");
	printf("\n 5)Enter only positive integer");
	gets_s(s1);
	l = strlen(s1);
	for (i = 0; i < l; i++)
	{
		if (s1[0] == '-' || s1[l - 1] == '-')
		{
			printf("\n ERROR! Please give proper input at %d", i);
			getchar();
			return 0;
		}
		else if (s1[i] == '-')
		{
			if (s1[i + 1] == '-')
			{
				printf("\n Sorry! Two '-' cannot be provided at a time at %d", i);
				getchar();
				return 0;
			}
			expand(s1, s2);
			l = strlen(s2);
			strcpy_s(s1, s2);
		}

	}
	printf("\n new string is %s", s1);
	getchar();
	return 0;
}