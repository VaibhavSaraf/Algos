/*One Away: There are three types of edits that can be performed on strings: insert a character,
remove a character, or replace a character. Given two strings, write a function to check if they are
one edit (or zero edits) away.*/

#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    string s1,s2;
    int count = 0;
    cin>>s1;
    cin>>s2;
    int n;
    if(s1.length()>s2.length())
    {
        n = s1.length();
    }
        else
        {
            n = s2.length();
        }
    if(s1==s2)
    {
        cout<<"No Operation perform"<<endl;
    }
    if(s1.length()!=s2.length())
    {
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            if(s1[i]==s2[i])
            {
                continue;
            }
            else
            {
                if(flag==false)
                {
                    flag = true;
                }
                else
                {
                    cout<<"Invalid"<<endl;
                    break;
                }
                
            }    
        }
        if(flag)
        {
            cout<<"Remove Character"<<endl;
        }
        else
        {
            cout<<"Insert Character"<<endl;
        }
               
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(s1[i]==s2[i])
            {
                
            }
        }
    }
    

    return 0;
}