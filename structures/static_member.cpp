#include<iostream>

using namespace std;

class student
{
    public:
    static int count;
    string name;

    void student_info()
    {
        cout<<"enter name of student "<<count<<endl;
        cin>>name;
        count++;
    }

    void student_data();


};

int student :: count=10;

void student :: student_data()
{
    cout<<"the name of student "<<count<<" is "<<name<<endl;
}

int main()
{
    student s1,s2,s3;

    s1.student_info();
    s1.student_data();

    s2.student_info();
    s2.student_data();

    s3.student_info();
    s3.student_data();
    


     return 0;
}