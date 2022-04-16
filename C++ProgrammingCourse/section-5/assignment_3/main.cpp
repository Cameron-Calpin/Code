#include <iostream>

int main() { 
    std::cout << "Welcome to box calculator."
    << "Please type in length, width and height information : " << std::endl;

    float length;
    float width;
    float height;   

    std::cout << "length : ";
    std::cin >> length;

    std::cout << "width : ";
    std::cin >> width;

    std::cout << "height : ";
    std::cin >> height;

    float base_area = length * width;
    std::cout << "The base area is : " << base_area << std::endl;;

    float volume = base_area * height;
    std::cout << "The volume is : " << volume << std::endl;

    return 0;

}