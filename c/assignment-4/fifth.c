#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i;
    char s[100];
    printf("\n enter string");
    scanf("%[^\n]s",s);
    for(i=0;i<=strlen(s);i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    printf("\n The new string is %s",s);
    return 0;
}
