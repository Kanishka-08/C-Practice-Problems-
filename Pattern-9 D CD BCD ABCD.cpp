#include<iostream>
using namespace std;
int main()
{
    int i,j,n,u;
    char ch='A';
    cout<<"Enter number of rows to print triangle"<<endl;
    cin>>n;
    ch=ch+(n-1);
    
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=i;j++)
        {
         if(j==1){
            u=ch;
         }
         cout<<ch<<" ";
         ch++;
        }
        ch=u;
        ch--;
        cout<<endl;
      
        
    }
}