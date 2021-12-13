#include<iostream>
#include<string>
using namespace std;

class student
{
private:
    int roll;
    float marks;

public:
    string name;

    void setData(int a,float b,string s);
    void getData();
    
};

void student :: setData(int a,float b,string s)
{
    roll = a;
    marks = b;
    name = s;
}

void student :: getData()
{
    cout<<"The name of student is "<<name<<endl;
    cout<<"The marks of student is "<<marks<<endl;
    cout<<"The roll number of student is "<<roll<<endl;
}


int main()
{
    student s1;

    s1.setData(101,92.5,"anuruddh");
    s1.getData();

     
     return 0;
}