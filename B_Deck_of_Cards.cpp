/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:49:47 06/10/2025
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int zero = 0, one = 0, two = 0;
    for (char c : s)
    {
        if (c == '0') zero++;
        else if (c == '1') one++;
        else two++;
    }

    string ans(n, '?');

    for (int i = 0; i < zero; i++)
        ans[i] = '-';

    for (int i = n - 1; i >= n - one; i--)
        ans[i] = '-';

    int start = zero + two + 1;
    int end = n - one - two;

    if (start <= end)
    {
        for (int i = start - 1; i < end; i++)
            ans[i] = '+';
    }

    if (n == k)
        ans = string(n, '-');

    cout << ans << endl;
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