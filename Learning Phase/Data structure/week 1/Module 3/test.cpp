#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int find;
    cin>>find;
    int l=0;
    int r=n-1;
    sort(a,a+n);
    bool flag= false;
    while(l<=r)
    {
        int  mid=(l+r)/2;
        if(a[mid]==find)
        {
            flag=true;
            break;
        }
        else if(a[mid]<find)
        {
            l=mid+1;
        }
        else if(a[mid]>find)
        {
            r=mid-1;
        }
    }
    if(flag)
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}