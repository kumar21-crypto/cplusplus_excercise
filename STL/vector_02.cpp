// pop_back method

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

     cout<<"before pop"<<endl;
     display(vec);

     vec.pop_back();
     vec.pop_back();

     cout<<"after pop"<<endl;
     display(vec);

     return 0;
}