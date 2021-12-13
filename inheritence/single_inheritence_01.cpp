#include<iostream>

using namespace std;

class employee
{
    int salary = 5;

    public:

    int salaryy()
    {
        int a = salary;

        return a;
    }
};

class employee1 : private employee
{
    public:

    void display()
    {
        cout<<"employee salary is : "<<salaryy()<<endl;
    }

};

int main()
{
     employee1 e1;
     e1.display();
     return 0;
}