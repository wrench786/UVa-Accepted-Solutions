#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000007
using namespace std;

vector<int>dum(1009,0);
vector<int>prime;

void sieve(){
    int i,j;
    dum[0]=1;
    for(i=2;i*i<=1008;i++){
        if(!dum[i]){
            for(j=i*i;j<=1008;j+=i){
                dum[j]=1;
            }
        }
    }
    for(i=0;i<1009;i++){
        if(!dum[i]){
            prime.push_back(i);
        }
    }
}

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    sieve();
    int n,c;
    while(cin>>n>>c){
        vector<int>vec;
        for(int i=0;prime[i]<=n && prime[i]!=0;i++){
            vec.push_back(prime[i]);
        }
        cout<<n<<" "<<c<<": ";
        if(vec.size()&1){
            if(vec.size()<2*c-1){
                for(int i=0;i<vec.size();i++){
                    if(i==vec.size()-1){
                        cout<<vec[i]<<"\n";
                    }
                    else{
                        cout<<vec[i]<<" ";
                    }
                }
            }
            else{
                int x = c-1;
                int size = vec.size()/2;
                int co=1;
                int limit = 2*c-1;
                for(int i=size - x;co<=limit;i++){
                    if(co==limit){
                        cout<<vec[i]<<"\n";
                    }
                    else{
                        cout<<vec[i]<<" ";
                    }
                    co++;
                }
            }
        }
        else{
            if(vec.size()<2*c){
                for(int i=0;i<vec.size();i++){
                    if(i==vec.size()-1){
                        cout<<vec[i]<<"\n";
                    }
                    else{
                        cout<<vec[i]<<" ";
                    }
                }
            }
            else{
                int x = c-1;
                int size = (vec.size()-1)/2;
                int co=1;
                int limit = 2*c;
                for(int i = size-x;co<=limit;i++){
                    if(co==limit){
                        cout<<vec[i]<<"\n";
                    }
                    else{
                        cout<<vec[i]<<" ";
                    }
                    co++;
                }
            }
        }
        cout<<"\n";
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
