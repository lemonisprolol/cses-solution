#include <bits/stdc++.h>
using namespace std;
 
const int maxarr = 2 * 1e5 + 5;
 
int a[maxarr];
int b[maxarr];
int main() 
{
    int n, m , k;
    cin >> n >> m >> k;
    
    for(int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    for(int i = 1; i <= m; i++)
    {
      cin >> b[i];
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);
    int i = 1;
    int j = 1;
    int ans = 0;
    while(i <=n&& j <= m)
    {
      if(abs(a[i] - b[j]) <= k)
      {
        ans++;
        i++;
        j++;
        
      }
      else if(a[i] > b[j])
      {
        j++;
      }
      else i++;
    }
    cout<<ans;
    return 0;
}
