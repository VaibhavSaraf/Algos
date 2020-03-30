#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;     //input
    stack<int> v; //stack
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0 || v.empty()) // first element insert hardcoded
        {
            v.push(s[i]);
        }
        else
        {
            if (v.top() != s[i])
            {
                v.push(s[i]);
            }
            else
            {
                v.pop();
            }
        }
    }
    string t; // answer string
    int i = 0;
    while (!v.empty())
    {
        t = t + char(v.top()); // added one by one element
        v.pop();
        i++;
    }
    reverse(t.begin(), t.end()); // reverse it

    if (t[0] != '\0') //chech first element with null
    {
        cout << t;
    }
    else
    {
        cout << "Empty String" << endl;
    }

    return 0;
}
