#include <iostream>   // For input/output operations
#include <string>     // For string manipulation
#include <algorithm>  // For std::reverse
#include <cmath>      // For mathematical functions
#include <ctime>      // For time functions

int main() {
    // String manipulation
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    
    std::cout << "Original string: " << str << std::endl;
    std::reverse(str.begin(), str.end());
    std::cout << "Reversed string: " << str << std::endl;
    std::cout << "Length of the string: " << str.length() << std::endl;

    // Mathematical calculations
    double num = 25.0;
    std::cout << "Square root of " << num << " is " << std::sqrt(num) << std::endl;
    std::cout << "Cosine of " << num << " is " << std::cos(num) << std::endl;

    // Time functions
    std::time_t t = std::time(nullptr);
    std::cout << "Current date and time: " << std::ctime(&t);

    return 0;
}
