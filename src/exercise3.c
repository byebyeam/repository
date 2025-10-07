#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int k = atoi(argv[1]);
    double array[10];

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
    }

    if (k >= 0) {
        for (int i = 0; i < k; i++) {
            printf("%.2f ", array[9-i]);
        }
        for (int i = 0; i < 10 - k; i++){
            printf("%.2f ", array[i]);
        }
    } 
    
    else {
        for (int i = abs(k); i < 10; i++) {
            printf("%.2f ", array[i]);
        }
        for (int i = 0; i < abs(k); i++){
            printf("%.2f ", array[i]);
        }
    }
    return 0;
}