#include <stdio.h>

int main(int argc, char** argv) {
    const int m = 10;
    const int n = 3;
    const int q = 10;

    double m1[m][n];
    double m2[n][q];
    double m3[m][q];
 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &m1[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%lf", &m2[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            m3[i][j] = 0;
            for (int k = 0; k < n; k++) {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%.2lf ", m3[i][j]);
        }
    }
    return 0;
}