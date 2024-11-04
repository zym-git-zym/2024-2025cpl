//
// Created by 35861 on 24-10-12.
//
#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%dx%d=%d ",j,i,i*j);
            if (j == i) {
                printf("\n");
            }
        }
    }
}