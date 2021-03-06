#include <bits/stdc++.h>
#define MAX 500
#define ll long long
#define N 20
using namespace std;

long long factorial(long long n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

ll fun(ll k)
{
    ll ans;
    ans = factorial(2 * k);
    ll j = factorial(k);
    ll l = factorial(k + 1);
    ans = ans / l;
    ans = ans / j;
    return ans;
}
ll determinant( ll matrix[20][20], ll n) {   
    if(n==1)
    {
        return 1;
    }
   ll det = 0;
   ll submatrix[20][20];
   if (n == 2)
      return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
   else {
      for (ll x = 0; x < n; x++) {
            ll subi = 0; 
            for (ll i = 1; i < n; i++) {
               ll subj = 0;
               for (ll j = 0; j < n; j++) {
                  if (j == x)
                  continue;
                  submatrix[subi][subj] = matrix[i][j];
                  subj++;
               }
               subi++;
            }
            det = det + (pow(-1, x) * matrix[0][x] * determinant( submatrix, n - 1 ));
      }
   }
   return det;
}
int main()
{
    ll T, n;
    ll mat[N][N];
    cin >> T;
    // cout<<factorial(34)<<endl;
    // cout<<fun(T);
    while (T--)
    {
        memset(mat,0,sizeof(mat));
        cin >> n;
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                ll k = i + j - 1;
                // cout<<k<<" "<<fun(k)<<endl;
                mat[i-1][j-1] = fun(k);
            }
        }
        cout<<determinant(mat,n);
    }
    return 0;
}