#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a;

    for(int i = 0;i < n;i++){    
        int temp;
        std::cin >> temp;
        a.push_back(temp);
    }

    for(size_t i = a.size();i > 0;i = i - 1){
        std::cout << a[i-1];
        if (i != 1){std::cout << " ";}
    }
    std::cout << std::endl;

}