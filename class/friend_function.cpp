#include<iostream>
#include<string>
using namespace std;

class shop
{
    int item_no;
    string item_name;

    public:
    friend void getData(shop s);
    void setData(int a,string b)
    {
        item_no = a;
        item_name = b;
    }
    void getData_1();

};

void getData(shop s)
{
    cout<<"the item no. is "<<s.item_no<<endl;
    cout<<"the item name is "<<s.item_name<<endl;

}

void shop :: getData_1()
{
    cout<<"the item no. is "<<item_no<<endl;
    cout<<"the item name is "<<item_name<<endl;
}
    
int main()
{
     shop s1;
     s1.setData(101,"biscuit");
     getData(s1);
     s1.getData_1();
     return 0;
}