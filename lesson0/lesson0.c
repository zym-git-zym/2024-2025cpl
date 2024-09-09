#include <stdio.h>

int main() {
    int n = 1, i = 1;
    float l = 1, x;
    float e = 1.0;
    printf("Please enter a number: ");
    scanf("%d", &n);
    printf("Please enter a number for rounding: ");
    scanf("%f", &x);
    for (; i <= n; i++) {
        l = l * i;
        while (1.0 / l > x) {
            e = e + 1.0f / l;
            break;
        }
    }
    printf("e=%f", e);
    return 0;
}
