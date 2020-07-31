#include<iostream>
using namespace std;

int counter(int n){
    int co=1;
    while(1){
        if(n==1){
            return co;
        }
        else if(n%2!=0){
            n=3*n+1;
        }
        else{
            n/=2;
        }
        co++;
    }
}

int main()
{
    int a,b,x,maxim,p,q;
    while(cin>>a>>b){
        maxim =0;
        if(b<a){
            p = b;
            q = a;
        }
        else{
            p = a;
            q = b;
        }
        for(int i=p;i<=q;i++){
            x = counter(i);
            if(maxim<x){
                maxim = x;
            }
        }
        cout<<a<<" "<<b<<" "<<maxim<<endl;
    }
}
