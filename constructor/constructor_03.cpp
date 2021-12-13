#include <iostream>

using namespace std;

class student
{
public:
    int roll;
    string name;

    student(int a, string b) : roll(a), name(b)
    {
        cout << "constructor executed" << endl;
    }
    void display()
    {
        cout<<roll<<endl;
        cout<<name<<endl;
    }
};

int main()
{
    student s(18, "aniruddh");
    s.display();

    return 0;
}