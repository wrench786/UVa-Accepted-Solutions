#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

bool not_prime[LIMIT+1];
int arr[1000000] = {0};

void sieve(){
    ll int i,j;
    not_prime[0] =true;
    not_prime[1] = true;
    for(i=4;i<=LIMIT;i+=2) not_prime[i] = true;
    for(i=3;i*i<=LIMIT;i+=2){
        if(!not_prime[i]){
            for(j=i*i;j<=LIMIT;j+=2*i){
                not_prime[j] = true;
            }
        }
    }
}

int Digit_Sum(int n){
    int ans = 0;
    while(n){
        ans += n%10;
        n/=10;
    }
    return ans;
}

void dp(){
    int i,x;
    for(i=1;i<1000000;i++){
        arr[i] = arr[i-1];
        x = Digit_Sum(i);
        if(!not_prime[x] && !not_prime[i]) arr[i]++;
    }
}
int main(){
    //wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    sieve();
    dp();
    int n;
    scanf("%d",&n);
    while(n--){
        int n1,n2;
        scanf("%d %d",&n1,&n2);
        printf("%d\n",arr[n2] - arr[n1-1]);
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
