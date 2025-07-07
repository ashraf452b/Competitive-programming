#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
const int MAX = 1e6 + 1;
int divisors[MAX];

int main() {
    FAST_IO;

int t=1;
// cin>>t;
while(t--)
{
    for (int i = 1; i < MAX; i++) 
    {
        for (int j = i; j < MAX; j += i) 
        {
            divisors[j]++;
        }
    }

    int n;
    cin >> n;
    while (n--) 
    {
        int x;
        cin >> x;
        cout << divisors[x] <<endl;
    }
}

   return 0;
}
