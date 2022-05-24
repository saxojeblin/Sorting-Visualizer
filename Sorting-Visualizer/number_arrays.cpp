#include <iostream>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <algorithm> 
#include <array>
#include "sorts.hpp"

/* Random array creation notes: */

/* When creating the random number array, its important to note that we would like
 * the bars in the visualizer, once sorted, to have a smooth slope.
 *
 * Because of this, we can't just throw random numbers into the array, since even though
 * the array will end up sorted, the bars will have very inconsistent height differences.
 *
 * So, our process of making the array is to get our values of heights for the bars and
 * create the array in order (basically create the result we are trying to achieve).
 *
 * Once we have our sorted array, we can then std::shuffle() it so that the values are
 * randomly positioned throughout the array.
 */

//Populates a pointer array with set values and shuffles them
void get_random_numbers(int *numbers) {
    //fill each index of array with the numbers in order
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

/* Finds the y value needed based on the height to offset a bar
 * (since height takes off from the bottom, not the top)
 */
int find_yVal(int height) {
    int yVal;
    yVal = 360 - height;
    return yVal;
}
