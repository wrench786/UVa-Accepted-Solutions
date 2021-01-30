#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
#define pb push_back
using namespace std;

void start(){
    int i;
    for(i=0;;i++){
        if(i==9){
            cout<<"NAME";
            i+=3;
        }
        else if(i==34){
            cout<<"SOUNDEX CODE"<<endl;
            break;
        }
        else cout<<" ";
    }
}

void finish(){
    int i;
    for(i=0;;i++){
        if(i==19){
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        else cout<<" ";
    }
}
char check(char x){
    if(x=='B' ||  x=='P' || x=='F' || x=='V' ) return '1';
    else if(x=='C' ||  x=='S' || x=='K' || x=='G' || x=='J' ||  x=='Q' || x=='X' || x=='Z') return '2';
    else if( x=='D' ||  x=='T') return '3';
    else if(x=='L' ) return '4';
    else if(x=='M' ||  x=='N') return '5';
    else if(x=='R') return '6';
    else return '0';
}
int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    start();
    string inp;
    int i;
    char ch;
    while(cin>>inp){
        string outp;
        for(i=0;i<inp.size();i++){
            ch = check(inp[i]);
            if(!i) outp.pb(inp[i]);
            else if(ch!='0'){
                if(check(inp[i-1])!=ch){
                    outp.pb(check(inp[i]));
                }
            }

        }
        if(outp.size()<4){
            while(outp.size()<4){
                outp.pb('0');
            }
        }
        else if(outp.size()>4){
            outp.erase(outp.begin()+4,outp.end());
        }
        for(int i=0;;i++){
            if(i==9){
                cout<<inp;
                i+=inp.size()-1;
            }
            else if(i==34){
                cout<<outp<<endl;
                break;
            }
            else cout<<" ";
        }
    }
    finish();

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
