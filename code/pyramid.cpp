#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int z=1;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<' ';
        }
        cout<<"*";
        cout<<" ";
        if(i!=0)
        {
            for(int k=0;k<z-1;k++)
            {
                cout<<'*';
                cout<<' ';
            }
            cout<<'*';

            z=z+1;
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
        cout<<"* ";
    cout<<'*';
    cout<<endl;
return 0;
}