//
// Created by 35861 on 24-10-12.
//
#include <stdio.h>
#define max 100001



void printnum(int flag[10][10]);
void printnum2(int flag[10][10]);
int main() {
    int n;
    scanf("%d", &n);
    getchar();

    char a[max];
    for (int i = 0; i < n; i++) {
        scanf("%c", &a[i]);
    }

    int flag[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            flag[i][j] = 0;
        }
    }

    for (int i = 0; i < n / 2; i++) {
        if (a[i] != '?' && a[n - i - 1] != '?') {
            printf("%c", a[i]);
        } else if ((a[i] == '?' || a[n - i - 1] == '?') && a[i] != a[n - i - 1]) {
            if (a[n - i - 1] == '?') {
                printf("%c", a[i]);
            } else {
                printf("%c", a[n - i - 1]);
            }
        } else if (a[i] == '?' && a[n - i - 1] == '?') {
            printnum(flag);
        }
    }


    for (int j = n / 2; j < n; j++) {
        if (a[j] != '?' && a[n - j - 1] != '?') {
            printf("%c", a[j]);
        } else if ((a[j] == '?' || a[n - j - 1] == '?') && a[j] != a[n - j - 1]) {
            if (a[n - j - 1] == '?') {
                printf("%c", a[j]);
            } else {
                printf("%c", a[n - j - 1]);
            }
        } else if (a[j] == '?' && a[n - j - 1] == '?') {
            printnum2(flag);
        }
    }
}


void printnum(int flag[10][10]) {
    int found=0;
    for (int i = 0; i < 10; i++) {
        if(found)break;
        for (int j = 0; j < 10; j++) {
            if (flag[i][j] == 0) {
                flag[i][j] = 1;
                printf("%d%d", i, j);
                found = 1;
                break;
            }
        }
    }
}

void printnum2(int flag[10][10]) {
    int found=0;
    for (int i = 9; i >= 0; i--) {
        if (found)break;
        for (int q = 9; q >= 0; q--) {
            if (flag[i][q] == 1) {
                flag[i][q] = 0;
                printf("%d%d", q, i);
                found = 1;
                break;
            }
        }
    }
}