//
// Created by 35861 on 24-10-8.
//
#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    int t=0;
    scanf("%d", &n);
    int *arr = (int *)malloc((2*n-1) * sizeof(int));
    for (int i = 0; i < 2*n-1; i++) {
        scanf("%d", &arr[i]);
        t=t^arr[i];
    }
    printf("%d\n", t);
    free(arr);
    return 0;
}
