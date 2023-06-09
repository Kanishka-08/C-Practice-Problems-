//PROGRAM-PRINTING SQAURE MATRIC NxN with stars
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Please enter number of rows and columns in the square matrix"<<endl;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }


}
