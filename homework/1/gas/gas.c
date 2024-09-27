//
// Created by 35861 on 24-9-27.
//
#include <stdio.h>
#define R 8.314

int main() {
    double P,L,T,n;
    scanf("%lf %lf %lf",&P,&L,&T);
    n=P*L*L*L/R/T;
    printf("%.4e",n);
    return 0;
}
