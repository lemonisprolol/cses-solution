#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("1666.INP", "r", stdin);
    //freopen("1666.OUT", "w", stdout);
}
const int maxarr = 2 * 1e5 + 5;
vector<int> a[maxarr];
bool check[maxarr];
void dfs(int x)
{
    if(check[x]) return;

    check[x] = true;
    for(auto i: a[x])
    {
        if(!check[i]) dfs(i);
    }
}
int main()
{
    inoutput();
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
   // cout<<"hi"<<endl;
    vector<int> v;
    for(int i = 1; i <= n; i++)
    {
        if(!check[i])
        {
            v.push_back(i);
            dfs(i);


        }
    }
    cout<<v.size() - 1<<endl;
    for(int i = 1; i < v.size(); i++)
    {
        cout<<v[i]<<" "<<v[i - 1]<<endl;
    }

    

    return 0;
}
