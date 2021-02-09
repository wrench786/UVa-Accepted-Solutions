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
    cin>>tc;
    while(tc--){
    	int arr[10],i,n,x;
    	for(i=0;i<10;i++){
    		arr[i]=0;
    	}
    	cin>>n;
    	for(i=1;i<=n;i++){
    		x = i;
    		while(x!=0){
    			arr[x%10]++;
    			x/=10;
    		}
    	}
    	for(i=0;i<10;i++){
    		if(i!=9)cout<<arr[i]<<" ";
    		else cout<<arr[i]<<endl;
    	}
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
