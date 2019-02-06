#include<stdio.h>
#include<math.h>
float SimpleInterest(float t,float r,int n);
float CompoundInterest(float t,float r,int n);
int main()
{
	float r,t;
	printf("\nEnter the rateOfInterest:");
	scanf("%f",&r);
	printf("\nEnter no.of years:");
	scanf("%f",&t);
	printf("simple interest calculated:\nyearly:%f\nhalf yearly:%f\nquaterly:%f\nmonthly:%f\ndaily:%f",SimpleInterest(t,r,1),SimpleInterest(t,r,2),SimpleInterest(t,r,4),SimpleInterest(t,r,12),SimpleInterest(t,r,365));
	printf("compound interest calculated:\nyearly:%f\nhalf yearly:%f\nquaterly:%f\nmonthly:%f\ndaily:%f",CompoundInterest(t,r,1),CompoundInterest(t,r,2),CompoundInterest(t,r,4),CompoundInterest(t,r,12),CompoundInterest(t,r,365));
}

float SimpleInterest(float t,float r,int n)
{

	float s;

	s=500000*r*t*n/(100);
	return s;

}

float CompoundInterest(float t,float r,int n)
{
	float c,a,x=1,i;
	for(i=1;i<n*t;i++)
	x=x*(1+(r/n));
	a=500000*x;
	c=a-500000;
	return c;
}
