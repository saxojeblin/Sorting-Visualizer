#include <iostream>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include "sorts.hpp"

//Populates a pointer array with random values
void get_random_numbers(int *numbers) {
    //seed the random number generator
    srand(time(NULL));

    //fill each index of array with a random number from 1-99
    for (int i = 0; i < 50; i++) {
        numbers[i] = rand() % 99 + 1;
    }
}

//Copies the original array's values into the copy array
void copy_array(int* original, int* copy) {
    for (int i = 0; i < 50; i++) {
        copy[i] = original[i];
    }
}

void run_sorts() {
    //Genereate our array of numbers to be sorted
    int *unsorted_numbers = new int[50];
    get_random_numbers(unsorted_numbers);

    //Create a temperary array that will be used in the sorts
    int *temp_numbers = new int[50];
    
    //Perform each sort
    //Before each sort, we make sure we are using the originial, unsorted list, hence the array copy
    copy_array(unsorted_numbers, temp_numbers);
    bubble_sort(temp_numbers);
    
    copy_array(unsorted_numbers, temp_numbers);
    selection_sort(temp_numbers);

    copy_array(unsorted_numbers, temp_numbers);
    insertion_sort(temp_numbers);

    copy_array(unsorted_numbers, temp_numbers);
    quick_sort(temp_numbers);

    copy_array(unsorted_numbers, temp_numbers);
    merge_sort(temp_numbers);

    //Free our allocated arrays of numbers
    delete(unsorted_numbers);
    delete(temp_numbers);
}

int main() {
    run_sorts();
}