#include<stdio.h>
void main()
{
	int cp,sp;
	printf("Enter the cost price ");
	scanf("%d",&cp);
	printf("Enter the sell price ");
	scanf("%d",&sp);
	if(cp<sp)
	{
		printf("profit");
}
else if(cp>sp)
{
	printf("loss");
}
else
{
	printf("Neither loss nor profit");
}
}
