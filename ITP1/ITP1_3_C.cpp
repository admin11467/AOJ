#include <iostream>
#include <vector>

int main() {
    std::vector<int> vx,vy;

    while (true){

        int x,y,temp;

        std::cin >> x >> y;
        if (x == 0 && y == 0) {
            break;
        }else {

            if (x > y) {
                temp = x;
                x = y;
                y = temp;
            }

            vx.push_back(x);
            vy.push_back(y);
        }

    }

    for (int x=0; x < vx.size(); x++) {
        std::cout << vx[x] << " " << vy[x] << std::endl;
    }

}