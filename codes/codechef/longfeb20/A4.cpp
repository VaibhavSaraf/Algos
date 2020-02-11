#include <iostream>
#include <algorithm>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);

using namespace std;

int main()
{
    fast 
    int T;
    cin >> T;
    int n, p, *arr;
    string yes, no;
    yes = "YES";
    no = "NO";
    while (T--)
    {
        cin >> n >> p;
        arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int x = 0;
        for(int i=0;i<n;i++)
        {
            if(p%arr[i]!=0)
            {
                int j = 0;
                while (true)
                {
                    x = x + arr[i]*j;
                    j++;
                    if(x>p && x-arr[i]!=p)
                    {
                        cout<<yes<<endl;
                        break;
                    }
                    
                }
            }
            else
            {
                int a1 = p/arr[i] - 1;
            }
            
        }
        
    }

    return 0;
}