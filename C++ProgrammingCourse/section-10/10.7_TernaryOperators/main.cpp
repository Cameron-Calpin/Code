#include <iostream>

int main() {

    int max {};

    int a {35};
    int b {333};

    std::cout << std::endl;
    std::cout << "using regular if " << std::endl;

    // if (a > b) {
    //     max = a;
    // } else {
    //     max = b;
    // }

    max = (a > b) ? a : b; // Ternary operator
    auto max1 = (a > b) ? a : 22.5f; // Ternary operator

    std::cout << "max : " << max << std::endl;
    std::cout << "max1 : " << max1 << std::endl;

    return 0;
}