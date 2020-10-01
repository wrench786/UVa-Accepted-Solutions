#include<bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    wrench786


    int t,i,j;
    cin>>t;
    for(i=1;i<=t;i++){
        vector<ll int>vec(3);
        for(j=0;j<3;j++){
            cin>>vec[j];
        }
        sort(vec.begin(),vec.end());
        if(vec[0]+vec[1]>vec[2]){
            if(vec[0]==vec[1] && vec[1]==vec[2]){
                cout<<"Case "<<i<<": Equilateral"<<endl;
            }
            else if(vec[0]==vec[1] || vec[1]==vec[2]){
                cout<<"Case "<<i<<": Isosceles"<<endl;
            }
            else{
                cout<<"Case "<<i<<": Scalene"<<endl;
            }
        }
        else{
            cout<<"Case "<<i<<": Invalid"<<endl;
        }
    }
}
