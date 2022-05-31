#include <iostream>

// Tools
const int Pen {10};
const int Marker {20};
const int Eraser {30};
const int Rectangle {40};
const int Circle {50};
const int Ellipse {60};

int main() {

    int tool {Eraser};

    switch (double strength {3.56}; tool) {
        case Pen: {
            std::cout << "Active tool is pen. Strength: " << strength << std::endl;
        } break;

        case Marker: {
            std::cout << "Active tool is Marker. Strength: " << strength << std::endl;
        } break;

        case Eraser: {
            std::cout << "Active tool is Eraser. Strength: " << strength << std::endl;
        } break;

        case Rectangle: {
            std::cout << "Active tool is Rectangle. Strength: " << strength << std::endl;
        } break;

        case Circle : {
            std::cout << "Active tool is Circle. Strength: " << strength << std::endl;
        } break;

        case Ellipse : {
            std::cout << "Active tool is Ellipse. Strength: " << strength << std::endl;
        } break;

        default : {
            std::cout << "Can't match any tool. Strength: " << strength << std::endl;
        } break;

    }

    // strength is outside of scope, only in switch block
    // std::cout << "Strength: " << strength << std::endl;

    std::cout << "Moving on" << std::endl;

    return 0;
}