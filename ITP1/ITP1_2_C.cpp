#include <array>
#include <iostream>

int main() {
    int temp;
    std::array<int,3> Ary {};

    std::cin >> Ary[0] >> Ary[1] >> Ary[2];

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 2; j++) {
            if (Ary[j] > Ary[j+1]) {
                temp = Ary[j];
                Ary[j] = Ary[j+1];
                Ary[j+1] = temp;
            }
        }

    }

    std::cout << Ary[0] << " " << Ary[1] << " " << Ary[2] << std::endl;

}