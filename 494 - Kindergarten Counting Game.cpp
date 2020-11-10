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

    string str;
    while(getline(cin,str)){
    	int ans=0,flag=0,i;
    	for(i=0;i<str.size();i++){
    		if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122){
    			if(flag == 0){
    				flag = 1;
    				ans++;
    			}
    		}
    		else{
    			flag = 0;
    		}
    	}
    	cout<<ans<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
