#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ,m;
        cin>>n>>m;
        ll a=n-m;
        if(n>m && a>=18)
        {
            cout<<"RCB"<<endl;
        }
        else{
            cout<<"CSK"<<endl;
        }
        
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    
    
        solve();
    
}
