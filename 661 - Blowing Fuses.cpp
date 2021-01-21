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

    int n,m,c,cases=0;
    while(cin>>n>>m>>c && n+m+c!=0){
        vector<vector<int>>vec(2,vector<int>(n,0));
        int i,x,sum=0,maxim=0;
        for(i=0;i<n;i++){
            cin>>vec[0][i];
        }
        for(i=0;i<m;i++){
            cin>>x;
            if(vec[1][x-1]==0){
                vec[1][x-1]=1;
                sum+=vec[0][x-1];
                if(sum>maxim){
                    maxim= sum;
                }
            }
            else{
                vec[1][x-1]=0;
                sum-=vec[0][x-1];
            }
        }
        cout<<"Sequence "<<++cases<<endl;

        if(maxim>c) cout<<"Fuse was blown."<<endl<<endl;
        else cout<<"Fuse was not blown.\nMaximal power consumption was "<<maxim<<" amperes."<<endl<<endl;
    }


#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
