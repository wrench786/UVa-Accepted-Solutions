#include<bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define i64 long long
#define PI (acos(-1.0))
#define LIMIT 1000000007
using namespace std;


int main()
{
    wrench786

    set<string>strin;
    string str,dum;
    int i;
    while(std::cin>>str){
        dum = "";
        for(i=0;i<str.size();i++){
            if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122){
                if(str[i]>=65 && str[i]<=90){
                    str[i]+=32;
                }
                dum+=str[i];
                if(i==str.size()-1 && dum!=""){
                    strin.insert(dum);
                    dum = "";
                }
            }
            else{
                if(dum!=""){
                    strin.insert(dum);
                }
                dum = "";
            }
        }
    }
    set<string>::iterator it;
    for(it = strin.begin();it!=strin.end();it++){
        cout<<*it<<endl;
    }
}
