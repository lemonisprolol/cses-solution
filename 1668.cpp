#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // freopen("1668.INP", "r", stdin);
   // freopen("1668.OUT", "w", stdout);
}
const int maxarr = 2 * 1e5 + 5;
vector<int> a[maxarr];
bool check[maxarr];
int ans[maxarr];
bool br;
void bfs(int x)
{
    queue<int> q;
    q.push(x);
    ans[x] = 1;
    while(!q.empty())
    {
        for(auto i: a[q.front()])
        {
            if(ans[i] == ans[q.front()])
            {
                cout<<"IMPOSSIBLE";
                br = true;
                return;
            }
            if(!check[i])
            {
                check[i] = true;
                if(ans[q.front()] == 1) ans[i] = 2;
                else ans[i] = 1;
                q.push(i);
            }
        }
        q.pop();

    }


}
int main()
{
    inoutput();
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i = 1; i <= n; i++)
    {
        if(!check[i])
        {
            bfs(i);
        }
        if(br)
        {
            return 0;
        }
    }
    if(br) return 0;
    
    for(int i = 1; i <= n; i++)
    {
        cout<<ans[i]<<" ";
    }
    




    return 0;
}
