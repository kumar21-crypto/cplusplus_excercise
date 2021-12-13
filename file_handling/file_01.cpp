#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string s = "hii kaise ho main \n to ekdam mast hoon";
    string s1;

    // for writing in files
    ofstream out;
    out.open("hello.txt");
    out<<s;

    out.close();


    // for reading in files
    ifstream in1;
    in1.open("hello.txt");
    
    // one word reading
    // in1>>s1;

    // one line reading
    getline(in1,s1);


    // printing readed words
    cout<<s1<<endl;

    in1.close();
    
     
     return 0;
}