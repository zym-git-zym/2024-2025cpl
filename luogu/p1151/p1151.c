//
// Created by 35861 on 24-9-24.
//
#include<stdio.h>

int main() {
    int K;
    int found=0;
    scanf("%d", &K);
    for (int a5 = 1; a5 <=2; a5++) {
        for (int a4 = 0; a4 <= 9; a4++) {
            for (int a3 = 0; a3 <= 9; a3++) {
                for (int a2 = 0; a2 <=9; a2++) {
                    for (int a1 = 0; a1 <=9; a1++) {
                        if (((a5 * 100 + a4 * 10 + a3) % K == 0) && ((a4 * 100 + a3 * 10 + a2) % K == 0) && (
                                (a3 * 100 + a2 * 10 + a1) % K == 0)) {
                            printf("%d\n", a5 * 10000 + a4 * 1000 + a3 * 100 + a2 * 10 + a1);
                            found=1;

                        }
                    }
                }
            }
        }
    }
    if (300 % K == 0) {
        printf("%d\n", 30000);
        found=1;
    }
    if(found==0) {
        printf("No\n");
    }
    return 0;
}
