#include <iostream>

using namespace std;

class student
{
public:
    int roll;
    string name;
    static int count;

    void student_data()
    {
        cout << "enter the name of student " << count << endl;
        cin >> name;

        cout << "enter roll of student " << count << endl;
        cin >> roll;

        count++;
    }

    void display()
    {
        cout << endl;
        cout << "the name of student "<<count<<" is " << name << endl;
        cout << "the roll of student "<<count<<" is " << roll << endl;
        cout << endl;
    }
};

int student ::count = 1;
int main()
{
    student saraswati[5];

    for (int i = 0; i < 5; i++)
    {
        saraswati[i].student_data();
    }

    for (int i = 0; i < 5; i++)
    {
        saraswati[i].display();
    }

    return 0;
}