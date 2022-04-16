#include <iostream>
#include <bitset>

int main() {
    
    unsigned short int data {0b11111110};
    std::cout << "data (dec) : " << std::dec << data << std::endl;
    std::cout << "data (oct) : " << std::oct << std::showbase << data << std::endl;
    std::cout << "data (hex) : " << std::hex << std::showbase << data << std::endl;
    std::cout << "data (bin) : " << std::bitset<16>(data) << std::endl;

    return 0;
}