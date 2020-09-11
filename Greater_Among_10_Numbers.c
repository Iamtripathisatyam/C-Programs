#include<stdio.h>
int main()
{
	int a[10],i,l=0;
	printf("\n ENTER ANY 10 VALUES:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>l)
		l=a[i];

	}
	printf("\n GREATER NO. AMONG THESE 10 NUMBERS IS:%d",l);
}
