#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
using namespace std;

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    ll int tc;
    cin>>tc;
    while(tc--){
        ll int s,d;
        cin>>s>>d;
        if(s<d || (s%2==0 && d%2!=0) || (d%2==0 && s%2!=0))cout<<"impossible"<<endl;

        else cout<<(s+d)/2<<" "<<s - ((s+d)/2)<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
