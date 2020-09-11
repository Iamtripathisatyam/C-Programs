#include<stdio.h>
int main(satyam)
{
	int n,key,flag=0,arr[20],i,pos;
	printf("\n Enter The No. of Elements:");
	scanf("%d",&n);
	printf("\n Enter %d Elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]); //Inputing of numbers.....
	}
		printf("\n Enter The No. That You Wants You Search : \n");
		scanf("%d",&key); // Inputing of key...

	for(i=0;i<n;i++) //// Linear Searching......
	{
		if(arr[i]==key)
		{
			printf("\n %d is found at position: %d",key,i+1);
			flag++; 
			break;
		}
}
if(flag==0) ///Means key is not found....
		printf("\n %d is not found In given Nos!",key);
	
}

