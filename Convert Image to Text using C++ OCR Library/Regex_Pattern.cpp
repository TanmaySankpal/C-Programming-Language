//C++ program that prompts the user to enter a string, and then uses regex to search for a specific pattern within the string

#include <iostream>
#include <regex>

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);

    std::regex pattern_regex("\\d{3}-\\d{2}-\\d{4}");

    if (std::regex_search(text, pattern_regex)) {
        std::cout << "The pattern '###-##-####' was found in the text." << std::endl;
    }
    else {
        std::cout << "The pattern '###-##-####' was not found in the text." << std::endl;
    }

    return 0;
}
