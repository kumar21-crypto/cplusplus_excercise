#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string name,name1;
    int roll,roll1;

    // cout<<"enter your name "<<endl;
    // getline(cin,name);

    // cout<<"enter your roll number "<<endl;
    // cin>>roll;

    // ofstream student;
    // student.open("student.txt");

    // student<<name<<endl;
    // student<<roll<<endl;

    // student.close();


    ifstream student1;
    student1.open("student.txt");
    
    getline(student1,name);
    student1>>roll;

    cout<<name<<" "<<roll<<endl;

     return 0;
}