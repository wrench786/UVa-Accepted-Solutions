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

    int n;
    while(cin>>n && n!=0){
    	cin.ignore();
    	vector<int>vec(n);
    	int i,j,co,ans=0;
    	for(i=0;i<n;i++){
    		string str;
    		getline(cin,str);
    		co=0;
    		for(j=0;j<25;j++){
    			if(str[j]!='X')co++;
    		}
    		vec[i]=co;
    	}
    	int minim = *min_element(vec.begin(),vec.end());
    	for(i=0;i<n;i++){
    		ans+=vec[i]-minim;
    	}
    	cout<<ans<<"\n";
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
