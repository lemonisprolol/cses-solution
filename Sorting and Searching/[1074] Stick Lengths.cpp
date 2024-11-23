#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxarr = 2 * 1e5 + 5;
int a[maxarr];
signed main() 
{
    int n;
    cin >> n;
    for(int i =1; i <= n; i++)
    {
      cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    
    int mid = (n + 1) / 2;
    int ans = 0;
    
    for(int i = 1; i <= n; i++)
    {
      ans += abs(a[i] - a[mid]);
    }
    cout<<ans;
    return 0;
}
