#include <bits/stdc++.h>
using namespace std;
#define long long int
const int maxarr = 2 * 1e5 + 5;
 
int a[maxarr];
int b[maxarr];
int main() 
{
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int low = 1, high = n;
    int ans = n;
    while(low < high)
    {
      if(a[low] + a[high] <= k)
      {
        ans--;
        high--;
        low++;
        
      }
      else
      {
        high--;
      }
    }
    cout<<ans;
    return 0;
}
