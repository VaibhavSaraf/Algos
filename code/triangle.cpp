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
        if(i!=0)
        {
            for(int k=0;k<z;k++)
            {
                cout<<' ';
            }
            cout<<'*';

            z=z+2;
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
        cout<<"* ";
    cout<<'*';
    cout<<endl;
return 0;
}