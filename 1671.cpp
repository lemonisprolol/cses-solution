#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("1671.INP", "r", stdin);
    freopen("1671.OUT", "w", stdout);
}
const int maxarr = 1e5 + 5;
struct info
{
    int b;
    int c;
};
vector <info > adj; 
int main()
{
    inoutput();
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        info temp;
        cin >> temp.b;
        cin >> temp.c;
        adj.push_back(temp);
    }

    return 0;
}