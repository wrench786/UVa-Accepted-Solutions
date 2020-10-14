#include<bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define i64 long long
#define PI (acos(-1.0))
#define LIMIT 1000000007
using namespace std;


int main()
{
    wrench786

    vector<i64 int>vec;
    map<i64 int, i64 int>ma;
    i64 int n;
    while(cin>>n){
        if(ma.count(n)==0){
            ma[n] = 1;
            vec.push_back(n);
        }
        else{
            ma[n]++;
        }
    }
    for(i64 int i=0;i<vec.size();i++){
        cout<<vec[i]<<" "<<ma[vec[i]]<<endl;
    }
}
