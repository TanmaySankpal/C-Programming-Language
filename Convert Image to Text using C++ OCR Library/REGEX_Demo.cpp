//simple C++ program that uses regex to search for a specific word within a string

#include <iostream>
#include <regex>

int main() {
    std::string text = "The quick brown fox jumps over the lazy dog.";
    std::regex word_regex("fox");

    if (std::regex_search(text, word_regex)) {
        std::cout << "The word 'fox' was found in the text." << std::endl;
    }
    else {
        std::cout << "The word 'fox' was not found in the text." << std::endl;
    }

    return 0;
}
