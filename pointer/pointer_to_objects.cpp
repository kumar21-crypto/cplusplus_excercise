#include<iostream>

using namespace std;

class sum
{
    int num1,num2;
    
    public:
    

    sum(int a,int b)
    {
        num1 = a;
        num2 = b;
    
    }
    
    void sum_of_two()
    {
        cout<<num1+num2<<endl;
    }

};


int main()
{
     sum* s = new sum(4,5);
     s->sum_of_two();
     sum s1(2,3);
     sum*ptr = &s1;
     ptr->sum_of_two();
     
     return 0;
}