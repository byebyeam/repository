#include <stdio.h>

int main(int argc, char** argv) {
    double array[10];

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
    }

    for (int i = 9; i >= 0; i--) {
        printf("%.2f ", array[i]);
    }
    return 0;
}