#include<iostream>

using namespace std;

template <class T>

class vector
{
    public:
    T *arr;
    int length;

    vector(int length)
    {
        this->length = length;

        arr = new T[length];

    }

    T dotProduct(vector &v)
    {
        T a = 0;

        for(int i=0 ; i<length ; i++)
        {
        a += this->arr[i] * v.arr[i];
        }

        return a;
    }
};

int main()
{
    vector <float>v1(3);
    v1.arr[0] = 5.3;
    v1.arr[1] = 4.1;
    v1.arr[2] = 2.2;

    vector <float>v2(3);
    v2.arr[0] = 3.2;
    v2.arr[1] = 1.9;
    v2.arr[2] = 2.4;

    float b = v1.dotProduct(v2);
    
    cout<<b<<endl;

     
     return 0;
}