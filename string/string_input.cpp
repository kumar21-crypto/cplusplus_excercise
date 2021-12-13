#include<iostream>

using namespace std;

int main()
{
    string name,fullname;

    // cout<<"enter your name : "<<endl;
    // cin>>name;   // cin collect without space

    // cout<<name<<endl;

    cout<<"enter your full name : "<<endl;
    getline(cin,fullname); // getline collect with space

    cout<<name<<endl;

    return 0;
}