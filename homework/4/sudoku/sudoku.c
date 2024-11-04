//
// Created by 35861 on 24-10-18.
//
#include <stdio.h>


int main() {
    int sudoku[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &sudoku[i][j]);
        }
    }
    for (int i = 0; i < 9; i++) {
        int a[10]={0};
        for (int j = 0; j < 9; j++) {
            if (a[sudoku[i][j]] == 0) {
                a[sudoku[i][j]] = 1;
            }else if (a[sudoku[i][j]] == 1) {
                printf("NO\n");
                return 0;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        int b[10]={0};
        for (int j = 0; j < 9; j++) {
            if (b[sudoku[j][i]] == 0) {
                b[sudoku[j][i]] = 1;
            }else if (b[sudoku[j][i]] == 1) {
                printf("NO\n");
                return 0;
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        int sum=0;
        for (int j = 0; j < 9; j++) {
            sum += sudoku[i][j];
        }
        if (sum!=45) {
            printf("NO\n");
            return 0;
        }
    }
    for (int i = 0; i < 9; i++) {
        int sum=0;
        for (int j = 0; j < 9; j++) {
            sum += sudoku[j][i];
        }
        if (sum!=45) {
            printf("NO\n");
            return 0;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int a[10]={0};
            for (int k = i*3; k < i*3+3; k++) {
                for (int l = j*3; l < j*3+3; l++) {
                    if(a[sudoku[k][l]] == 0) {
                        a[sudoku[k][l]] = 1;
                    }else if (a[sudoku[k][l]] == 1) {
                        printf("NO\n");
                        return 0;
                    }
                }
            }
        }
    }
    printf("YES\n");
    return 0;
}