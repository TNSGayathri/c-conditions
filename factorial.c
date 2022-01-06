#include<stdio.h>
void main()
{
	int i=1,n,pro=1;
	printf("enter the n value");
	scanf("%d",&n);
	while(i<=n)
	{
		pro=pro*i;
		i++;
	}
	printf("%d",pro);
}
