#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
    int a[5]={1,2,3,4,5},i;
    srandom(time(0)); 
    for(i=0;i<=20;i++)
    {
        int p =rand()%5;
        int q =rand()%5;
        a[p]=a[q];
        a[q]=a[p];
        int temp =a[p];
    }
    for(i=0;i<5;i++)   
    printf("%d \t",a[i]);
}