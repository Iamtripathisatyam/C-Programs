#include<stdio.h>
int main()
{ 
    int n,i=1;
    char ch;
    do
	{
	i=1;
	printf("\n Enter Any Number :");
	scanf("%d",&n);
	printf("\n Table of %d is :",n);
	x:
	printf("\n %d*%d=%d",n,i,n*i);
	i++;
	if(i<=10)	
	goto x;
	printf("\n\n To Continuous press y:");
	ch=getch();
}while(ch=='y'||ch=='Y');
}
