#include <iostream>
using namespace std;

int main() {
	int arr[20];
	int t;
	cin>>t;
	int count=0;
	while(t--)
	{
	    long int n;
	    cin>>n;

        cout<<reverse(n,arr)<<endl;

	}

	

	return 0;
}