#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T)
    {
        int n,k;
        cin>>n>>k;
        long int *arr = new long int [n];
        long int sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }   
        for(int i=0;i<n;i++)
        {
            sum = sum + arr[i]%k;
        }
        sum = sum % k;
        cout<<sum<<endl;
        T--;
    }
    return 0;
}