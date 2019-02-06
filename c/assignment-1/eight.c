#include<stdio.h>
int main()
{
int salary;
	float HRA,DA;
	printf("\nplease enter your salary:");
	scanf("%d",&salary);

salary<=4000?(HRA=10*salary/100,DA=50*salary/100):(salary>4000&&salary<=8000)?(HRA=0.2*salary,DA=0.6*salary):(salary>8000&&salary<=12000)?(HRA=0.25*salary,DA=0.70*salary):(HRA=0.30*salary,DA=0.80*salary);
	 printf("\ngrossSalary=%f",((float)salary)+HRA+DA);
}
