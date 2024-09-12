//
// Created by 35861 on 24-9-15.
//
#include <stdio.h>

double power(double x, int n) {
    if (n == 0) return 1;
    if (n == 1) return x;
    return x * power(x, n - 1);
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