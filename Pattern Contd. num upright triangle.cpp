#include<iostream>
using namespace std;
int main()
{
    int i,j,height;
    cin>>height;

    for(i=1;i<=height;i++)
    {
        for(j=1;j<=i-1;j++)
        cout<<" ";
        for(j=i;j<=height;j++)
        cout<<j;
        cout<<endl;
    }
}