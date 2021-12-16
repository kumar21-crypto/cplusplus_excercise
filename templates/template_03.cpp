// multiple parameters template class

#include<iostream>

using namespace std;

template <class T1,class T2>

class annu
{
    public:
    T1 a;
    T2 c;

    annu(T1 a,T2 c)
    {
        this->a = a;
        this->c = c;
    }

    void display()
    {
        cout<<this->a<<endl;
        cout<<this->c<<endl;
    }
};

int main()
{
    annu <char ,float> a('A',6.8);
    a.display();
     
     return 0;
}