#include<iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"enter a , b and c "<<endl;
    cin>>a>>b>>c;

    if ((a>=b) && (a>=c))
    {
        cout<<"a is greater than b and c"<<endl;
    }
    else if((b>=a) && (b>=c))
    {
        cout<<"b is greater than a and c"<<endl;
    }
    else{
        cout<<"c is greater then a and b"<<endl;
    }
    
    return 0;
}