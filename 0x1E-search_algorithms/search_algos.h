#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_
#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);
void print_f(int *array, size_t l, size_t r);

#endif
