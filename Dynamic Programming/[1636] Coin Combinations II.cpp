#include <bits/stdc++.h>
using namespace std;
 
const int maxarr = 1e6 + 5;
int a[maxarr];
long long dp[maxarr];
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    cin >> n >> x;
    for(int i = 1; i <= n; i++)
     cin >> a[i];
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j = 1; j <= x; j++)
        {
            if(j - a[i] >=0)
            {
              dp[j] += dp[j - a[i]];
              dp[j] %= MOD;
            }
 
        }
    }
    cout<<dp[x] % MOD;
    return 0;
}
