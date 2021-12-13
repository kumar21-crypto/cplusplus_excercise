#include<iostream>

using namespace std;

class name
{
     public:

     void show()
     {
          cout<<"hello i am name"<<endl;
     }
};

class name1
{
     public:

     void show()
     {
          cout<<"i am name1"<<endl;
     }
};

class name3 : public name , public name1
{
     public:

     void show()
     {
          cout<<"hello i am name3"<<endl;
     }

};

int main()
{
     name3 n3;
     n3.show();

     return 0;
}