#include <iostream>
#include <queue>

int findKthLargest(int arr[], int size, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

    for (int i = 0; i < size; i++) {
        if (pq.size() < k) {
            pq.push(arr[i]);
        } else {
            if (arr[i] > pq.top()) {
                pq.pop();
                pq.push(arr[i]);
            }
        }
    }

    return pq.top();
}

int main() {
    int size, k;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    int arr[size];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int kthLargest = findKthLargest(arr, size, k);
    std::cout << "The " << k << "-th largest element is: " << kthLargest << std::endl;

    return 0;
}


/* Enter the size of the array: 6
Enter the value of k: 4
Enter the elements of the array: 2 5 7 3 8 1
The 4-th largest element is: 3 */