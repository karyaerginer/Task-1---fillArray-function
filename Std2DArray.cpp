#include "Std2DArrays.h"
#include <iostream>

void fillArray(int rows, int cols, int array[10][10]) {
    int num = 1;
    for (int col = cols - 1; col >= 0; --col) {
        for (int i = 0, j = col; j < cols && i < rows; ++i, ++j) {
            array[i][j] = num++;
        }
    }
    for (int row = 1; row < rows; ++row) {
        for (int i = row, j = 0; i < rows && j < cols; ++i, ++j) {
            array[i][j] = num++;
        }
    }
}

void printArray(int rows, int cols, int array[10][10]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
