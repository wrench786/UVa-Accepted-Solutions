#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

int gcd(int a,int b){
    if(!a)return b;
    return gcd(b%a,a);
}

int num_size(int n){
    int x=0;
    while(n){
        n/=10;
        x++;
    }
    return x;
}

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    int n,cases=0;
    while(cin>>n && n!=0){
        int i,x,sum=0,divisor,remainder,quotient,q_size,r_size,d_size;
        for(i=0;i<n;i++){
            cin>>x;
            sum+=x;
        }
        cout<<"Case "<<++cases<<":"<<endl;
        if(sum%n==0){
            if(sum<0) cout<<"- "<<-sum/n<<endl;
            else  cout<<sum/n<<endl;
        }
        else{
            x = gcd(abs(sum),abs(n));
            sum/=x;
            n/=x;
            if(abs((double)sum/n)<1.00){
                divisor = n;
                remainder = sum;
                r_size = num_size(remainder);
                d_size = num_size(divisor);
                if(sum<0){
                    remainder = -remainder;
                    for(i=-2;i<d_size-r_size;i++){
                        cout<<" ";
                    }
                    cout<<remainder<<endl;

                    for(i=-2;i<d_size;i++){
                        if(i==-1) cout<<" ";
                        else cout<<"-";
                    }
                    cout<<endl<<"  "<<divisor<<endl;
                }
                else{
                    for(i=0;i<d_size-r_size;i++){
                        cout<<" ";
                    }
                    cout<<remainder<<endl;

                    for(i=0;i<d_size;i++){
                        cout<<"-";
                    }

                    cout<<endl<<divisor<<endl;
                }
            }
            else{
                divisor = n;
                quotient = (sum/n);
                remainder = sum%n;
                r_size = num_size(remainder);
                d_size = num_size(divisor);
                q_size = num_size(quotient);
                if(sum<0){
                    quotient = -quotient;
                    remainder = -remainder;

                    for(i=-2;i<q_size+d_size-r_size;i++){
                        cout<<" ";
                    }
                    cout<<remainder<<endl;

                    cout<<"- "<<quotient;
                    for(i=0;i<d_size;i++){
                        cout<<"-";
                    }
                    cout<<endl;

                    for(i=-2;i<q_size;i++){
                        cout<<" ";
                    }
                    cout<<divisor<<endl;
                }
                else{
                    for(i=0;i<q_size+d_size-r_size;i++){
                        cout<<" ";
                    }
                    cout<<remainder<<endl;

                    cout<<quotient;
                    for(i=0;i<d_size;i++){
                        cout<<"-";
                    }
                    cout<<endl;

                    for(i=0;i<q_size;i++){
                        cout<<" ";
                    }
                    cout<<divisor<<endl;
                }
            }
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
