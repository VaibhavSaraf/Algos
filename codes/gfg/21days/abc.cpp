#include <iostream>
#define ll unsigned long long int 
using namespace std;
int main()
{
    ll T;
    cin >> T;
    ll m, n,temp;
    ll count1=0,count2=0;
    ll ans = 0;
    while (T--)
    {
        cin >> m >> n;
        temp = n;
        ans = m + n;
        while(ans)
        {
            ans = ans / 10;
            count1++;
            
        }
        while(temp)
        {
            temp = temp/10;
            count2 ++;
        }
        if(count2==count1)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<m+n<<endl;
        }
    }
    return 0;
}