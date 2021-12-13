#include<iostream>

using namespace std;

class Teacher
{
    int id;
    string name;
    float salary;

    public:

    Teacher()
    {
        cout<<"please enter your details"<<endl;
    }

    Teacher(int a,string b,float c)
    {
        id = a;
        name = b;
        salary = c;
    }

    void display();
};

void Teacher ::display()
{
    cout<<"teacher id : "<<id<<endl;
    cout<<"teacher name : "<<name<<endl;
    cout<<"teacher salary : "<<salary<<endl;
}

int main()
{
    Teacher t1 = Teacher(123,"shulabh",83500.50),t2;

    t1.display();
     
     return 0;
}