#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  //  freopen("1634.INP", "r", stdin);
   // freopen("1634.OUT", "w", stdout);
}
const int maxN = 1e2 + 5;
int a[maxN];
const int maxarr = 1e6 + 5;
int dp[maxarr];
int main()
{
    inoutput();
    int n, x;
    cin >> n >> x;
    
    for(int i = 1; i <= maxarr; i++)
    {
        dp[i] = INT_MAX;
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[a[i]] = 1;
    }

    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(dp[max(1, i - a[j])] == INT_MAX) continue;
            dp[i] = min(dp[max(1, i - a[j])] + 1, dp[i]);
            
        }
    }
    if(dp[x] > 0 && dp[x] != INT_MAX) cout<<dp[x];
    else cout<<-1;
 

    



    return 0;
}