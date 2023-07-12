//the no of hours is entered by user in decimal write a program to convert it into nuo of hours and minutes without type casting
#include<stdio.h>
int main(){
float hour;
int h;
printf("hour ");
scanf("%d",&hour);
while(hour>=1)
{
    h++;
    hour--;
}
printf("%d . %d",h,(hour*60));
    return 0;
}