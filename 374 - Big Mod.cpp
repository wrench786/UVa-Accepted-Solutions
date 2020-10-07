#include<bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
using namespace std;

ll int BigMod(ll int base, ll int power, ll int mod){
    if(power ==0) return 1;
    else if(power%2==0){
        ll int r1 = (BigMod(base,power/2,mod))%mod;
        return (r1*r1)%mod;
    }
    else if(power%2==1){
        ll int r1 = base%mod;
        ll int r2 = (BigMod(base,power-1,mod))%mod;
        return (r1*r2)%mod;
    }
}


int main()
{
    wrench786

    ll int b,p,m,ans;
    while(cin>>b>>p>>m){
        ans = BigMod(b,p,m);
        cout<<ans<<endl;
    }
}
