#include<stdio.h>
#include<string.h>
int main()
{
	char a[50][50],firstchar,temp[50];
	int n,i,j;
	puts("\n How Many Students Are there in class :\n");
	scanf("%d",&n);
	fflush(stdin);
	printf("\n Enter The Names of Students.......\n");
	for(i=0;i<n;i++)
	{
		gets(a[i]);
	}
	printf("\n Enter the First character of The Student's Name : \n");
	scanf("%c",&firstchar);
	printf("\n Student's Whose name start from %c are :\n",firstchar);
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
	
	for(i=0;i<n;i++)
	{
		if(a[i][0]==firstchar)
		puts(a[i]);
	}
}
