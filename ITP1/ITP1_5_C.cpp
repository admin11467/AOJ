#include <iostream>
#include <vector>

int main(){
    std::vector<int> h,w;

    while (true) {
        int hcin,wcin;
        std::cin >> hcin >> wcin;

        if(hcin == 0 && wcin == 0){
            break;
        }else {
            h.push_back(hcin);
            w.push_back(wcin);
        }
    }

    for(size_t i = 0;i < h.size();i++){

        for(int hi =0;hi < h[i];hi++){

            for(int wi = 0;wi < w[i];wi++){

                if((wi+hi)%2 == 0){
                    std::cout << "#";
                }else{
                    std::cout << ".";
                }

            }

            std::cout << std::endl;

        }

        std::cout << std::endl;

    }
    
}