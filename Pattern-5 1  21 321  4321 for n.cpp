#include<iostream>
using namespace std;
int main()
{
    int i,j,n,u;
    cout<<"Enter number of rows to print triangle"<<endl;
    cin>>n;
    
    for(i=1;i<=n;i++)
    { u=i;
        for(j=1;j<=i;j++)
        {
           cout<<u<<" ";
           u--;
        }
        cout<<endl;
    }
}