#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p =new int [5];
    for(int i=0;i<5;i++)
        cin>>p[i];
    p++;
    cout<<p[-1];
    // for(int i=0;i<5;i++)
    //     cout<<p[i];
    
    return 0;
}