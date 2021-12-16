#include<iostream>

using namespace std;

template <class T>

class multi
{
    T num1;
    T num2;

    public:

    multi(T num1,T num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    T multiplication()
    {
        return num1*num2;
    }

};

int main()
{
    multi <int> m(4,5);
    cout<<m.multiplication()<<endl;

    multi <float> m1(5.4,2.2);
    cout<<m1.multiplication()<<endl;
     
     return 0;
}