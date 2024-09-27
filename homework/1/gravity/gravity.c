//
// Created by 35861 on 24-9-27.
//
#include <stdio.h>
#define G 6.674e-11
#define M 77.15

int main() {
    double m,R;
    scanf("%lf %lf",&m,&R);
    printf("%.3e",G*m*M/R/R);
    return 0;
}