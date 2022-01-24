#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    while(n>0)
    {
        c=c+(n-1);
         n=n-1;
    }
   
    printf("%d",c);
}
