#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    map<string,int> m1;

    string s1[m];
    string s2[n];

    for(int i=0;i<m;i++)
    {
        cin>>s1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>s2[i];
    }
    for(auto x:s1)
    {
        m1[x]+=1;
    }
    for(auto &x : s2)
    {
        if(m1[x]==0)
        {
            cout<<"No";
            return 0;
        }
        else
        {
            m1[x]--;
        }
        
    }
    cout<<"Yes";
return 0;
}