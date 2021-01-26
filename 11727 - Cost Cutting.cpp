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

    int tc,cases=0;
    cin>>tc;
    while(tc--){
        int a,b,c;
        cout<<"Case "<<++cases<<": ";
        cin>>a>>b>>c;
        if((a>=b && a<=c) || (a>=c && a<=b) )cout<<a<<endl;
        else if((b>=c && b<=a) || (b>=a && b<=c) )cout<<b<<endl;
        else if((c>=b && c<=a) || (c>=a && c<=b) )cout<<c<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
