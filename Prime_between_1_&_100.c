#include<stdio.h>
#include<math.h>
int main()
{
	int count;
	int b=100000000; 
	int a=1,i,num;
//	printf("Enter The Range=");
	//scanf("%d%d",&a,&b);
	printf("\nPrime No. between %d And %d are",a,b);
  while(a<b)
  {  
	   count=0;
		for(i=2;i<=a/2;i++)
		{
			if(a%i==0)
			{
				count=1;
				break;
			}
		}
		if(count==0&a!=1)
		printf("\n%d",a);
		++a;
	}
}



