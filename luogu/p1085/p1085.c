//
// Created by 35861 on 24-9-22.
//


#include <stdio.h>

int main() {
    int a[7] = {0};
    int x, y;
    int most_unhappy_day = 0;
    int max_unhappiness = 0;

    for (int i = 0; i < 7; i++) {
        scanf("%d %d", &x, &y);
        a[i] = x + y;
    }

    for (int i = 0; i < 7; i++) {
        if (a[i] > 8) {
            int unhappiness = a[i] - 8;
            if (unhappiness > max_unhappiness) {
                max_unhappiness = unhappiness;
                most_unhappy_day = i + 1; // 记录1-based索引
            }
        }
    }

    printf("%d\n", most_unhappy_day);
    return 0;
}
