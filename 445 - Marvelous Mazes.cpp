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
    	int i,j,flag = 0,co=0;
    	for(int i=0;i<str.size();i++){
   			if(str[i]-48>=0 && str[i]-48<=9){
   				co+=str[i]-48;
   			}
    		else{
   				if(str[i]=='b'){
   					for(j=0;j<co;j++){
   						cout<<" ";
   					}    				}
    			else if(str[i]=='!'){
    				cout<<"\n";
    			}
    			else{
   					for(j=0;j<co;j++){
   						cout<<str[i];
   					}
   				}
   				co=0;
    		}
    	}
    	cout<<'\n';
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
