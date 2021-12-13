#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int roll;
    float marks;

public:
    string name;

    void setData(int a, float b, string s);
    void getData();
};

void student ::setData(int a, float b, string s)
{
    roll = a;
    marks = b;
    name = s;
}

void student ::getData()
{
    cout << "The name of student is " << name << endl;
    cout << "The marks of student is " << marks << endl;
    cout << "The roll number of student is " << roll << endl;
}

int main()
{
    student s[3];

    for (int i = 0; i < 3; i++)
    {
        int a;
        float b;
        string c;

        cout << "enter name of student " << i + 1 << endl;
        cin >> c;

        cout << "enter marks of student " << endl;
        cin >> b;

        cout << "enter roll no. of student " << endl;
        cin >> a;

        s[i].setData(a, b, c);
    }

    for (int i = 0; i < 3; i++)
    {
        s[i].getData();
    }
    return 0;
}