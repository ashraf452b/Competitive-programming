#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
vector<int> prime = { 2,3, 5 ,7 ,11, 13, 17, 19, 23, 29, 31 };
int main() {
    FAST_IO;

int t=1;
cin>>t;
while(t--)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (v[i] % prime[j] == 0)
            {
                mp[prime[j]].pb(i);
                break;
            }
        }
    }

    vector<int> ans(n);
    int color = 1;
    for (auto [x, y] : mp)
    {
        for (auto val : y)
        {
            ans[val] = color;
        }
        color++;
    }

    cout << mp.size() << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

   return 0;
}