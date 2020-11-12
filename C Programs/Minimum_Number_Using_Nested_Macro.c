#include<stdio.h>
#define MIN2(a,b)(a<b?a:b)
#define MIN3(a,b,c)(MIN2(a,b)<c?MIN(a,b):c)
int main()
{
	int a,b,c;
	printf("\n Enter The Values of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n Minimum No. Among %d ,%d ,%d will be :",a,b,c,MIN3(a,b,c));
}
