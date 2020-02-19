#include <bits/stdc++.h>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;
void swapy(int *arr, int i, int j)
{
}
int main()
{
    fast int T, n, *arr;
    cin >> T;
    while (T--)
    {
        bool flag = false;
        int ans = 0;
        cin >> n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if(arr[i] - (i+1) > 2)
            {
                flag = true;
                break;
            }
            for(int j=max(0,arr[i]-2);j<i;j++)
            {
                if(arr[j]>arr[i])
                {
                    ans++;
                }
            }
        }
        if (flag)
            cout << "Too chaotic" << endl;
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}