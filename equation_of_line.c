#include<stdio.h>
int main()
{
	int x1,x2,y1,y2;
	int  m,c;
	printf("\n Enter The First co-ordinates : ");
	scanf("\n %d%d",&x1,&y1);
	printf("\n Enter The Second co-ordinates : ");
	scanf("\n %d%d",&x2,&y2);
	satyam(x1,y1,x2,y2);
}
int satyam(int x1, int y1, int x2, int y2)
{
int m,c;
m=(y2-y1)/(x2-x1);
c=y1-m*x1;
printf("\n Equation of line :y = %dx + %d",m,c);	
}
