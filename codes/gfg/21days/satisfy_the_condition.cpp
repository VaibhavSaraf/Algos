#include <iostream>
#define ll unsigned long long int
using namespace std;

ll power(ll x, ll y) 
{ 
    ll res = 1;
  
    while (y > 0) { 
        if (y & 1) 
            res = res * x; 
        y = y >> 1; 
        x = x * x;
    } 
    return res; 
} 


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        
    }
    return 0;
}