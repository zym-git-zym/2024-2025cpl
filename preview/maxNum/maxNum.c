//
// Created by 35861 on 24-9-17.
//
#include <stdio.h>


int findMax(int a[], int n) {
    if (n <= 0) {
        printf("Array length must be greater than 0.\n");
        return -1;
    }

    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int main() {
    int n, maxNum = 0;
    int arr[n];
    scanf("%d", &n);
    if (0 < n && n < 10000) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    } else {
        return 1;
    }
    findMax(arr, n);
    for (int i = 0; i < n; i++) {
        if (arr[i] == findMax(arr, n)) {
            maxNum++;
        } else {
        }
    }
    printf("%d", maxNum);
    return 0;
}
