#include<iostream>

using namespace std;

class complex
{
    int a;
    int b;

    public:

    void setData(int x,int y)
    {
        a = x;
        b = y;
    }

    void setDataBySum(complex a1,complex a2)
    {
        a = a1.a + a2.a;
        b = a1.b + a2.b;
    }

    void printNumber()
    {
        cout<<"your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }

};
int main()
{
     complex c1,c2,c3;

     c1.setData(1,2);
     c1.printNumber();

     c2.setData(3,4);
     c2.printNumber();

     c3.setDataBySum(c1,c2);
     c3.printNumber();

     return 0;
}