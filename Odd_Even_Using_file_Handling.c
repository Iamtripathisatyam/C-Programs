#include<stdio.h>
#include<process.h>
int main()
{
	FILE *p,*q,*r;
	int num;
	p=fopen("data.txt","r");
	q=fopen("Even.txt","w");
	r=fopen("Odd.txt","w");
	if(p==NULL||q==NULL||r==NULL)
	{
		printf("\n The Numbers Are not present in the file data.txt..");
		exit(1);
	}
	while(!feof(p))
	{
		fscanf(p,"%d  ",&num);
		if(num%2==0)
		fprintf(q,"%d  ",num);
		else
		fprintf(r,"%d  ",num);
	}
	printf("\n Work is Done Successfully.....");
	fclose(p);
	fclose(q);
	fclose(r);
	q=fopen("Even.txt","rb");
}
