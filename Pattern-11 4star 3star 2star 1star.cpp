#include<iostream>
using namespace std;
int main()
{
    int i,j,n,r;
    cout<<"Enter number of rows to print triangle"<<endl;
    cin>>n;
    r=n;
    for(i=1;i<=n;i++)
    {
        while (r>0){
        for(j=1;j<=r;j++)
        {
           cout<<"*";
        }
        r--;
        cout<<endl;
        }
    }
}