#include <iostream>
#include <cstring>
#include <algorithm>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main()
{
    fast 
    int T,n,k,ans1,x,ii = 0;
    cin>>T;
    char c;
    k = T;
    int arr[4][4];
    memset(arr,0,sizeof(arr));
    ans1=0;
    int *ans = new int [T];
    memset(ans,0,sizeof(ans));

    while(T)
    {
        memset(arr,0,sizeof(arr));
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>c;
            cin>>x;
            arr[c-'A'][(x/3)-1] = arr[c-'A'][(x/3)-1] + 1;
        }

        int max = -1;
        int result[4];
        memset(result,0,sizeof(result));
        int i=0;
        int cnt0 = 0;
        while(i<4)
        {
            for(int j=0;j<4;j++)
            {
                if(arr[i][j]>max)
                {
                    max = arr[i][j];
                }
            }
            result[i] = max;
            max = -1;
            i++;
        }
        sort(result,result+4);
        for(int i=0;i<4;i++)
        {
            if(result[i] == 0)
            {
                cnt0++;
            }
        }
        int anss = 0;
        for(int i=0;i<4;i++)
        {
            anss = anss + 25*(i+1)*result[i];
        }
        
        anss = anss - cnt0 * 100;
        // cout << anss;
        ans[T] = anss;
        // cout<<endl<<T<<endl;
        T--;
    }

    for(int i=k;i>0;i--)
    {
        cout<<ans[i]<<endl;
        ans1 = ans[i] + ans1;
    }
    cout << ans1;
    return 0;
}