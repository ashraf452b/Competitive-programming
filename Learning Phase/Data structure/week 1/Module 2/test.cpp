#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int pos,val;
    cin>>pos>>val;
    for(int i=n+1;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=val;
    for(int i=0;i<n+1;i++)
    {
        cout<<a[i]<<" ";
    }
}