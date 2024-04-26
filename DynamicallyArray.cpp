#include <iostream>

int main() {
    int rows, cols;


    do {
        std::cout << "Enter the number of rows and columns (max 3 each): ";
        std::cin >> rows >> cols;
    } while (rows <= 0 || rows > 3 || cols <= 0 || cols > 3);


    double** arr = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[cols]();
    }


    std::cout << "Enter values for the array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter value for element [" << i << "][" << j << "]: ";
            std::cin >> arr[i][j];
        }
    }


    std::cout << "Values of the array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }


    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
