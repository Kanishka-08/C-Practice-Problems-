#include<iostream>
using namespace std;

int main()
{   //typecasting
    int a='a';
    cout<<a <<endl; //a typecasted from char to a through ascii table--datatype defined was int

    char ch=98;
    cout<<ch <<endl;//ch typecasted from int to char trhrough ascii table--datatype defined was char

    char ch1=123456; //Binary conversion is 1,11100010,01000000
    cout<<ch1 <<endl;
}