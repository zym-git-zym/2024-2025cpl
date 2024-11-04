//
// Created by 35861 on 24-10-18.
//
#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int temp =i;
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[temp]) {
                temp = j;
            }
        }
        int t=arr[i];
        arr[i] = arr[temp];
        arr[temp] = t;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}