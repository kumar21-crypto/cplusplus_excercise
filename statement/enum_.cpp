#include<iostream>

using namespace std;

enum week { sunday,monday,tuesday,wednesday,thursday,friday,saturday };

int main()
{
     week today;
     today = thursday;

     cout<<"Day "<<today+1<<endl;
     cout<<wednesday<<endl;
     
     return 0;
}