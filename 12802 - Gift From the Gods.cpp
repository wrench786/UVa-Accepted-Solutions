#include <bits/stdc++.h>
#define ll long long
using namespace std;
int check(ll int n){
	int i;
	if(n==1 || n==2 || n==3 || n==5 || n==7)return 1;
	else if(n%2==0) return 0;
	else{
		for(i=3;i*i<=n;i+=2){
			if(n%i==0)return 0;
		}
	}
	return 1;
}

int pal(ll int n){
	ll int x=n,y=0,co;
	while(x){
		y = (y*10) + x%10;
		x/=10;
	}
	if(y==n){
		co = check(n);
    if(co)return 1;
    else return 0;
		//(co)? return 1:return 0;
	}
	else return 0;
}
int main(){
    ll int n;
    while(cin>>n){
    	cout<<2*n<<endl;
    	int x = pal(n);
    	if(x)break;
    }
}
