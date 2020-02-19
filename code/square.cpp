#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++)
        cout<<"* ";
    cout<<endl;
    int m=n-2;
    while(m--)
    {
    for(int i=0;i<=n;i++)
    {
        if(i==0) 
        {
            cout<<"* ";
        }
        if(i==n)
            cout<<" *";
       cout<<" ";
    }
    cout<<endl;
    }
    for(int i=0;i<n;i++)
        cout<<"* ";
    cout<<endl;

}