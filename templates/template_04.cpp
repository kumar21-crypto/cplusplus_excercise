#include<iostream>

using namespace std;

template <typename T>

T sum(T a,T b)
{
    return a+b;
}

int main()
{
    cout<<"The sum is "<<sum <float> (3.6,4)<<endl;

     
     return 0;
}