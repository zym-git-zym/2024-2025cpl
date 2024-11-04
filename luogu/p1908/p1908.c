//
// Created by 35861 on 24-10-11.
//
#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) {
        scanf("%d",a[i]);
    }

}
