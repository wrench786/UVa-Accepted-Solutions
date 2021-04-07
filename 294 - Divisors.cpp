#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 50000
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

vector<int>prime;
bool arr[LIMIT+1];

void sieve(){
    int i,j;
    for(i=4;i<=LIMIT;i+=2){
        arr[i] = true;
    }
    int lim = sqrt(LIMIT)+1;
    for(i=3;i<=lim;i+=2){
        if(!arr[i]){
            for(j=i*i;j<=LIMIT;j+=2*i){
                arr[j] = true;
            }
        }
    }
    prime.pb(2);
    for(i=3;i<=LIMIT;i+=2){
        if(!arr[i]){
            prime.pb(i);
        }
    }
}

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    sieve();
    ll int tc;
    cin>>tc;
    while(tc--){
        ll int i,j,n,l,u,max_div=0,ans_num=0,divisor,co;
        cin>>l>>u;
        for(i=l;i<=u ;i++){
            divisor = 1;
            n = i;
            for(j=0;prime[j]*prime[j]<=n;j++){
                co=1;
                if(n%prime[j]==0){
                    while(n%prime[j]==0){
                        n/=prime[j];
                        co++;
                    }
                }
                divisor*=co;
            }
            if(n>1) divisor*=2;
            if(divisor>max_div){
                max_div = divisor;
                ans_num = i;
            }
        }
        cout<<"Between "<<l<<" and "<<u<<", "<<ans_num<<" has a maximum of "<<max_div<<" divisors."<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
