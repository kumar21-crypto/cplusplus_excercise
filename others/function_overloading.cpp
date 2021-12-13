#include<iostream>

using namespace std;

int sum(int,int);
int sum(int,int,int);

int main()
{
     int a,b,c;

     cout<<"enter a , b and c "<<endl;
     cin>>a>>b>>c;

     cout<<"The sum of a and b is "<<sum(a,b)<<endl;
     cout<<"The sum of a , b and c is "<<sum(a,b,c)<<endl;


     return 0;
}

int sum(int x,int y)
{
    int res = x + y;

    return res;

}

int sum(int x,int y,int z)
{
    int res = x + y + z;

    return res;
}