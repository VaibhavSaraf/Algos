#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum=sum+a[0][i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[n-1][i];
    }

    for(int i=1;i<n-1;i++)
    {
        for(int j=n-1;j>=1;j--)
        {
            if(i+j==n-1)
            {
                sum = sum + a[i][j];
                cout<<"i"<<i<<"j"<<j<<"a"<<a[i][j]<<endl;
            }
        }
    }
    cout<<sum;
}