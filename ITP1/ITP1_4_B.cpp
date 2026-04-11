#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double r,a,b;
    const double PI = std::acos(-1);
    std::cin >> r;

    a = 1.0*(r*r*PI);
    b = 1.0*((r+r)*PI);

    std::cout << std::fixed << std::setprecision(6) << a << " " << b << std::endl;
}