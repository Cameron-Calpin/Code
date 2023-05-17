#include <iostream>

int main() {

    // int speed {10};

    bool go {true};

    // if (go) {
    //     std::cout << "speed: " << speed << std::endl;

    //     if (speed > 5) {
    //         std::cout << "Slow down!" << std::endl;
    //     } else {
    //         std::cout << "All good!" << std::endl;
    //     }
    // } else {
    //     std::cout << "speed : " << speed << std::endl;
    //     std::cout << "Stop" << std::endl;
    // }

    if (int speed {10}; go) {
        std::cout << "speed: " << speed << std::endl;

        if (speed > 5) {
            std::cout << "Slow down!" << std::endl;
        } else {
            std::cout << "All good!" << std::endl;
        }
    } else {
        std::cout << "speed : " << speed << std::endl;
        std::cout << "Stop" << std::endl;
    }

    // std::cout << "Out of the if block , speed: " << speed << std::endl;

    return 0;
}