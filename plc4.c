//cashier note problem
#include<stdio.h>
void main(){
    int amt,j,k;
    int cash[4]={100,50,10,1};
    printf("Amount ");
    scanf("%d",&amt);
    printf("\n100 %d",amt/100);
    
    printf("\n50",(amt%100)/50);
    j=((amt%10)%50);
    printf("\n10",j/10);
    k=(j)%10;
    printf("\n1",k);
}