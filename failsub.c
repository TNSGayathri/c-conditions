#include<stdio.h>
void main()
{
	int m,p,c,cs;
	printf("Enter the marks in maths ");
	scanf("%d",&m);
	printf("Enter the marks in physics ");
	scanf("%d",&p);
	printf("Enter the marks in chemistry ");
	scanf("%d",&c);
	printf("Enter the marks in computer science ");
	scanf("%d",&cs);
	if(m<35)
	{
	printf("Failed in maths");	
	}
	 if( p<35)
	{
		printf("\nFailed in physics");
	}
	 if( c<35)
	{
		printf("\nFailed in chemistry");
	}
	 if( cs<35)
	{
		printf("\nFailed in computer science");
	}
}
