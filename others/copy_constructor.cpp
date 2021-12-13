#include<iostream>

using namespace std;

class shop
{
    

    public:
    int a;
    shop(int a)
    {
        this->a = a;
    }

    shop(shop &i)
    {
        a = i.a;
    }

    void display()
    {
        cout<<"value of x is "<<a<<endl;
    }
};

int main()
{
     shop s(25);
     shop s1(s);
     cout<<s1.a<<endl;
    s.display();


     return 0;
}