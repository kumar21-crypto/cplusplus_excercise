// insert and iterator method and end method

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

     vector<int> :: iterator it = vec.end();
     vec.insert(it, 100);

     cout<<"after insert"<<endl;
     display(vec);



     return 0;
}