#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double x = atoi(argv[2]);
    int k = atoi(argv[1]);
    double array[10];

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
    }

    for (int i = 0; i < k; i++) {
        printf("%.0f ", array[i]);
    }
    printf("%.0f ", x);

    for (int i = k; i < 9; i++) {
        printf("%.0f ", array[i]);
    }

    return 0;
}