#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef long long ll;
using namespace std;

using namespace __gnu_pbds;
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ordered_set s;
    ll start = 0; //start index for sliding window of length d
    float med = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.size() == k)
        {
            if (k % 2 == 0)
            {
                ll a = (*s.find_by_order((s.size() / 2) - 1)).first; // find kth greatest element from the set
                                                                     //read about pdbs(policy based data structure from geeks)
                ll b = (*s.find_by_order((s.size() / 2))).first;
                med = (a + b) / (float)2;
            }
            else
            {
                med = (*s.find_by_order((s.size() / 2))).first;
            }

            if (v[i] >= med * 2)
                ans++;
            s.erase(s.find({v[start], start}));
            start++;
        }
        s.insert({v[i], i});
    }
    cout << ans << "\n";
}