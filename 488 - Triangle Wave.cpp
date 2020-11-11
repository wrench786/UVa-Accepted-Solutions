#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define i64 long long
#define PI (acos(-1.0))
#define LIMIT 1000000007
using namespace std;

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    int tc,t=0;
    cin>>tc;
    for(t=0;t<tc;t++){
    	if(t) cout<<"\n";
    	int amplitute,frequency,i,j,k;
    	cin>>amplitute>>frequency;
    	for(i=0;i<frequency;i++){
    		if(i) cout<<"\n";
    		for(j=1;j<=amplitute;j++){
    			for(k=0;k<j;k++){
    				cout<<j;
    			}
    			cout<<"\n";
    		}
    		for(j=amplitute-1;j>=1;j--){
    			for(k=0;k<j;k++){
    				cout<<j;
    			}
    			if(t==tc-1 && i==frequency-1 &&j==1)continue;
    			else cout<<"\n";
    		}
    	}
    }
    cout<<'\n';

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
