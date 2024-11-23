#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
vector<pair<int,int>> a;
 
signed main()
{
  int n;
  cin >> n;
  
  for(int i = 1; i <= n; i++)
  {
    int u, v;
    cin >>u >> v;
    a.push_back({u, v});
  }
  sort(a.begin(), a.end());
  
  int days = 0;
  int ans = 0;
  
  for(int i = 0; i < n; i++)
  {
    //cout<<a[i].first<<" "<<a[i].second<<endl;
    days += a[i].first;
    ans += a[i].second - days;
    
  }
  
  cout<<ans;
  
  
  
  return 0;
}
