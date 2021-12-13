#include<iostream>

using namespace std;

int main()
{
    int limit = 18;
    int age;

    cout<<"enter your age"<<endl;
    cin>>age;

    string vote = (age>=limit) ? "you can give vote" : "you can't give vote" ;

    cout<<vote<<endl;
    
    return 0;
}