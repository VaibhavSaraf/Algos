#include <bits/stdc++.h>
using namespace std;
bool backspaceCompare(string S, string T)
{
    stack<int> s;
    stack<int> t;
    for (int i = 0; i < S.length(); i++)
    {

        if (S[i] == '#')
        {
            if (s.empty())
            {
                continue;
            }
            else
            {
                s.pop();
            }
        }
        else
        {
            s.push(S[i]);
        }
    }
    for (int i = 0; i < T.length(); i++)
    {
        if (T[i] == '#')
        {
            if (t.empty())
            {
                continue;
            }
            else
            {
                t.pop();
            }
        }
        else
        {
            t.push(S[i]);
        }
    }

    cout<<"s"<<endl;
    while(s.empty()==false)
    {
        cout<<"->"<<char(s.top())<<endl;
        s.pop();
    }
    cout<<"t"<<endl;
    while(t.empty()==false)
    {
        cout<<"->"<<char(t.top())<<endl;
        t.pop();
    }


    bool flag = true;
    if (s.size() != t.size())
    {
        flag = false;
        return flag;
    }
    while (s.empty() == false)
    {
        if (s.top() == t.top())
        {
            s.pop();
            t.pop();
        }
        else
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    cout<<backspaceCompare(s,t)<<endl;
    return 0;
}