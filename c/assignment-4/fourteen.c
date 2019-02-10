#include<stdio.h>
#include<string.h>
void printRotatedString(char str[])
{
    int len = strlen(str),j,k,i;
    char temp[len];
    for (i = 0; i < len; i++)
    {
        j = i;
        k = 0;
        while (str[j] != '\0')
        {
            temp[j] = str[k];
            k++;
            j++;
        }
        j = 0;
        while (j < i)
        {
            temp[j] = str[k];
            j++;
            k++;
        }
        printf("%s\n", temp);
    }
}
int main()
{
    char str[10];
    printf("\n enter a string");
    gets(str);
    printRotatedString(str);
    return 0;
}
