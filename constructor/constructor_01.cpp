#include <iostream>

using namespace std;

class student
{
    string name = "anuj";

public:
    student(string name1)
    {
        cout << "hello my name is "<<name1<<endl;
    }

    void get()
    {
        string get1 = name;
    }

    
    
};

class obj
{
    public:

    friend class student;
};

int main()
{
    

    return 0;
}