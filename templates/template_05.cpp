//  Create the C++ Function Template named swap so that it has two
// parameters of the same type.  A Template Function created from swap
// will exchange the values of these two parameters.

#include<iostream>

using namespace std;

template <typename T>

void swap(T *a, T *b)
{
    T temp ;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
     char a ='A';
     char b = 'B';

     cout<<"before swap a is "<<a<<" and b is "<<b<<endl;
     swap <char> (a,b);
     cout<<"after swap a is "<<a<<" and b is "<<b<<endl;

     return 0;
}