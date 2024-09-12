//
// Created by 35861 on 24-9-17.
//
#include <stdio.h>

int findMax(int a[], int n) {
    if (a[0] > a[1]) {
        printf("%d", a[0]);
    }
    for (int i = 1; i < n-1; i++) {
        if (a[i] > a[i + 1] && a[i] > a[i - 1]) {
            printf(" %d", a[i]);
        }
    }if(a[n-1] > a[n-2]) {
        printf(" %d", a[n-1]);
    }

}

int main() {
    int n;
    int a[10001] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    findMax(a, n);
    return 0;
}
