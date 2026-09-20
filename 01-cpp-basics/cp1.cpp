#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello";
    std::string str2 = " world!";
    
    // Concatenating strings using the + operator
    std::string result = str1 + str2;

    // Output the concatenated string
    std::cout << "Concatenated string: " << result << std::endl;

    return 0;
}

