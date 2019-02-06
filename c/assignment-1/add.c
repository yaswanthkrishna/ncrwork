#include<stdio.h>
#include<stdlib.h>
extern int result;
extern int a;
extern int b;
int add()
{
    result = a+b;
    return result;
}
