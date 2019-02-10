#include<stdio.h>
#include<string.h>
int replace(char *cat)
{
    int i,count=0,len;
    char s[100];
    strcpy(s,cat);
    len=strlen(cat);
    for(i=0;i<len;i++)
    {
        if(s[i] == ' ')
        {
            count++;
            s[i] = '-';
        }
    }
    printf("\n %s",s);
    return count;
}
int main()
{
    char *cat = {"The cat sat"};
    int n;
    n=replace(cat);
    printf("\n The number is spaces are %d",n);
    return 0;
}
