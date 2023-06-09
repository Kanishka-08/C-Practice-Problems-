#include<iostream>
using namespace std;
int main()
{
    int s,k,i,j,height;
    char ch;
    cout<<"You are about to see magiiica !!"<<endl;
    cout<<"Please enter height of magic land "<<endl;
    cin>>height;
    cout<<"Please enter the pattern you want to accompany as chota bheem "<<endl;
    cin>>ch;
    for(i=1;i<=height;i++)
    {
        
         
            for(s=1;s<=i-1;s++)
              cout<<" ";
            for(k=1;k<=(height-i+1);k++)
            cout<<ch; 
         
         cout<<endl;
    }
}