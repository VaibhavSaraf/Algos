#include <bits/stdc++.h>
using namespace std;
bool backspaceCompare(string S, string T)
{
    string sa,ta;
    stack <int> s,t;
    for(int i=0;i<S.length();i++)
    {
        if(S[i]!='#')
        {
            s.push(S[i]);
        }
        else
        {
            if(s.empty())
            {
                continue;
            }
            else
            {
                s.pop();
            }
        }
    }
    for(int i=0;i<T.length();i++)
    {
        if(T[i]!='#')
        {
            t.push(T[i]);
        }
        else
        {
            if(t.empty())
            {
                continue;
            }
            else
            {
                t.pop();
            }
        }
    }
    // cout<<"s-----------------------"<<endl;
    while(!s.empty())
    {
        sa.push_back(s.top());
        // cout<<char(s.top());
        s.pop();
    }
    // cout<<"t-----------------------"<<endl;
    while(!t.empty())
    {
        ta.push_back(t.top());
        // cout<<char(t.top());
        t.pop();
    }
    if(ta==sa)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    cout<<backspaceCompare(s, t)<<endl;
    return 0;
}