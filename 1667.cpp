#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // freopen("1667.INP", "r", stdin);
    //freopen("1667.OUT", "w", stdout);
}
const int maxarr = 2 * 1e5 + 5;
vector<int> a[maxarr];
bool check[maxarr];
int n, m;
int ct[maxarr];
int lb[maxarr];


void bfs()
{
    queue<int> q;
    check[1] = true;
    q.push(1);
    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        for(auto i: a[temp])
        {
            
            

            if(!check[i])
            {
                lb[i] = temp;

                ct[i] = ct[temp] + 1;
                check[i] = true;
                q.push(i);

            }
        }

    }


}
int main()
{
    inoutput();
    cin >> n >> m;
    ct[1] = 1;
    for(int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    bfs();
    int b = n;
    vector<int> ans;
    lb[1] = -1;
    if(ct[n] == 0)
    {
        cout<<"IMPOSSIBLE";
        return 0;
    }
    cout<<ct[n]<<endl;

    ans.push_back(n);

    while(lb[b] != -1)
    {
        b = lb[b];
        ans.push_back(b);
    }
    for(int i = ans.size() - 1; i >= 0; i--)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
