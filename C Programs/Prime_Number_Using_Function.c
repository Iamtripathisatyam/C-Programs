int prime(int n)
{
	int i,count=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
 if(count==0&&n!=1)
 printf("\n\n\n\t\a%d is a PRIME NUMBER",n);
 else
printf("\n %d is not a prime number",n);	
}
main(satyamtripathi)
{
	int n;
	printf("\n Please Enter Any Number :");
	scanf("%d",&n);
	prime(n);
}
