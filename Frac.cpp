#include <iostream>

using namespace std;

int main()
{  
    int n,i,sum=0,fact=1;
    cout<<"Enter limit";
    cin>>n;
    for(i=1;i<=n;i++)
    {
       fact=fact*i;
        s=s+fact;
          cout<<i<<"! + ";
    }
    cout<<" = "<<sum;
    return 0;
}