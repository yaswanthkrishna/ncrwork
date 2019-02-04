#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 1000

int size(int binary)
{
    int i=0;
    while(binary>0)
    {
        binary=binary/10;
        i++;
    }
    return i;
}
int binary_to_decnum(int binary)
{
    int i,j,temp,decnum=0;
    i= size(binary);
    for(j=0;j<i;j++)
    {
        temp= binary%10;
        decnum=decnum+temp*(pow(2,j));
        binary=binary/10;
    }
    printf("\n decimal number is %d",decnum);
    return decnum;
}
int decnum_to_hexa()
{
    int rem, quot;
	int i=1, j, temp;
	long int binary;
	printf("Enter binary number : ");
	scanf("%ld",&binary);
	char hexdecnum[100];
    quot = binary_to_decnum(binary);
	while(quot!=0)
	{
		temp = quot % 16;
		if( temp < 10)
		{
			temp = temp + 48;
		}
		else
		{
			temp = temp + 55;
		}
		hexdecnum[i++]= temp;
		quot = quot / 16;
	}
	for(j=i-1 ;j>0;j--)
	{
		printf("\n hexadecimal number is %c",hexdecnum[j]);
	}
}

hexa_to_binary()
{
    char binarynum[MAX], hexa[MAX];
    long int i = 0;

    printf("Enter the value for hexadecimal ");
    scanf("%s", hexa);
    printf("\n Equivalent binary value: ");
    while (hexa[i])
    {
        switch (hexa[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
            printf("1010"); break;
        case 'B':
            printf("1011"); break;
        case 'C':
            printf("1100"); break;
        case 'D':
            printf("1101"); break;
        case 'E':
            printf("1110"); break;
        case 'F':
            printf("1111"); break;
        case 'a':
            printf("1010"); break;
        case 'b':
            printf("1011"); break;
        case 'c':
            printf("1100"); break;
        case 'd':
            printf("1101"); break;
        case 'e':
            printf("1110"); break;
        case 'f':
            printf("1111"); break;
        default:
            printf("\n Invalid hexa digit %c ", hexa[i]);
            return 0;
        }
        i++;
    }
    return 0;
}

void main()
{
    int i;
    printf("\n enter your choice \n 1) binary to hexa decimal \n 2) hexa decimal to binary");
    scanf("%d",&i);
	switch(i)
	{
    case 1:
        {
            decnum_to_hexa();
            break;
        }
    case 2:
        {
            hexa_to_binary();
            break;
        }
	}
	getch();
}
