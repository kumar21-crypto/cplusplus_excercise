// #include<iostream>

// using namespace std;

// //first run base class

// class student
// {
//     public:
//     student()
//     {
//         cout<<"hello student"<<endl;
//     }

// };

// class student1
// {
//     public:
//     student1()
//     {
//         cout<<"hello student 1"<<endl;
//     }

// };

// class student2 : public student, public student1
// {
//     public:
//     student2()
//     {
//         cout<<"hello student 2"<<endl;
//     }

// };

// int main()
// {
//     student2 s;
     
//      return 0;
// }

// *********** virtual class *********

#include<iostream>

using namespace std;

//first run base class

class student
{
    public:
    student()
    {
        cout<<"hello student"<<endl;
    }

};

class student1
{
    public:
    student1()
    {
        cout<<"hello student 1"<<endl;
    }

};

class student2 : public student, virtual public student1
{
    public:
    student2()
    {
        cout<<"hello student 2"<<endl;
    }

};

int main()
{
    student2 s;
     
     return 0;
}