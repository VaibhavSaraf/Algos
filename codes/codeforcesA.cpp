#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        int *arr = new int [n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum = arr[i]+sum;
        }
        if(sum%2==0 && arr[n-1]%2==1)
        {
            for(int i=0;i<n;i++)
            {
                cout<<arr[i];
            }
        }
        
        
        
        t--;
    }
}