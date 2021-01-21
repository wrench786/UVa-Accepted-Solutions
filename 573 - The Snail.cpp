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

    int i;
    double h,u,d,f,x;
    while(cin>>h>>u>>d>>f && h!=0.0){
        double height = 0.0;
        f = f/100.00;
        for(i=1;;i++){
            if(i==1){
                height+= u;
            }
            else{
                x = f*u*(i-1);
                if(x<=u){
                    height+= u-x;
                }
            }
            if(height>h){
                cout<<"success on day "<<i<<endl;
                break;
            }
            height-=d;
            if(height<0.0){
                cout<<"failure on day "<<i<<endl;
                break;
            }
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
