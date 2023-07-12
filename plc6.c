#include<stdio.h>
int main(){
    int n,n1,lcm,max,i;
    printf("Enter num ");
    scanf("%d %d",&n,&n1);
   max=1;
   while(1){
int count=0;
for(int i=0;i<n;i++)
{ if(max%n[i]==0)
count++;
}
if(count==n)
{
    printf("%d",max); break;
}
else max++;
   }
    return 0;
}