#include <bits/stdc++.h>
#define MAX 200000
#define fast  ios_base::sync_with_stdio(0);cin.tie(NULL);
#define db(l) cout << "=" << l << endl;
using namespace std;

float get_median(int *arr,int d,int median_position)
{
    int ans = 0,counter=0,left=0;

    while(counter<median_position)
    {
        counter = counter + arr[left];
        left++;
    }
    int right = left;
    left--;
    if(counter>median_position || d%2!=0)
    {
        return 2*left;
    }
    else
    {
        while (arr[right]==0)
        {
            right++;
        }
        return (left+right);
    }
}


int main()
{
    fast 
    int n, d;
    cin >> n >> d;
    int arr[n];
    int freq[201];
    int count = 0;
    memset(freq,0,sizeof(freq));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<d;i++)
    {
        freq[arr[i]]++;
    }
    int median_position;
    if(d%2)
    {
        median_position = d/2;
    }
    else
    {
        median_position = d/2 + 1;
    }

    // db(median_position) //1

    int tem = d;
    int current = 0;
    while(tem<n)
    {
        float median = get_median(freq,d,median_position);
        if(arr[tem]>=median)
        {
            count++;
        }
        freq[arr[current]]--;
        freq[arr[tem]]++;
        current++;
        tem++;
    }
    
    cout<<count<<endl;    


    
    return 0;
}