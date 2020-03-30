#include <bits/stdc++.h>
#define ll int
#define MAX 200000
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);
#define db(l) cout<<"="<<l<<endl;
using namespace std;
int arr[MAX];

int partitions(int low,int high)
{
    int p=low,r=high, x = arr[r],i=p-1;
    for(int j=p;j<=r-1;j++)
    {
        if(arr[j]<=x)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}

int selection_algo(int left,int right, int kth)
{
    for(;;)
    {
        int pivotIndex = partitions(left,right);
        int len = pivotIndex-left+1;
        if(kth==len)
            return arr[pivotIndex];
        else if(kth<len)
            right = pivotIndex - 1;

        else
        {
            kth = kth - len;
            left = pivotIndex + 1;
        }
    }
}


int main()
{
    fast
    int n,d;
    cin>>n>>d;
    int arr1[MAX];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    int count = 0;
    int x = 0;
    while(x<n-d)
    {
        if(d%2==1)
        {
            int median = selection_algo(x+1,d+x,d/2);
            if(arr1[d+x]>=2*median)
                count++;
            // cout<<x<<" "<<median<<"->"<<arr1[d+x]<<endl;
        }
        else
        {
            int median = selection_algo(x+1,d+x,d/2) + selection_algo(x+1,d+x,d/2 - 1) ;
            // cout<<x<<" "<<median<<"->"<<arr1[d+x]<<endl;
            if(arr1[d+x]>=median)
                count++;
        }
        x++;
    }

    cout<<count;
    return 0;
}