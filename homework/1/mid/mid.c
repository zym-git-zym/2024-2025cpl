//
// Created by 35861 on 24-10-7.
//
#include<stdio.h>
#include<stdlib.h>


void mid(int a[], int n);
int main() {
    int n;
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    mid(arr,n);
    free(arr);
    return 0;
}

void mid(int a[], int n) {
    int m;
    if(n%2==0) {
        m=n/2;
    } else {
        m=n/2+1;
    }


}