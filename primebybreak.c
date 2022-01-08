#include<stdio.h>
void main()
{
	int n,i=2,is_prime=1;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0){
			is_prime=0;
			break;
		}
		i++;
	}
	if(is_prime==1){
		printf("prime number");
	}
	else
	{
		printf("not a prime number");
	}
}
