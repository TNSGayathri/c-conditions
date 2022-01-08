#include<stdio.h>
void main()
{
	int n,r,e=0,o=0,z=0;
	printf(" enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		if(r==0)
		{
		z=z+1;
	}
	else if(r%2!=0)
	{
		o=o+1;
	}
	else if(r%2==0)
	{
		e=e+1;
	}
	}
	printf("even =%d",e);
	printf("\nodd =%d",o);
	printf("\nzeros =%d",z);
}
