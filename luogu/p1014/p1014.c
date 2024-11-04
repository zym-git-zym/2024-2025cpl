//
// Created by 35861 on 24-9-29.
//
#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n==1) {
        printf("1/1");
        return 0;
    }
    int i=1;
    for(;i*(i+1)/2<n;i++) {
    }
    i=i-1;
    int min=i*(i+1)/2;
    if(i%2==1) {
        printf("%d/%d",n-min,i+2-(n-min));
        return 0;
    } else {
        printf("%d/%d",i+2-(n-min),n-min);
        return 0;
    }
}