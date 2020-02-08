/* Check order of one string is as same as another string*/

#include<iostream>
#include<vector>
using namespace std;
string rotatebyone(string s)
{
    char temp=s[0];
    for(int i=0;i<s.length();i++)
    {
        s[i]=s[i+1];
    }
    s[s.length()-1]=temp;

    return s;
}

void check(string s1,string s2)
{
    if(s1.length()!=s2.length())
        return;

    char key=s1[0];
    vector<int> p;

    for(int i=0;i<s2.length();i++)
    {
        if(key==s2[i])
        {
            p.push_back(i);
        }
    }
int flag=0;
    for(int i=0;i<p.size();i++)
    {
        string c=s2;
        for(int j=0;j<p[i];j++)
        {
            c=rotatebyone(c);
        }
        if(c==s1)
        {
            cout<<"YES"<<endl;
            return;
        }
        else
            flag=1;
    }

    if(flag==1)
        cout<<"NO"<<endl;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    check(s1,s2);

    return 0;
}