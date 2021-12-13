#include<iostream>

using namespace std;

class Animal
{
   private:
     string animal_name = "cow";

     public:

      void display_1()
      {
          int a = 50;
          cout<<"the name of animal "<<animal_name<<endl;
      }
};

class Zoo
{
    public:
     friend void Animal :: display_1();


     
};

int main()
{
    Animal a;
    Zoo z;
    
    
     return 0;
}