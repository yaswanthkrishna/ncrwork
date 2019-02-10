#include<stdio.h>
#include<string.h>
int main()
{
    char *s[20];
    int i,n;
    printf("\n Enter number of strings");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
            printf("\n Enter string %d",i+1);
            s[i]=(char*)malloc(20*sizeof(char));
            scanf("%s",s[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n the array of strings is %s",s[i]);
    }
    return 0;
}
