#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ;
        cin>>n;
        string s;
        cin>>s;
        ll f=0,a=0,b=0;
        for(int i=0; i<n; ++i) {
          if((s[i]=='1' && f==0) || (s[i]=='1' && i==0))
          {
            a++;
            f=1;
          }
          else if((s[i]=='0' && f==1) || (s[i]=='0' && i==0)) {
            b++;
            f=0;
          }
        }
        cout<<min(a,b)<<endl;
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    ll t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
