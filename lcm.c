#include<stdio.h>
int main(){
    int n,n1,lcm,max;
    printf("Enter num ");
    scanf("%d %d",&n,&n1);
    if(n>n1)
    max=n;
    else
    max=n1;
    while(1)
    { if(max%n==0 && max%n1==0)
    {
       printf("%d",max);
       break; 
    max++;
    }
    }
    return 0;
}