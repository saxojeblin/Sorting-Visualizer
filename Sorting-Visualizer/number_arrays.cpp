#include <iostream>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <algorithm> 
#include <array>
#include "sorts.hpp"

//Populates a pointer array with random values
void get_random_numbers(int *numbers) {

    //fill each index of array with numbers in order
    for (int i = 0; i < 50; i++) {
        numbers[i] = 30 + 6 * i;
    }
    //randomly shuffle the array
    std::random_shuffle(numbers, numbers + 50);
}

//Copies the original array's values into the copy array
void copy_array(int* original, int* copy) {
    for (int i = 0; i < 50; i++) {
        copy[i] = original[i];
    }
}

int find_yVal(int height) {
    int yVal;
    yVal = 360 - height;
    return yVal;
}
