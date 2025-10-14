/**
* In the name of Allah, the Most Gracious, the Most Merciful.
* Author : Ashraful Islam
* Time & Date : 21:54:28 06/10/2025
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
void rhafsolve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a=0,b=0;
    for(auto c : s)
    {
        if(c=='a') a++;
        else b++;
    }
    if(a==b)
    {
        cout<<0<<endl;
        return;
    }
    int res=a-b;
    map<int,int> 
   






    
}

//observation
/**
 int target_balance = total_a - total_b;

    map<int, int> first_occurrence;
    first_occurrence[0] = -1;

    int current_balance = 0;
    int min_len = n + 1;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a') {
            current_balance++;
        } else {
            current_balance--;
        }

        int needed_prev_balance = current_balance - target_balance;
        if (first_occurrence.count(needed_prev_balance)) {
            min_len = min(min_len, i - first_occurrence[needed_prev_balance]);
        }

        if (!first_occurrence.count(current_balance)) {
            first_occurrence[current_balance] = i;
        }
    }

    if (min_len == n) {
        cout << -1 << "\n";
    } else {
        cout << min_len << "\n";
    }
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