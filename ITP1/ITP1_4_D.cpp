#include <iostream>

int main(){
    int n,max,min;
    long long sum=0;
    std::cin >> n;
    int arr[n];

    for(int i = 0;i < n;i++){
        std::cin >> arr[i];
    }

    min = arr[0];
    max = arr[0];

    for(int i = 0;i < n;i++){
        if(arr[i] > max){
            max = arr[i];
        }

    }

    for(int i = 0;i < n;i++){

        if(arr[i] < min){
            min = arr[i];
        }
    }

    for(int i = 0;i < n;i++){
        sum = sum + arr[i];
    }

    std::cout << min << " " << max << " " << sum << std::endl;

}