#include <iostream>
#include "sorts.hpp"
#include "mainwindow.h"

/* Swaps two numbers in two indices in an array */
void MainWindow::swap_numbers(int *numbers, int index1, int index2) {
    edit_bar_length(index1, numbers[index2]);
    edit_bar_length(index2, numbers[index1]);
    int temp = numbers[index2];
    numbers[index2] = numbers[index1];
    numbers[index1] = temp;
}

/* Finds the position current_number should be in an array */
int find_position (int *numbers, int low_index, int high_index, int current_number) {
    //Assign our position at the high index of the array
    int position = high_index - 1;
    //If the number before our current number is larger than it, decrement the position
    while (position >= low_index && numbers[position] > current_number) {
        position--;
    }

    //Lastly, increase position by 1
    position++;

    return position;
}

/* Inserts a value into an array and pushes other elements over */
void MainWindow::insert_number(int* numbers, int position, int high_index, int value) {
    //Push elements after position index down the array
    for (int i = high_index; i > position; i-- ) {
        edit_bar_length(i, numbers[i-1]);
        numbers[i] = numbers[i-1];
        delay(15);
    }
    //Insert value into position
    edit_bar_length(position, value);
    numbers[position] = value;

}

/* Finds a pivot index for quick sort */
int MainWindow::repartition(int* numbers, int low_index, int high_index) {
    int pivot_number = numbers[high_index];
    int pivot_index  = low_index;

    for (int i = low_index; i < high_index; i++) {
        delay(20);
        if (numbers[i] < pivot_number) {
            swap_numbers(numbers, pivot_index, i);
            pivot_index++;
        }
    }
    delay(10);
    swap_numbers(numbers, pivot_index, high_index);
    return pivot_index;
}

/* -------Bubble Sort------- */
void MainWindow::bubble_sort (int *numbers) {
    //Iterate through the array from the end
    for(int i = 49; i >= 0; i--) {
        //Itereate through the array from the beginning to 'i'
        for (int j = 0; j < i; j++) {
            //If our current number is greater than the number after it,
            //Swap the numbers.
            if (numbers[j] > numbers[j+1]) {
                swap_numbers(numbers, j, j + 1);
            }
            delay(10);
        }
    }
}

/* -------Selection Sort------- */
void MainWindow::selection_sort (int *numbers) {
    int current_minimum, i, j;
    //Iterate through the array
    for (i = 0; i < 50; i++) {
        current_minimum = i;
        //Find the smallest value in the array
        for (j = i; j < 50; j++) {
            if (numbers[j] < numbers[current_minimum]) {
                current_minimum = j;
            }
        }
        //Place the smallest value in the front
        if (current_minimum != i) {
            swap_numbers(numbers, i, current_minimum);
            delay(150);
        }
    }
}

/* -------Insertion Sort------- */
void MainWindow::insertion_sort (int* numbers) {
    int position, temp_number, i;

    //Iterate through the array
    for (i = 1; i < 50; i++) {
        //Grab the value for the current number
        temp_number = numbers[i];

        //Find the index where the value needs to be inserted
        position = find_position(numbers, 0, i, temp_number);

        //Insert the value into its appropiate position (index)
        if (position != i) {
            insert_number(numbers, position, i, temp_number);
        }
    }
}

/* -------Quick Sort------- */
void MainWindow::quick_sort (int *numbers, int low_index, int high_index) {
    //Find pivot index
    int pivot_index = repartition(numbers, low_index, high_index);

    //If our pivot isn't on bottom end of the array
    if (pivot_index - 1 > low_index) {
        //Recursive call quick sort, passing the numbers to the LEFT of the pivot
        quick_sort(numbers, low_index, pivot_index - 1);
    }
    //If our pivot isn't on the top end of the array
    if (high_index > pivot_index + 1) {
        //Recursive call quick sort, passing the numbers to the RIGHT of the pivot
        quick_sort(numbers, pivot_index + 1, high_index);
    }
}
