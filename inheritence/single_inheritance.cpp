#include<iostream>

using namespace std;

class vetan
{
    public:

    int salary = 5000;

};

class teacher : public vetan

{
    public:

    int bonus = 2000;
};

int main()
{
    teacher t;
    cout<<"salaray is : "<<t.salary<<endl;
    cout<<"bonus is : "<<t.bonus<<endl;

     return 0;
}