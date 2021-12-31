#include<stdio.h>
void main()
{ 
float unt,ac,sc,amt;
printf("enter the units");
scanf("%f",&unt);
if(0<=unt<=199)
{
ac=unt*1.20;
printf("\namount charged=% .2f",ac);
if(unt>400)
{
	sc=ac*15.0/100;
	printf("\nsurcharge = % .2f",sc);
	amt=ac+sc;
	printf("\ntotal amount charged=% .2f",amt);
}
else
{
	printf("\nsurcharge is zero");
	amt=ac+sc;
	printf("\ntotal amount charged=% .2f",ac);
}
	}	
else if(200<=unt<400)
	{
ac=unt*1.50;
printf("\namount charged=% .2f",ac);
if(unt>400)
{
	sc=ac*15.0/100;
	printf("\nsurcharge = % .2f",sc);
	amt=ac+sc;
	printf("\ntotal amount charged=% .2f",amt);
}
else
{
	printf("\nsurcharge is zero");
	amt=ac+sc;
	printf("\ntotal amount charged=% .2f",ac);
}
	}	
	else if(400<=unt<600)
	{
ac=unt*1.80;
printf("\namount charged=% .2f",ac);
if(unt>400)
{
	sc=ac*15.0/100;
	printf("\nsurcharge = % .2f",sc);
	amt=ac+sc;
	printf("\ntotal amount charged=% .2f",amt);
}
else
{
	printf("\nsurcharge is zero");
	amt=ac+sc;
	printf("\ntotal amount charged=% .2f",ac);
}
	}
else if(unt>600)
	{
ac=unt*2.00;
printf("\namount charged=% .2f",ac);
if(unt>400)
{
	sc=ac*15.0/100;
	printf("surcharge = % .2f",sc);
	amt=ac+sc;
	printf("total amount charged=% .2f",amt);
}
else
{
	printf("surcharge is zero");
	amt=ac+sc;
	printf("total amount charged=% .2f",ac);
}
	}		
}
