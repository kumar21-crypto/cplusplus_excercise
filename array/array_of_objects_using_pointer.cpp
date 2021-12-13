#include<iostream>

using namespace std;

static int count = 1;

class door
{
    int height;
    int width;

    public:

    void setData(int height,int width)
    {
        this->height = height;
        this->width = width;
    }

    void getData()
    {
        cout<<"the height and width of door "<<count<<" is "<<height<<" and "<<width<<endl;

        count++;
    }

};

int main()
{
    int size = 4;

    door *d = new door[size];
    door *d1 = d;

    for(int i=0 ;i<4;i++)
    {
        int h,w;

        cout<<"enter height and width of door "<<i+1<<endl;
        cin>>h>>w;

        d1->setData(h,w);
        d1->getData();
        d1++;
    
    }

     return 0;
}