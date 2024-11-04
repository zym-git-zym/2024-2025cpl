//
// Created by 35861 on 24-10-6.
//
#include <stdio.h>

typedef struct {
    int direction; // 玩具小人的朝向: 0为朝内, 1为朝外
    char profession[11]; // 玩具小人的职业，最大长度为10加1的终止符
} Toy;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    Toy toys[n]; // 用数组来储存玩具小人的信息

    // 输入玩具小人信息
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &toys[i].direction, toys[i].profession);
    }

    int current_index = 0; // 从第一个玩具小人开始

    // 输入指令并执行
    for (int i = 0; i < m; i++) {
        int a, s;
        scanf("%d %d", &a, &s); // a 代表方向, s 是数量

        if (toys[current_index].direction == 0) {
            // 朝内
            if (a == 0) { // 向左数
                current_index = (current_index - s +n) % n; // 顺时针
            } else { // 向右数
                current_index = (current_index + s) % n; // 逆时针
            }
        } else {
            // 朝外
            if (a == 0) { // 向左数
                current_index = (current_index + s) % n; // 逆时针
            } else { // 向右数
                current_index = (current_index -s +n) % n; // 顺时针
            }
        }
    }

    // 输出结果
    printf("%s\n", toys[current_index].profession);

    return 0;
}