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

    string str;
    while(getline(cin,str)){
        for(int i=0;i<str.size();i++){
            if(str[i]=='1' || str[i]=='0' || str[i]=='-')continue;

            else if(str[i]<=67) str[i]='2';
            else if(str[i]<=70) str[i]='3';
            else if(str[i]<=73) str[i]='4';
            else if(str[i]<=76) str[i]='5';
            else if(str[i]<=79) str[i]='6';
            else if(str[i]<=83) str[i]='7';
            else if(str[i]<=86) str[i]='8';
            else if(str[i]<=90) str[i]='9';
        }
        cout<<str<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
