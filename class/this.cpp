#include<iostream>

using namespace std;

class data
{
  public:
  int x;
   
  data & setData(int x)
  {
      this->x = x;
      return *this;
  }

  void getData()
  {
       cout<<"the data is "<<x<<endl;
  }

};

int main()
{
     data d;
     d.setData(5).getData();
     return 0;
}