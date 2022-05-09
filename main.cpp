#include <iostream>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include "sorts.hpp"

void get_random_numbers(int *numbers) {
    //seed the random number generator
    srand(time(NULL));

    //fill each index of array with a random number from 1-99
    for (int i = 0; i < 50; i++) {
        numbers[i] = rand() % 99 + 1;
    }
}

void run_sorts() {
    //Genereate our array of numbers to be sorted
    int *unsorted_numbers = (int*) malloc(sizeof(int) * 50);
    get_random_numbers(unsorted_numbers);

    //Create a temperary array that will be used in the sorts
    int *temp_numbers = (int*) malloc(sizeof(int) * 50);

    //Sorts go here    

    //Free our allocated arrays of numbers
    free(unsorted_numbers);
    free(temp_numbers);
}

int main() {
    run_sorts();
}