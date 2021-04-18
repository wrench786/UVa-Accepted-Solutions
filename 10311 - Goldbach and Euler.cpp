#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 100000000
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

bool not_prime[LIMIT+1];
void sieve(){
    ll int i,j;
    not_prime[1] = true;
    for(i=3;i*i<=LIMIT;i+=2){
        if(!not_prime[i]){
            for(j=i*i;j<=LIMIT;j+=2*i){
                not_prime[j] = true;
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
    ll int n,n1,n2,x,ans,i;
    while(cin>>n){
        if(n<=4 ) cout<<n<<" is not the sum of two primes!"<<endl;
        else if(n&1){
            if(!not_prime[n-2]){
                cout<<n<<" is the sum of "<<2<<" and "<<n-2<<"."<<endl;
            }
            else cout<<n<<" is not the sum of two primes!"<<endl;
        }
        else{
            x = n/2;
            if(!(x&1)) x--;
            while(not_prime[x]){
                x-=2;
            }
            ans=0;
            while(true){
                n1 = x;
                n2 = abs(n - x);
                if(!not_prime[n1] && !not_prime[n2] && n1!=n2){
                    ans = 1;
                    break;
                }
                x-=2;
                if(x==1)break;
            }
            if(ans) cout<<n<<" is the sum of "<<min(n1,n2)<<" and "<<max(n1,n2)<<"."<<endl;
            else cout<<n<<" is not the sum of two primes!"<<endl;
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
