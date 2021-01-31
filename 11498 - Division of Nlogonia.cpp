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

    int tc;
    while(cin>>tc && tc){
        int n,m,i,x,y;
        cin>>n>>m;
        for(i=0;i<tc;i++){
            cin>>x>>y;
            if(x==n || y==m) cout<<"divisa"<<endl;
            else if(x>n && y>m) cout<<"NE"<<endl;
            else if(x<n && y>m) cout<<"NO"<<endl;
            else if(x>n && y<m) cout<<"SE"<<endl;
            else if(x<n && y<m) cout<<"SO"<<endl;
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
