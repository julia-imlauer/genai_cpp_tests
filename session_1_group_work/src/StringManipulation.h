#ifndef STRING_MANIPULATOR_H
#define STRING_MANIPULATOR_H

#include <string>
#include <algorithm>

class StringManipulator {
public:
    // Reverses the given string
    std::string Reverse(const std::string& input);

    // Converts the string to uppercase
    std::string ToUpperCase(const std::string& input);

    // Checks if the string is a palindrome
    bool IsPalindrome(const std::string& input);
};

#endif // STRING_MANIPULATOR_H
