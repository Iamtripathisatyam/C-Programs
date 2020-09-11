//Number of occurence of a particular character.........
#include<stdio.h>
int main()
{
char a[50],ch;
int i=0,count=0;
puts("\n Enter Any Sentence :\n");
gets(a);
printf("\n Enter the Character You Want To Search : \n");
scanf("%c",&ch);
while(a[i]!='\0')
{
	if(a[i]==ch)
	count++;
	i++;
}
    printf("\n The Charcter %c Occured %d times\n",ch,count);
}
