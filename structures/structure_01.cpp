#include<iostream>

using namespace std;

struct student
{
    int roll;
    string name;

}s;


int main()
{
    student s1;  
    s1.roll = 78;
    s1.name = "anuj";

    cout<<s1.roll<<endl;
    cout<<s1.name<<endl;

     return 0;
}