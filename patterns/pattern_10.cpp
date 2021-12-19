// pattern type

//      *     
//     * *    
//    *   *   
//   *     *  
//  *       * 
// * * * * * *

#include <iostream>

using namespace std;

int main()
{

    int k;

    for (int i = 1; i <= 6; i++)
    {
        k = 1;

        for (int j = 1; j <= 11; j++)
        {
            if (j == 7 - i || j == (5 + i) || (i == 6 && j >= 1 && k))
            {
                cout << "*";
                k = 0;
            }
            else
            {
                cout << " ";
                k = 1;
            }
        }
        cout << endl;
    }
    return 0;
}