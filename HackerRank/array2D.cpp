#include<iostream>
using namespace std;
int main()
{
    int a[6][6];

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
            cin>>a[i][j];
    }

    int x=0;
    int sum=0;
    int maxsum=-10000;
    for(int i=0;i<4;i++)
    {
        for(int j=x;j<x+3;j++)
        {
            sum=sum+a[i][j];
            sum=sum+a[i+2][j];
            if(j==x)
                sum=sum+a[i+1][j+1];
        }
        if(sum>maxsum)
            maxsum=sum;
        if(x<3)
            x=x+1;
        else 
            x=0;
        if(x!=0)
            i--;
        
    }
    cout<<sum;
}