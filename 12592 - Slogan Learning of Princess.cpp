#include<iostream>
#include<string>
#include<vector>

int main()
{
    int i,t;
    std::cin>>t;
    std::cin.ignore();
    t*=2;
    std::vector<std::string>vec;
    std::string x;
    while(t--){
        std::getline(std::cin,x);
        vec.push_back(x);
    }
    std::cin>>t;
    std::cin.ignore();
    while(t--){
        std::getline(std::cin,x);
        for(i=0;i<vec.size();i++){
            if(vec[i]==x){
                std::cout<<vec[i+1]<<std::endl;
            }
        }
    }
}
