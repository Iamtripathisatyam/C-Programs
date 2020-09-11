#include<stdio.h>
int main()
{
	int i,j,a[20][20],r,c,max,m,n;
	printf("\n Enter The Order of Matrix...");
	scanf("%d%d",&m,&n); 
		printf("==========================================================");
	printf("\n Enter The Matrix of Order %d X %d:\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n Enter Element [%d , %d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	max=a[0][0];
	r=1;
	c=1;
	
for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				r=i+1;
				c=i+1;
			}
		}
    }
    	printf("==========================================================");
    printf("\n Maximum Number in the Array is:%d",max);
    printf("\n\n Location of Max. No. is:%d row,%d column",r,c);
}
