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

    int n,i,j,tc,t;
    cin>>tc;
    for(t=0;t<tc;t++){
        cin>>n;
        vector<vector<double>>vec(n,vector<double>(3,0.0));
        vector<double>dum;
        double x1,y1,x2,y2,r,ans;
        for(i=0;i<n;i++){
            cin>>x1>>y1>>x2>>y2>>r;
            if(x1<=x2){
                vec[i][0] = x1;
                vec[i][1] = x2;
            }
            else{
                vec[i][0] = x2;
                vec[i][1] = x1;
            }
            vec[i][2] = r;
            dum.pb(x1);
            dum.pb(x2);
        }
        sort(dum.begin(),dum.end());
        cout<<n*2+1<<endl;
        cout<<dot(3);
        for(i=0;i<dum.size();i++){
            if(!i){
                cout<<"-inf "<<dum[i]<<" "<<1.000<<endl;
            }
            else {
                x1 = dum[i-1];
                x2 = dum[i];
                ans = 1.0;
                for(j=0;j<n;j++){
                    if(vec[j][0]<=x1 && x1<vec[j][1]){
                        ans*=vec[j][2];
                    }
                }
                cout<<x1<<" "<<x2<<" "<<ans<<endl;
            }
            if(i==dum.size()-1){
                cout<<dum[i]<<" "<<"+inf "<<1.000<<endl;
            }
        }
        if(t!=tc-1)cout<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
