#include "../extra/Unity/unity.h"
#include "../include/array_function.h"

void setUp(void) {}
void tearDown(void) {}


void test_GetMinAndMaxFromIntArray1(void) {
    int array1[] = {1,2,3,4,5,6};
    int expected_min = 1;
    int expected_max = 6;

    int actual_min;
    int actual_max;

    get_min_and_max_from_int_array(array1, 6, &actual_min, &actual_max);

    TEST_ASSERT_EQUAL(expected_min, actual_min);
    TEST_ASSERT_EQUAL(expected_max, actual_max);
}

void test_GetMinAndMaxFromIntArray2(void) {
    int array1[] = {1};
    int expected_min = 1;
    int expected_max = 1;

    int actual_min;
    int actual_max;

    get_min_and_max_from_int_array(array1, 1, &actual_min, &actual_max);

    TEST_ASSERT_EQUAL(expected_min, actual_min);
    TEST_ASSERT_EQUAL(expected_max, actual_max);
}



int main(int argc, char** argv) {
    UNITY_BEGIN();
    RUN_TEST(test_GetMinAndMaxFromIntArray1);
    RUN_TEST(test_GetMinAndMaxFromIntArray2);

    return UNITY_END();
}