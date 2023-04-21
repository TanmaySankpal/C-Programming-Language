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

/*In this program, we create a string text that contains the sentence "The quick brown fox jumps over the lazy dog." 
We also create a regular expression word_regex that searches for the word "fox".

We then use the std::regex_search function to search for the pattern defined by word_regex within the text string. 
If the pattern is found, the program outputs the message "The word 'fox' was found in the text." 
If the pattern is not found, the program outputs the message "The word 'fox' was not found in the text."

Note that we need to include the <regex> header in order to use the regex library in C++.*/