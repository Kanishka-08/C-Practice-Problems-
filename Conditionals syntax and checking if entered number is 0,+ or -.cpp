//Conditionals-
//Syntax-
/* if-else

if()
{}
else
{}

if-elseif ladder

if()
{}
elseif()
{}
else-optional
{}*/ 

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Please eneter the value of a "<<endl;
    cin>>a;

    if(a==0)
    cout<<"It is 0";
    else if(a>0)
    cout<<"It is Positive";
    else
    cout<<"It is Negative";
}
