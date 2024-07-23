#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("1633.INP", "r", stdin);
    //freopen("1633.OUT", "w", stdout);
}
const int maxarr = 1e6 + 5;
const int MOD = 1e9 + 7;
long long dp[maxarr];
int main()
{
    inoutput();
    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 8;
    dp[5] = 16;
    dp[6] = 32;

    for(int i = 7; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4] + dp[i - 5] + dp[i - 6]) % MOD;
    }

    cout<<dp[n] % MOD;

    return 0;
}