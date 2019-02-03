#include<stdio.h>
int main()
{
	int i,j,l,p;
	for(i=1;i<=5;i++)
	{
		l=i;
		p=2;
		for(j=4;j>=i;j--)
		printf(" ");


		for(j=1;j<=i;j++)
		{

			printf("%d",l);
			l--;
		}

			for(j=1;j<=i-1;j++)
		{

			printf("%d",p);
			p++;
		}

		printf("\n");
	}
}
