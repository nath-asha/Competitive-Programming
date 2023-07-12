#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
    int a;
    srandom(time(0));
    a = rand()%11;
    printf("%d",a);
}