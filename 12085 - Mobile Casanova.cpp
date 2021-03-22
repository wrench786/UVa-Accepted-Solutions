#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;
ll int str_dec(string str){
    ll int i,ans=0;
    for(i=0;i<str.size();i++){
        ans= (ans*10) + (str[i]-'0');
    }
    return ans;
}

void print(string s_snum, string e_snum){
    ll int i,j;
    cout<<s_snum<<"-";
    for(i=0;i<e_snum.size();i++){
        if(s_snum[i]!=e_snum[i]){
            for(j = i ; j<e_snum.size();j++){
                cout<<e_snum[j];
            }
            cout<<endl;
            break;
        }
    }
}

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    ll int n,i,cases=0;
    while(cin>>n && n){
        vector<string >vec(n,"x");
        for(i=0;i<n;i++) cin>>vec[i];
        cout<<"Case "<<++cases<<":"<<endl;

        ll int p_num=0,n_num=0,co=0;
        string s_snum, e_snum;
        if(n==1)cout<<vec[0]<<endl;
        else{
            for(i=0;i<n-1;i++){
                p_num = str_dec(vec[i]);
                n_num = str_dec(vec[i+1]);
                if(!i){
                    s_snum = vec[i];
                }
                if(p_num==n_num)continue;
                if( p_num+1 == n_num){
                    e_snum = vec[i+1];
                }
                else{
                    e_snum = vec[i];
                    if(s_snum==e_snum) cout<<s_snum<<endl;
                    else print(s_snum,e_snum);
                    s_snum = vec[i+1];
                    e_snum.clear();
                }
            }
            if(s_snum.size() && e_snum.size()) print(s_snum,e_snum);
            else if(s_snum.size()) cout<<s_snum<<endl;
        }
        cout<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
