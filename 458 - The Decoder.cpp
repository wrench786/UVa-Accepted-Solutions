#include<bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define i64 long long
#define PI (acos(-1.0))
#define LIMIT 1000000007
using namespace std;

int main() {
    wrench786

    string str;
    while(getline(cin,str)){
        for(int i=0;i<str.size();i++){
            str[i]-=7;
        }
        cout<<str<<endl;
    }
}
