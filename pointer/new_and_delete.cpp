#include<iostream>

using namespace std;

int main()
{
     int a =10;
     int* b = &a;
   
     cout<<"the value of a is "<<*(b)<<endl;
     cout<<"the address of a is "<<b<<endl;

    // new keyword
    int *c = new int(50);
    cout<<"the value of c is "<<*(c)<<endl;

    // dynamic array
    int* arr = new int[5];
    arr[0] = 15;
    arr[1] = 20;
    arr[2] = 25;

    // delte array

    delete[] arr;

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;

 
    int* x = new int(50);
    cout<<"the value of x is "<<*(x)<<endl;

    delete x;
    cout<<"the value of x is "<<*(x)<<endl;



     return 0;
}