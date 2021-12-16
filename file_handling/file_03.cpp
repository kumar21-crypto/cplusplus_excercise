#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

int main()
{
    int student_no;
    string name;
    int roll,classes;

    ofstream oout;
    oout.open("student_data.txt",ios::app);
    oout<<"name "<<" roll "<<" class ";

    cout<<"how many students want to take online class "<<endl;
    cin>>student_no;

    for(int i=0;  i < student_no ; i++)
    {
        
        cout<<"enter name of student "<<i+1<<endl;
        cin>>name;

        cout<<"enter roll number of student "<<i+1<<endl;
        cin>>roll;

        cout<<"enter class of student "<<i+1<<endl;
        cin>>classes;

        oout<<"\n"<<name<<"  "<<roll<<"  "<<classes<<endl;

    }


    oout.close();
     
     return 0;
}