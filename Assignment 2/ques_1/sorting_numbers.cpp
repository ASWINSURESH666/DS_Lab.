#include <iostream>
#include <vector>

void bubbleSort(std::vector<double>& arr) {
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                // Swap arr[i] and arr[i + 1]
                double temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }
    } while (swapped);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    bubbleSort(arr);

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    
    std::cout << std::endl;

    return 0;
}
//comment 