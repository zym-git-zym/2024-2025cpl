//
// Created by 35861 on 24-9-12.
//
#include <stdio.h>


 int findMax(int a[], int n) {
    if (n <= 0) {
        printf("Array length must be greater than 0.\n");
        return -1; // 错误标志，假设数组中所有元素均非负
    }

    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

 int mean(int a[], int n) {
    if (n <= 0) {
        printf("Array length must be greater than 0.\n");
        return -1; // 错误标志，假设数组中所有元素均非负
    }

    int mean,sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    mean = sum / n;
     return mean;

}

int countpositive(int a[],int n) {
     if (n <= 0) {
         printf("Array length must be greater than 0.\n");
         return -1; // 错误标志，假设数组中所有元素均非负
     }
     int i=0,j=0;
     for(i=0;i<n;i++) {
         if (a[i] > 0) {
             j++;
         }
     }
     return j;
 }
int main() {
     int n,a[n];
     printf("enter the num of the array\n");
     scanf("%d",&n);
     printf("enter the elements of the array\n");
     for(int i=0;i<n;i++) {
         scanf("%d",&a[i]);
     }
     printf("the sum of the elements of the array is %d\n",findMax(a,n));
     printf("the mean of the array is %d\n",mean(a,n));
     printf("the count of the array is %d\n",countpositive(a,n));
     return 0;



 }



