#include<stdio.h>
#include<string.h>
#define MAX 20
void removeALL(char *s1,char *s2)
{
    int i,j,k,l1,l2;
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<l1;i++)
    {
        for(j=0;j<l2;j++)
        {
            if(s1[i]==s2[j])
            {
                for(k=i;k<l1;k++)
                {
                    s1[k]=s1[k+1];
                }
                k--;
                l1--;
                i--;
            }
        }
    }
}
int main()
{
    char s1[MAX],s2[MAX];
    printf("\n Enter a string");
    gets(s1);
    printf("\n Enter a string to compare");
    gets(s2);
    removeALL(s1,s2);
    printf("\n new string is %s",s1);
    return 0;
}
