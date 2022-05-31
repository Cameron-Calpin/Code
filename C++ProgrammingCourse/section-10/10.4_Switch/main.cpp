#include <iostream>

// Tools
const int Pen {10};
const int Marker {20};
const int Eraser {30};
const int Rectangle {40};
const int Circle {50};
const int Ellipse {60};

int main() {

    /*
       If break statement is removed from all cases, you'll get this:
       Active tool is Eraser
       Active tool is Rectangle
       Active tool is Circle
       Active tool is Ellipse
       Can't match any tool
       Moving on
    */
    
    int tool {Eraser};

    switch (tool) {
        case Pen: {
            std::cout << "Active tool is pen" << std::endl;
        } break;

        case Marker: {
            std::cout << "Active tool is Marker" << std::endl;
        } break;

        case Eraser: {
            std::cout << "Active tool is Eraser" << std::endl;
        } break;

        case Rectangle: {
            std::cout << "Active tool is Rectangle" << std::endl;
        } break;

        case Circle : {
            std::cout << "Active tool is Circle" << std::endl;
        } break;

        case Ellipse : {
            std::cout << "Active tool is Ellipse" << std::endl;
        } break;

        default : {
            std::cout << "Can't match any tool" << std::endl;
        } break;

        std::cout << "Moving on" << std::endl;
    }

    // Group together statements (Eraser, Rectangle, Circle)
    switch (tool) {
        case Pen: {
            std::cout << "Active tool is pen" << std::endl;
        } break;

        case Marker: {
            std::cout << "Active tool is Marker" << std::endl;
        } break;

        case Eraser:
        case Rectangle:
        case Circle : {
            std::cout << "Drawing Shapes" << std::endl;
        } break;

        case Ellipse : {
            std::cout << "Active tool is Ellipse" << std::endl;
        } break;

        default : {
            std::cout << "Can't match any tool" << std::endl;
        } break;

        std::cout << "Moving on" << std::endl;
    }

    // Note: Won't compile if switch statemtn is a string type
    // std::string name {"John"};
    // switch (name) {
    // }

    return 0;
}