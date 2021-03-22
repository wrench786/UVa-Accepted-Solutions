#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string str){
	string str1 = "4567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./$%^&*()_+QWERTYUIOP{}ASDFGHJKL:\"ZXCVBNM<>?";
	string str2 = "qjlmfp/[]456.orsuyb;=789aehtdck-0zx,inwvg'QJLMFP?{}$%^>ORSUYB:+&*(AEHTDCK_)ZX<INWVG\"";
	int i,j;
	char ch;
	for(i=0;i<str.size();i++){
		ch = str[i];
		for(j=0;j<str1.size();j++){
			if(ch == str1[j]){
				ch = str2[j];
				break;
			}
		}
		cout<<ch;
	}
}
int main(){
    string str;
    while(getline(cin,str)){
    	solve(str);
    	cout<<endl;
    }
}
