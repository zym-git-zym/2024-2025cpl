//
// Created by 35861 on 24-9-11.
//
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 99

// 打印二维数组
void printSquare(int square[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%2d ", square[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    int square[MAX_SIZE][MAX_SIZE] = {0};  // 初始化为 0 的二维数组

    // 输入幻方的大小
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    // 检查输入的大小是否有效
    if (n < 1 || n > 99 || n % 2 == 0) {
        printf("Size must be an odd number between 1 and 99.\n");
        return 1;
    }

    // 初始化起始位置
    int row = 0;
    int col = n / 2;

    // 填充幻方
    for (int num = 1; num <= n * n; num++) {
        square[row][col] = num;

        // 计算下一个位置
        int newRow = (row - 1 + n) % n;
        int newCol = (col + 1) % n;

        // 如果新位置已经被占用，则选择当前行的下一个位置
        if (square[newRow][newCol] != 0) {
            newRow = (row + 1) % n;
            newCol = col;
        }

        // 更新当前的位置
        row = newRow;
        col = newCol;
    }

    // 打印生成的幻方
    printSquare(square, n);

    return 0;
}
