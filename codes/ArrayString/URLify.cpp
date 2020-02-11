#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cin.ignore(0);
    int i=0;
    string ans;
    int n = s.length();
    int space_cnt=0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]!=' ')
        {
            ans[i] = s[i];
        }
        else
        {
            /* code */
        }
        
    }



    cout<<s;
    
    return 0;
}