#include<stdio.h>
void main()
{
	int n,i=1,f=0;
	printf("Enter the number");
	scanf("%d",&n);
	while(n>i)
	{
		if(n%i==0)
		{
			f+=i;
			
		}
   i++;		
}
			if(f==n)
			{
				printf(" perfect number");
			}
			else
			{
				printf("\nnot a perfect number");
			}
		

}

