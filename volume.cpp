
#include <iostream>

using namespace std;

int main()
{   int v,i,d,ch,n;
    cout<<"Enter limit";
    cin>>n;
    cout<<"Enter volume ";
    cin>>v;
    cout<<"Press 1 to increment and 2 to decrement";
     while(n){
        if(ch==1)
    {
        cout<<"Enter the number to which the volume has to be incremented";
    cin>>i;
        cout<<endl<<i-v<<" steps incremented\n";
    }
    if(ch==2)
    {
        cout<<"Enter the number by which the volume has to be decremented";
    cin>>d;
     cout<<endl<<v-d<<" steps decremented\n";
    }
    cout<<"Press 1 to increment and 2 to decrement";
    cin>>ch;
    }
    
    return 0;
}
