#include<stdio.h>
double factorial(int n)
{
	int i;
	double fact=1.0;
	for(i=1;i<=n;i++)
	fact=fact*i;
	return fact;
}
main()
{
	int n;
	printf("\nenter any number:");
	scanf("\n%d",&n);
	printf("\nfactorial of %d=%lf",n,factorial(n));
}
