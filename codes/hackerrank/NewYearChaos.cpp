#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
int main()
{
    fast
    int T,n,*arr;
    cin>>T;
    while (T--)
    {
        cin>>n;
        arr = new int [n];
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<i+4 && arr[i]>i-4)
            {
                cout<<"not chaotic"<<endl;
            }
            else
            {
                cout<<"Too chaotic"<<endl;
                break;
            }
            
        }


    }
    
    
    return 0;
}