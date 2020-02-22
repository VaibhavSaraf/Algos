#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int count;
    map<char,int> m1;
    for(char x : s1)
        m1[x]++;
    for(char x : s2)
        m1[x]--;

    int sum = 0;

    for(int i = 'a';i<='z';i++)
    {
        // cout<<char(i)<<m1[i]<<" ";
        if(m1[i]>0)
        {
            sum = sum + m1[i];
        }
        else
        {
            sum = sum - m1[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}
