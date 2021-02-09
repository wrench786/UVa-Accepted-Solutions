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

    string str;
    while(cin>>str){
    	if(str[0]=='I' || str[0]=='V' || str[0]=='X' || str[0]=='L' || str[0]=='C' || str[0]=='D' || str[0]=='M'){
    		int i,dum=0,x,n=0;
    		for(i=str.size()-1;i>=0;i--){
    			if(str[i]=='I'){
    				x = 1;
    				if(x>=dum) n+=x;
    				else n-=x;
    			}
    			else if(str[i]=='V'){
    				x = 5;
    				if(x>=dum) n+=x;
    				else n-=x;
    			}
    			else if(str[i]=='X'){
    				x = 10;
    				if(x>=dum) n+=x;
    				else n-=x;
    			}
    			else if(str[i]=='L'){
    				x = 50;
    				if(x>=dum) n+=x;
    				else n-=x;
    			}
    			else if(str[i]=='C'){
    				x = 100;
    				if(x>=dum) n+=x;
    				else n-=x;
    			}
    			else if(str[i]=='D'){
    				x = 500;
    				if(x>=dum) n+=x;
    				else n-=x;
    			}
    			else if(str[i]=='M'){
    				x = 1000;
    				if(x>=dum) n+=x;
    				else n-=x;
    			}
    			dum = x;
    		}
    		cout<<n<<endl;
    	}
    	else{
    		int n=0,i;
    		for(i=0;i<str.size();i++){
    			n = (n*10) + (str[i]-'0');
    		}
    		while(n!=0){
    			if(n>=1000){
    				cout<<'M';
    				n-=1000;
    			}
    			else if(n>=900){
    				cout<<"CM";
    				n-=900;
    			}
    			else if(n>=500){
    				cout<<'D';
    				n-=500;
    			}
    			else if(n>=400){
    				cout<<"CD";
    				n-=400;
    			}
    			else if(n>=100){
    				cout<<'C';
    				n-=100;
    			}
    			else if(n>=90){
    				cout<<"XC";
    				n-=90;
    			}
    			else if(n>=50){
    				cout<<'L';
    				n-=50;
    			}
    			else if(n>=40){
    				cout<<"XL";
    				n-=40;
    			}
    			else if(n>=10){
    				cout<<'X';
    				n-=10;
    			}
    			else if(n>=9){
    				cout<<"IX";
    				n-=9;
    			}
    			else if(n>=5){
    				cout<<"V";
    				n-=5;
    			}
    			else if(n>=4){
    				cout<<"IV";
    				n-=4;
    			}
    			else{
    				cout<<'I';
    				n--;
    			}
    		}
    		cout<<endl;
    	}
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
