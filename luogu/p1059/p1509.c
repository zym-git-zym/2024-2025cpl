//
// Created by 35861 on 24-10-23.
//
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int a[101];
int b[101];
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
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int sum=0;
    int flag=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<sum;j++) {
            if(a[i]==b[j]) {
                flag=1;
                break;
            }
        }
        if(flag==0) {
            b[sum++]=a[i];
        }
        else flag=0;
    }
    srand(time(NULL));
    quick_sort(b, sum);
    printf("%d\n",sum);
    for(int i=0;i<sum;i++) {
        printf("%d ",b[i]);
    }

}