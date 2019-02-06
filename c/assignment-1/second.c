#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[81],i,c=0,d=0,e=0;


	printf("\nenter text:");
     gets(a);


	for(i=0;a[i]!=NULL;i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		e++;

		else if(a[i]>='0'&&a[i]<='9')
		d++;

		else if(a[i]==' ')
		c++;


	}

	printf("no.of spaces:%d\nno.of digits:%d\nno.of alphabets:%d\n",c,d,e);
}
