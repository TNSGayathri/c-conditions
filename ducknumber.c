#include<stdio.h>
void main()
{
	int n,r,isduck=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
if(r==0)
{
	isduck=1;
	break;
}	
	}
	if(isduck==1)
	{
		printf("ducknumber");
	}
else
{
	printf("not a duck number");
	}	
}
