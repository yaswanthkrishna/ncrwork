#include<stdio.h>
#include<string.h>
void main()
{
	char *color[6] = { "red", "green", "blue", "white", "black", "yellow" };
	printf("\n color is %lu", color);
	printf("\n (color+2) is %lu", (color + 2));
	printf("\n *(color) is %s", *(color));
	printf("\n *(color+2) is %s", *(color + 2));
	printf("\n the (color+5) is %lu where as *(color+5) is %s", (color + 5), *(color + 5));
	getchar();
}
