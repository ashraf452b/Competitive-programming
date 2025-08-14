/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 16:01:36 14/08/2025
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
bool flag;
void rhafsolve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    flag=false;
    for(int i=0;i<n;i++)
    {
        if(v[0] != v[i])
        {
            flag=true;
            break;
        }
    }
    if(!flag)
    {
        no;
        return;
    }
    yes;
    for(int i=0;i<n;i++)
    {
        if(v[0] != v[i])
        {
            cout<<1<<" "<<i+1<<endl;
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if(v[0] != v[j])
                {
                    cout<<i+1<<" "<<j+1<<endl;
                    break;
                }
            }
        }
    }
}
int main() {
    FAST_IO;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}