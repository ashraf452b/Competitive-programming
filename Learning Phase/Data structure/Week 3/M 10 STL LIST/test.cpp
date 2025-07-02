#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int search;
    cin>>search;
    auto it= find(v.begin(),v.end(),search);
    if(it==v.end())
    {
        cout<<"Not Found"<<endl;
    }
    else 
    {
        cout<<"Found"<<endl;
    }
    return 0;
}