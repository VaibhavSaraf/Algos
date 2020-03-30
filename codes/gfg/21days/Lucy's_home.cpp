#include <bits/stdc++.h>
using namespace std;

// driver function
int Min_Time(int arr[], int n, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		cout << Min_Time(arr, n, k) << endl;
	}

	return 0;
}
// } Driver Code Ends
//User function Template for C++

int Min_Time(int arr[], int n, int k)
{
    
}
