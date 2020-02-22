#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
int main()
{
    fast
    string s;
    bool flag = false;
    cin>>s;
    map<char,int> m;
    for(char x : s)
    {
        m[x]++;
    }
    auto i = m.begin();
    int n = i->second;
    int *arr = new int [s.length()];
    for(auto x : m)
    {
        
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    
    return 0;
}