#include <bits/stdc++.h>
using namespace std;
int maxArea(int arr[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cout <<maxArea(arr, n) << endl;
	}

	return 0;
}

int maxArea(int arr[], int n) 
{ 
    sort(arr,arr+n,greater<int>());
    stack<int> s; 
  
    int max_area = 0; 
    int tp;
    int area_with_top;
  
    int i = 0; 
    while (i < n) 
    { 
        if (s.empty() || arr[s.top()] <= arr[i]) 
            s.push(i++); 
  
        else
        { 
            tp = s.top();
            s.pop();
            area_with_top = arr[tp] * (s.empty() ? i : i - s.top() - 1); 
  
            if (max_area < area_with_top) 
                max_area = area_with_top; 
        } 
    } 
    while (s.empty() == false) 
    { 
        tp = s.top(); 
        s.pop(); 
        area_with_top = arr[tp] * (s.empty() ? i : i - s.top() - 1); 
  
        if (max_area < area_with_top) 
            max_area = area_with_top; 
    } 
    int x = sqrt(max_area);
    return x*x; 
} 