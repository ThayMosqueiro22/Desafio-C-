#include <iostream>

int main() {
    double number;
    std::cin >> number;

    while (number >= 3.5) {
        number /= 2;
    }

    std::cout << number << std::endl;
    return 0;
}