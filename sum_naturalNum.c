//Program to find sum of n natural numbers
#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
        printf("%d+",i);
    }
    printf("  %d",sum);
}