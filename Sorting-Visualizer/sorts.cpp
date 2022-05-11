#include <iostream>
#include "sorts.hpp"

/* Swaps two numbers in two indices in an array */
void swap_numbers(int *numbers, int index1, int index2) {
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
void insert_number(int* numbers, int position, int high_index, int value) {
    //Push elements after position index down the array
    for (int i = high_index; i > position; i-- ) {
        numbers[i] = numbers[i-1];
    }
    //Insert value into position
    numbers[position] = value;
}

/* Finds a pivot index for quick sort */
int repartition(int* numbers, int low_index, int high_index) {
    int pivot_number = numbers[high_index];
    int pivot_index  = low_index;

    for (int i = low_index; i < high_index; i++) {
        if (numbers[i] < pivot_number) {
            swap_numbers(numbers, pivot_index, i);
            pivot_index++;
        }
    }

    swap_numbers(numbers, pivot_index, high_index);
    return pivot_index;
}

/* -------Bubble Sort------- */
void bubble_sort (int *numbers) {
    //Iterate through the array from the end
    for(int i = 49; i >= 0; i--) {
        //Itereate through the array from the beginning to 'i'
        for (int j = 0; j < i; j++) {
            //If our current number is greater than the number after it,
            //Swap the numbers.
            if (numbers[j] > numbers[j+1]) {
                swap_numbers(numbers, j, j + 1);
            }
        }
    }
}

/* -------Selection Sort------- */
void selection_sort (int *numbers) {
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
        }
    }
}

/* -------Insertion Sort------- */
void insertion_sort (int* numbers) {
    int position, temp_number, i, j;

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
void quick_sort (int *numbers, int low_index, int high_index) {
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

//Test function to print original, unsorted list
void print_unsorted_array(int *numbers) {
    std::cout << "UNSORTED LIST:\n";
    for(int i =0; i < 50; i++) {
        std::cout << "Number "<< i + 1 << ": " << numbers[i] << "\n";
    }
}

//Test function to see if list is sorted
void print_sorted_array(int *numbers) {
    std::cout << "\nSORTED LIST:\n";
    bool sorted_status = true;

    for(int i =0; i < 50; i++) {
        std::cout << "Number "<< i + 1 << ": " << numbers[i] << "\n";
        if (numbers[i] > numbers[i+1] && i != 49) {
            sorted_status = false;
        }
    }

    if (!sorted_status) {
            std::cout <<"\n THE ARRAY IS NOT SORTED";
        }
    else std::cout << "\n THE ARRAY IS SORTED";
}