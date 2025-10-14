#include "../include/array_function.h"
#include <stdlib.h>

void join_int_arrays(int *src1, size_t size_src1, int *src2, size_t size_src2, int *dest) {
    for (int i = 0; i < size_src1; i++) {
        dest[i] = src1[i];
    }
    for (int i = size_src1; i < size_src1 + size_src2; i++) {
        dest[i] = src2[i - size_src1];
    }
}

void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {}

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
    if (size == 0) {
        *min = 0;
        *max = 0;
    }
    *min = src[0];
    *max = src[0];
    for (int i = 1; i < size; i++) {
        //min
        if (src[i] < *min) {
            *min = src[i];
        }
        //max
        if (src[i] > *max) {
            *max = src[i];
        }
    }
}
