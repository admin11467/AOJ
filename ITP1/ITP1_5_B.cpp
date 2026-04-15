#include <iostream>
#include <vector>

int main(){
    std::vector<int> h,w;

    while (true) {
        int hcin,wcin;
        std::cin >> hcin >> wcin;
        
        if (hcin == 0 && wcin == 0){
            break;
        } else {
            h.push_back(hcin);
            w.push_back(wcin);
        }

    }


    for (size_t x =0; x < h.size(); x++){

        for(int hi = 0; hi < h[x]; hi++){

            for(int wi =0; wi < w[x]; wi++){

                if(hi == 0 || hi == h[x]-1){
                    std::cout << "#"; 
                }else if (wi == 0 || wi == w[x]-1){
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