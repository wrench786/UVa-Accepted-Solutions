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

    ll int n,m,i,ans,flag,co;
    while(cin>>n>>m && n+m){
        vector<ll int>g_head(n,0);
        vector<ll int>knight(m,0);
        for(i=0;i<n;i++) cin>>g_head[i];
        for(i=0;i<m;i++) cin>>knight[i];
        if(m<n) cout<<"Loowater is doomed!"<<endl;
        else{
            sort(g_head.begin(),g_head.end());
            sort(knight.begin(),knight.end());
            flag = 1;
            ans=0;
            co=0;
            for(i=0;i<n;i++){
                ll int x = g_head[i];
                if(!knight.size()){
                    flag = 0;
                    break;
                }
                if(x>knight[0]){
                    while(knight.size() && x>knight[0]){
                        knight.erase(knight.begin());
                    }
                }
                if(knight.size() && x<= knight[0]){
                    ans+=knight[0];
                    knight.erase(knight.begin());
                    co++;
                }
            }
            if(flag && co==n) cout<<ans<<endl;
            else cout<<"Loowater is doomed!"<<endl;
        }

    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
