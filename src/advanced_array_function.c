#include "../include/advanced_array_function.h"

int max_subarray_sum(int* nums, int size) {
    int max_sum = -99999999;
    int cur_sum;

    if (size == 0) {
        return 0;
    }

    if (size == 1) {
        max_sum = nums[0];
    }

    if (size > 1) {
        for (int i = 0; i < size; i++) {
            cur_sum = nums[i];

            for (int j = i; j < size; j++) {
                if (nums[i] != nums[j]) {
                    cur_sum += nums[j];
                }
                if (cur_sum > max_sum) {
                  max_sum = cur_sum;
                }
            }

            if (cur_sum > max_sum) {
                max_sum = cur_sum;
            }
            
            cur_sum = 0;
        }
    }

    return max_sum;
}

int length_of_lis(int* nums, int numsSize) {
    int lis = 1;
    int cur_lis = 1;

    if (numsSize == 0) {
        return 0;
    }

    else if (numsSize == 1) {
        return 1;
    }

    if (numsSize > 1) {
        for (int i = 0; i < numsSize - 1; i++) {
            for (int j = i + 1; j < numsSize; j++) {
                if (nums[j] > nums[j-1]) {
                    cur_lis += 1;
                    if (cur_lis > lis) {
                        lis = cur_lis;
                    }
                }
                else { break; }
            }
            cur_lis = 1;
        }
    }

    return lis;
}

int* merge(int* intervals, int intervalsSize, int* returnSize) {
    return NULL;
}

