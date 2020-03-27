#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
ll expo(ll base, ll exponent, ll mod)
{
    //return base^exponent modulo modulus
    ll ans = 1;
    while (exponent != 0)
    {
        if ((exponent & 1) == 1)
        {
            ans = ans * base;
            ans = ans % mod;
        }
        base = base * base;
        base %= mod;
        exponent >>= 1;
    }
    return ans % mod;
}
void solve()
{
    ll a, b, p, x, ans = 0;
    cin >> a >> b >> p >> x;
    rep(i, 1, min(p, x + 1))
    {
        ll c = expo(a, i, p);
        ll cc = (b * expo(c, p - 2, p)) % p;
        ll y = (i - cc) % p;
        ll mx = max(0LL, (x - i) / (p - 1));
        if (y < 0)
            y += p;
        if (y > mx)
            continue;
        ans = ans + max(0LL, 1 + (mx - y) / p);
    }
    cout << ans;
}

int main()
{
    fast int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}