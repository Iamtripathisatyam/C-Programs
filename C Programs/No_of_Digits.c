#include<stdio.h>
int main()
{
 int num,count=0,i;
	printf("Enter Number : ");
	scanf("%d",&num);
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	printf("\n no of dig are:%d",count);
}
