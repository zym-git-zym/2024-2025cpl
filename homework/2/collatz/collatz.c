//
// Created by 35861 on 24-10-7.
//
#include <stdio.h>


int main() {
    int n;
    int max;
    int times=0;
    scanf("%d", &n);
    max = n;
    for(;n!=1;times++) {
        if(n%2==0) {
            n=n/2;
        }else {
            n=3*n+1;
        }
        if(n>max) {
            max=n;
        }
    }
    printf("%d %d",times,max);
    return 0;
}