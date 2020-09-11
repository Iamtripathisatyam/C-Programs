#include <stdio.h> 
#include <string.h> 
void str_rev(char a[]) 
{ 
    char temp=0; 
    int l=0,i=0; 
    l=strlen(a); 
      // if (l%2!=0)
       //{
         for (i=0;i<l;i=i+2)
		  {
		    if(a[i]!=' ')
		    {
             temp=a[i]; 
             a[i]=a[i+1]; 
             a[i+1]=temp;
			}
			else
			i--;
          }
    	//}
        	printf("%s\n",a);  
       //satyam tripasa }      
}
int main()
{
    char a[50];
	puts("\n Enter Any Sentence :");
	gets(a);
	str_rev(a); 
} 
