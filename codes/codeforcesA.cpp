#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n,k;
        cin>>n; cin>>k;
        int *arr = new int arr[n];
        for(int i=n;i>0;i++)
        {
            arr[i] = k/(10*i);
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
        else
        {
            cout<<"ajun nahi lihila"<<endl;
        }
        t--;
    }
}