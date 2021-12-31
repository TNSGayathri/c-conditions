#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number ");
	scanf("%d",&a);
	if(a%1==0)
	{
		printf("Divisible by 1");
	}
	if(a%2==0)
	{
		printf("\nDivisible by 2");
	}
	if(a%3==0)
	{
		printf("\nDivisible by 3");
	}
	if(a%4==0)
	{
		printf("\nDivisible by 4");
	}
	if(a%5==0)
	{
		printf("\nDivisible by 5");
	}	
}
