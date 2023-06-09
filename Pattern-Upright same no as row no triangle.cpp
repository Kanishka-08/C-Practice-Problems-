#include<iostream>
using namespace std;
int main()
{
    int i,j,height;
    cout<<"You are about to drumbel over shock !!"<<endl;
    cout<<"Please enter height of wonder "<<endl;
    cin>>height;
    for(i=1;i<=height;i++)
    {
        for(j=1;j<=i-1;j++)
        cout<<" ";
        for(j=1;j<=height-i+1;j++)
        cout<<i;

        cout<<endl;
    }
}