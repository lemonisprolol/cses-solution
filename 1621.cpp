#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("1621.INP", "r", stdin);
    //freopen("1621.OUT", "w", stdout);
}
int main()
{
    inoutput();
    int n;
    cin >> n;
    set<int> s;
    for(int i = 1; i <= n; i++)
    {
        int l;
        cin >> l;
        s.insert(l);
    }
    cout<<s.size();


    return 0;
}
