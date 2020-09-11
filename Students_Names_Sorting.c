#include<stdio.h>
#include<string.h>
int main(satyam)
{
	char a[50][50];
	char temp[50];
	int i,j,n;
	printf("\n Please Enter The NO. of Students You Want To Sorted.....\n");
	scanf("%d",&n);
	fflush(stdin);
	/// Inputs Names.......
	printf("\n Enter the Names of The Students You Want To Be Sorted.....\n");
	for(i=0;i<n;i++)
	{
		gets(a[i]);
	}
	//Apply Bubble Sorting Techniques..........
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<=n-i-1;j++)
		{
			if(strcmpi(a[j],a[j+1])>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
	}
	printf("\n\n After Sorting names of The students Are :\n");
	printf("\n****************************\n");
	for(i=0;i<n;i++)
	{
		puts(a[i]);
	}
	printf("\n****************************\n");
	
}
