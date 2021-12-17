// insert and iterator method

#include<iostream>
#include<vector>

using namespace std;

template <typename T>

void display(vector <T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
     vector<int> vec;

     vec.push_back(5);
     vec.push_back(10);
     vec.push_back(3);
     vec.push_back(5);
     vec.push_back(9);

     cout<<"before insert"<<endl;
     display(vec);

    //  vector<int> :: iterator it = vec.begin();
    //  vec.insert(it, 100);

     vector<int> :: iterator it = vec.begin();
     vec.insert(it+3, 100);

     cout<<"after insert"<<endl;
     display(vec);

    //  if(vec.empty())
    //  {
    //      cout<<"vector is emplty"<<endl;
    //  }else{
    //      cout<<"vector is not empty"<<endl;
    //  }

    // Version 94.0.4606.61 (Official Build) (64-bit)

     return 0;
}