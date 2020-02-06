/* Extracting int from string */

#include<iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    vector<int> p;
    string s = "vaibhav163";
    int n = s.size();
    for (int i=0;i<n;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            p.push_back(s[i]-'0');
        }
    }
    int m = p.size();
    int ans = 0;
    for(int x : p)
    {
        if(m>0)
        {
            ans = ans + x * pow(10,m-1);
            m--;
        }
    }
    cout<< ans;
    cout<<endl;
    return 0;
}