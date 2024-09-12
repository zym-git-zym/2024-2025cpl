//
// Created by 35861 on 24-9-16.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0 || n >= 20) {
        return 1;
    }
    int i=0;
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < row+1; col++) {
            printf("%4d",i++);
        }
        printf("\n");
    }

}