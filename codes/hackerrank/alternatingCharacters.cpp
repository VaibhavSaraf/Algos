#include <bits/stdc++.h>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;
int main()
{
    fast int T;
    cin >> T;
    int count = 0;
    string s;
    while (T--)
    {
        count = 0;
        cin >> s;
        bool flag = false;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=s[i+1])
            {
                flag=false;
                count++;
            }
            else
            {
                flag=true;
            }
            
        }
        if(flag)
        {
            cout<<s.length()-1<<endl;
        }
        else
        {
            cout<<s.length()-count<<endl;    
        }       
    }
    return 0;
}