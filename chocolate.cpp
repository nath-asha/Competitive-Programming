
#include <iostream>

using namespace std;
int check(int a,int b)
{
     if(a>b)
    {
        cout<<b<<" is cheaper.Buy 1st chocolate\n";
    }
     else if(a<b)
    {
        cout<<a<<" is cheaper.Buy 2nd chocolate\n";
    }
     if(a==b)
    {
        cout<<"Equal cost.Buy any one\n";
    }
    return 0;
}
int main()
{   int m,n,t;
    cout<<"Enter the limit\n";
    cin>>t;
    while(t)
    {
    cout<<"\nEnter cost of 1st chocolate";
    cin>>m;
    cout<<"Enter cost of 2nd chocolate";
    cin>>n;
    check(m,n);
    };
    return 0;
}
