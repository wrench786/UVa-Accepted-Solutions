#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
using namespace std;

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    int n,p,cases=0;
    while(cin>>n>>p && n+p!=0){
        cin.ignore();
        string str,ans;
        double r,num1=0.0;
        int d,num2=0,i,j;
        for(i=0;i<n;i++){
            getline(cin,str);
        }
        for(i=0;i<p;i++){
            getline(cin,str);
            cin>>r>>d;
            cin.ignore();
            if(d>num2 ||(d==num2 && r<num1)){
                ans = str;
                num2 = d;
                num1 = r;
            }
            for(j=0;j<d;j++){
                getline(cin,str);
            }
        }
        if(cases)cout<<endl;
        cout<<"RFP #"<<++cases<<endl;
        cout<<ans<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
