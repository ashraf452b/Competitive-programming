#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
bool prime(ll val)
{
    if (val <= 1)
        return false;
    if (val == 2)
        return true;
    if (val % 2 == 0)
        return false;
    for (ll i = 3; i * i <= val; i += 2)
    {
        if (val % i == 0)
            return false;
    }
    return true;
}

ll nxtprime(ll val)
{
    if (val < 2)
        return 2;
    ll n = val + 1;
    while (true)
    {
        if (prime(n))
        {
            return n;
        }
        n++;
    }
}
int main() 
{
    FAST_IO;

int t=1;
cin>>t;
while(t--)
{
    ll n;
    cin >> n;
        
    ll a = nxtprime(n);
    ll b = nxtprime(a + n - 1);
        
    ll op1 = a * b;
    ll op2 = a * a * a;
        
    cout << min(op1, op2) << endl;
}

    return 0;
}
