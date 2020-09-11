#include<stdio.h>
float ADD(float a,float b)
{
	float s;
	s=a+b;
	return a+b;
}
float SUB(float a,float b)
{
	float s;
	s=a-b;
	return s;
}
int main(satyamtripathi)
{
	float a,b;
	printf("\n Please Enter Two No:");
	scanf("%f%f",&a,&b);
	printf("\n Sum of No. Are:%f",ADD(a,b));
	printf("\n Diff. of No. Are:%f",SUB(a,b));	
	return 0;
}
