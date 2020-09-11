#include<stdio.h>
int table(int n,int i)
{
	if(i>10)
	{
	return 0;
	}
	else
	{
	printf("\n%d*%d=%d",n,i,n*i);
	return table(n,i+1);
}
}
main()
{
	int n,i=1;
	printf("\n Enter Number of Digits:");
	scanf("%d",&n);
	table(n,i);
}
