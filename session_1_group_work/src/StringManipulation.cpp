#include "StringManipulation.h"

std::string StringManipulator::Reverse(const std::string& input) {
    std::string reversed = input;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

std::string StringManipulator::ToUpperCase(const std::string& input) {
    std::string uppercased = input;
    std::transform(uppercased.begin(), uppercased.end(), uppercased.begin(), ::toupper);
    return uppercased;
}

bool StringManipulator::IsPalindrome(const std::string& input) {
    std::string reversed = Reverse(input);
    return reversed == input;
}
