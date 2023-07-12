//program to count the number of occuring sundays
#include <stdio.h>

int main() {
    int year,month,f_sun;
    printf("Year");
    scanf("%d",&year);
    printf("M");
    scanf("%d",&month);
    printf("D");
    scanf("%d",&f_sun);
int f=28;
if(year%400==0 || (year%100!=0 && year%4==0))f=29;
int days[13]={0,31,f,31,30,31,30,31,30,31,30,31,30,30}
int count = 1;
count += (days[month]-f_sun)/7;
printf("%d",count);
}