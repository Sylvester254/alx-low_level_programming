#ifndef SEARCH
#define SEARCH
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t l, size_t r);
int binary_search_index(int *array, size_t l, size_t r, int value);
int jump_search(int *array, size_t size, int value);
size_t min(size_t a, size_t b);
#endif
