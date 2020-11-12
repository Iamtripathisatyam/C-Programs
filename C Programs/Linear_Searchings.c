#include<stdio.h>
int main()
{
	int a[20],i,n,flag=0,key,k;
	printf("\n Enter the no. of elements :");
	scanf("%d",&n);
	printf("\n Enter N Elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the KEY That you Want To Search..");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
		flag=1;
		break;
	    }
	}
	if(flag=1)
	printf("\n KEY Found At position %d :",i+1);
	
}
