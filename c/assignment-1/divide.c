#include<stdio.h>
#include<stdlib.h>
extern int result;
extern int a;
extern int b;
int division()
{
    result = a/b;
    return result;
}
