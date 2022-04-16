#include <iostream>
#include <bitset>

int main() {

    unsigned short int value {0xff0u};

    std::cout << "Size of short int " << sizeof(short int) << std::endl; // 16 bits

    std::cout << "value : " << std::bitset<16>(value)
    << ", dec : " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);

    std::cout << "value : " << std::bitset<16>(value)
    << ", dec : " << value << std::endl;

    // Shift left by one bit, again
    value = static_cast<unsigned short int>(value << 1);

    std::cout << "value : " << std::bitset<16>(value)
    << ", dec : " << value << std::endl;

    // Shift left by one bit, again
    value = static_cast<unsigned short int>(value << 1);

    std::cout << "value : " << std::bitset<16>(value)
    << ", dec : " << value << std::endl;

    // Shift left by one bit, again
    value = static_cast<unsigned short int>(value << 1);

    std::cout << "value : " << std::bitset<16>(value)
    << ", dec : " << value << std::endl;

    // Shift left by one bit, again
    value = static_cast<unsigned short int>(value << 1);

    std::cout << "value : " << std::bitset<16>(value)
    << ", dec : " << value << std::endl;

    // Shift right by one bit
    value = static_cast<unsigned short int>(value >> 1);

    std::cout << "value : " << std::bitset<16>(value)
    << ", dec : " << value << std::endl;

     // Shift right by four bits
     // number divided by 2^n. So 32,512 / 16 = 2,032
    value = static_cast<unsigned short int>(value >> 4);

    std::cout << "value : " << std::bitset<16>(value)
    << ", dec : " << value << std::endl;

    // You can also wrap bit shift operator in cout statement.
    std::cout << "value : " << (value >> 1) << std::endl;

    return 0;
}