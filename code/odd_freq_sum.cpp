#include<iostream>
#include<map>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int a[m];

    for(int i=0;i<m;i++)
        cin>>a[i];

    map<int,int> n;
    for(int i=0;i<m;i++)
        n[a[i]]++;

    int sum=0;
    map<int,int>:: iterator itr;

    for(itr=n.begin();itr!=n.end();itr++)
    {
        if(itr->second %2 !=0)
            sum = sum + (itr->first) * (itr->second);
    }
    cout<<sum;

}