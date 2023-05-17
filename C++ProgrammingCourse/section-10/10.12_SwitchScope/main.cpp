#include <iostream>

int main() {

    int condition {0};

    switch (condition) {

        // int x {9}; // Never going to run
        int x;
        case 0:
            // int y {5}; // Won't compile; if case isn't hit, var y never initialized
            int y;
            x = 6;
            x++;
            // z = 6; // Won't compile; z not declared or initialized yet
            std::cout << "x : " << x << std::endl;
            std::cout << "Statement1" << std::endl;
            std::cout << "Statement2" << std::endl;
            break;

        case 1: {
            // nested case
            // variables defined or initialized here can't be used in other cases
            int j {10};
        }

        case 2:
            int z;
            y = 5;
            // j = 7; // j is in nested case; compile error
            std::cout << "y : " << y << std::endl;
            std::cout << "Statement3" << std::endl;
            std::cout << "Statement4" << std::endl;
            break;

        default:
            int u;
            z = 10;
            std::cout << "Statement5" << std::endl;
            std::cout << "Statement6" << std::endl;
            break;
    
    }

    std::cout << "Moving on" << std::endl;

    return 0;
}