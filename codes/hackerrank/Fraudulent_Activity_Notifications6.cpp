//refer https://www.geeksforgeeks.org/ordered-set-gnu-c-pbds/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fast  ios_base::sync_with_stdio(0);cin.tie(NULL);
#define db(l) cout << "=" << l << endl;
using namespace std;
using namespace __gnu_pbds;
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int main()
{
    int n,d;
    cin>>n>>d;
    vector <int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ordered_set s;
    int start = 0;
    float median;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s.size()==d)
        {
            if(d%2==0)
            {
                int a,b;
                a = (*s.find_by_order((s.size()/2)-1)).first;
                b = (*s.find_by_order((s.size()/2))).first;
                median = (a + b) / float(2);
            }
            else
            {
                median = (*s.find_by_order((s.size()/2))).first;
            }
            if(v[i]>=2*median)
                count++;
            s.erase(s.find({v[start],start}));
            start++;
        }
        s.insert({v[i],i});
    }
    cout<<count<<"\n";
    return 0;
}