#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
 int *a,i,j=0,n,temp;
 printf("\nEnter number of terms");
 scanf("%d", &n);
 a = (int*)malloc(n * sizeof(int));
 printf("\nEnter the terms");
 for (i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 for (i = n; i > 0; i--)
 {
  if (a[i] < 0)
  {
   if (a[j] < 0)
   {
    j++;
   }
   else
   {
    temp = a[j];
    a[j] = a[i];
    a[i] = temp;
   }
  }
 }
 for (i = 0;i < n; i++)
 {
  printf("\n%d", a[i]);
 }
 getchar();
 return 0;
}
