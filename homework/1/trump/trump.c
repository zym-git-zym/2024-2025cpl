#include <math.h>
#include <stdio.h>

int main() {
    double a1, a2, b1, b2;
    scanf("%lf %lf %lf %lf", &a1, &a2, &b1, &b2);
    double d = sqrt(((b1 - a1) * (b1 - a1) + (b2 - a2) * (b2 - a2)));
    const double radians = 54.0 * (M_PI / 180.0);
    double h = d / 2.0 * tan(radians);
    double mid1 = (a1 + b1) / 2.0;
    double mid2 = (a2 + b2) / 2.0;
    double radians1 = atan2(a2 - b2, b1 - a1);
    double cent1, cent2;
    cent1 = mid1 - h * sin(radians1);
    cent2 = mid2 - h * cos(radians1);
    double radians2;
    radians2 = -M_PI / 2 + 2 * radians - radians1;
    double mid3, mid4;
    mid3 = cent1 - h * cos(radians2);
    mid4 = cent2 + h * sin(radians2);
    printf("%.3lf %.3lf", a1 + 2 * (mid3 - a1), a2 + 2 * (mid4 - a2));
    return 0;
}

