#include<stdio.h>
#include<string.h>

void program2()//Removes single and multiline comments
{
	FILE *fp, *fp2;
	int number_of_letters = 0;
	fp1 = fopen_s(&fp,"Text.txt", "r");
	fp2 = fopen_s("Text2_ans.txt", "w");
	char ch;
	ch = fgetc(fp1);
	while (!feof(fp1))
	{

		if (ch == '/')
		{
			ch = fgetc(fp1);
			if (ch == '/')
			{
				while (ch != '\n' && !feof(fp1))
					ch = fgetc(fp1);
			}
		}
		if (!feof(fp1))
			fputc(ch, fp2);
		ch = fgetc(fp1);
	}
	//printf("%s", b);
	fclose(fp1);
	fclose(fp2);

}