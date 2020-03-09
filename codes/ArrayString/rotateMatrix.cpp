#include <bits/stdc++.h>
#define fast sync_with_stdio(0); cin.tie(NULL);
using namespace std;
int main()
{
    fast
    int n,a;cin>>n;
    
    int arr[n][n],arr1[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr1[i][j]=arr[n-1-j][i];
        }
    }
    
    cout<<endl;


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
