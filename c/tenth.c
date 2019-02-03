#include<stdio.h>
int sum(int l);
int main()
{

int n;
printf("\nenter a number:");
scanf("%d",&n);
sum(n);

}

int sum(int l)
{
int p,rem,k;
p=0;
k=l;
while(l!=0)
{
	rem=l%10;
	l=l/10;
	p=p+rem;
}

printf("sum of given numbers is :%d",p);

}
