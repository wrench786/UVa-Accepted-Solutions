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

    vector<vector<char>>vec;
    vector<char>dum;
    string str;
    int maxim=0,i,j;
    while(getline(cin,str)){
    	int len = str.size();
    	if(len>maxim) maxim = len;
    	for(i=0;i<str.size();i++){
    		dum.push_back(str[i]);
    	}
    	vec.push_back(dum);
    	dum.clear();
    }
    for(j=0;j<maxim;j++){
    	for(i=vec.size()-1;i>=0;i--){
    		if(vec[i].size()-1>=j){
    			cout<<vec[i][j];
    		}
    		else cout<<" ";
    	}
    	cout<<"\n";
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
}
