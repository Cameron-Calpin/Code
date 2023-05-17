#include <iostream>

int main() {

    int condition {-5};

    // This will not translate condition to boolean
    // std::cout << std::boolalpha;

    // This will translate condition to boolean
    bool bool_condition = condition;
    std::cout << std::boolalpha;

    if (condition) {
        std::cout << "We have a " << bool_condition << " in our variable " << std::endl; // different from 0
    } else {
        std::cout << "We have " << bool_condition << " in our variable" << std::endl; // zero
    }

    return 0;
}