#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cin>>num;
    for(i=2;i<=num;i++)
    {
        if(i<num && num%i==0)
        {
            cout<<num<<" is not a prime number";
            break;
        }
        else if(num==i)
        cout<<num<<" is  a prime number";
    }
}