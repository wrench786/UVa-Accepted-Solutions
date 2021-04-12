#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 20000000
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

vector<pair<int,int>>vec;
vector<ll int>primes;
bool not_prime[LIMIT+1];
void sieve(){
    ll int i,j;
    for(i=3;i*i<=LIMIT;i+=2){
        if(!not_prime[i]){
            for(j=i*i;j<=LIMIT;j+=2*i){
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
    for(i=0;i<primes.size()-1;i++){
        if(primes[i]+2==primes[i+1]){
            vec.pb(make_pair(primes[i],primes[i+1]));
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
    while(cin>>n){
        cout<<"("<<vec[n-1].first<<", "<<vec[n-1].second<<")"<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
