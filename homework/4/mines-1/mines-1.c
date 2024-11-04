//
// Created by 35861 on 24-10-18.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int n;
    scanf("%d", &n);
    char **p = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        p[i] = (char *)malloc(n * sizeof(char));
    }
    for (int i = 0; i < n; i++) {
        memset(p[i], 'o', n * sizeof(char));
    }
    for (int i = 0; i < n; i++) {
        scanf("%s", p[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (p[i][j] == 'o') {
                int vectors[8][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {-1, -1},\
                {-1, 1}, {1, -1}, {1, 1}};

                int count = 0;
                for (int k = 0; k < 8; ++k) {

                    int newI = i + vectors[k][0];
                    int newJ = j + vectors[k][1];
                    if (newI >= 0 && newI < n && newJ >= 0 && newJ < n) {
                        if (p[newI][newJ] == '*') {
                            count++;
                        }
                    }
                }
                char str[5];
                sprintf(str, "%d", count);
                p[i][j]=str[0];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", p[i][j]);
        }
        printf("\n");
    }
    free(p);
    return 0;
}
