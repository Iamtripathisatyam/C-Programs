#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50],c[50];
	int n;
	puts("\n Enter The String :\n");
	gets(a);
	puts("\n Enter The String :\n");
	gets(b);
	puts("\n Enter The String :\n");
	gets(c);
	puts("\n Enter The value of n :");
	scanf("%d",&n);
	printf("\n String present in b is : %s",strcat(a,b));
	printf("\n String present in c is : %s",strncat(a,c,n));
}
