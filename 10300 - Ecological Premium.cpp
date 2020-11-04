#include<bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define i64 long long
#define PI (acos(-1.0))
#define LIMIT 1000000007
using namespace std;

int main() {
    wrench786

    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,ans=0;
        cin>>n;
        while(n--){
            cin>>a>>b>>c;
            ans+= a*c;
        }
        cout<<ans<<endl;
    }
}
