#include<iostream>
using namespace std;
int main()
{
    int i,j,height,count;
    cin>>height;
    count=1;
    for(i=1;i<=height;i++)
    {
        for(j=1;j<=height-1;j++)
        cout<<" ";
        for(j=1;j<=i;j++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;
    }
}