#include<stdio.h>
#include<math.h>
int main()
{
    int n,j,m,s=0;
    printf("enter a number");
    scanf("%d",&n);
    m=0;
    while(n!=0)
    {
        j=n%10;
        s=s*10+j;
        n=n/10;
        m++;
    }
    printf("\n number is %d",s);
    return 0;
}
