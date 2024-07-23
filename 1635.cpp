#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("1635.INP", "r", stdin);
    //freopen("1635.OUT", "w", stdout);
}
const int MOD = 1e9 + 7;
const int maxN = 1e2 +5;
const int maxarr = 1e6 + 5;
int a[maxN];
int dp[maxarr];
int main()
{
    inoutput();
    int n, x;
    cin >> n >> x;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[a[i]] = 1;
    }
    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            dp[i] = (dp[i] +  dp[max(0, i - a[j])]) % MOD ;
        }
    }
    cout<<dp[x];


    return 0;
}