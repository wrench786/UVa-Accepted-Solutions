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
    for(i=0;i<q;i++){
    	int x = luchu[i],last,first,mid,ans1=0,ans2=0;
    	first = 0;
    	last = n-1;
    	while(first<=last){
    		mid = first +(last-first)/2;
    		if(gal[mid]<x){
    			ans1 = gal[mid];
    			first = mid+1;
    		}
    		else{
    			last = mid-1;
    		}
    	}
    	first = 0;
    	last = n-1;
    	while(first<=last){
    		mid = first +(last-first)/2;
    		if(gal[mid]>x){
    			ans2 = gal[mid];
    			last = mid-1;
    		}
    		else{
    			first = mid+1;
    		}
    	}
    	if(!ans1) cout<<"X ";
    	else cout<<ans1<<" ";
    	if(!ans2) cout<<"X"<<endl;
    	else cout<<ans2<<endl;;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
}
