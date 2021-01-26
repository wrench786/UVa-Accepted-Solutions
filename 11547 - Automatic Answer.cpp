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

    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        n *=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        n%=100;
        n = (n - (n%10))/10;
        if(n<0) cout<<-n<<endl;
        else cout<<n<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
