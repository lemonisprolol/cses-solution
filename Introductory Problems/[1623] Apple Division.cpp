#include <bits/stdc++.h>
using namespace std;
 
const int maxarr = 25;
long long a[maxarr];
 
int n;
long long rec(int i, long long p1, long long p2)
{
  if(i == n + 1)
  {
    return abs(p1 - p2);
  }
  long long s = min(rec(i + 1, p1 + a[i], p2), rec(i + 1, p1, p2 + a[i]));
  //cout<<i<<" "<<s<<endl;
  
  return s;
}
int main() 
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    
    cout<<rec(0, 0 , 0);
    return 0;
}
