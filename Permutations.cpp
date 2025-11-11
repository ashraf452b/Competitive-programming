/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 03:54:28 12/11/2025
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
    int n;  cin>>n;
    if(n==1) 
    {
        cout<<1<<endl;
        return;
    }
    deque<int> dq;
    if(n<4)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        dq.push_back(n);
        for(int i=1;i<n;i++)
        {
            if(i%2==0)
            {
                dq.push_front(i);
            }
            else
            {
                dq.push_back(i);
            }
        }

        for(auto val : dq) cout<<val<<" ";
        cout<<endl;
    }
    
}
//observation
/**
 
 **/
int main() {
    MESSI;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}