//
// Created by 35861 on 24-10-8.
//
#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc((n+1) * sizeof(int));
    for (int i = 0; i < n+1; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    int numbers = 0;
    for (int i = 0; i < n+1; i++) {
        int temp=0;
        if(sum<i) {
            numbers += i-sum;
            temp=i-sum;
        }
        sum += arr[i];
        sum+=temp;
    }
    printf("%d\n", numbers);
    free(arr);
    return 0;
}