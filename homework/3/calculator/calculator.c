//
// Created by 35861 on 24-10-12.
//
#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
    int a;
    int b;
    char op[3];

    while (scanf("%d %s %d", &a, &op, &b) != EOF) {
        if(strcmp(op, "+") == 0) {
            printf("%d\n", a + b);
        }

        else if(strcmp(op, "-") == 0) {
            printf("%d\n", a - b);
        }

        else if(strcmp(op, "*") == 0) {
            printf("%d\n", a * b);
        }

        else if(strcmp(op, "/") == 0) {
            printf("%d\n", a / b);
        }

        else if(strcmp(op, "/*") == 0) {
            printf("%.3f\n", (float)a / b);
        }

        else if(strcmp(op, "**") == 0) {
            printf("%.0f\n", pow(a, b));
        }

        else if(strcmp(op, "%") == 0) {
            printf("%d\n", a % b);
        }
    }
}