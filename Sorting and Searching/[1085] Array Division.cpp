#include <bits/stdc++.h>
    using namespace std;
 
 
    using ll = long long;
 
 
 
    ll n, k;
    const int maxarr = 2e5 + 5;
    ll a[maxarr];
 
    bool check(ll m) {
        ll count = 1, sum = 0;
        for (ll i = 1; i <= n; ++i) 
        {
            if (a[i] > m) return false;
            if (sum + a[i] > m) 
            {
                count++;
                sum = a[i];
            } else {
                sum += a[i];
            }
        }
        
        return count <= k;
    }
 
    void solve() 
    {
        cin >> n >> k;
        ll sum = 0;
        for (ll i = 1; i <= n; ++i) 
        {
            cin >> a[i];
            sum += a[i];
        }
        
       
        ll low = 0, high = sum;
        ll ans = high;
 
 
        while (low <= high) 
        {
            ll mid = (low + high) / 2;
            if (check(mid)) 
            {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout<<ans;
    }
 
    int main() 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
 
        solve();
        return 0;
    }
