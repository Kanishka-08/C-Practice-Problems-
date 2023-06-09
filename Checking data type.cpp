#include<iostream>
using namespace std;
int main()
{
    float a=32.0,size;
    cout<<typeid(a).name()<<endl;
    a=a-2;
    cout<<a<<endl;
    
    cout<<typeid(a).name();
}