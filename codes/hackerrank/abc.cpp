#include <bits/stdc++.h>
using namespace std;

string fun(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            s[i] = s[i+1] = '\0';
        }
    }
    string t;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '\0')
        {
            t = t + s[i];
        }
    }
    return t;
}

int main()
{
    string t;
    cin >> t;
    string s[101];

    for (int i = 0; i < t.length()+1; i++)
    {
        if (t[0] != '\0')
            t = fun(t);
        else
        {
            break;
        }
    }
    if (t[0] != '\0')
    {
        cout << t;
    }
    else
    {
        cout << "Empty String" << endl;
    }

    return 0;
}
