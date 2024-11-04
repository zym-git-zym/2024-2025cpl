//
// Created by 35861 on 24-10-18.
//
#include <stdio.h>

#define RULE110(l, mid, r) \
((l == 1 && mid == 1 && r == 0) || \
(l == 1 && mid == 0 && r == 1) || \
(l == 0 && mid == 1 && r == 1) || \
(l == 0 && mid == 1 && r == 0) || \
(l == 0 && mid == 0 && r == 1))

int b[2001][2001];

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    char a[2001];
    scanf("%s", a);

    for (int i = 0; i < n; i++) {
        b[0][i] = a[i]-'0';
    }
    for (int i = 1; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int l, mid, r;
            l=(j>0)?b[i-1][j-1]:0;
            mid=b[i-1][j];
            r=(j<n-1)?b[i-1][j+1]:0;

            b[i][j]=RULE110(l, mid, r)?1:0;
        }
    }
    for (int i = 1; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

