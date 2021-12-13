#include<iostream>

using namespace std;

class Greet1
{
    public:
     
     void show()
     {
         cout<<"i am greet 1"<<endl;
     }
};

class Greet2
{
    public:

     void show()
     {
         cout<<"i am greet 2"<<endl;
     }
};

class Greet3 : public Greet1 , public Greet2
{
    public:

    void show()
    {
        Greet1::show();
    }
};

int main()
{
    Greet3 g3;

    g3.show();
     
     return 0;
}