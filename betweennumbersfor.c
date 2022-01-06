#include<stdio.h>
void main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	for(a;a<b;a=a+1)
	{
		printf("%d ",a);
	}
}
