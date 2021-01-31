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

    string str;
    cout<<dot(7);
    while(getline(cin,str)){
        int i,h,m,s,c,total_c,ans;
        h = ((str[0]-'0')*10) + (str[1]-'0');
        m = ((str[2]-'0')*10) + (str[3]-'0');
        s = ((str[4]-'0')*10) + (str[5]-'0');
        c = ((str[06]-'0')*10) + (str[7]-'0');
        total_c = (h*60*60*100) + (m*60*100) + (s * 100)+ c;
        ans = (125 * total_c)/108;
        cout<<setw(7)<<setfill('0')<<ans<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
