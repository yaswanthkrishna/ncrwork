#include<stdio.h>
#include<stdlib.h>
extern int result;
int substract(int a ,int b)
{
    if(a>b)
    {
        result =a-b;
    }
    else if(a<b)
    {
       result=b-a;
    }
    else
    {
        result=0;
    }
    return result;
}
