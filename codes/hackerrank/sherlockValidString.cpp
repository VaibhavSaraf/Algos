#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
int main()
{
    fast
    string s; cin >> s;

    int cnt[26];
    

    
    memset(cnt,0,sizeof(cnt));

    for(int i=0;i<s.length();i++)
    {
        cnt[s[i]-'a']++;
    }
    
    for(int i=0;i<26;i++)
    {
        if(i>=0 && cnt[i]==0)
        {
            continue;
        }

        if(i>=0)
        {
            cnt[i]--;
        }

        set <int> s;

    }


    set<int> s;

    return 0;
}