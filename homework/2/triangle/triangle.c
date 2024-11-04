//
// Created by 35861 on 24-10-8.
//
    #include <stdio.h>


    int main() {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b <= c) {
            printf("not triangle");
            return 0;
        } else if (a == b && b == c) {
            printf("equilateral triangle");
            return 0;
        } else if (a * a + b * b == c * c) {
            printf("right triangle");
            return 0;
        } else {
            if (a*a + b*b < c*c) {
                printf("obtuse ");
            } else {
                printf("acute ");
            }
            if (a == b || b == c || c == a) {
                printf("isosceles ");
            }
            printf("triangle");
            return 0;
        }
    }