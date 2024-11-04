//
// Created by 35861 on 24-10-6.
//
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = 0;
        }
    }
    a[0][n / 2] = 1;
    for (int k = 2; k <= n * n; k++) {
        int row = 0, col = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == k - 1) {
                    row = i;
                    col = j;
                }
            }
        }
        if (row == 0 && col != n - 1) {
            a[n - 1][col + 1] = k;
        } else if (col == n - 1 && row != 0) {
            a[row - 1][0] = k;
        } else if (row == 0 && col == n - 1) {
            a[1][n - 1] = k;
        } else if (row != 0 && col != n - 1) {
            if (a[row - 1][col + 1] == 0) {
                a[row - 1][col + 1] = k;
            } else {
                a[row + 1][col] = k;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
            if (j == n - 1) {
                printf("\n");
            }
        }
    }
    return 0;
}
