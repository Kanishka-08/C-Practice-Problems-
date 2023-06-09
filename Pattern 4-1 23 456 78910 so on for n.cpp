#include<iostream>
using namespace std;
int main()
{
    int i,j,n,count=1;
    cout<<"Enter number of rows to print triangle"<<endl;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<count<<" 4";
            count++;
        }
        cout<<endl;
    }
}