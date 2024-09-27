//
// Created by 35861 on 24-9-23.
//
#include <stdio.h>
#include <ctype.h> // 包含字符处理函数

int main() {
    char a[100];
    int i = 0;

    // 读取字符串，直到遇到换行或到达最大长度
    while (i < 99 && (a[i] = getchar()) != '\n' && a[i] != EOF) {
        i++;
    }
    a[i] = '\0'; // 结束字符串

    // 将小写字母转换为大写字母
    char b[100];
    for (int j = 0; j <= i; j++) { // 包括字符串结束符
        b[j] = toupper(a[j]); // 使用 toupper 函数
    }

    printf("%s\n", b); // 输出转换后的字符串
    return 0;
}
