#include<stdio.h>
#include<string.h>
#define MAX_STRINGS 10
#define MAX_SIZE 100
int main()
{
    char s[MAX_STRINGS][MAX_SIZE],temp[100];
    int loop,n,i,j;
    printf("enter number of strings");
    scanf("%d",&n);
    printf("enter strings");
    for(loop=0;loop<n;loop++)
    {
        printf("\n enter string[%d]",loop+1);
        scanf("%s",s[loop]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
    for(loop=0;loop<n;loop++)
    {
        printf("\n sorted strings are %s",s[loop]);
    }
    return 0;
}
