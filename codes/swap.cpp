#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *arr = new int [n];
	for(int i=0;i<n;i++)
		cin>>arr[i]; // input array
	pair <int,int> arrPos[n];
	for(int i=0;i<n;i++)
	{
		arrPos[i].first = arr[i];
		arrPos[i].second = i;
	}
	sort(arrPos,arrPos+n);
	vector<bool> vis(n,false);
	int ans = 0;
	for (int i=0;i<n;i++)
	{
		if(vis[i] == true || arrPos[i].second == i)
			continue;
		int cycle_size = 0;
		int j = i;
		while(!vis[j])
		{
			vis[j] = true;
			j = arrPos[j].second;
			cycle_size++;
		}
		if(cycle_size > 0)
		{
			ans = ans + (cycle_size - 1);
		}
	}
	cout<<ans;
	return 0;
}