#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double x = atof(argv[1]);
    int k = atoi(argv[2]);
    double array[10];

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
    }

    for (int i = 0; i < k; i++) {
        printf("%.1lf ", array[i]);
    }
    printf("%.2lf ", x);

    for (int i = k; i < 9; i++) {
        printf("%.1lf ", array[i]);
    }

    return 0;
}