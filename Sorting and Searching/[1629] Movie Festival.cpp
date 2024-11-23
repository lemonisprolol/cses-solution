#include <bits/stdc++.h>
using namespace std;
 
vector<pair<int, int>> a;
 
bool cmp(pair<int, int> x, pair <int, int> y)
{
  return x.second < y.second;
}
int main()
{
    int n;
    cin >> n;
    a.push_back({0, 0});
    for(int i = 1; i <= n; i++)
    {
      int u, v;
      cin >>u >> v;
      a.push_back({u, v});
    }
    sort(a.begin(), a.end(), cmp);
    int fi = 0;
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
      if(a[i].first >= a[fi].second )
      {
        ans++;
        fi = i;
      }
    }
    cout<<ans;
    return 0;
}
