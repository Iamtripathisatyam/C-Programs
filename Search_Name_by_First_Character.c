#include<stdio.h>
#include<string.h>
int main()
{
	char name[40][30],firstchar;
	int num,i;
	printf("\n How many Students Are There In class : \n\n");
	scanf("%d",&num);
	printf("\n Enter The names of Students : \n\n");
	for(i=0;i<num;i++)
	gets(name[i]);
	printf("\n Enter The first character of Students name");
	scanf("%c",&firstchar);
	printf("\n Students whos's name starts with %c Are : \n\n",firstchar);
	for(i=0;i<num;i++) 
		if(name[i][0]==firstchar)
		puts(name[i]);
}
