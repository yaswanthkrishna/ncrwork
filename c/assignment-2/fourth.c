#include<stdio.h>
#include<math.h>
int prime(int max,int min)
{
    int i,j,s;
    for(i=min;i<max;i++)
    {
        s=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                s++;
                break;
            }
        }
        if(s!=1)
        {
            printf("\n%d",i);
        }
    }
}
int main()
{
    int max,min;
    printf("\n enter minimum and maximum number");
    scanf("%d %d",&min,&max);
    prime(max,min);
    return 0;
}
