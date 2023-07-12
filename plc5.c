#include<stdio.h>
#include<math.h>
int main()
{
int n,i=0,sum=0;
printf("num ");
scanf("%d",&n);
while (n) {
        if(n % 2 ==0)
         sum += 1*pow(2,i);
        n = n / 2;
        i++;
}
printf("%d",sum);
  return 0;
}