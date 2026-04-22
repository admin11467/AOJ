#include <iostream>

int main(){
    int n;
    bool cards[4][13] = {};
    char marks[4]{'S','H','C','D'};
    std::cin >> n;

    for(int i=0;i < n;i++){
        char mark;
        int num;
        std::cin >> mark >> num;

        if(mark == marks[0]){
            cards[0][num-1] = true;
        }else if (mark == marks[1]) {
            cards[1][num-1] = true;
        }else if (mark == marks[2]) {
            cards[2][num-1] = true;
        }else if (mark == marks[3]) {
            cards[3][num-1] = true;
        }

    }


    for(int mark = 0;mark < 4;mark++){

        for(int num = 0;num < 13;num++){

            if(cards[mark][num] == false){
                std::cout << marks[mark] << " " << num+1 << std::endl;
            }

        }

    }

    return 0;
}