#include <bits/stdc++.h>
 
using namespace std;
 
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // freopen("1624.INP", "r", stdin);
    //freopen("1624.OUT", "w", stdout);
}
const int maxarr = 9 + 5;
bool a[maxarr][maxarr];
int perm[8] = {1, 2, 3, 4, 5, 6, 7 , 8};
bool check()
{
    for(int i = 0; i < 8; i++)
    {
        if(a[perm[i] - 1][i] == 0)
        {
            //cerr<<perm[i]<<" "<<i<<endl;
            return false;
        }
    }   
    for(int i = 0; i < 8; i++)
    {
        for(int j = i + 1; j < 8; j++)
        {
            if(perm[j] - 1 + j == perm[i] - 1 + i) return false;
            if(perm[j] - 1 - j == perm[i] - 1- i) return false;
        }
    }
    return true;
}
int main()
{
    inoutput();
    for(int i = 0; i < 8; i++)
    {
        for(int j=0; j < 8; j++)
        {
            char t;
            cin >> t;
            if(t  == '.') a[i][j] = 1;
            else a[i][j] = 0;
        }
 
    }
    int ans = 0;
    if(check()) ans++;
    
    while(next_permutation(perm, perm + 8))
    {
 
        if(check()) 
        {
            //for(int i = 0; i < 8; i++) cout<<perm[i]<<" ";
            //cout<<endl;
            ans++;
        }
    }
    cout<<ans;
 
 
    return 0;
}
