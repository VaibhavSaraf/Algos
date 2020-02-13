#include <iostream>
#include <cstring>
#include <map>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
int main()
{
    fast
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    map<char, int> m;
    for (char c : s)
    {
        m[c]++;
    }

    if (s.length() % 2 == 0)
    {
        bool flag = false;
        for (char c : s)
        {
            if (m[c] % 2 == 0)
            {
                flag = true;
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        bool flag = false;
        bool flag1 = false;
        int count = 0;
        for(char c : s)
        {
            if(m[c]%2==0)
            {
                flag = true;
            }
            else
            {
                count ++;
                flag1 = true;
            }
            
        }
        if(flag && flag1 && count == 1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        

    }

    return 0;
}