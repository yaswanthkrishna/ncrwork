#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float table[2][3] = { { 1.1,1.2,1.3 },{ 2.1,2.2,2.3 } };
	printf("\n table is %lu", table);
	printf("\n (table+1) is %lu", (table + 1));
	printf("\n *(table+1) is %lu", *(table + 1));
	printf("\n  (*(table+1)+1) is %lu", (*(table + 1) + 1));
	printf("\n (*(table)+1) is %lu", (*(table)+1));
	printf("\n *(*(table+1) +1) is %f", *(*(table + 1) + 1));
	printf("\n *(*(table)+1) is %f", *(*(table)+1));
	printf("\n *(*(table+1) is %f", *(*(table + 1)));
	printf("\n *(*(table) + 1)+1 is %f", *(*(table)+1) + 1);
	getchar();
	return 0;
}
