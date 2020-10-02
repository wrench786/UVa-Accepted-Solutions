#include<bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0));
using namespace std;


int main()
{
    wrench786

    vector<ll int>vec;
    ll int x,ans;
    while(cin>>x){
        vec.push_back(x);
        ans = vec.size()/2;
        sort(vec.begin(),vec.end());
        if(vec.size()%2==0){
            cout<<(vec[ans]+vec[ans-1])/2<<endl;
        }
        else{
            cout<<vec[ans]<<endl;
        }
    }
}
