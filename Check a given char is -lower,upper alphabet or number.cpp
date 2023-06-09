//Program to check if a character is uppercase/lowercase alphabet of numeric.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Please enter character";
    cin>>ch;

    //Checking wrt ascii values
    if(ch>='A' && ch<='Z')
    cout<<"It is  uppercase letter";
    else if(ch>='a' && ch<='z')
      cout<<"It is  lowercase letter";
    else if(ch>='0' && ch<='9')
      cout<<"It is numberic";

}


/*Other way-
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Please enter character";
    cin>>ch;

    //Checking wrt ascii values
    if(ch>=65 && ch<=90)
    cout<<"It is  uppercase letter";
    else if(ch>=96 && ch<=122)
      cout<<"It is  lowercase letter";
    else if(ch>=48 && ch<=57)
      cout<<"It is numberic";

}

*/