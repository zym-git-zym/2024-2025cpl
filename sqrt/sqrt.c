//
// Created by 35861 on 24-9-9.
//
#include <stdio.h>
#include <math.h>

int main() {
    double x, y = 1, py;
    printf("Enter a positive number:");
    scanf("%lf", &x);
    double z = x / y, m = (y + z) / 2;
    py = y;
    y = m;
    while (fabs(py - y) >= 0.00001f * y) {
        z = x / y;
        m = (y + z) / 2;
        py = y;
        y = m;
    }
    printf("The square root of %lf is %lf\n", x, y);
    return 0;
}
