#include <iostream>

using namespace std;

int main()
{
    int n, arr[32];

    cout << "enter decimal number" << endl;
    cin >> n;

    int rem;

    int i = 0;
    while (n > 0)
    {

        rem = n % 2;
        arr[i] = rem;
        n = n / 2;
        i++;
    }

   

    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }

    return 0;
}