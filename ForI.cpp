#include <iostream>

int main(){
    int n = 6;

    for (int i = 1; i < n; i++){
        for (int j = 1; j < n; j++){
            if(i + j == n){
                std::cout << i << " " << j << std::endl;
            }
        }
    }
    return 0;
}

