#include<stdio.h>
main()
{
	int num,sum=0,fact=1,d,i,copy;
	printf("\nENTER ANY NUMBER:");
	scanf("%d",&num);
	copy=num;//copy karlo bhaiya
	while(num!=0)
	{
		d=num%10;
		for(i=1,fact=1;i<=d;i++)//factorial of digit
		{
			fact=fact*i;
		}
	
		sum=sum+fact;
		num=num/10;
    }
	if(sum==copy)
	printf("\n %d is a STRONG NUMBER",copy);
	else
	printf("\n %d is not a STRONG NUMBER",copy);
	return 0;
}
