#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    string str;
    double distance=0.0;
    int h,m,s,old_limit=0,new_limit=0,i,n,old_time=0,new_time=0,dum_time;
    while(getline(cin,str)){
        if(str.size()>8){
            h = (str[0]-'0')*10 + (str[1]-'0');
            m = (str[3]-'0')*10 + (str[4]-'0');
            s = (str[6]-'0')*10 + (str[7]-'0');
            new_time = (h*60*60) + (m*60) + s;;
            n = 0;
            for(i=9;i<str.size();i++){
                n = (n*10) + (str[i]-'0');
            }
            new_limit = n;
            distance = distance + (new_time - old_time)*(old_limit/3600.00);
            old_time = new_time;
            old_limit = new_limit;
        }
        else{
            h = (str[0]-'0')*10 + (str[1]-'0');
            m = (str[3]-'0')*10 + (str[4]-'0');
            s = (str[6]-'0')*10 + (str[7]-'0');
            dum_time = (h*60*60) + (m*60) + s;
            cout<<str<<" "<<dot(2)<<(old_limit/3600.00)*(dum_time-old_time)+distance<<" km"<<endl;
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
