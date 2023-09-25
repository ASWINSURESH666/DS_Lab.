#include <iostream>
#include <string>

bool isPalindrome(const std::string& str, int start, int end) {
    if (start >= end) {
        return true;
    } else if (str[start] != str[end]) {
        return false;
    } else {
        return isPalindrome(str, start + 1, end - 1);
    }
}

bool isPalindrome(const std::string& str) {
    int start = 0;
    int end = str.length() - 1;
    return isPalindrome(str, start, end);
}

int main() {
    std::string str = "malayalam";
    if (isPalindrome(str)) {
        std::cout << str << " is a palindrome." << std::endl;
    } else {
        std::cout << str << " is not a palindrome." << std::endl;
    }
    return 0;
}



/* malayalam is a palindrome. */