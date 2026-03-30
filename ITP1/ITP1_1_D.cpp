#include <iostream>

int main() {
    int S,h,m,s;
    std::cin >> S;

    h = S/3600;
    S = S - (h*3600);

    m = S/60;
    S = S - (m*60);

    std::cout << h << ":" << m << ":" << S << std::endl;
}