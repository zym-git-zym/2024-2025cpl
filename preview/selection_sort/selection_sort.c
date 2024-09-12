//
// Created by 35861 on 24-9-14.
//
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selection_sort(int a[], int n) {
    // 基本情况：当数组中只剩下一个元素时，已经排序
    if (n <= 1) {
        return;
    }

    // 找到最大元素的索引
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[max_index]) {
            max_index = i;
        }
    }

    // 将最大元素移到数组的最后
    swap(&a[max_index], &a[n - 1]);
    selection_sort(a, n - 1);

}
int main() {
    int n;

    // 读取用户输入
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // 确保数组大小大于 0
    if (n <= 0) {
        printf("Array size should be greater than 0.\n");
        return 1;
    }

    int array[n];
    printf("Enter %d integers:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // 调用选择排序函数
    selection_sort(array, n);

    // 打印排序后的数组
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
