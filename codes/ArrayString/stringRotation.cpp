#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;


bool isSubstring(string s1,string s2)
{
    // if(s1.length()!=s2.length())
    //     return false;

    pair<char,int> m1,m2;

    for(int i=0;i<s1.length();i++)
    {
        m1.first=s1[i];
        m1.second=i;
    }
    for(int i=0;i<s2.length();i++)
    {
        m2.first=s1[i];
        m2.second=i;
    }

    

}


int main()
{
    fast
    string s1,s2;
    cin>>s1>>s2;

    // isSubstring(s1,s2);

    if(isSubstring(s1,s2))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    


    
    return 0;
}