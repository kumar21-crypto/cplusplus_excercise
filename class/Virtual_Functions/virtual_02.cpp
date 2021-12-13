#include<iostream>

using namespace std;

class student
{
    int roll=8;

    public:

   void display1()
    {
        cout<<"the roll number of student is "<<roll<<endl;
    }

};

class student1 :  public student
{
  int roll1=6;
  public:

  void display()
  {
      cout<<"the roll1 of student is "<<roll1<<endl;
  }
};

int main()
{
    student1 s;
    s.display();
    s.display1();
    
     return 0;
}



