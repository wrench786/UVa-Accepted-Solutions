#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
#define pb push_back
using namespace std;

vector<vector<string>>vec;

void solve(string str){
    if(str==".-")cout<<"A";
    else if(str=="-...")cout<<"B";
    else if(str=="-.-.")cout<<"C";
    else if(str=="-..")cout<<"D";
    else if(str==".")cout<<"E";
    else if(str=="..-.")cout<<"F";
    else if(str=="--.")cout<<"G";
    else if(str=="....")cout<<"H";
    else if(str=="..")cout<<"I";
    else if(str==".---")cout<<"J";
    else if(str=="-.-")cout<<"K";
    else if(str==".-..")cout<<"L";
    else if(str=="--")cout<<"M";
    else if(str=="-.")cout<<"N";
    else if(str=="---")cout<<"O";
    else if(str==".--.")cout<<"P";
    else if(str=="--.-")cout<<"Q";
    else if(str==".-.")cout<<"R";
    else if(str=="...")cout<<"S";
    else if(str=="-")cout<<"T";
    else if(str=="..-")cout<<"U";
    else if(str=="...-")cout<<"V";
    else if(str==".--")cout<<"W";
    else if(str=="-..-")cout<<"X";
    else if(str=="-.--")cout<<"Y";
    else if(str=="--..")cout<<"Z";
    else if(str=="-----")cout<<"0";
    else if(str==".----")cout<<"1";
    else if(str=="..---")cout<<"2";
    else if(str=="...--")cout<<"3";
    else if(str=="....-")cout<<"4";
    else if(str==".....")cout<<"5";
    else if(str=="-....")cout<<"6";
    else if(str=="--...")cout<<"7";
    else if(str=="---..")cout<<"8";
    else if(str=="----.")cout<<"9";
    else if(str==".-.-.-")cout<<".";
    else if(str=="--..--")cout<<",";
    else if(str=="..--..")cout<<"?";
    else if(str==".----.")cout<<"'";
    else if(str=="-.-.--")cout<<"!";
    else if(str=="-..-.")cout<<"/";
    else if(str=="-.--.")cout<<"(";
    else if(str=="-.--.-")cout<<")";
    else if(str==".-...")cout<<"&";
    else if(str=="---...")cout<<":";
    else if(str=="-.-.-.")cout<<";";
    else if(str=="-...-")cout<<"=";
    else if(str==".-.-.")cout<<"+";
    else if(str=="-....-")cout<<"-";
    else if(str=="..--.-")cout<<"_";
    else if(str==".-..-.")cout<<"\"";
    else if(str==".--.-.")cout<<"@";
}

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

        int tc;
        cin>>tc;
        cin.ignore(1000,'\n');
        for(int j=1;j<=tc;j++){
            string str,dum;
            getline(cin,str);
            cout<<"Message #"<<j<<endl;
            for(int i=0;i<str.size();i++){
                if(str[i]!=' ')dum.pb(str[i]);
                if((str[i]==' ' && str[i-1]!=' ') || i==str.size()-1) {
                    solve(dum);
                    dum.clear();
                }
                else if(str[i]==' ') cout<<" ";
            }
            if(j==tc)cout<<endl;
            else cout<<endl<<endl;
        }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
