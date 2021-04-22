#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 10000019
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;


int main(){

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    int n;
    while(cin>>n && n){
        int i,ans = 0,x = n;
        if(n==1) cout<<n<<" : "<<0<<endl;
        else if(n==2 || n==3) cout<<n<<" : "<<1<<endl;
        else{
            for(i=2;i*i<=n;i++){
                if(n%i==0){
                    ans++;
                    while(n%i==0){
                        n/=i;
                    }
                }
            }
            if(n>1)ans++;
            cout<<x<<" : "<<ans<<endl;
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
