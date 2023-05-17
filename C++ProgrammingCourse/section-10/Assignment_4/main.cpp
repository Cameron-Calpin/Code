/*
    Determine if number (entered by user) is even or odd.
*/
#include <iostream>

int main() {

    int value;
    bool isEven;

    std::cout << "Please type in an integral value : " << std::endl;
    std::cin >> value;

    isEven = value % 2 == 0 ? true : false;

    if (isEven) {
        std::cout << value << " is even" << std::endl;
    } else {
        std::cout << value << " is odd" << std::endl;
    }

    return 0;
}