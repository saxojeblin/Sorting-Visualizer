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
    
}

void insertion_sort (int *numbers) {
    
}

void quick_sort (int *numbers) {
    
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