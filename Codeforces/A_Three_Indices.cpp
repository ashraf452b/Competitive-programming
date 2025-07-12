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
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int a,b,c;
    bool flag=false;
    for(int i=0;i<n-2;i++)
    {
        if(v[i]<v[i+1] && v[i+1]>v[i+2])
        {
            a=i+1;
            b=i+2;
            c=i+3;
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
    }
        else
            cout<<"NO"<<endl;
    

}

   return 0;
}
