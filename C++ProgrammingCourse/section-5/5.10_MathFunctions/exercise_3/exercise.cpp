#include "exercise.h"
#include <iostream>
#include <cmath>

double hexagon_area(){
    
    double hex_area = 6.7;
    //Your code will go above this line
    hex_area = ((3 * std::sqrt(3)) / 2) * std::pow(hex_area, 2);
    
    return hex_area;
}

int main() {
    double hexagon_area_result = hexagon_area();
    std::cout << "The result is : " << hexagon_area_result << std::endl;

    return 0;
}