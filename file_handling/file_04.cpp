
// WAP to count number of vowels from a input file.

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
    string s,vowel;
    int count = 0;

    cout<<"enter string "<<endl;
    getline(cin,s);

    ofstream out;
    out.open("vowels.txt",ios::app);
    out<<s<<" ";
    out.close();


    ifstream in;
    in.open("vowels.txt");
    getline(in,vowel);

    cout<<vowel<<endl;

    for(int i=0;i< vowel.length(); i++)
    {
        if(vowel[i]=='a' or vowel[i]=='e' or vowel[i]=='i' or vowel[i]=='o' or vowel[i]=='u'  )
        {
            count++;
        }
    }

    cout<<"the number of vowel is "<<count<<endl;

    in.close();
     
     return 0;
}