#include<iostream>

using namespace std;

int main()
{
     int a = 3;
     int *ptr = &a;

     cout<<"the address of a is "<<ptr<<endl;
     cout<<"the address of a is "<<&a<<endl;
     cout<<"\n";
     
     cout<<"the value of a is "<<a<<endl;
     cout<<"the value of a is "<<*ptr<<endl;

     return 0;
}