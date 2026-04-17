#include <iostream>
#include <string>
#include <vector>

int main(){
    int a,b;
    std::vector<int> result;
    std::string op;

    while (true) {

        std::cin >> a >> op >> b;

        if(op == "+"){
            result.push_back(a + b);
        }

        if(op == "-"){
            result.push_back(a - b);
        }

        if(op == "*"){
            result.push_back(a * b);
        }

        if(op == "/"){
            result.push_back(a / b);
        }

        if(op == "?"){
            break;
        }
    
    }

    for(std::size_t i = 0;i < result.size(); i++){
        std::cout << result[i] << std::endl;
    }
    
}