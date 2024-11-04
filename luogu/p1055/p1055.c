//
// Created by 35861 on 24-10-1.
//
#include <stdio.h>

int main() {
    char a, b, c, d, e, f, g, h, i, j;

    // 输入格式修改：最后一个识别码 'j' 改为字符
    scanf("%c-%c%c%c-%c%c%c%c%c-%c", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

    // 计算加权和时，将字符 '0'-'9' 转换为对应的整数
    int temp = ((a - '0') * 1 + (b - '0') * 2 + (c - '0') * 3 + (d - '0') * 4 +
                (e - '0') * 5 + (f - '0') * 6 + (g - '0') * 7 + (h - '0') * 8 +
                (i - '0') * 9) % 11;

    // 将 temp 转换为字符表示
    char check_digit = (temp == 10) ? 'X' : (temp + '0');

    // 比较计算出的识别码与输入的识别码
    if (check_digit == j) {
        printf("Right\n");
    } else {
        // 如果识别码不正确，输出修正后的ISBN
        printf("%c-%c%c%c-%c%c%c%c%c-%c\n", a, b, c, d, e, f, g, h, i, check_digit);
    }

    return 0;
}
