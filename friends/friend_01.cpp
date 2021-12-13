#include<iostream>

using namespace std;

class Animal
{
   private:
     string animal_name = "cow";

     public:
      friend class Zoo;

      void display_1()
      {
          cout<<"the name of animal "<<animal_name<<endl;
      }
};

class Zoo
{
    public:
     
     void display(Animal a)
     {
         cout<<"the name of animal is "<<a.animal_name<<endl;
     }
};

int main()
{
    Animal a;
     Zoo z;
     z.display(a);
     return 0;
}