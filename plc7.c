//total vehicles 200  total wheels 540  2 and 4 wheelers count=?
//le no,of 2 and 4 wheelers be x and y respectively
//x+y = 200   and 2x + 4y =540
#include<stdio.h>
int main()
{
    int x,y,tx,ty,v=200,w=540;

    //printf(" ");
   // scanf("%d",&x);
   // printf("%d",&y);
    tx=200*2;
    ty=(w-tx)/2;
    printf("total bike %d car %d",tx,ty);
    }