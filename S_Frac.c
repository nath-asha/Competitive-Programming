//Program to find (factorial/number) of n natural numbers
#include<stdio.h>
void main()
{
    int fact=1,n,i,sum=0;
    printf("Enter the limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum+=fact/i;
        printf("%d/%d + ",fact,i);
    }
    printf("   %d",sum);
}