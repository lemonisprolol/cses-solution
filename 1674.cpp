#include <bits/stdc++.h>
 
using namespace std;
 
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
}
 
const int maxarr = 2 * 1e5 + 5;
vector<int> a[maxarr];
int ans[maxarr];
void dfs(int u, int o)
{
    ans[u] = 1;
    for(auto i : a[u])
    {
        if(i != o)
        {
            dfs(i, u);
            ans[u] += ans[i]; 
 
        }
 
    }
 
}
int main()
{
    inoutput();
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        int t;
        cin >> t;
        a[t].push_back(i);
    }
    dfs(1, 0);
    for(int i = 1; i <= n; i++)
    {
        cout<<ans[i] - 1<<" ";
    }
 
    return 0;
}
