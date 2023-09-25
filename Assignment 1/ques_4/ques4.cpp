#include <iostream>

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);
    }
    std::cout << n % 2;
}

int main() {
    int decimalNumber = 23;
    std::cout << "Binary representation of " << decimalNumber << ": ";
    decimalToBinary(decimalNumber);
    std::cout << std::endl;
    return 0;
}


/* Binary representation of 23: 10111 */