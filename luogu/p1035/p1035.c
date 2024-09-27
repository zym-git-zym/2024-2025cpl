//
// Created by 35861 on 24-9-22.
//
#include<stdio.h>

int main() {
    double sum=0;
    int n;
    int *p;
    p=&n;
    int k;
    scanf("%d",&k);
    for(double i=1;sum<=k;i++) {
        sum=sum+1/i;
        *p=i;
    }
    printf("%d",n);
    return 0;
}