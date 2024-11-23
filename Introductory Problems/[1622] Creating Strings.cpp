#include <bits/stdc++.h>
using namespace std;
 
 
vector<string> ans;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
   ans.push_back(s);
 
    while(next_permutation(s.begin(), s.end()))
    {
      ans.push_back(s);
 
    }
    cout<<ans.size()<<'\n';
    for(int i = 0; i< ans.size(); i++)
    {
      cout<<ans[i]<<'\n';
    }
    return 0;
}
