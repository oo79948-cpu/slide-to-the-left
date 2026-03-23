#include <iostream>

#include "src/slide.hpp"

int main() {
    int array[] = {1, 2, 3, 4, 5};
    arrayShift(array, 5, 1);
    arrayShift(array, 5, 1);
    arrayShift(array, 5, 1);
    std::cout << "{ ";
    for (const int& i : array) {
        std::cout << i << " ";
    }
    std::cout << "}" << std::endl;

    int array2[] = {1, 2, 3, 4, 5};
    arrayShift(array2, 5, 3);
    arrayShift(array2, 5, 3);
    arrayShift(array2, 5, 3);
    std::cout << "{ ";
    for (const int& i : array2) {
        std::cout << i << " ";
    }
    std::cout << "}" << std::endl;

    int array3[] = {1, 2, 3};
    arrayShift(array3, 3, 3);
    std::cout << "{ ";
    for (const int& i : array3) {
        std::cout << i << " ";
    }
    std::cout << "}" << std::endl;

    int array4[] = {1, 2, 3};
    arrayShift(array4, 3, 4);
    std::cout << "{ ";
    for (const int& i : array4) {
        std::cout << i << " ";
    }
    std::cout << "}";
}
