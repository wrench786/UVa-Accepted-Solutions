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

    int r,c,n;
    while(cin>>r>>c>>n && r+c+n!=0){
        set<pair<int,int>>s;
        int i,j,k,x1,x2,y1,y2;
        for(k=0;k<n;k++){
            cin>>x1>>y1>>x2>>y2;
            int a1,a2,b1,b2;
            a1 = min(x1,x2);
            b1 = min(y1,y2);
            a2 = max(x1,x2);
            b2 = max(y1,y2);
            for(i=a1;i<=a2;i++){
                for(j=b1;j<=b2;j++){
                    s.insert(make_pair(i,j));
                }
            }
        }
        ll int ans = (r*c) - s.size();
        if(!ans)cout<<"There is no empty spots."<<endl;
        else if(ans==1)cout<<"There is one empty spot."<<endl;
        else cout<<"There are "<<ans<<" empty spots."<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
