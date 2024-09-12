//
// Created by 35861 on 24-9-15.
//
#include <stdio.h>

double power(double x, int n) {
    if (n == 0) return 1;
    if (n == 1) return x;
    if (n % 2 == 0) {
        return power(x, n / 2) * power(x, n / 2);
    }
    else {
        return x * power(x, n - 1);
    }

}
int main() {
    printf("enter the number\n ");
    double x;
    int n;
    scanf("%lf", &x);
    printf("the power is");
    scanf("%d",&n);
    printf("the result is %lf",power(x,n));
    return 0;
}