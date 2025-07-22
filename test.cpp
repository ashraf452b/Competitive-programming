/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 02:13:45 22/07/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
   int n,m;
   cin>>n>>m;
   vector<int> v(n+1);
   for(int i=1;i<=n;i++)
   {
        cin>>v[i];
   }
   vector<int> d(n+2),pre(n+2);
   while(m--)
   {
        int a,b,c;
        cin>>a>>b>>c;
        d[a]+=c;
        d[b+1]-=c;
   }
   for(int i=1;i<=n;i++)
   {
    pre[i]=pre[i-1]+d[i];
   }
   vector<int> ans;
   for(int i=1;i<=n;i++)
   {
    ans.pb(v[i]+pre[i]);
   }
   ll sum=0;
   for(int i=0;i<ans.size();i++)
   {
    sum+=ans[i];
   }
   cout<<sum<<endl;
}
int main() {
    FAST_IO;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}