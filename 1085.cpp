    
#include<bits/stdc++.h>
using namespace std;


int a[200005],n,k;
bool check(int m){
    int c=1, s=0;
    for(int i = 0; i < n; i++)
    {
        if (a[i]>m) return 0;
        //cout<<s<<endl;
        if (s+a[i]>m) {
            c++; s=a[i];
        }
        else s+=a[i];

    }
    if (c<=k) return 1;
    return 0;
}
void solve(){
    cin >> n >> k;

    int h = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        h += a[i];

    }
    int l=0;
    int ans = h;
    while(l<=h){
        int m = (l+h)/2;
        if (check(m)){
            ans = m;
            h = m-1;
        }
        else l = m+1;
    }
    cout<<ans<<endl;
    //cout<<check(8);
}    
int main(){
  
   // freopen("1085.INP", "r" , stdin);
   // freopen("1085.OUT", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
        //cout<<'\n';
    }
    return 0;
}