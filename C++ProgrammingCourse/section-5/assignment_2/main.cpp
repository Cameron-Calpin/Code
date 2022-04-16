#include <iostream>

int main() {
    
    std::cout << "Please enter a degree value in Celsius : " << std::endl;

    double celsius;
    std::cin >> celsius;

    double celsius_to_fahrenheit = (9.0 / 5.0) * celsius + 32.0;
    std::cout << celsius << " Celsius is " << celsius_to_fahrenheit << " Fahrenheit" << std::endl;

    return 0;
}