#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 100010041
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

bool not_prime[LIMIT+1];
vector<ll int>vec(10001,0);
void sieve(){
    ll int i,j;
    not_prime[0] = true;
    not_prime[1] = true;
    for(i=4;i<=LIMIT;i+=2){
        not_prime[i] =false;
    }
    for(i=3;i*i<=LIMIT;i+=2){
        if(!not_prime[i]){
            for(j=i*i;j<=LIMIT;j+=2*i){
                not_prime[j] = true;
            }
        }
    }
    vec[0] = 1;
    for(i=1;i<10001;i++){
        ll int n;
        n = i*i + i + 41;
        vec[i] = vec[i-1];
        if(!not_prime[n]) vec[i]++;
    }
}

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    sieve();
    int a,b;
    while(cin>>a>>b){
        ll int dif,prime;
        double ans;
        dif = b-a+1;
        if(a==0) prime = vec[b];
        else prime = vec[b] - vec[a-1];

        ans = ((double)prime*100)/dif + 0.00000005 ;
        cout<<dot(2)<<ans<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
