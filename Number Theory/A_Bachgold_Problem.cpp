#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

int t=1;
// cin>>t;

while(t--)
{
    int n;
    cin>>n;  
    int val=n/2;
    cout<<val<<endl;
    if(n%2==0)
    {
        for(int i=0;i<val;i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        for(int i=0;i<val-1;i++)
        {
            cout<<2<<" ";
        }
        cout<<3;
    }
    cout<<endl;
    
}

   return 0;
}
