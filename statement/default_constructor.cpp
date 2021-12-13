#include <iostream>

using namespace std;

class animal
{
public:
     string animal_name;
     int no;

     animal()
     {

          cout << "enter animal name" << endl;
          cin >> animal_name;

          cout << "enter animal no." << endl;
          cin >> no;
     }

     void display()
     {
          cout << "animal name is " << animal_name << endl;
          cout << "animal no. is " << no << endl;
     }
};

int main()
{
     animal a1;
     a1.display();

     return 0;
}