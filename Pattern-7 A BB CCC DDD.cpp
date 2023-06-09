#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch='A';
    cout<<"Enter number of rows to print triangle"<<endl;
    cin>>n;
    
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=i;j++)
        {
           cout<<ch<<" ";  
        }
        cout<<endl;
        ch=ch+1;
    }
}