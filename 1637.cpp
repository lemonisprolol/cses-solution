#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("1637.INP", "r", stdin);
    //freopen("1637.OUT", "w", stdout);
}
const int maxarr = 1e6 + 5;
long long dp[maxarr];
int main()
{
    inoutput();
    int n;
    cin >> n;
    for(int i = 1; i <= 9; i++)
    {
        dp[i] = 1;
    }
    for(int i = 10; i <= maxarr; i++)
    {
        int temp = i;
        dp[i] = INT_MAX;
        while(temp > 0)
        {
            dp[i] = min(dp[i], dp[i - temp % 10] + 1);
            temp /= 10;
        }
    }
    cout<<dp[n];

    return 0;
}