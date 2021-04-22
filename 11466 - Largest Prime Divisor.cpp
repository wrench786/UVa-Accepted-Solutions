#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 10000019
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

bool not_prime[LIMIT+1];
vector<ll int>primes;

void sieve(){
    ll int i,j;
    for(i=3;i*i<=LIMIT;i+=2){
        if(!not_prime[i]){
            for(j=i*i;j<=LIMIT;j+=i+i){
                not_prime[j] = true;
            }
        }
    }
    primes.pb(2);
    for(i=3;i<=LIMIT;i+=2){
        if(!not_prime[i]){
            primes.pb(i);
        }
    }
}

int main(){

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    sieve();
    ll int n,ans,i,co;
    while(cin>>n && n){
        if(n<0)n=-n;
        co = 0;
        ans = 0;
        for(i=0;primes[i]*primes[i]<=n;i++){
            if(n%primes[i]==0){
                co++;
                ans = primes[i];
                while(n%primes[i]==0){
                    n/=primes[i];
                }
            }
        }
        if(n>1){
            co++;
            ans = n;
        }
        if(co>1) cout<<ans<<endl;
        else cout<<-1<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
