#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    while(n--){
        int a,b;
        std::cin>>a>>b;
        if(a<b){
            std::cout<<'<'<<std::endl;
        }
        else if(a>b){
            std::cout<<'>'<<std::endl;
        }
        else{
            std::cout<<'='<<std::endl;
        }
    }
}
