
#include <iostream>

using namespace std;
int main()
{
    int i,t,n,a[20],h,count=0;
    cout<<"Enter the no,of test cases";
    cin>>t;
    cout<<"Enter the height of the person";
    cin>>h;
    cout<<"Enter the number of people";
    cin>>n;
    cout<<"Input the heights";
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i] >= h)
        {
            count++;
        }
    }
    cout<<"The number of people to be killed = "<<count;
    return 0;
}
