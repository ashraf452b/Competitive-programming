#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    int mat[n][n];
    memset(mat,0,sizeof(mat));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                mat[i][j]=1;
            }
        }
    }
    while(e--)
    {
        int a,b;
        mat[a][b]=1;
    }
    int t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(mat[x][y] == 1)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}