//Program-find sum from 1 to n
#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the value of  n";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
}

/*
OTHER METHODS

1.Using formula sum=n(n+1)/2
2.Other formula sum=n(a+l)/2
3.while loop


#include<iostream>
using namespace std;
int main()
{
    int n,i,sum1=0,sum2=0;
    cout<<"Enter the value of  n";
    cin>>n;

    int a=1,l=n;
    
    sum1=(n*(n+1))/2;
    sum2=(n*(a+l))/2;
    
    cout<<sum1<<" "<<sum2;
}

*/