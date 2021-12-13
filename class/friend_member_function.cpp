#include <iostream>

using namespace std;

class B;

class A
{
    int a;

public:
    friend int sum(A m, B n); // friend class declaration
    void setData(int x)
    {
        a = x;
    }
};

class B
{
    int b;

public:
    friend int sum(A m, B n);
    void setData(int y)
    {
        b = y;
    }
};

int sum(A m, B n)
{
    return (m.a + n.b);
}

int main()
{
    A a;
    a.setData(5);
    B b;
    b.setData(10);

    cout << "the sum of a and b is " << sum(a, b) << endl;

    return 0;
}