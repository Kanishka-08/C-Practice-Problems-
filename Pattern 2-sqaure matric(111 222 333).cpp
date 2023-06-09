//PROGRAM- PRINT SQUARE MATRIX 111 222 333 FOR N=3 .PROGRAM FOR N=N
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Please enter the age of sqaure matrix"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<i<<" ";
        }

        cout<<endl;
    }
}

//can also be executed using while loop
