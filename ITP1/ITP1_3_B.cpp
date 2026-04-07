#include <iostream>
#include <vector>

int main() {
    int i =0;
    bool flag = false;
    std::vector<int> v;

    while (true){

        int a;

        std::cin >> a;
        if (a == 0) {
            flag = true;
        }else {
            v.push_back(a);
        }

        if (flag == true) {
            break;
        }

        i++;

    }

    for (int x=0; x < v.size(); x++) {
      std::cout << "Case " << (x+1) << ": " << v[x] << std::endl;
    }

}