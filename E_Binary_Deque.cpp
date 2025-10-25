/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 17:10:39 25/10/2025
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
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
    int n,k;    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    ll sum=0;
    for(int i=0;i<n;i++)    sum+=v[i];
    if(sum<k)
    {
        cout<<-1<<endl;
        return;
    }
    if(sum==k)
    {
        cout<<0<<endl;
        return;
    }
    int ans=0;
    int l=0,r=0;
    int cur=0;
    while(r<n)
    {
        cur+=v[r];
        while(cur>k)
        {
            cur-=v[l];
            l++;
        }
        if(cur==k)
        {
            ans=max(ans,r-l+1); 
            
        }
        r++;
    }

    cout<<n-ans<<endl;
}
//observation
/**
 
 **/
int main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}