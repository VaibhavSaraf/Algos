#include <iostream>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
int main()
{
    fast 
    int T;
    cin>>T;
    while (T--)
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
    }
    return 0;
}