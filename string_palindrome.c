#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],rev[100];
	puts("\n Enter The String : \n");
	gets(a);
	strcpy(rev,a);
	rev==strrev(a);
	if(strcmp(a,rev)==0)
	printf("\n The Given String is a palindrome.....");
	else
	printf("\n The Given String is not a palindrome.....");
}
