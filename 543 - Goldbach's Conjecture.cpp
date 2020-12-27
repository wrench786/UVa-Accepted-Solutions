#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000007
using namespace std;

vector<int>dum(1000009,0);
vector<int>prime;

void sieve(){
    int i,j;
    dum[0]=1;
    dum[1]=1;
    for(i=2;i*i<1000009;i++){
        if(!dum[i]){
            for(j=i*i;j<1000009;j+=i){
                dum[j]=1;
            }
        }
    }
    for(i=3;i<1000009;i++){
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
    int n,i;
    while(cin>>n && n!=0){
        int flag = 0;
        for(i=0;prime[i]<n;i++){
            int x = n-prime[i];
            int co=1,j;
            for(j=2;j*j<=x;j++){
                if(x%j==0){
                    co=0;
                }
            }
            if(co){
                flag = 1;
                cout<<n<<" = "<<prime[i]<<" + "<<x<<endl;
                break;
            }
        }
        if(!flag){
            cout<<"Goldbach's conjecture is wrong."<<endl;
        }
    }
#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
