#include <iostream>
#include "sorts.hpp"

void swap_numbers(int *numbers, int index1, int index2) {
    int temp = numbers[index2];
    numbers[index2] = numbers[index1];
    numbers[index1] = temp;
}

void bubble_sort (int *numbers) {
    for(int i = 49; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (numbers[j] > numbers[j+1]) {
                swap_numbers(numbers, j, j + 1);
            }
        }
    }
}

void selection_sort (int *numbers) {
    int current_minimum, i, j;
    for (i = 0; i < 50; i++) {
        current_minimum = i;
        for (j = i; j < 50; j++) {
            if (numbers[j] < numbers[current_minimum]) {
                current_minimum = j;
            }
        }
        if (current_minimum != i) {
            swap_numbers(numbers, i, current_minimum);
        }
    }
}

int find_position (int *numbers, int low_index, int high_index, int current_number) {
    int position = high_index - 1;

    while (position >= low_index && numbers[position] > current_number) {
        position--;
    }

    position++;

    return position;
}

void insert_number(int* numbers, int position, int high_index, int value) {
    //Push elements after position index down the array
    for (int i = high_index; i > position; i-- ) {
        numbers[i] = numbers[i-1];
    }
    //Insert value into position
    numbers[position] = value;
}

void insertion_sort (int* numbers) {
    int position, temp_number, i, j;

    for (i = 1; i < 50; i++) {
        //Grab the value for the current number
        temp_number = numbers[i];

        //Find the index where the value needs to be inserted
        position = find_position(numbers, 0, i, temp_number);

        if (position != i) {
            insert_number(numbers, position, i, temp_number);
        }
    }
}

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

void quick_sort (int *numbers, int low_index, int high_index) {
    int pivot_index = repartition(numbers, low_index, high_index);

    if (pivot_index - 1 > low_index) {
        quick_sort(numbers, low_index, pivot_index - 1);
    }

    if (high_index > pivot_index + 1) {
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