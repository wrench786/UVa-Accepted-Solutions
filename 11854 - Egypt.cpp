#include<bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    wrench786

    ll int a,b,c;
    while(cin>>a>>b>>c){
        if(a==b && b==c && c==a && a==0) break;
        else{
            vector<ll int>vec;
            vec.push_back(a);
            vec.push_back(b);
            vec.push_back(c);
            sort(vec.begin(),vec.end());
            if(vec[0]*vec[0]+vec[1]*vec[1]==vec[2]*vec[2]){
                cout<<"right"<<endl;
            }
            else{
                cout<<"wrong"<<endl;
            }
        }
    }
}
