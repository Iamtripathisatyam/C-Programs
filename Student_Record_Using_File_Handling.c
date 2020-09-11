#include<stdio.h>
#include<string.h>
int main()
{
	char name[20],branch[20];
	int rollno,marks,n,i;
	FILE *p;
	p=fopen("psit.txt","w");
	printf("\n How many student's record you want to put....\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n Enter the Information of student %d :\n",i);
		fflush(stdin);
		printf("\n Enter the name of student :");
		gets(name);
		printf("\n Branch :");
		gets(branch);
		fflush(stdin);
		printf("\n Roll No. :");
		scanf("\n %d",&marks);
		printf("\n Marks :");
		scanf("%d",&rollno);
		fprintf(p,"%s\t%s\t%d\t%d\n",name,branch,rollno,marks);
		
	}
	printf("\n Record Saved Successfully...\n");
	fclose(p);
	printf("\n Data from the file ....\n");
	p=fopen("psit.txt","r");
	while(!feof(p))
	{
		fscanf(p,"%s\t%s\t%d\t%d\n",name,branch,&rollno,&marks);
		fprintf(stdout,"%s\t%s\t%d\t%d\n",name,branch,rollno,marks);
	}
	fclose(p);
}
