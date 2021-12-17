#include<iostream>

using namespace std;

int main()
{
     int arr[] = {4,3,7,6,1};

     for(int i=i;i<5;i++)
     {
         if(arr[i]>arr[i+1])
         {
             int temp = arr[i];
             arr[i] = arr[i+1];
             arr[i+1] = temp;

         }
     } 

     for(int i=0;i<5;i++)
     {
         cout<<arr[i]<<endl;
     }
     return 0;
}