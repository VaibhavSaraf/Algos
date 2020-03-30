#include <bits/stdc++.h>
#define MAX 200000
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define db(l) cout << "=" << l << endl;
using namespace std;

float Median(vector<int> &a, int n) 
{ 
    // The output array b[] will 
    // have sorted array 
    int b[n]; 
  
    // variable to store max of 
    // input array which will  
    // to have size of count array 
    int max = *max_element(a.begin(), a.end()); 
  
    // auxiliary(count) array to  
    // store count. Initialize 
    // count array as 0. Size 
    // of count array will be 
    // equal to (max + 1). 
    int t = max + 1; 
    int count[t]; 
    for (int i = 0; i < t; i++) 
        count[i] = 0;     
  
    // Store count of each element 
    // of input array 
    for (int i = 0; i < n; i++) 
        count[a[i]]++;     
  
    // Update count[] array with sum 
    for (int i = 1; i < t; i++) 
        count[i] = count[i] + count[i-1]; 
  
    // Sorted output array b[] 
    // to calculate median 
    for (int i = 0; i < n; i++) 
    { 
        b[count[a[i]]-1] = a[i]; 
        count[a[i]]--; 
    } 
      
    // Median according to odd and even  
    // array size respectively.
    float median; 
    if (n % 2 != 0) 
        median = b[n/2]; 
    else
        median = (b[(n-1)/2] + b[(n/2)])/2.0; 
      
    // Output the result  
    return 2*median;
} 

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int mm(vector <int> &v)
{
    int m = v.size();
    size_t n = v.size()/2;
    nth_element(v.begin(),v.begin()+n,v.end());
    if(m%2)
        return 2*v[n];
    else
    {
        return v[n-1]+v[n];
    }   
}

int main()
{
    fast 
    int n, d;
    cin >> n >> d;
    vector<int> v(n),tmp;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i] = x;
    }

    // cout<<mm(v)<<endl;
    int y = 0;
    int count=0;
    while(y<n-d)
    {
        tmp = vector<int>(v.begin()+y,v.begin()+d+y);
        if(v[d+y]>=mm(tmp))
        {
            count++;
        }
        // cout<<v[d+y]<<"->"<<mm(tmp)<<endl;
        y++;
    }
    cout<<count<<endl;
    return 0;
}