#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000007
using namespace std;

vector<int>dum(33000,0);
vector<int>prime;

void sieve(){
    int i,j;
    dum[0]=1;
    dum[1]=1;
    for(i=2;i*i<33000;i++){
        if(!dum[i]){
            for(j=i*i;j<33000;j+=i){
                dum[j]=1;
            }
        }
    }
    for(i=2;i<33000;i++){
        if(!dum[i]){
            prime.push_back(i);
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
        if(n==4)cout<<1<<endl;
        else{
            int i,x,j,flag,ans=0;
            for(i=0;prime[i]<n;i++){
                x = n - prime[i];
                if(x<n/2)break;
                flag=1;
                for(j=2;j<x;j++){
                    if(x%j==0)flag=0;
                }
                if(flag){
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
