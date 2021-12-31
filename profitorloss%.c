#include<stdio.h>
void main()
{
int cp,sp,amt;
float p;
printf("Enter the costprice ");
scanf("%d",&cp);
printf("Enter the selling price ");
scanf("%d",&sp);
if(sp<cp)
{
	printf("loss");
	amt=cp-sp;
	printf("\namount of loss=%d",amt);
	p=amt*100/cp;
	printf("\nloss percentage=% .2f",p);
	}
	else if(sp>cp)
	{
		printf("profit");
		amt=sp-cp;
		printf("\namount of profit=%d",amt);
		p=amt*100/cp;
		printf("\nprofit percentage=% .2f",p);
		}
		else
		{
			printf("neither profit nor loss");
			}	
}
