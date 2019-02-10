#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char *s,int  begin,int end)
{
    char c;
    if(begin >= end)
        return;
    else
        c=*(s+begin);
    *(s+begin)=*(s+end);
    *(s+end)=c;

    reverse(s,++begin,--end);
}
int main()
{
    char s[100],n[100];
    printf("\n enter a string");
    scanf("%[^\n]",s);
    reverse(s,0,strlen(s)-1);
    printf("%s",s);
    return 0;
}
