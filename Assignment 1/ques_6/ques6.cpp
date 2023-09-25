#include <iostream>
#include <vector>

void readMatrix(std::vector<std::vector<int>>& matrix, int m, int n) {
    std::cout << "Enter the matrix elements (" << m << " rows x " << n << " columns):\n";
    for (int i = 0; i < m; i++) {
        std::vector<int> row;
        for (int j = 0; j < n; j++) {
            int element;
            std::cin >> element;
            row.push_back(element);
        }
        matrix.push_back(row);
    }
}

void printMatrix(const std::vector<std::vector<int>>& matrix) {
    std::cout << "Matrix:\n";
    for (const auto& row : matrix) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << "\n";
    }
}

void calculateRowSum(const std::vector<std::vector<int>>& matrix, std::vector<int>& rowSums) {
    for (const auto& row : matrix) {
        int sum = 0;
        for (int element : row) {
            sum += element;
        }
        rowSums.push_back(sum);
    }
}

void calculateColumnSum(const std::vector<std::vector<int>>& matrix, std::vector<int>& colSums) {
    int n = matrix[0].size();  
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (const auto& row : matrix) {
            sum += row[j];
        }
        colSums.push_back(sum);
    }
}

int getMaxIndex(const std::vector<int>& arr) {
    int maxIndex = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    int m, n;
    std::cout << "Enter the number of rows (m): ";
    std::cin >> m;
    std::cout << "Enter the number of columns (n): ";
    std::cin >> n;

    std::vector<std::vector<int>> matrix;
    readMatrix(matrix, m, n);

    printMatrix(matrix);

    std::vector<int> rowSums;
    calculateRowSum(matrix, rowSums);

    std::vector<int> colSums;
    calculateColumnSum(matrix, colSums);

    std::cout << "Row sums: ";
    for (int sum : rowSums) {
        std::cout << sum << " ";
    }
    std::cout << "\n";

    std::cout << "Column sums: ";
    for (int sum : colSums) {
        std::cout << sum << " ";
    }
    std::cout << "\n";

    int maxRowIndex = getMaxIndex(rowSums);
    int maxColIndex = getMaxIndex(colSums);
    std::cout << "Row with the largest sum: " << maxRowIndex + 1 << "\n";
    std::cout << "Column with the largest sum: " << maxColIndex + 1 << "\n";

    return 0;
}



/* Enter the number of rows (m): 2
Enter the number of columns (n): 3
Enter the matrix elements (2 rows x 3 columns):
2
3
4
5
6
7
Matrix:
2 3 4 
5 6 7 
Row sums: 9 18 
Column sums: 7 9 11 
Row with the largest sum: 2
Column with the largest sum: 3 */