#include <iostream>

void mergeArrays(int arr1[], int arr2[], int size, int result[]) {
    int pointer1 = size - 1;
    int pointer2 = size - 1;
    int resultIndex = size * 2 - 1;

    while (pointer1 >= 0 && pointer2 >= 0) {
        if (arr1[pointer1] > arr2[pointer2]) {
            result[resultIndex] = arr1[pointer1];
            pointer1--;
        } else {
            result[resultIndex] = arr2[pointer2];
            pointer2--;
        }
        resultIndex--;
    }

    // Copy the remaining elements from arr1, if any
    while (pointer1 >= 0) {
        result[resultIndex] = arr1[pointer1];
        pointer1--;
        resultIndex--;
    }

    // Copy the remaining elements from arr2, if any
    while (pointer2 >= 0) {
        result[resultIndex] = arr2[pointer2];
        pointer2--;
        resultIndex--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size;
    std::cout << "Enter the size of the arrays: ";
    std::cin >> size;

    int arr1[size];
    int arr2[size];
    int result[size * 2];

    std::cout << "Enter the elements of the first array in sorted order: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr1[i];
    }

    std::cout << "Enter the elements of the second array in sorted order: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr2[i];
    }

    mergeArrays(arr1, arr2, size, result);

    std::cout << "Merged Array in Reverse Order: ";
    printArray(result, size * 2);

    return 0;
}


/* Enter the size of the arrays: 4
Enter the elements of the first array in sorted order: 1 3 5 7
Enter the elements of the second array in sorted order: 2 4 6 8
Merged Array in Reverse Order: 1 2 3 4 5 6 7 8  */