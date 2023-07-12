// 5 digit number is entered by user in a integer variable,write a prg to print the sum of 3rd and 4th digit
#include<stdio.h>
int main(){
int nu,sum;
printf("number ");
scanf("%d",&nu);
sum=(nu/10)%10+(nu%100)/10;
printf("%d",sum);
    return 0;
}