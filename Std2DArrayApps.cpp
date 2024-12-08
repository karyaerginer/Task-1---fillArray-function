#include "Std2DArrays.h"
#include <iostream>

int main() {
    int array[10][10];
    int rows = 3, cols = 4;

    fillArray(rows, cols, array);
    std::cout << "Filled Array:" << std::endl;
    printArray(rows, cols, array);

    return 0;
}
