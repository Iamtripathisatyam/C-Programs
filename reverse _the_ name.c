#include<stdio.h>
void reverse()
{
	char c;
	scanf("%c", &c);
	if(c!='\n')
	{
		reverse();
		printf("%c", c);
	}
}
void main()
{
	printf("\n Please Enter The sentence:");
	reverse();
}

