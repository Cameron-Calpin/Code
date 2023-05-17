/*
    There's a medical treatment that is only applicable if your age is
    between 21 and 39 inclusive (21 and 39 are included in the range). 
    Your task as a C++ developer is to write a program that prompts 
    the user to type in their age. The program is then going to check 
    if the age is within the valid range. If within the range the program 
    will print a message "You are eligible for the treatment". If not 
    within the range you'll print out a message saying they are either 
    too old or too young for the treatment.
    No logical operators like &&, || are allowed in the program.
*/
#include <iostream>

int main() {

    int age;
    bool eligible = false;
    std::string age_adj;

    std::cout << "Please type in your age: " << std::endl;
    std::cin >> age;

    if (age >= 21) {
        if (age <= 39) {
            eligible = true;
        } else {
            age_adj = "old";
        }
    } else {
        age_adj = "young";
    }

    if (eligible) {
        std::cout << "You are eligible for the treatment" << std::endl;
    } else {
        std::cout << "Sorry you are too " << age_adj << " for the treatment" << std::endl;
    }

    return 0;
}