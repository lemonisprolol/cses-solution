#include <bits/stdc++.h>
using namespace std;
 
 
const int maxarr = 2 * 1e5 + 5;
vector<int> adj[maxarr];
bool ch[maxarr];
int ans = 0;
void dfs(int u, int o)
{
  for(auto i : adj[u])
  {
    if(i != o)
    {
      dfs(i, u);
      if(!ch[i] && !ch[u])
      {
        ans++;
        ch[i] = true;
        ch[u] = true;
        
      }
      
    }
  }
}
int main() 
{
    int n;
    cin >> n;
    for(int i = 1; i <= n - 1; i++)
    {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    dfs(1, 0);
    cout<<ans;
  
    return 0;
}
