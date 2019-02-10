#include<stdio.h>
int main()
{
 char * s[] = { "we will teach you how to ", "Move a mountain ", "Level a building ", "Erase the past ", "Make a million " };
 int c = 0,d=0;
 int len = sizeof(s) / sizeof(s[0]);
 //printf("%d\n", len);
 for (int i = 0; i < len; i++)
 {
  for (int j = 0; s[i][j] != 0; j++)
  {
   if ((s[i][j] == 'e') || (s[i][j] == 'E'))
    c++;
   if (s[i][j] == 'e')
    d++;
  }
 }
 printf("No of E and e = %d\n", c);
 printf("No of e = %d\n", d);
 getchar();
 return 0;
}
