#include<iostream>
#include<math.h>
#include<iomanip>

int main()
{
    int n;
    std::cin>>n;
    while(n--){
        int l;
        double r ,w ,area,green_area,red_area,pi = std::acos(-1.0);
        std::cin>>l;
        w = (6.0 * (double)l)/10.0;
        r = (2.0 * (double)l)/10.0;
        area = (double)l * w;
        red_area = pi*r*r;
        green_area = area - red_area;
        std::cout<<std::fixed<<std::setprecision(2)<<red_area<<" "<<green_area<<std::endl;
    }
}
