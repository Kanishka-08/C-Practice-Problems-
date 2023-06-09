//PROGRAM-Sum of even numbers from 1 to n
#include<iostream>
using namespace std;
int main()
{
    int sum=0,i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        sum=sum+i;
    }
    cout<<"Sum: "<<sum;
}