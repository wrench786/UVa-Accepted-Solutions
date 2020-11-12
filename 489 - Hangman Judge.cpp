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
    while(cin>>n && n!=-1){
    	cin.ignore();
    	string str,str2;
    	getline(cin,str);
    	getline(cin,str2);
    	vector<int>vec(26,0);
    	int i,mai=0,dum=0;
    	for(i=0;i<str.size();i++){
    		int x = str[i]-97;
    		if(vec[x]==0){
    			vec[x]++;
    			mai++;
    		}
    	}
    	cout<<"Round "<<n<<endl;
    	int mistake=0;
    	for(i=0;i<str2.size();i++){
    		int x = str2[i]-97;
    		if(vec[x]==0){
    			mistake++;
    			vec[x]=-1;
    		}
    		else if(vec[x]==1){
    			dum++;
    			vec[x]=10;
    		}
    		if(mistake==7){
    			cout<<"You lose.\n";
    			break;
    		}
    		if(dum==mai){
    			cout<<"You win.\n";
    			break;
    		}
    	}
   		if(mistake>=0 && mistake<7 && dum!=mai){
    		cout<<"You chickened out.\n";
    	}
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
