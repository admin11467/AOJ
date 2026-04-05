#include <iostream>

int main() {
    int W,H,x,y,r;
    bool flag = true;
    std::cin >> W >> H >> x >> y >> r;

    if (x-r  < 0 || x+r > W) {
        flag = false;
    }

    if (y-r < 0 || y+r > H) {
        flag = false;
    }

    if (flag == true) {
        std::cout << "Yes"<< std::endl;
    }else{
        std::cout << "No"<< std::endl;
    }

}