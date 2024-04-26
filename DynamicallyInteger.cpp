#include <iostream>
#include <string>

int main() {

    int* dynamicInt = new int;


    std::string* dynamicString = new std::string;

    std::cout << "Enter an integer value: ";
    std::cin >> *dynamicInt;

    std::cout << "Enter a string value: ";
    std::cin.ignore();
    std::getline(std::cin, *dynamicString);


    std::cout << "Dynamically allocated integer value: " << *dynamicInt << std::endl;
    std::cout << "Dynamically allocated string value: " << *dynamicString << std::endl;


    delete dynamicInt;
    delete dynamicString;

    return 0;
}
