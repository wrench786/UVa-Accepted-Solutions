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

    int n,q,i,j;
    cin>>n;
    vector<int>gal(n,0);
    for(i=0;i<n;i++){
    	cin>>gal[i];
    }
    cin>>q;
    vector<int>luchu(q,0);
    for(i=0;i<q;i++){
    	cin>>luchu[i];
    }
    int x,first,last;
    for(j=0;j<q;j++){
    	x = luchu[j];
    	first=0;
    	last=0;
    	for(i=0;i<n;i++){
    		if(gal[i]<x){
    			first = gal[i];
    		}
    		else if(gal[i]>x){
    			last = gal[i];
    			break;
    		}
    	}
    	if(!first) cout<<"X ";
    	else cout<<first<<" ";
    	if(!last) cout<<"X"<<endl;
    	else cout<<last<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
