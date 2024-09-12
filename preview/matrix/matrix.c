//
// Created by 35861 on 24-9-16.
//
#include <stdio.h>

int main() {
    int row, col;
    int n;
    scanf("%d", &n);
    if (n <= 0 || n >= 20) {
        return 1;
    }
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            printf("%4d", row + col * n);
        }
        printf("\n");
    }
}
