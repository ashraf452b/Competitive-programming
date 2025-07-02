#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for(int i=2; i<=n ;i++)
    {
        fib[i]=fib[i-1] + fib[i-2];
    }
    cout<<fib[n]<<endl;
    return 0;
}