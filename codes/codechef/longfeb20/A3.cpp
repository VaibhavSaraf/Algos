#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main()
{
    short int T;
    cin>>T;
    int arr[4][4];
    memset(arr,0,sizeof(arr));
    int n;
    char c;
    int x;
    int ans[T];
    map <char,int> m;
    while(T)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>c;
            cin>>x;
            arr[c-'A'][(x/3)-1] = arr[c-'A'][(x/3)-1] + 1;
        }
        // to print array
        // for(int i=0;i<4;i++)
        // {
        //     for(int j=0;j<4;j++)
        //     {
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        T--;
    }
}