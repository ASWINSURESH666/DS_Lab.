#include <iostream>

void read_arr(int arr[], int n) {
    std::cout << "Enter " << n << " integer elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
}

void print_arr(const int arr[], int n) {
    std::cout << "Elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

bool search_arr(const int arr[], int n, int elem) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == elem) {
            return true;
        }
    }
    return false;
}

int get_max(const int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int get_min(const int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[100];
    int n, option, elem;

    do {
        std::cout << "\nMenu\n";
        std::cout << "1. Read array elements\n";
        std::cout << "2. Print array elements\n";
        std::cout << "3. Search an element\n";
        std::cout << "4. Find the largest and smallest element\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice (1-5): ";
        std::cin >> option;

        switch (option) {
            case 1:
                std::cout << "Enter the size of the array (<=100): ";
                std::cin >> n;
                read_arr(arr, n);
                break;
            case 2:
                print_arr(arr, n);
                break;
            case 3:
                std::cout << "Enter the element to search: ";
                std::cin >> elem;
                if (search_arr(arr, n, elem)) {
                    std::cout << "FOUND" << std::endl;
                } else {
                    std::cout << "SORRY" << std::endl;
                }
                break;
            case 4:
                std::cout << "Largest element: " << get_max(arr, n) << std::endl;
                std::cout << "Smallest element: " << get_min(arr, n) << std::endl;
                break;
            case 5:
                std::cout << "Program Successfully Exitted...(yay!!!)" << std::endl;
                break;
            default:
                std::cout << "Invalid option! Please try again." << std::endl;
        }
    } while (option != 5);

    return 0;
}


/* Menu
1. Read array elements
2. Print array elements
3. Search an element
4. Find the largest and smallest element
5. Exit
Enter your choice (1-5): 1
Enter the size of the array (<=100): 5
Enter 5 integer elements of the array: 1 2 3 4 5
Menu
1. Read array elements
2. Print array elements
3. Search an element
4. Find the largest and smallest element
5. Exit
Enter your choice (1-5): 2
Elements of the array: 1 2 3 4 5 

Menu
1. Read array elements
2. Print array elements
3. Search an element
4. Find the largest and smallest element
5. Exit
Enter your choice (1-5): 3
Enter the element to search: 4
FOUND

Menu
1. Read array elements
2. Print array elements
3. Search an element
4. Find the largest and smallest element
5. Exit
Enter your choice (1-5): 3
Enter the element to search: 7
SORRY

Menu
1. Read array elements
2. Print array elements
3. Search an element
4. Find the largest and smallest element
5. Exit
Enter your choice (1-5): 4
Largest element: 5
Smallest element: 1

Menu
1. Read array elements
2. Print array elements
3. Search an element
4. Find the largest and smallest element
5. Exit
Enter your choice (1-5): 5
Program Successfully Exitted...(yay!!!)
 */