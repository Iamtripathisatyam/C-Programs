#include<stdio.h>
int ADD(int a,int b)
{
	int s;
	s=a+b;
	return a+b;
}
int SUB(int a,int b)
{
	int s;
	s=a-b;
	return s;
}
int main(satyamtripathi)
{
	int a,b;
	printf("\n Please Enter Two No:");
	scanf("%d%d",&a,&b);
	printf("\n Sum of No. Are:%d",ADD(a,b));
	printf("\n Diff. of No. Are:%d",SUB(a,b));	
	return 0;
}
