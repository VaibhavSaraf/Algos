#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
int main()
{
    fast
    int T,n,*arr;
    bool *num;
    cin>>T;
    while (T--)
    {
        bool flag = false;
        cin>>n;
        arr = new int [n];
        num = new bool [n];
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];
            num[i]=false;
        }
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>i+3 || arr[i]<i-3)
            {
                flag = true;
                break;
            }
            else
            {
                if(arr[i]==i+1)
                {
                    num[i]=true;
                    continue;
                }
                if(arr[arr[i]-1]!=i-1 && num[i]==false)
                {
                    num[i]=true;
                    count++;
                }
            }
        }
        if(flag==true)
        {
            cout<<"Too chaotic"<<endl;
        }
        else
        {
            cout<<count-1<<endl;
        }

    }
    
    return 0;
}