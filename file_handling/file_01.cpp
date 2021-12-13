#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream f;
    string name;

    f.open("file.txt");

    while(f)
    {
        getline(cin,name);

        if(name=="-1")
        {
            break;
        }

        f<<name<<endl;

    }

    f.close();

    cout<<"hello "<<name<<endl;

    ifstream f1;

    f1.open("file.txt",ios::in);
    
    while(f1)
    {
        getline(f1,name);

        cout<<name<<endl;

    }

    f1.close();
    
     
     return 0;
}