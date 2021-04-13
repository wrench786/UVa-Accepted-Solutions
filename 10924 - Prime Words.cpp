#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1040
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

bool not_prime[LIMIT+1];
void sieve(){
    int i,j;
    for(i=3;i*i<=LIMIT;i+=2){
        if(!not_prime[i]){
            for(j=i*i;j<=LIMIT;j+=2*i){
                not_prime[j] = true;
            }
        }
    }
}

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    sieve();
    string str;
    while(cin>>str){
    	int i,n=0;
    	for(i=0;i<str.size();i++){
    		if(str[i]>=65 && str[i]<=90) n+= (str[i]-'A') + 27;
    		else n+= (str[i]-'a') + 1;
    	}
    	if(n==2 || (!not_prime[n] && n%2!=0)) cout<<"It is a prime word."<<endl;
    	else cout<<"It is not a prime word."<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
