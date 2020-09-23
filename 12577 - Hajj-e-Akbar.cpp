#include<iostream>
#include<string>

int main()
{
    std::string n;
    long long int i;
    for(i=1;std::cin>>n && n!="*";i++){
        (n=="Hajj")?
            std::cout<<"Case "<<i<<": Hajj-e-Akbar"<<std::endl:
            std::cout<<"Case "<<i<<": Hajj-e-Asghar"<<std::endl;
    }
}
