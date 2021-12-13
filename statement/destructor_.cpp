#include<iostream>

using namespace std;

class shop
{
    public:

    shop()
    {
        cout<<"shop is open"<<endl;
    }

    ~shop()
    {
        cout<<"shop is closed"<<endl;
    }

};

int main()
{
    shop s;
     
     return 0;
}