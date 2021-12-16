#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string api_key = "s995wawA0VxrUr5A5fVVwkD20ydnlTU8sua59hf1yH05EJ4mrKy2yhLks5UH_Uyq";
     
     ofstream out;
     out.open("api.txt");
     out<<api_key<<endl;

     return 0;
}