#include <stdio.h>
#include <string.h>
int main ()
{
  char string[50];
  printf("\n enter a string");
  scanf("%[^\n]s",string);
  char *p;
  printf ("String  \"%s\" is split into tokens:\n",string);
  p = strtok (string,",: ");
  while (p!= NULL)
  {
    printf ("%s\n",p);
    p = strtok (NULL, ",: ");
  }
  return 0;
}
