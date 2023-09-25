#include <iostream>

int digitSum(int n) {
    if (n < 10) {
        return n;
    } else {
        return n % 10 + digitSum(n / 10);
    }
}

int main() {
    int number = 12345;
    int sum = digitSum(number);
    std::cout << "The sum of the digits of " << number << " is " << sum << std::endl;
    return 0;
}


/* The sum of the digits of 12345 is 15 */