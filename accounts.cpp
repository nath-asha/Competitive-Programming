#include<iostream>
using namespace std;
int main()
{
    int x,y,t;
    cout<<"Enter limit";
    cin>>t;
    while(t)
    {
        cout<<"Enter the number of followers";
        cin>>x;
        cout<<"\nEnter the number of following accounts";
        cin>>y;
        if(x> (10*y))
        {
            cout<<"\nYES";
        }
      else
        {
            cout<<"\nNO";
        }
    }
}