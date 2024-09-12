#include <stdio.h>
//
// Created by 35861 on 24-9-14.
//
double median(double x, double y, double z) {
    double median;
    if (y > z) {
        if (x<z) {
            median = z;
        } else {
            median = x;
        }
    } else {
        if (x<y) {
            median = y;
        } else {
            median = x;
        }
    }
    return median;
}


int main() {
    double x, y, z;
    printf("Enter 3 numbers: ");
    scanf("%lf %lf %lf", &x, &y, &z);
    printf("The median is %lf\n", median(x, y, z));
    return 0;
}