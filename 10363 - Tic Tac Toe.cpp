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


    int n;
    cin>>n;
    while(n--){
        vector<vector<char>>vec(3,vector<char>(3,'.'));
        int x=0,o=0,i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cin>>vec[i][j];
                if(vec[i][j]=='X')x++;
                else if(vec[i][j]=='O')o++;
            }
        }
        if(x<o || x>o+1)cout<<"no"<<endl;
        else{
            int flag_x=0;
            int flag_o=0;
            if(vec[0][0]=='X' && vec[0][1]=='X' && vec[0][2]=='X')flag_x++;
            if(vec[1][0]=='X' && vec[1][1]=='X' && vec[1][2]=='X')flag_x++;
            if(vec[2][0]=='X' && vec[2][1]=='X' && vec[2][2]=='X')flag_x++;
            if(vec[0][0]=='X' && vec[1][0]=='X' && vec[2][0]=='X')flag_x++;
            if(vec[0][1]=='X' && vec[1][1]=='X' && vec[2][1]=='X')flag_x++;
            if(vec[0][2]=='X' && vec[1][2]=='X' && vec[2][2]=='X')flag_x++;
            if(vec[0][0]=='X' && vec[1][1]=='X' && vec[2][2]=='X')flag_x++;
            if(vec[2][0]=='X' && vec[1][1]=='X' && vec[0][2]=='X')flag_x++;
            if(vec[0][0]=='O' && vec[0][1]=='O' && vec[0][2]=='O')flag_o++;
            if(vec[1][0]=='O' && vec[1][1]=='O' && vec[1][2]=='O')flag_o++;
            if(vec[2][0]=='O' && vec[2][1]=='O' && vec[2][2]=='O')flag_o++;
            if(vec[0][0]=='O' && vec[1][0]=='O' && vec[2][0]=='O')flag_o++;
            if(vec[0][1]=='O' && vec[1][1]=='O' && vec[2][1]=='O')flag_o++;
            if(vec[0][2]=='O' && vec[1][2]=='O' && vec[2][2]=='O')flag_o++;
            if(vec[0][0]=='O' && vec[1][1]=='O' && vec[2][2]=='O')flag_o++;
            if(vec[2][0]=='O' && vec[1][1]=='O' && vec[0][2]=='O')flag_o++;

            if(flag_x>=1 && flag_o>=1)cout<<"no"<<endl;
            else if (flag_o && o!=x)cout<<"no"<<endl;
            else if(flag_x && o!=x-1)cout<<"no"<<endl;
            else cout<<"yes"<<endl;
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
