#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

bool arr[LIMIT+1];
vector<int>prime;
void sieve(){
    int i,j;
    for(i=4;i<=LIMIT;i+=2){
        arr[i] = true;
    }
    int len = sqrt(LIMIT) +1;
    for(i=3;i<=len;i+=2){
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

bool is_prime(int n){
    int s=0 , e = prime.size()-1,mid;
    while(s<=e){
        mid = s + (e-s)/2;
        if(prime[mid]==n) return true;
        else if(prime[mid]<n) s = mid+1;
        else e = mid-1;
    }
    return false;
}

int rev_num(int n){
    int x=0;
    while(n){
        x = (x*10) + (n%10);
        n/=10;
    }
    return x;
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
        int ans = 1,x;
        if(is_prime(n))ans++;
        x = rev_num(n);
        if(is_prime(x) && ans==2 && x!=n)ans++;
        if(ans==1) cout<<n<<" is not prime."<<endl;
        else if(ans==2) cout<<n<<" is prime."<<endl;
        else cout<<n<<" is emirp."<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
