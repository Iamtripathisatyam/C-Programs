int samename(int n)
{
	if(n==0)
	return 0;
	else
	{
		printf("\n Satyam Tripathi\t26390,\tCS-1-D,\t8528095908...\n\n");
		return samename(n-1);
	}
}
int main()
{
	int n;
	printf("\n Enter The Number:");
	scanf("%d",&n);
	samename(n);
}
