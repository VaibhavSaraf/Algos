#include <bits/stdc++.h>
#define ll int
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);
#define db(l) cout<<"="<<l<<endl;
using namespace std;
ll avg(ll x,ll y)
{
    ll ans = (x+y) / 2;
    return ans;
}

ll fun(ll *arr,ll start,ll end)
{
    ll median;
    ll n = end-start;
    // db(n) //1
    ll *arr1 = new ll [n];
    // db //2
    for(ll i=start-1,j=0;i<end,j<n;i++,j++)
    {
        arr1[j] = arr[i];
    }
    // for(ll i=0;i<n;i++) cout<<arr1[i]<<" ";
    // db //3

    sort(arr1,arr1+n);

    // db(4) //4

    // for(ll i=0;i<n;i++) cout<<arr1[i]<<" ";
    

    // cout<<"size of array : "<<n<<endl;

    if(n%2)
    {
        median = 2 * arr1[n/2];
        // cout<<"median1 : "<<median<<endl;
    }
    else
    {
        n=n/2;
        median = arr1[n-1] + arr1[n];
        // cout<<"median2 : "<<median<<endl;
    }
    // db //5    
    return median;
}


ll notification()
{
    ll n,d;
    cin>>n>>d;
    // cout<<n<<" "<<d<<endl;
    ll *arr = new ll [n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // db //0
    int x = 1;
    ll count=0;
    while((x+d)!=n+1)
    {
        if(arr[d+x-1]>=fun(arr,x,d+x))
        {
            count++;
        }
        // cout<<fun(arr,x,d+x)<<"->"<<arr[d+x-1]<<endl;
        x++;
    }
    return count;
}

int main()
{
    fast
    cout<<notification()<<endl;
    return 0;
}