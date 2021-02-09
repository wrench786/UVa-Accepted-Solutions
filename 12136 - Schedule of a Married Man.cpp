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

    int tc,cases=0;
    cin>>tc;
    while(tc--){
    	int s_bow=0,e_bow=0,s_meet=0,e_meet=0,h,m;
    	string str1,str2;
    	cin>>str1>>str2;
    	h = (str1[0]-'0')*10 + (str1[1]-'0');
    	m = (str1[3]-'0')*10 + (str1[4]-'0');
    	s_bow = h*60 + m;

    	h = (str2[0]-'0')*10 + (str2[1]-'0');
    	m = (str2[3]-'0')*10 + (str2[4]-'0');
    	e_bow = h*60 + m;

    	cin>>str1>>str2;
    	h = (str1[0]-'0')*10 + (str1[1]-'0');
    	m = (str1[3]-'0')*10 + (str1[4]-'0');
    	s_meet = h*60 + m;

    	h = (str2[0]-'0')*10 + (str2[1]-'0');
    	m = (str2[3]-'0')*10 + (str2[4]-'0');
    	e_meet = h*60 + m;

    	cout<<"Case "<<++cases<<": ";
    	if(e_meet<s_bow || e_bow<s_meet) cout<<"Hits Meeting"<<endl;
    	else cout<<"Mrs Meeting"<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
