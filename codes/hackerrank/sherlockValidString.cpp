#include <bits/stdc++.h>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;
int main()
{
    fast
        string s;
    cin >> s;

    int cnt[26];

    memset(cnt, 0, sizeof(cnt));

    for (int i = 0; i < s.length(); i++)
    {
        cnt[s[i] - 'a']++;
    }

    sort(cnt, cnt + 26);
    int sum = 0;
    int cnt1[26];
    int j = 0;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            cnt1[j] = cnt[i];
            j++;
        }
    }
    // basically j is now count of non zero element and total characters

    // for(int i=0;i<j;i++) cout<<cnt1[i]<<" ";
    bool flag = true;
    int c = 0;
    for (int i = 1; i < j; i++)
    {
        if (cnt1[0] == 1)
        {
            if (cnt1[i] - cnt1[1] == -1 || cnt1[i] - cnt1[1] == 0 )
                continue;
            else if (cnt1[i] - cnt1[1] >= 1)
            {
                flag = false;
                break;
            }
        }
        else
        {
            if (cnt1[i] - cnt1[0] == 0)
                continue;
            else if (cnt1[i] - cnt1[0] == 1)
            {
                c++;
                if (c > 1)
                    flag = false;
            }
            else
            {
                flag = false;
            }
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}