#include <bits/stdc++.h>

using namespace std;

const int maxarr = 2 * 1e5 + 5;
vector<int> tower;
int a[maxarr];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    tower.push_back(a[1]);

    for (int i = 2; i <= n; i++)
    {
        int low = 0, high = tower.size() - 1;
        int pos = tower.size();

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (a[i] < tower[mid])
            {
                pos = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        //cout<< pos<<" "<< a[i]<<" "<<tower.size()<<endl;
        if (pos == tower.size())
        {
            tower.push_back(a[i]);
        }
        else
        {
            tower[pos] = a[i];
        }

        /*for (int j = 0; j < tower.size(); j++)
        {
            cout<< tower[j]<< " ";
        }
        cout<<endl;*/
    }

    cout << tower.size();

    return 0;
}
