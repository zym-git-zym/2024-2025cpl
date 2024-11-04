//
// Created by 35861 on 24-9-30.
//
#include <stdio.h>

#define MAX_N 1000
#define MAX_M 1000
#define MAX_K 1000

int simulations[MAX_K];      // 记录每一天需要准备的模拟赛场数
bool day_prepared[MAX_K][MAX_M]; // 记录某一天某套模拟赛题是否已准备

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    // 初始化模拟赛场数为0
    for (int i = 0; i < k; i++) {
        simulations[i] = 0;
        for (int j = 0; j < m; j++) {
            day_prepared[i][j] = false;
        }
    }

    // 读取每个人的时间安排
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int day;
            scanf("%d", &day);  // 第i个人在第j天打模拟赛题的时间
            day--;  // 将输入的天数转化为从0开始的索引

            // 如果这天还没有安排第j套模拟赛题，增加模拟赛场数
            if (!day_prepared[day][j]) {
                simulations[day]++;
                day_prepared[day][j] = true;
            }
        }
    }

    // 输出每一天需要准备的模拟赛场数
    for (int i = 0; i < k; i++) {
        printf("%d ", simulations[i]);
    }
    printf("\n");

    return 0;
}
