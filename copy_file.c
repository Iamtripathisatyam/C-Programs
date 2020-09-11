#include<stdio.h>
#include<process.h>
int main()
{
	FILE *p1,*p2;
	char ch;
	p1=fopen("dell.text","r");
	p2=fopen("hp.text","w");
	if(p1==NULL||p2==NULL)
	{
		printf("\n Some problem occured...");
		printf("\n Unable to continue...");
		exit(1);
	}
	while((ch=fgetc(p1))!=EOF)
	{
		fputc(ch,p2);
	}
	printf("\n FILE COPIED SUCCESSFULLY....");
	fclose(p1);
	fclose(p2);
	printf("\n Content from file hp.txt");
	p2=fopen("hp.txt","r");
	while((ch=fgetc(p2))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(p2);
}
