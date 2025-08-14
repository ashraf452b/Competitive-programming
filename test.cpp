#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    vector<int> d(n+2),pre(n+1);
    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        a--;b--;
        d[a]+=c;
        d[b+1]-=c;
    }
    // pre[0] = d[0];
    for(int i=1;i<=n;i++)
    {
        pre[i]=pre[i-1]+d[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<pre[i]+v[i]<<" ";
    }
    
}