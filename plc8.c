#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
    int a;
    srandom(time(0)); //generates new number each time
    a = rand()%11; 
    // a = rand()%6 + 5;   to generate from 5 to 10
    printf("%d",a);
}