//Program-Convert given temperatue in fahrenheit to temperature in celcius;
#include<iostream>
using namespace std;
int main()
{
    float f,c;
    cout<<"Please enter temeperature in fahrenheit to display temperature in celcius";
    cin>>f;
    c=(5.0/9)*(f-32);
    cout<<c;

}