//
// Created by 35861 on 24-9-21.
//
#include <stdio.h>


int cross(int b1, int b2, int c1, int c2);

int overlap(int row, int col, int c1, int c2);

int main() {
    int b1, b2, c1, c2;
    scanf("%d %d %d %d", &b1, &b2, &c1, &c2);

    printf("%d", cross(b1, b2, c1, c2));
    return 0;
}


int cross(int b1, int b2, int c1, int c2) {
    int methods[100][100] = {0};
    methods[0][0] = 1;
    for (int i = 0; i <= b1; i++) {
        for (int j = 0; j <= b2; j++) {
            if (i > 0 && overlap(i, j, c1, c2) == 1) {
                methods[i][j] += methods[i - 1][j];
            }
            if (j > 0 && overlap(i, j, c1, c2) == 1) {
                methods[i][j] += methods[i][j - 1];
            }
        }
    }
    return methods[b1][b2];
}


int overlap(int row, int col, int c1, int c2) {
    int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2, 0};
    int dy[] = {1, 2, 2, 1, -1, -2, -2, -1, 0};
    for (int i = 0; i < 9; i++) {
        if (row == c1 + dx[i] && col == c2 + dy[i])
            return 0;
    }
    return 1;
}
