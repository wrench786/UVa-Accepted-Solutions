#include<bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;


int main()
{
    wrench786

    char ch;
    vector<vector<double>>vec;
    int i,j;
    while(cin>>ch && ch=='r'){
        double x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cin.ignore();
        vec.push_back({x1,y2,x2,y1});
    }
    double x,y;
    int po=0,co;
    while(cin>>x>>y && x!=9999.9 && y!=9999.9){
        po++;
        co=0;
        for(i=0;i<vec.size();i++){
            if(x>vec[i][0] && x<vec[i][2] && y>vec[i][1] && y<vec[i][3]){
                cout<<"Point "<<po<<" is contained in figure "<<i+1<<endl;
                co++;
            }
            else if(co==0 && i==vec.size()-1){
                cout<<"Point "<<po<<" is not contained in any figure"<<endl;
            }
        }
    }
}
