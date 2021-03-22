#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    ll int n,i;
    while(cin>>n && n){
        vector<ll int>vec(n,0);
        for(i=0;i<n;i++) cin>>vec[i];
        sort(vec.begin(),vec.end());
        for(i=0;i<n;i++){
            if(i==n-1) cout<<vec[i]<<endl;
            else cout<<vec[i]<<" ";
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
