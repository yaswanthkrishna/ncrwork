#include<stdio.h>
#include<stdlib.h>
extern int result;
int multiply(int a,int b)
{
    result = a*b;
    return result;
}
