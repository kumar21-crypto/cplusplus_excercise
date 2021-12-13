#include<iostream>

using namespace std;

union gfg
{
    int roll;
    float num;
};


int main()
{
    union gfg s,s1;

    s.roll = 50;
    s1.num = 60;

    cout<<s.roll<<endl;
    cout<<s1.num<<endl;
    return 0;
}


