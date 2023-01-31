#include <iostream>

using namespace std;

int main()
{  
    int n,i,sum=0;
    cout<<"Enter limit";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i*i;
        cout<<i<<" + ";
    }
    cout<<" = "<<sum;
    return 0;
}