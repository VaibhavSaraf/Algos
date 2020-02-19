#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int b=a[i];
                a[i]=a[j];
                a[j]=b;
                count++;
            }
        }
    }
    cout<<"Array is sorted in "<<count<<" swaps"<<endl;
    cout<<"First element: "<<a[0]<<endl;
    cout<<"Last element: "<<a[n-1]<<endl;

    
}