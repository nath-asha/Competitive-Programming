//Program to find factorial of n natural numbers
#include<stdio.h>
void main()
{
    int n,fact=1,i,s=0;
    printf("Enter limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        s=s+fact;
        printf("%d!+",i);
    }
    printf("  %d",s);
}