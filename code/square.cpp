#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<n+1;i++)
    {
        if(i%n==0)
        {
            i=1;
            cout<<"*";
            cout<<endl;
            count++;
            
            if(count==n)
                return 0;
        }
        cout<<"*"<<" ";
    }
}