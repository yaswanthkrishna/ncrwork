#include<stdio.h>
int result = 0;
int add(int a,int b);
int multiply(int a,int b);
int substract(int a,int b);
float divide(int a,int b);
int main()
{
int choice  = 0;
int a,b;
printf("\n enter ur choice");
scanf("%d",&choice);
int flag = 0;
printf("\n enter two numbers");
scanf("%d,%d",&a,&b);
switch(choice)
{
    case 1:flag=add(a,b);
           break;
    case 2:flag=substract(a,b);
           break;
    case 3:flag=multiply(a,b);
           break;
    case 4:flag=divide(a,b);
           break;
}
printf("%d",result);
}
