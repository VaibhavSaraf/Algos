#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=0;
    while(n)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        flag=0;
        map <char,int> p;
        for(auto c : s1)
        {
            p[c]+=1;
        }

        for(auto c:s2)
        {
            if(p[c]==0)
            {
                flag=1;
            }
            else
            {
                cout<<"YES"<<endl;
                flag=0;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;

        n--;
    }
return 0;
}
