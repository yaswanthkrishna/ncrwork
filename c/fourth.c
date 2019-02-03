#include<stdio.h>
int amstrong(int l);
int main()
{

int n;
printf("\nenter a number:");
scanf("%d",&n);
amstrong(n);

}

int amstrong(int l)
{
int p,rem,k;
p=0;
k=l;
while(l!=0)
{
	rem=l%10;
	l=l/10;
	p=p+(rem*rem*rem);
}

if(p==k)
printf("The given number:%d is an amstrong number",k);
else
printf("The given number :%d is not an amstrong number",k);

}
