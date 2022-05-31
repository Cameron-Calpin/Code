#include <iostream>

bool car() {
    std::cout << "car function running" << std::endl;
    return true;
}

bool house() {
    std::cout << "house function running" << std::endl;
    return false;
}

bool job() {
    std::cout << "job function running" << std::endl;
    return true;
}

bool spouse() {
    std::cout << "spouse function running" << std::endl;
    return true;
}


int main() {
    
    /*
    bool a {true};
    bool b {true};
    bool c {true};
    bool d {false};

    bool p {false};
    bool q {false};
    bool r {false};
    bool m {true};

    // AND: If one of the operands is 0, the result is 0
    std::cout << std::endl;
    std::cout << "AND short circuit" << std::endl;
    bool result = a && b && c && d;
    std::cout << "result: " << std::boolalpha << result << std::endl;

    // OR: If one of the operands is 1, the result is 1
    std::cout << std::endl;
    std::cout << "OR short circuit" << std::endl;
    result = p || q || r || m;
    std::cout << "result: " << std::boolalpha << result << std::endl; 
    */

   /* 
      If one of the function returns false, the rest of
      the functions won't print out their statement.
      If house false, you'll get:
      car function running
      house function running
      I am sad
    */
   if (car() && house() && job() && spouse()) {
       std::cout << "I am happy" << std::endl;
   }
   else {
       std::cout << "I am sad" << std::endl;
   }

   if (car() || house() || job() || spouse()) {
       std::cout << "I am happy" << std::endl;
   }
   else {
       std::cout << "I am sad" << std::endl;
   }

    return 0;
}