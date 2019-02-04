#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int n,result;
    printf("\n enter a number");
    scanf("%d",&n);
    result=fact(n);
    printf("\n result is %d",result);
    return 0;
}
