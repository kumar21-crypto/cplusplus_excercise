#include <iostream>

using namespace std;

template <class T1 = float, class T2 = int>

class sum
{
public:
    T1 a;
    T2 b;

    sum(T1 a, T2 b)
    {
        this->a = a;
        this->b = b;
    }

    void calculate()
    {
        cout << "the sum of a and b is " << a + b << endl;
    }
};

int main()
{
    sum<> s(4.8, 5);
    s.calculate();
    return 0;
}