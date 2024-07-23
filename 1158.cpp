#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("1158.INP", "r", stdin);
    //freopen("1158.OUT", "w", stdout);
}
const int maxarr =1e3 + 1;
int h[maxarr];
int s[maxarr];
int dp[maxarr][100001];
int main()
{
    inoutput();
    int n, x;
    cin >> n >> x;
    for(int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= x; j++)
        {
            if(j - h[i] < 0) dp[i][j] =  dp[i - 1][j];
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - h[i]] + s[i] );
            }
        }
    }
    cout<<dp[n][x];



    return 0;
}