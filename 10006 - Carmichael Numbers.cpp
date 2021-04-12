#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 65000
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

int Big_Mod(int base,int power, int mod){
    if(!power) return 1;
    else if(power&1){
        ll int i1 = base%mod;
        ll int i2 = (Big_Mod(base,power-1,mod))%mod;
        return (i1*i2)%mod;
    }
    else{
        ll int it = (Big_Mod(base,power/2,mod))%mod;
        return (it*it)%mod;
    }
}

bool not_prime[LIMIT+1];
void sieve(){
    int i,j;
    not_prime[0] = true;
    not_prime[1] = true;
    for(i=4;i<=LIMIT;i+=2){
        not_prime[i] = true;
    }
    int len = sqrt(LIMIT) +1;
    for(i=3;i<=len;i+=2){
        if(!not_prime[i]){
            for(j=i*i;j<=LIMIT;j+=2*i){
                not_prime[j] = true;
            }
        }
    }
    for(i=3;i<=LIMIT;i++){
        if(not_prime[i]){
            for(j=2;j<i;j++){
                int ans = Big_Mod(j,i,i);
                if(ans!=j){
                    not_prime[i] = false;
                    break;
                }
            }
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
    int n;
    while(cin>>n && n){
        if(!not_prime[n])cout<<n<<" is normal."<<endl;
        else cout<<"The number "<<n<<" is a Carmichael number."<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
