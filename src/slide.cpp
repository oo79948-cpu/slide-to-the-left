
#include "slide.hpp"

void arrayShift(int *arr, int size, int shift) {
    int temp;
    for ( int i = 0; i < shift; i++) {
        for (int i = 0; i < size - 1; i++) {
            temp = arr[(i + 1)];
            arr[(i + 1)] = arr[i];
            arr[i] = temp;
        }
    }
}
