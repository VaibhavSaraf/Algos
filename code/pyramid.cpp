#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n][n];

    memset(a,'*',sizeof(a));

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<(n-i+1);j++)
        {
            a[i][j]=' ';
            cout<<" ";
        }
        for(int i=1;i<=n;i++)
        {
            //a[i][k]='*';
            cout<<"*"<<" ";
        }

        cout<<endl;
    }

    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }*/

}