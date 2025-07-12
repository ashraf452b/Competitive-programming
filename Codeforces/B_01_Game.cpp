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
    string s;
    cin>>s;
    int one=0,zero=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
            zero++;
                else
                    one++;
    }
    int moves=min(one,zero);
    if(moves%2==0)
        cout<<"NET"<<endl;
            else
                cout<<"DA"<<endl;
}

   return 0;
}
/*
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
    string s;
    cin>>s;
    int  cnt=0;
    for(int i=0;i<(int)s.size()-1;i++)
    {
        string sub=s.substr(i,2);
        if(sub=="10" || sub=="01")
        {
            cnt++;
            s.erase(i,2);
            i-=2;
            if(i<-1)
                i=-1;
        }
        

    }

    if(cnt%2==0)
        cout<<"NET"<<endl;
            else
                cout<<"DA"<<endl;
}

   return 0;
}

*/