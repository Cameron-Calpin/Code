#include <iostream>

consteval int get_value() {
    return 3;
}

int main() {
    std::cout << "Hello World!" << std::endl; 

    std::cout << "Number1" << std::endl;
    std::cout << "Number2" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << "Hello " << i << std::endl;
    }
    return 0;
}