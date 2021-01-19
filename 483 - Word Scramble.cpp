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


    string str,dum;
    int i;
    while(getline(cin,str)){
        for(i=0;i<str.size();i++){
            if(str[i]!=' '){
                dum.push_back(str[i]);
                if(i==str.size()-1){
                    reverse(dum.begin(),dum.end());
                    cout<<dum<<endl;
                    dum.clear();
                }
            }
            else{
                reverse(dum.begin(),dum.end());
                cout<<dum<<" ";
                dum.clear();
            }
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
