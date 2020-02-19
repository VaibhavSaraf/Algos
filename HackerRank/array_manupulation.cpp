#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m;
    cin>>n>>m;
    long int *a=new long int[n+1]();
    long int l,r,sum;
    /*while(m--)
    {
        cin>>l>>r>>sum;
        for(long int i=l-1;i<r;i++)
        {
            a[i]=a[i]+sum;
        }
    }
    long int max=0;
    for(long int i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];

    }
    cout<<max;*/
    for(int j=0;j<m;j++)
    {
        cin>>l>>r>>sum;
        a[l]=a[l]+sum;
        if((r+1)<=n)
            a[r+1]=a[r+1]-sum;
    }
    long long int max=0,x=0;
    for(int i=1;i<=n;i++)
    {
        x=x+a[i];
        if(max<x)
            max=x;
    }
    cout<<max;
    return 0;
}
