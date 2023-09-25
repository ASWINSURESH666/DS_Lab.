#include <iostream>
#include <unordered_map>

int countDuplicates(char arr[], int size) {
    std::unordered_map<char, int> frequencyMap;
    int duplicatesCount = 0;

    for (int i = 0; i < size; i++) {
        frequencyMap[arr[i]]++;
    }

    for (const auto& pair : frequencyMap) {
        if (pair.second > 1) {
            duplicatesCount += pair.second - 1;
        }
    }

    return duplicatesCount;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    char arr[size];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int duplicatesCount = countDuplicates(arr, size);
    std::cout << "The total number of duplicate elements: " << duplicatesCount << std::endl;

    return 0;
}




/* Enter the size of the array: 5
Enter the elements of the array: 1 1 3 2 3
The total number of duplicate elements: 2 */