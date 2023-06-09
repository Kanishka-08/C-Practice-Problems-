#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch='A',u;
    cout<<"Enter number of rows to print triangle"<<endl;
    cin>>n;
    
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=i;j++)
        {
           if(j==2)
           u=ch;

           cout<<ch<<" ";
           ch++;
           
        }
        if(i!=1)
        {
            ch=u;
        }
 
        cout<<endl;
        
    }
}