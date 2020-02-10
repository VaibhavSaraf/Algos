#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin>>T;
    
    while (T)
    {
        long long int n;
        cin>>n;
        long long int *arr1 = new long long int [n];
        long long int *arr2 = new long long int [n];
        
        for(long long int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(long long int i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);
        long long int sum = 0;

        for(long long int i = 0;i<n;i++)
        {
            if(arr1[i]>arr2[i])
            {
                sum = sum + arr2[i];
            }
            else
            {
                sum = sum + arr1[i];
            }
        }
        cout<<sum;
        T--;
    }
        
    return 0;
}