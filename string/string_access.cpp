#include<iostream>

using namespace std;

int main()
{
    string name = "Kolkata";

    //access string
    cout<< name[5] <<endl;

    //change string characters
    name[0] = 'T';
    cout<< name <<endl;
    
    return 0;
}