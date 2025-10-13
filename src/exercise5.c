#include <stdio.h>

int main(int argc, char** argv) {
    const int m = 10;
    const int n = 3;
    const int q = 10;

    int m1[m][n];
    int m2[n][q];
    int m3[m][q];
 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &m2[i][j]);
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
            printf("%d ", m3[i][j]);
        }
    }
    return 0;
}