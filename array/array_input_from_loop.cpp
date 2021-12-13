#include <iostream>

using namespace std;

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "enter " << i + 1 << " number : " << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    cout<<endl;
    
    return 0;
}