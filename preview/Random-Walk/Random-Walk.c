#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// 定义方向
typedef enum {UP, DOWN, LEFT, RIGHT} Direction;

// 打印棋盘
void printBoard(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// 生成随机方向
Direction getRandomDirection() {
    return rand() % 4;
}

// 检查当前位置是否有效
int isValid(int x, int y, char board[SIZE][SIZE]) {
    return x >= 0 && x < SIZE && y >= 0 && y < SIZE && board[x][y] == '.';
}

// 执行随机步法
void randomWalk(char board[SIZE][SIZE]) {
    int x = 0, y = 0;
    char nextMark = 'A';

    // 初始化棋盘
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = '.';
        }
    }

    board[x][y] = nextMark++;

    while (1) {
        int moved = 0;
        for (int i = 0; i < 4; i++) {
            Direction dir = getRandomDirection();
            int newX = x, newY = y;

            // 根据方向计算新位置
            switch (dir) {
                case UP:    newX--; break;
                case DOWN:  newX++; break;
                case LEFT:  newY--; break;
                case RIGHT: newY++; break;
            }

            if (isValid(newX, newY, board)) {
                board[newX][newY] = nextMark++;
                x = newX;
                y = newY;
                moved = 1;
                break;
            }
        }

        if (!moved) {
            break;
        }
    }
}

int main() {
    char board[SIZE][SIZE];
    srand(time(NULL)); // 设置随机种子

    randomWalk(board);
    printBoard(board);

    return 0;
}
