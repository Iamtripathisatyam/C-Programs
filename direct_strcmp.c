#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50],c[50],d[50];
	int n;
	puts("\n Enter The String :\n");
	gets(a);
	puts("\n Enter The String :\n");
	gets(b);
	puts("\n Enter The String :\n");
	gets(c);
	puts("\n Enter The String :\n");
	gets(d);
	puts("\n Enter The value of n :");
	scanf("%d",&n);
	printf("\n String present in y is : %d",strcmp(a,b));
	printf("\n String present in z is : %d",strcmp(a,c));
    printf("\n String present in w is : %d",strcmpi(a,c));
	printf("\n String present in x is : %d",strncmp(a,d,n));
		
}
