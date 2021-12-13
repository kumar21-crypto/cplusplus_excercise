#include<iostream>
#include<cstring>

using namespace std;

static int count = 1;


class employee
{
   string name;
   float salary;
   long int date_of_joining;

   public:
    
    void setEmployeeData(string name, float salary, long int date_of_joining)
    {
        this->name = name;
        this->salary = salary;
        this->date_of_joining = date_of_joining;
    }

    void getEmployeeData()
    {

        cout<<"\n\n";
        cout<<"**************** Information of employee "<<count<<"*********************** "<<endl;
        cout<<"Name            - "<<name<<endl;
        cout<<"Salary          - "<<salary<<endl;
        cout<<"Date of Joining - "<<date_of_joining<<endl;
        cout<<endl;
    }
    
};

int main()
{
    employee e[5];

    for(int i=0;i<5;i++)
    {
        string name;
        float salary;
        long int date;
        // please enter date in ddmmyy format like 021221
        cout<<"********* please fill info of employee "<<i+1<<" *************"<<endl;
        cout<<"enter name of employee"<<endl;
        getline(cin,name);
        cout<<"enter salary of employee"<<endl;
        cin>>salary;
        cout<<"enter date of joining of employee in company"<<endl;
        cin>>date;

        e[i].setEmployeeData(name,salary,date);

    }

    for(int i=0;i<5;i++)
    {
        e[i].getEmployeeData();
    }
     
     return 0;
}