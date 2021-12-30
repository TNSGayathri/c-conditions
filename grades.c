#include<stdio.h>
void main()
{
	int a;
	printf("Enter the marks");
	scanf("%d",&a);
	if(100>=a&&90<=a)
	{
		printf("The grade is O");
	}
	else if(90>a&&80<=a)
	{
		printf("The grade is A");
	}
else if(80>a&&70<=a)
	{
		printf("The grade is B");
	}
	else if(70>a&&60<=a)
	{
		printf("The grade is C");
	}
	else if(60>a&&50<=a)
	{
		printf("The grade is D");
	}
	else if(a<50)
	{
		printf("FAIL");
	}
	else 
	{
		printf("Invalid marks");
		}	
}
