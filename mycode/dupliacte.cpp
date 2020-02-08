/*Print all duplicate characters in a string*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bysort(string s)
{
    vector<char> p;
    sort(s.begin(),s.end());

    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])
        {
            if(std::find(p.begin(),p.end(),s[i])!=p.end())
                continue;
            else 
                p.push_back(s[i]);
        }
    }
    for(int i=0;i<p.size();i++)
        cout<<p[i]<<endl;
}
void duplicate(string s)
{
    int n=s.length();
    
}
int main()
{
    string s;
    cin>>s;
    bysort(s);
    return 0;
}