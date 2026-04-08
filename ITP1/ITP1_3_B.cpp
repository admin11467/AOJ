#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;

    while (true){

        int a;

        std::cin >> a;
        if (a == 0) {
            break;
        }else {
            v.push_back(a);
        }

    }

    for (int x=0; x < v.size(); x++) {
      std::cout << "Case " << (x+1) << ": " << v[x] << std::endl;
    }

}