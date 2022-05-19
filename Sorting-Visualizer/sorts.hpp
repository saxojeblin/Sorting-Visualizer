//Declarations of all computational sorting functions
void bubble_sort(int *numbers);
void selection_sort(int *numbers);
void insertion_sort(int *numbers);
void quick_sort(int *numbers, int low_index, int high_index);

//Functions for generating and handling random number arrays
void get_random_numbers(int *numbers);
void copy_array(int *original, int *copy);
int find_yVal(int height);

//(Temp functions for testing)
void print_unsorted_array(int *numbers);
void print_sorted_array(int *numbers);
