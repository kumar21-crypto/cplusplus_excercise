#include<iostream>

using namespace std;

class student
{
    int roll=8;

    public:

   virtual void display()
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
    student *s;
    student1 s1;

    s = &s1;

    s->display();
    
     return 0;
}



