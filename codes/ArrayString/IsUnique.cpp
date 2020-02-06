#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;

void usingMap(string s)
{
    map<char, int> n;
    for (char c : s)
    {
        n[c]++;
    }
    bool flag;
    for (char c : s)
    {
        if (n[c] > 1)
        {
            flag = false;
            break;
        }
        else
        {
            flag = true;
        }
    }
    if (flag == false)
    {
        cout << "string is not unique" << endl;
    }
    else
    {
        cout << "string is unique" << endl;
    }
}

void BySort(string s)
{
    bool flag;
    sort(s.begin(),s.end()); //sort the array in O(NlogN)
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])
        {
            flag=true;
            break;
        }
        else
            flag = false; 
    }
    if(flag)
        cout<<"string is not unique"<<endl;
    
    else
        cout << "string is unique" << endl;    
}

bool magic(string s)
{
    bool arr[128];
    memset(arr,false,sizeof(arr));
    if(s.length()>128) return false;
    for (char c : s)
    {
        if(arr[int(c)])
        {
            return false;
        }
        arr[int(c)]=true;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    // usingMap(s); // O(N)
    // BySort(s); // O(NlogN)
    // but we have to determine without using extra data struture and in runtime O(N)
    // ........ 
    if (magic(s))
    {
        cout << "string is unique" << endl;    
    }
    else
    {
        cout<<"string is not unique"<<endl;
    }
    // this gives runtime O(1) or say O(c) which is constant
    
    return 0;
}