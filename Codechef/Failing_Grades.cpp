#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

int t=1;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    bool flag=true;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=v[i];
        if(sum/i<40)
        {
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;

}

   return 0;
}
