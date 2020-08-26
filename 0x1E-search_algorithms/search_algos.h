#ifndef SEARCH_ALGORITHMS_H
#define SEARCH_ALGORITHMS_H
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int left, int right, int *array);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
#endif
