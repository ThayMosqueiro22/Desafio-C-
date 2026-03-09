#include <iostream>

int main (){
    int sum = 0;
    int number = 1;
     
    do {
        sum += number;
        number +=2;
        std::cout<<"Sum is: "<<sum<<std::endl;
        std::cout<<"Num is: "<<number<<std::endl;
        }while (number <= 50);

        std::cout<<"Final Sum : "<<sum<<std::endl;
        return 0;
}