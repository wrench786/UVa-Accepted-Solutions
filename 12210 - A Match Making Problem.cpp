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

    ll int b,s,i,x,cases=0;
    while(cin>>b>>s && b+s){
        vector<ll int>bachelor(b,0);
        for(i=0;i<b;i++) cin>>bachelor[i];
        for(i=0;i<s;i++) cin>>x;
        cout<<"Case "<<++cases<<": ";
        if(b<=s) cout<<0<<endl;
        else{
            sort(bachelor.begin(),bachelor.end());
            cout<<b-s<<" "<<bachelor[0]<<endl;
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
