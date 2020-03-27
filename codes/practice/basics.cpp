#include <bits/stdc++.h>
// #define ll long long 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define rep(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
/*
    ( a + b ) mod m = ( a mod m + b mod m ) mod m
    ( a − b ) mod m = ( a mod m − b mod m ) mod m
    ( a · b ) mod m = ( a mod m · b mod m ) mod m
*/

//funtion that calculate n factorial modulo m  (n!)%m
ll fact(ll n, ll m)
{
    ll x = 1;
    for (ll i = 2; i < n; i++)
    {
        x = (x * i) % m;
    }
    return x % m;
}

/**
 * if remainder is zero or negative then we can write 
 * x = x%m;
 * if(x<m) x += m
*/
void Rounding_error()
{
    double x = 0.3 * 3 + 0.1;
    cout<<x; // 1
    cout<<endl;
    printf("%.20f",x); // 0.99999999999999988898
}

/**Rounding error

 *  It is risky to compare floating point numbers with the == operator, because it
is possible that the values should be equal but they are not because of precision
errors. A better way to compare floating point numbers is to assume that two
numbers are equal if the difference between them is less than ε , where ε is a
small number.
 *
 */
/*
so number can be compared by following manner
*/
void float_compare(double x, double y)
{
    if(abs(x-y)< 1e-9) //1e-9 = 10^-9
    {
        cout<<"x and y are equal";
    }
    else
    {
        cout<<"x and y are not equal";
    }
    
}


int main()
{

    // cout<<fact(3,4);
    

    return 0;
}