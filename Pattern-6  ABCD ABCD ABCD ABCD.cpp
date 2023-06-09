#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch;
    cout<<"Enter number of rows to print triangle"<<endl;
    cin>>n;
    
    for(i=1;i<=n;i++)
    { ch='A';
        for(j=1;j<=n;j++)
        {
           cout<<ch<<" ";
           ch++;
           
        }
        cout<<endl;
    }
}