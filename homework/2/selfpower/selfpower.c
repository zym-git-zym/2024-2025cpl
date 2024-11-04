//
// Created by 35861 on 24-10-7.
//
#include <stdio.h>
#include <math.h>


int main() {
    int n;
    scanf("%d", &n);
    int i;
    int a[11];
    for (int k=0; k<11; k++) {
        a[k] = 0;
    }
    int temp;
    int n1=n;
    for (i=0; n>0; i++) {
        temp=n%10;
        n=n/10;
        a[i]=temp;
    }
    int m=0;
    for (int j=0; j<11; j++) {
        if(a[j]!=0) {
            m+=pow(a[j],i);
        }
    }
    if(m==n1) {
            printf("%d",i);
    }
    else {
        printf("0");
    }

}