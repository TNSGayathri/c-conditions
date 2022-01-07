#include<stdio.h>
void main()
{
	int n,i=1,f=0;
	printf("Enter the number ");
	scanf("%d",&n);
	while(n>=i)
	{
		if(n%i==0)
		{
			f+=1;
		}
   i++;		
}
			if(f==2)
			{
				printf(" prime number");
			}
			else
			{
				printf("\nnot a prime number");
			}
		

}

