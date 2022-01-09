#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number ");
	scanf("%d",&n);
	while(n>1)
	{
		if(n%2==0)
		{
		n=n/2;
		printf("\n%d",n);	
		}
	else if(n%2!=0)
	{
		n=3*n+1;
		printf("\n%d",n);
	}
	}
}
