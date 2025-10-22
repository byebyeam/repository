#include "../extra/Unity/unity.h"
#include "../include/array_function.h"

void setUp(void) {}
void tearDown(void) {}

void test_JoinIntArray1(void) {
    const int size = 11;
    int array1[] = {1,2,3,4,5};
    int array2[] = {1,2,3,4,5,6};
    int actual[size];
    int expected[] = {1,2,3,4,5,1,2,3,4,5,6};
    join_int_arrays(array1, 5, array2, 6, actual);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, size);
}

void test_JoinIntArray2(void) {
    const int size = 11;
    int array1[] = {1,2,3,4,5,6};
    int array2[] = {1,2,3,4,5};
    int actual[size];
    int expected[] = {1,2,3,4,5, 6,1,2,3,4,5,};
    join_int_arrays(array1, 6, array2, 5, actual);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, size);
}

void test_JoinIntArray3(void) {
    const int size = 7;
    int array1[] = {1,2,3,4,5,6};
    int array2[] = {1};
    int actual[size];
    int expected[] = {1,2,3,4,5, 6, 1};
    join_int_arrays(array1, 6, array2, 1, actual);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, size);
}

int main(int argc, char** argv) {
    UNITY_BEGIN();
    RUN_TEST(test_JoinIntArray1);
    RUN_TEST(test_JoinIntArray2);
    RUN_TEST(test_JoinIntArray3);
    return UNITY_END();
}