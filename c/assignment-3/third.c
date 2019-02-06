#include<stdio.h>
int main()
{
 int n,i,temp,t,c=0;
 printf("\nEnter an 8 bit number\n");
 scanf("%d", &n);
 temp = n;
 for (i = 0; i < 8; i++)
 {
  t = temp % 10;
  if (t != 0)
   c++;
  temp = temp / 10;
 }
 printf("\nnumber of ones = %d", c);
 getchar();
 return 0;
}
