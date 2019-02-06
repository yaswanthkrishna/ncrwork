#include<stdio.h>
int pallindrome(int l);
int main()
{

int n;
printf("\nenter a number:");
scanf("%d",&n);
pallindrome(n);

}

int pallindrome(int l)
{
int p,rem,k;
p=0;
k=l;
while(l!=0)
{
	rem=l%10;
	p=p*10+rem;
	l=l/10;

}

if(p==k)
printf("The given number:%d is a pallindrome",k);
else
printf("The given number :%d is not a pallindrome",k);

}
