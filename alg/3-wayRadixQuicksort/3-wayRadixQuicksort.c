//
// Created by 35861 on 24-10-21.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quick_sort(int arr[], const int len) {
    if (len <= 1) return;

    const int pivot = arr[rand() % len];
    int i = 0, j = 0, k = len;

    while (i < k) {
        if (arr[i] < pivot)
            swap(&arr[i++], &arr[j++]);
        else if (pivot < arr[i])
            swap(&arr[i], &arr[--k]);
        else
            i++;
    }

    quick_sort(arr, j);
    quick_sort(arr + k, len - k);
}

int main() {
    srand(time(NULL));
    int n;
    scanf("%d", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    quick_sort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}