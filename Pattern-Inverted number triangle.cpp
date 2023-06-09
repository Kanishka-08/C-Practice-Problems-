#include<iostream>
using namespace std;
int main()
{
    int height,i,j;
    cin>>height;
    for(i=1;i<=height;i++)
    {
        for(j=1;j<=(height-i);j++)
        cout<<" ";
        for(j=1;j<=i;j++)
        cout<<i;
        cout<<endl;
    }
}