#include<stdio.h>
int prime(int n)
{
	int i,count=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		
		count++;
	   }
	}
	if(count==0&&n!=1)
	printf("%d is a prime number:",n);
	else
	printf("%d is not a prime number:",n);
}
int main()
{
	int n;
	printf("\nEnter any Number :");
	scanf("\n%d",&n);
	prime(n);
}
