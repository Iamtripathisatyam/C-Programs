#include<stdio.h>
int countdigits(int n)
{
	static int i;
	if(n==0)
	{
		return i;
	}
	else
	i++;
	return countdigits(n/10);
}
main()
{
	int n,count;
	printf("\n Enter Number of Digits:");
	scanf("%d",&n);
	count=countdigits(n);
	printf("\n Number of Digits In %d is:%d",n,count);
	return 0;
}
