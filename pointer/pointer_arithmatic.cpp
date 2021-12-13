

#include <iostream>

using namespace std;

int main()
{
    int arr[5];

    int *ptr = arr;
    // int *ptr = &arr[0];  // both are same

    for (int i = 0; i < 5; i++)
    {
        cout << "enter " << i + 1 << " number" << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
    return 0;
}


