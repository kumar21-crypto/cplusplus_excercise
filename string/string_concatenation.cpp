#include<iostream>

using namespace std;

int main()
{
    string a = "virat";
    string b = " kohli";

    // 1st concatenation method
    string c = a + b;


    // 2nd concatenation method (append function)
    string d = a.append(b);

    cout<<c<<endl;
    cout<<d<<endl;

    return 0;
}