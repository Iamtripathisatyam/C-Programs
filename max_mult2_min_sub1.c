#include<stdio.h>
int Operation(int a[], int n) //pass an array and number...
{
	int i,j,key;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		a[i]=a[i]*2;
		else
		a[i]=a[i]-1;
	
	}
	

}
int main()
{
	int a[100],n,i;
	printf("\n Enter the numbers:");
	scanf("%d",&n);
	printf("\n Enter %d Numbers",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n Numbers Before Operation Are:");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	
	Operation(a,n); // calling function by Oppo A3s Phone....
	
	printf("\n\n Numbers After  Operation Are:");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);

}
