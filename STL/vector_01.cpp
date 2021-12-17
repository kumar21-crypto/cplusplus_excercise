#include<iostream>
#include<vector>

using namespace std;

template <typename T>

void display(vector <T> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    // for int data types

    //  vector <int> vec;
    //  int size,element;

    //  cout<<"enter size of vector"<<endl;
    //  cin>>size;

    //  for(int i=0;i<size;i++)
    //  {
    //      cout<<"enter element "<<i+1<<endl;
    //      cin>>element;

    //      vec.push_back(element);
    //  }

    //  display(vec);

    // for float data type

     vector <float> vec;
     int size;
     float element;

     cout<<"enter size of vector"<<endl;
     cin>>size;

     for(int i=0;i<size;i++)
     {
         cout<<"enter element "<<i+1<<endl;
         cin>>element;

         vec.push_back(element);
     }

     display(vec);

     return 0;
}