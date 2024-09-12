//
// Created by 35861 on 24-9-17.
//
#include <stdio.h>

int maxDistance(int n, int arr[]) {
    int distance[n][n];
    int max = distance[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            int temp = arr[i] - arr[j];
            distance[i][j] = temp;
            if(distance[i][j] > max) {
                max = distance[i][j];

            }
        }
    }
}
int main() {
    int n;int arr[];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", maxDistance(arr, n));
}