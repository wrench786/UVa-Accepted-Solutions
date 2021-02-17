#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

vector<vector<int>>vec(101,vector<int>(5,0));
void solve(){
    int i,n,j;
    for(i=1;i<=100;i++){
        n = i;
        for(j=0;j<5;j++){
            vec[i][j] = vec[i-1][j];
        }
        while(n){
            if(n==100){
                n-=100;
                vec[i][4]++;
            }
            else if(n>=90){
                n-=90;
                vec[i][2]++;
                vec[i][4]++;
            }
            else if(n>=50){
                n-=50;
                vec[i][3]++;
            }
            else if(n>=40){
                n-=40;
                vec[i][2]++;
                vec[i][3]++;
            }
            else if(n>=10){
                n-=10;
                vec[i][2]++;
            }
            else if(n==9){
                n-=9;
                vec[i][0]++;
                vec[i][2]++;
            }
            else if(n>=5){
                n-=5;
                vec[i][1]++;
            }
            else if(n==4){
                n-=4;
                vec[i][0]++;
                vec[i][1]++;
            }
            else{
                n--;
                vec[i][0]++;
            }
        }
    }
}

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    solve();
    int n;
    while(cin>>n && n){
        cout<<n<<": "<<vec[n][0]<<" i, "<<vec[n][1]<<" v, "<<vec[n][2]<<" x, "<<vec[n][3]<<" l, "<<vec[n][4]<<" c"<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
